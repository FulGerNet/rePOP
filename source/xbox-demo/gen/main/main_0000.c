/**
 * PoP SoT xbox-demo - main, chunk 0
 * Start-up, main loop and full-screen videos (Jade MainXbox)
 * Functions: 89 (0x000110B0 - 0x0017E910)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_000110B0
 * Original: 0x000110B0 - 0x00011353 (675 bytes, 172 insns)
 * Folder: main (string: Invalid szLaunchedXBE path.  Return to demo launcher.)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000110B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000110B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC24) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x20) = LO8(ebx);
    ecx = 0x2FF;
    edi = esp + 0x21;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64CFA8);
    MEM8(0x64CFB9) = LO8(ebx);
    MEM32(0x64D33C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011100u); RECOMP_ABI_CALL(0x0027F6DAu, sub_0027F6DA); /* call 0x0027F6DA */

loc_00011100: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011163; /* jne: not equal / not zero */

loc_00011104: ;
    _fa = (uint32_t)(MEM32(0x64CFA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64CFA8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011163; /* jne: not equal / not zero */

loc_0001110C: ;
    ecx = esp + 0x20;
    MEM32(0x34A220) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00011120;

    /* nop */

loc_00011120: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x6C));
    MEM8(eax + 0x33A0B0) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011120; /* jne: not equal / not zero */

loc_0001112F: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x33A0B0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001113Bu); RECOMP_ABI_CALL(0x0028A4D0u, sub_0028A4D0); /* call 0x0028A4D0 */

loc_0001113B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011145; /* je: equal / zero */

loc_00011142: ;
    MEM8(eax + 1) = LO8(ebx);

loc_00011145: ;
    PUSH32(esp, 0x33A0B0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001114Fu); RECOMP_ABI_CALL(0x0027F85Du, sub_0027F85D); /* call 0x0027F85D */

loc_0001114F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011163; /* jne: not equal / not zero */

loc_00011154: ;
    PUSH32(esp, 0x322CA8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001115Eu); RECOMP_ABI_CALL(0x0027F785u, sub_0027F785); /* call 0x0027F785 */

loc_0001115E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011163u); RECOMP_ABI_CALL(0x00011090u, sub_00011090); /* call 0x00011090 */

loc_00011163: ;
    PUSH32(esp, 0x322C9C);
    PUSH32(esp, 0x33A0B0);
    PUSH32(esp, 0x322C94);
    PUSH32(esp, 0x34A540);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001117Cu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0001117C: ;
    PUSH32(esp, 0x322C8C);
    PUSH32(esp, 0x33A0B0);
    PUSH32(esp, 0x322C94);
    PUSH32(esp, 0x34A438);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011195u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_00011195: ;
    PUSH32(esp, 0x322C7C);
    PUSH32(esp, 0x33A0B0);
    PUSH32(esp, 0x322C94);
    PUSH32(esp, 0x34A330);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000111AEu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000111AE: ;
    PUSH32(esp, 0x322C74);
    PUSH32(esp, 0x33A0B0);
    PUSH32(esp, 0x322C94);
    PUSH32(esp, 0x34A228);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000111C7u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000111C7: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edi = 2;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 0x314DF0;
    MEM32(esp + 0x1C) = 4;
    MEM32(esp + 0x20) = 0x314EA0;
    MEM32(esp + 0x24) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000111FAu); RECOMP_ABI_CALL(0x00315FD1u, sub_00315FD1); /* call 0x00315FD1 */

loc_000111FA: ;
    esi = 0xFFFF;
    goto loc_00011206;

loc_00011201: ;
    edi = 2;

loc_00011206: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001120Bu); RECOMP_ABI_CALL(0x00011880u, sub_00011880); /* call 0x00011880 */

loc_0001120B: ;
    ebx = 0x34A540;
    MEM32(0x33B488) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001121Fu); RECOMP_ABI_CALL(0x000BE090u, sub_000BE090); /* call 0x000BE090 */

loc_0001121F: ;
    eax = 0x34A754;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011229u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_00011229: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001122Eu); RECOMP_ABI_CALL(0x00011B30u, sub_00011B30); /* call 0x00011B30 */

loc_0001122E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x322C64);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001123Cu); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_0001123C: ;
    eax = MEM32(0x64CFA8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM16(0x33A1FC) = LO16(esi);
    if (CMP_NE(_fa, _fb)) goto loc_00011290; /* jne: not equal / not zero */

loc_0001124F: ;
    ecx = MEM32(0x34A220);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011290; /* je: equal / zero */

loc_00011259: ;
    SET_LO16(eax, MEM16(ecx + 4));
    MEM16(0x34A770) = LO16(eax);
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(ecx + 8);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(ecx + 4);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM16(0x33A1F8) = LO16(edx);
    if (CMP_NE(_fa, _fb)) goto loc_000112A0; /* jne: not equal / not zero */

loc_0001127D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x322C54);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001128Bu); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_0001128B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000112A0;

loc_00011290: ;
    MEM16(0x34A770) = LO16(edi);
    MEM16(0x33A1F8) = 0x5A;

loc_000112A0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000112A5u); RECOMP_ABI_CALL(0x00012D00u, sub_00012D00); /* call 0x00012D00 */

loc_000112A5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000112AAu); RECOMP_ABI_CALL(0x0002A5A0u, sub_0002A5A0); /* call 0x0002A5A0 */

loc_000112AA: ;
    ebx = MEM32(0x34AC3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000112C3; /* je: equal / zero */

loc_000112B4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000112B9u); RECOMP_ABI_CALL(0x000F8350u, sub_000F8350); /* call 0x000F8350 */

loc_000112B9: ;
    MEM32(0x34AC3C) = 0;

loc_000112C3: ;
    edi = MEM32(0x64D868);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000112E8; /* je: equal / zero */

loc_000112CF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000112D4u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000112D4: ;
    ecx = MEM32(0x64D868);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000112E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000112DFu); } /* indirect call */
    }

loc_000112E2: ;
    MEM32(0x64D868) = ebx;

loc_000112E8: ;
    MEM32(0x34A75C) = ebx;
    MEM8(0x34AC5C) = 0xFE;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000112FAu); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_000112FA: ;
    _fa = (uint32_t)(MEM32(0x64CFD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64CFD0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011201; /* jne: not equal / not zero */

loc_00011306: ;
    eax = MEM32(0x64CFCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001133E; /* je: equal / zero */

loc_0001130F: ;
    eax = MEM32(0x64CFA8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00011339; /* je: equal / zero */

loc_00011319: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001131F; /* je: equal / zero */

loc_0001131E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0001131F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011324u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_00011324: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0xC24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011332u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_00011332: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00011339: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001133Eu); RECOMP_ABI_CALL(0x00011090u, sub_00011090); /* call 0x00011090 */

loc_0001133E: ;
    ecx = MEM32(esp + 0xC24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001134Cu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0001134C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00011159
 * Original: 0x00011159 - 0x00011353 (506 bytes, 123 insns)
 * Folder: main (string: e3_trail.int)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011159(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011159: ;
    PUSH32(esp, 0x0001115Eu); RECOMP_ABI_CALL(0x0027F785u, sub_0027F785); /* call 0x0027F785 */

loc_0001115E: ;
    PUSH32(esp, 0x00011163u); RECOMP_ABI_CALL(0x00011090u, sub_00011090); /* call 0x00011090 */

loc_00011163: ;
    PUSH32(esp, 0x322C9C);
    PUSH32(esp, 0x33A0B0);
    PUSH32(esp, 0x322C94);
    PUSH32(esp, 0x34A540);
    PUSH32(esp, 0x0001117Cu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0001117C: ;
    PUSH32(esp, 0x322C8C);
    PUSH32(esp, 0x33A0B0);
    PUSH32(esp, 0x322C94);
    PUSH32(esp, 0x34A438);
    PUSH32(esp, 0x00011195u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_00011195: ;
    PUSH32(esp, 0x322C7C);
    PUSH32(esp, 0x33A0B0);
    PUSH32(esp, 0x322C94);
    PUSH32(esp, 0x34A330);
    PUSH32(esp, 0x000111AEu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000111AE: ;
    PUSH32(esp, 0x322C74);
    PUSH32(esp, 0x33A0B0);
    PUSH32(esp, 0x322C94);
    PUSH32(esp, 0x34A228);
    PUSH32(esp, 0x000111C7u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000111C7: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edi = 2;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 0x314DF0;
    MEM32(esp + 0x1C) = 4;
    MEM32(esp + 0x20) = 0x314EA0;
    MEM32(esp + 0x24) = 8;
    PUSH32(esp, 0x000111FAu); RECOMP_ABI_CALL(0x00315FD1u, sub_00315FD1); /* call 0x00315FD1 */

loc_000111FA: ;
    esi = 0xFFFF;
    goto loc_00011206;

loc_00011201: ;
    edi = 2;

loc_00011206: ;
    PUSH32(esp, 0x0001120Bu); RECOMP_ABI_CALL(0x00011880u, sub_00011880); /* call 0x00011880 */

loc_0001120B: ;
    ebx = 0x34A540;
    MEM32(0x33B488) = 3;
    PUSH32(esp, 0x0001121Fu); RECOMP_ABI_CALL(0x000BE090u, sub_000BE090); /* call 0x000BE090 */

loc_0001121F: ;
    eax = 0x34A754;
    PUSH32(esp, 0x00011229u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_00011229: ;
    PUSH32(esp, 0x0001122Eu); RECOMP_ABI_CALL(0x00011B30u, sub_00011B30); /* call 0x00011B30 */

loc_0001122E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x322C64);
    PUSH32(esp, 0x0001123Cu); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_0001123C: ;
    eax = MEM32(0x64CFA8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM16(0x33A1FC) = LO16(esi);
    if (CMP_NE(_fa, _fb)) goto loc_00011290; /* jne: not equal / not zero */

loc_0001124F: ;
    ecx = MEM32(0x34A220);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011290; /* je: equal / zero */

loc_00011259: ;
    SET_LO16(eax, MEM16(ecx + 4));
    MEM16(0x34A770) = LO16(eax);
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(ecx + 8);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(ecx + 4);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM16(0x33A1F8) = LO16(edx);
    if (CMP_NE(_fa, _fb)) goto loc_000112A0; /* jne: not equal / not zero */

loc_0001127D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x322C54);
    PUSH32(esp, 0x0001128Bu); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_0001128B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000112A0;

loc_00011290: ;
    MEM16(0x34A770) = LO16(edi);
    MEM16(0x33A1F8) = 0x5A;

loc_000112A0: ;
    PUSH32(esp, 0x000112A5u); RECOMP_ABI_CALL(0x00012D00u, sub_00012D00); /* call 0x00012D00 */

loc_000112A5: ;
    PUSH32(esp, 0x000112AAu); RECOMP_ABI_CALL(0x0002A5A0u, sub_0002A5A0); /* call 0x0002A5A0 */

loc_000112AA: ;
    ebx = MEM32(0x34AC3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000112C3; /* je: equal / zero */

loc_000112B4: ;
    PUSH32(esp, 0x000112B9u); RECOMP_ABI_CALL(0x000F8350u, sub_000F8350); /* call 0x000F8350 */

loc_000112B9: ;
    MEM32(0x34AC3C) = 0;

loc_000112C3: ;
    edi = MEM32(0x64D868);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000112E8; /* je: equal / zero */

loc_000112CF: ;
    PUSH32(esp, 0x000112D4u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000112D4: ;
    ecx = MEM32(0x64D868);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000112E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000112DFu); } /* indirect call */
    }

loc_000112E2: ;
    MEM32(0x64D868) = ebx;

loc_000112E8: ;
    MEM32(0x34A75C) = ebx;
    MEM8(0x34AC5C) = 0xFE;
    PUSH32(esp, 0x000112FAu); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_000112FA: ;
    _fa = (uint32_t)(MEM32(0x64CFD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64CFD0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011201; /* jne: not equal / not zero */

loc_00011306: ;
    eax = MEM32(0x64CFCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001133E; /* je: equal / zero */

loc_0001130F: ;
    eax = MEM32(0x64CFA8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00011339; /* je: equal / zero */

loc_00011319: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001131F; /* je: equal / zero */

loc_0001131E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0001131F: ;
    PUSH32(esp, 0x00011324u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_00011324: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0xC24);
    PUSH32(esp, 0x00011332u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_00011332: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00011339: ;
    PUSH32(esp, 0x0001133Eu); RECOMP_ABI_CALL(0x00011090u, sub_00011090); /* call 0x00011090 */

loc_0001133E: ;
    ecx = MEM32(esp + 0xC24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0001134Cu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0001134C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0001132D
 * Original: 0x0001132D - 0x00011353 (38 bytes, 17 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001132D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001132D: ;
    PUSH32(esp, 0x00011332u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_00011332: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    ecx = MEM32(esp + 0xC24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0001134Cu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0001134C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00011339
 * Original: 0x00011339 - 0x00011353 (26 bytes, 10 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011339(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011339: ;
    PUSH32(esp, 0x0001133Eu); RECOMP_ABI_CALL(0x00011090u, sub_00011090); /* call 0x00011090 */

loc_0001133E: ;
    ecx = MEM32(esp + 0xC24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0001134Cu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0001134C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00011360
 * Original: 0x00011360 - 0x000113C4 (100 bytes, 45 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00011360: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000113B8; /* je: equal / zero */

loc_0001136E: ;
    eax = MEM32(0x34A648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001137C; /* jne: not equal / not zero */

loc_00011377: ;
    PUSH32(esp, 0x0001137Cu); RECOMP_ABI_CALL(0x00011440u, sub_00011440); /* call 0x00011440 */

loc_0001137C: ;
    eax = esp + 0xC;
    MEM32(esp + 8) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    ebx = MEM32(esp + 0x18);
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = edx;
    POP32(esp, edx);
    POP32(esp, ecx);
    POP32(esp, ebx);
    POP32(esp, eax);
    ecx = MEM32(esi);
    eax = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    ebx = MEM32(esi + 4);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000113B8: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00011388
 * Original: 0x00011388 - 0x000113C4 (60 bytes, 28 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011388(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00011388: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    ebx = MEM32(esp + 0x18);
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = edx;
    POP32(esp, edx);
    POP32(esp, ecx);
    POP32(esp, ebx);
    POP32(esp, eax);
    ecx = MEM32(esi);
    eax = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    ebx = MEM32(esi + 4);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00011399
 * Original: 0x00011399 - 0x000113C4 (43 bytes, 19 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011399(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00011399: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    ebx = MEM32(esi + 4);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000113D0
 * Original: 0x000113D0 - 0x00011435 (101 bytes, 32 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000113D0(void)
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

loc_000113D0: ;
    eax = MEM32(0x34A648);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000113E1; /* jne: not equal / not zero */

loc_000113DC: ;
    PUSH32(esp, 0x000113E1u); RECOMP_ABI_CALL(0x00011440u, sub_00011440); /* call 0x00011440 */

loc_000113E1: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    eax = 0x64DA00;
    PUSH32(esp, 0x000113F3u); RECOMP_ABI_CALL(0x00011360u, sub_00011360); /* call 0x00011360 */

loc_000113F3: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000113FCu); RECOMP_ABI_CALL(0x0028A900u, sub_0028A900); /* call 0x0028A900 */

loc_000113FC: ;
    MEM32(esp + 8) = eax;
    eax = edx;
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM64(esp + 8)); /* fild */
    eax = eax & 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = 0;
    fp_push((double)SMEM64(esp + 8)); /* fild */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = -fp_top(); /* fchs */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3339C4)); /* fmul dword ptr [0x3339c4] */
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
 * sub_00011440
 * Original: 0x00011440 - 0x00011511 (209 bytes, 57 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011440: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x34A64C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00011453; /* jne: not equal / not zero */

loc_0001144C: ;
    PUSH32(esp, 0x00011451u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00011451: ;
    ebx = eax;

loc_00011453: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0001145Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011454u); } /* indirect call */
    }

loc_0001145A: ;
    SET_LO8(ecx, MEM8(0x653B18));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000114E3; /* jne: not equal / not zero */

loc_00011469: ;
    PUSH32(esp, edi);
    edi = MEM32(0x653B18);
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0x653B00;
    MEM32(0x653B18) = edi;
    MEM32(0x653AF8) = 0x34A648;
    PUSH32(esp, 0x0001148Cu); RECOMP_ABI_CALL(0x00011570u, sub_00011570); /* call 0x00011570 */

loc_0001148C: ;
    esi = MEM32(0x653B04);
    edi = MEM32(0x653B00);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000114A6u); RECOMP_ABI_CALL(0x0028A900u, sub_0028A900); /* call 0x0028A900 */

loc_000114A6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF4240);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x653B08) = eax;
    MEM32(0x653B0C) = edx;
    PUSH32(esp, 0x000114BFu); RECOMP_ABI_CALL(0x0028A900u, sub_0028A900); /* call 0x0028A900 */

loc_000114BF: ;
    MEM32(0x653B10) = eax;
    eax = MEM32(0x653AF8);
    MEM32(0x653B14) = edx;
    PUSH32(esp, 0x297740);
    MEM32(eax) = 0x653B00;
    PUSH32(esp, 0x000114DFu); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_000114DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_000114E3: ;
    eax = MEM32(0x34A648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000114FF; /* jne: not equal / not zero */

loc_000114EC: ;
    SET_LO8(eax, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000114FF; /* je: equal / zero */

loc_000114F5: ;
    ecx = 0x10;
    PUSH32(esp, 0x000114FFu); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_000114FF: ;
    esi = MEM32(0x34A648);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0001150Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011506u); } /* indirect call */
    }

loc_0001150C: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000114DA
 * Original: 0x000114DA - 0x00011511 (55 bytes, 18 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000114DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000114DA: ;
    PUSH32(esp, 0x000114DFu); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_000114DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = MEM32(0x34A648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000114FF; /* jne: not equal / not zero */

loc_000114EC: ;
    SET_LO8(eax, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000114FF; /* je: equal / zero */

loc_000114F5: ;
    ecx = 0x10;
    PUSH32(esp, 0x000114FFu); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_000114FF: ;
    esi = MEM32(0x34A648);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0001150Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011506u); } /* indirect call */
    }

loc_0001150C: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00011518
 * Original: 0x00011518 - 0x00011520 (8 bytes, 8 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011518(void)
{

loc_00011518: ;
    (void)0;
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
 * sub_00011520
 * Original: 0x00011520 - 0x0001152A (10 bytes, 4 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011520(void)
{

loc_00011520: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00011529u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011523u); } /* indirect call */
    }

loc_00011529: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011530
 * Original: 0x00011530 - 0x00011565 (53 bytes, 17 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011530: ;
    PUSH32(esp, esi);
    esi = MEM32(0x34A64C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011542; /* jne: not equal / not zero */

loc_0001153B: ;
    PUSH32(esp, 0x00011540u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00011540: ;
    esi = eax;

loc_00011542: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00011549u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011543u); } /* indirect call */
    }

loc_00011549: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001155A; /* je: equal / zero */

loc_00011554: ;
    MEM32(eax) = 0;

loc_0001155A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00011561u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001155Bu); } /* indirect call */
    }

loc_00011561: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011570
 * Original: 0x00011570 - 0x00011690 (288 bytes, 110 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00011570: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001157Eu); RECOMP_ABI_CALL(0x00293043u, sub_00293043); /* call 0x00293043 */

loc_0001157E: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00011591u); RECOMP_ABI_CALL(0x0028AE80u, sub_0028AE80); /* call 0x0028AE80 */

loc_00011591: ;
    MEM32(esp + 8) = eax;
    eax = esp + 0x28;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 4) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    ebx = MEM32(esp + 0x14);
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = edx;
    POP32(esp, edx);
    POP32(esp, ecx);
    POP32(esp, ebx);
    POP32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000115BEu); RECOMP_ABI_CALL(0x00293032u, sub_00293032); /* call 0x00293032 */

loc_000115BE: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0001160E; /* jl: less (signed <) */

loc_000115D6: ;
    if (CMP_G(_fas, _fbs)) goto loc_000115E0; /* jg: greater (signed >) */

loc_000115D8: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0001160E; /* jbe: below or equal (unsigned <=) */

loc_000115E0: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000115EAu); RECOMP_ABI_CALL(0x00293032u, sub_00293032); /* call 0x00293032 */

loc_000115EA: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000115E0; /* jl: less (signed <) */

loc_00011606: ;
    if (CMP_G(_fas, _fbs)) goto loc_0001160E; /* jg: greater (signed >) */

loc_00011608: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000115E0; /* jb: below (unsigned <) */

loc_0001160E: ;
    edx = esp + 0x20;
    MEM32(esp + 4) = edx;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    ebx = MEM32(esp + 0x14);
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = edx;
    POP32(esp, edx);
    POP32(esp, ecx);
    POP32(esp, ebx);
    POP32(esp, eax);
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011648u); RECOMP_ABI_CALL(0x0028A9A0u, sub_0028A9A0); /* call 0x0028A9A0 */

loc_00011648: ;
    ebx = eax;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC350) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC350)) >> 32) & 1);
    ebx = ebx + 0xC350;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edx;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, 0x186A0);
    MEM32(esi) = eax;
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, eax);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x0001166Du); RECOMP_ABI_CALL(0x0028A900u, sub_0028A900); /* call 0x0028A900 */

loc_0001166D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x186A0);
    ecx = edx;
    MEM32(esi + 4) = edx;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    MEM32(esi) = eax;
    PUSH32(esp, 0x00011684u); RECOMP_ABI_CALL(0x0028A9A0u, sub_0028A9A0); /* call 0x0028A9A0 */

loc_00011684: ;
    MEM32(esi) = eax;
    MEM32(esi + 4) = edx;
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00011690
 * Original: 0x00011690 - 0x000116FD (109 bytes, 25 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011690: ;
    SET_LO8(ecx, MEM8(0x650C90));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000116DA; /* jne: not equal / not zero */

loc_0001169F: ;
    ecx = MEM32(0x650C90);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x650C74);
    MEM32(0x650C90) = ecx;
    MEM32(0x650C70) = 0x34A64C;
    { uint32_t _icall_target = MEM32(0x31C8C8); PUSH32(esp, 0x000116C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000116BCu); } /* indirect call */
    }

loc_000116C2: ;
    eax = MEM32(0x650C70);
    PUSH32(esp, 0x297750);
    MEM32(eax) = 0x650C74;
    PUSH32(esp, 0x000116D7u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_000116D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000116DA: ;
    eax = MEM32(0x34A64C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000116FC; /* jne: not equal / not zero */

loc_000116E3: ;
    SET_LO8(ecx, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000116FC; /* je: equal / zero */

loc_000116ED: ;
    ecx = 0x10;
    PUSH32(esp, 0x000116F7u); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_000116F7: ;
    eax = MEM32(0x34A64C);

loc_000116FC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011700
 * Original: 0x00011700 - 0x000117C0 (192 bytes, 40 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011700: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    edx = ecx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 8) = eax;
    PUSH32(esp, esi);
    eax = edx + -10;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000117BF; /* ja: above (unsigned >) */

loc_00011727: ;
    eax = ZX8(MEM8(eax + 0x11800));
    { uint32_t _jt = MEM32(eax * 4 + 0x117E4); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00011735u) goto loc_00011735;
    if (_jt == 0x00011754u) goto loc_00011754;
    if (_jt == 0x00011763u) goto loc_00011763;
    if (_jt == 0x00011776u) goto loc_00011776;
    if (_jt == 0x00011789u) goto loc_00011789;
    if (_jt == 0x000117A0u) goto loc_000117A0;
    if (_jt == 0x000117BFu) goto loc_000117BF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00011735: ;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 8;
    MEM32(esp + 0xC) = 4;
    esi = 3;
    g_seh_ebp = ebp; sub_000117C0(); return; /* tail jmp 0x000117C0 */

loc_00011754: ;
    MEM32(esp + 4) = 0x10;
    esi = 1;
    g_seh_ebp = ebp; sub_000117C0(); return; /* tail jmp 0x000117C0 */

loc_00011763: ;
    esi = 2;
    MEM32(esp + 4) = 0x10;
    MEM32(esp + 8) = esi;
    g_seh_ebp = ebp; sub_000117C0(); return; /* tail jmp 0x000117C0 */

loc_00011776: ;
    esi = 2;
    MEM32(esp + 4) = 8;
    MEM32(esp + 8) = esi;
    g_seh_ebp = ebp; sub_000117C0(); return; /* tail jmp 0x000117C0 */

loc_00011789: ;
    MEM32(esp + 4) = 0x20;
    MEM32(esp + 8) = 0x40;
    esi = 2;
    g_seh_ebp = ebp; sub_000117C0(); return; /* tail jmp 0x000117C0 */

loc_000117A0: ;
    MEM32(esp + 4) = 0x20;
    MEM32(esp + 8) = 0x40;
    MEM32(esp + 0xC) = 2;
    esi = 3;
    g_seh_ebp = ebp; sub_000117C0(); return; /* tail jmp 0x000117C0 */

loc_000117BF: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00011774
 * Original: 0x00011774 - 0x000117C0 (76 bytes, 15 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011774(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011774: ;
    g_seh_ebp = ebp; sub_000117C0(); return; /* tail jmp 0x000117C0 */

    esi = 2;
    MEM32(esp + 4) = 8;
    MEM32(esp + 8) = esi;
    g_seh_ebp = ebp; sub_000117C0(); return; /* tail jmp 0x000117C0 */

    MEM32(esp + 4) = 0x20;
    MEM32(esp + 8) = 0x40;
    esi = 2;
    g_seh_ebp = ebp; sub_000117C0(); return; /* tail jmp 0x000117C0 */

    MEM32(esp + 4) = 0x20;
    MEM32(esp + 8) = 0x40;
    MEM32(esp + 0xC) = 2;
    esi = 3;
    g_seh_ebp = ebp; sub_000117C0(); return; /* tail jmp 0x000117C0 */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000117C0
 * Original: 0x000117C0 - 0x000117E4 (36 bytes, 17 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000117C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000117C0: ;
    ecx = ecx >> 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000117D7; /* jbe: below or equal (unsigned <=) */

loc_000117CE: ;
    edi = edi;

loc_000117D0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000117D0; /* jb: below (unsigned <) */

loc_000117D7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_B(_fa, _fb)) goto loc_000117DD; /* jb: below (unsigned <) */

loc_000117DC: ;
    /* int3: debug-trap slide byte, stepped over */

loc_000117DD: ;
    eax = MEM32(esp + edx * 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00011850
 * Original: 0x00011850 - 0x00011860 (16 bytes, 11 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011850: ;
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(6) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 6);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xCCCCCCCCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xCCCCCCCCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00011860
 * Original: 0x00011860 - 0x00011870 (16 bytes, 6 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011860: ;
    PUSH32(esp, ebx);
    ebx = eax;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001186Eu); RECOMP_ABI_CALL(0x00012620u, sub_00012620); /* call 0x00012620 */

loc_0001186E: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00011870
 * Original: 0x00011870 - 0x00011875 (5 bytes, 1 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011870: ;
    g_seh_ebp = ebp; sub_00012620(); return; /* tail jmp 0x00012620 */

}

/**
 * sub_00011880
 * Original: 0x00011880 - 0x00011A36 (438 bytes, 94 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011880: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = 0x41;
    edi = 0x34A650;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x34A754) = eax;
    MEM32(0x34A758) = eax;
    MEM32(0x34A75C) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3242AC);
    MEM32(0x493608) = esi;
    MEM32(0x34A760) = eax;
    PUSH32(esp, 0x000118B6u); RECOMP_ABI_CALL(0x0028C0BEu, sub_0028C0BE); /* call 0x0028C0BE */

loc_000118B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000118BEu); RECOMP_ABI_CALL(0x000BDBB0u, sub_000BDBB0); /* call 0x000BDBB0 */

loc_000118BE: ;
    PUSH32(esp, 0x000118C3u); RECOMP_ABI_CALL(0x000F80B0u, sub_000F80B0); /* call 0x000F80B0 */

loc_000118C3: ;
    eax = 0x3E8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x34A788) = eax;
    MEM32(0x34A78C) = eax;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x614FCC) = ecx;
    MEM32(0x614FD0) = ecx;
    MEM32(0x34A780) = esi;
    MEM32(0x34A784) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000118FA; /* jne: not equal / not zero */

loc_000118F5: ;
    PUSH32(esp, 0x000118FAu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000118FA: ;
    edx = 0x1F40;
    ecx = eax;
    PUSH32(esp, 0x00011906u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00011906: ;
    MEM32(0x34A780) = eax;
    PUSH32(esp, 0x00011910u); RECOMP_ABI_CALL(0x000BE6C0u, sub_000BE6C0); /* call 0x000BE6C0 */

loc_00011910: ;
    MEM32(0x5E59D4) = esi;
    MEM32(0x5E59D0) = esi;
    MEM32(0x5E59CC) = esi;
    MEM8(0x5E59C8) = 1;
    PUSH32(esp, 0x0001192Eu); RECOMP_ABI_CALL(0x000879F0u, sub_000879F0); /* call 0x000879F0 */

loc_0001192E: ;
    PUSH32(esp, 0x00011933u); RECOMP_ABI_CALL(0x00014080u, sub_00014080); /* call 0x00014080 */

loc_00011933: ;
    xmm0 = XMM_SCALAR(MEMF(0x3338C8)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x34AC3C) = eax;
    MEM32(0x34AC40) = eax;
    MEM32(0x34AC44) = eax;
    MEM32(0x34AC48) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x34AC4C) = eax;
    MEM32(0x34AC10) = edx;
    MEM32(0x34AC50) = eax;
    MEMF(0x3660E8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3338C4)); /* movss */
    MEM32(0x34AC14) = edx;
    MEM32(0x34AC54) = eax;
    MEMF(0x3660E4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEM32(0x34AC58) = eax;
    MEM32(0x34AC18) = edx;
    MEMF(0x3660E0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    MEM32(0x34AC1C) = edx;
    MEM32(0x34AC5C) = eax;
    PUSH32(esp, 0x3DCCCCCD);
    eax = 4;
    ecx = 0x34AC40;
    MEM32(0x34AC20) = edx;
    MEM32(0x34AC10) = esi;
    MEMF(0x3661E8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000119DCu); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_000119DC: ;
    eax = MEM32(0x64CF80);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000119ED; /* jne: not equal / not zero */

loc_000119E8: ;
    PUSH32(esp, 0x000119EDu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000119ED: ;
    edx = 0x50;
    ecx = eax;
    PUSH32(esp, 0x000119F9u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000119F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A05; /* je: equal / zero */

loc_000119FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011A03u); RECOMP_ABI_CALL(0x00016970u, sub_00016970); /* call 0x00016970 */

loc_00011A03: ;
    goto loc_00011A07;

loc_00011A05: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011A07: ;
    MEM32(0x64D1DC) = eax;
    PUSH32(esp, 0x00011A11u); RECOMP_ABI_CALL(0x00017490u, sub_00017490); /* call 0x00017490 */

loc_00011A11: ;
    PUSH32(esp, 0x00011A16u); RECOMP_ABI_CALL(0x00017780u, sub_00017780); /* call 0x00017780 */

loc_00011A16: ;
    PUSH32(esp, 0x00011A1Bu); RECOMP_ABI_CALL(0x000BE1C0u, sub_000BE1C0); /* call 0x000BE1C0 */

loc_00011A1B: ;
    POP32(esp, edi);
    MEM32(0x4934C0) = esi;
    MEM32(0x4934C4) = esi;
    MEM32(0x4934C8) = esi;
    MEM32(0x4934CC) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011A40
 * Original: 0x00011A40 - 0x00011B23 (227 bytes, 70 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011A40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00011A48u); RECOMP_ABI_CALL(0x00012E00u, sub_00012E00); /* call 0x00012E00 */

loc_00011A48: ;
    PUSH32(esp, 0x00011A4Du); RECOMP_ABI_CALL(0x00056380u, sub_00056380); /* call 0x00056380 */

loc_00011A4D: ;
    PUSH32(esp, 0x00011A52u); RECOMP_ABI_CALL(0x000174E0u, sub_000174E0); /* call 0x000174E0 */

loc_00011A52: ;
    esi = MEM32(0x64D1E4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00011A60u); RECOMP_ABI_CALL(0x00017950u, sub_00017950); /* call 0x00017950 */

loc_00011A60: ;
    eax = MEM32(0x64D1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00011A7E; /* je: equal / zero */

loc_00011A6B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011A71u); RECOMP_ABI_CALL(0x000177F0u, sub_000177F0); /* call 0x000177F0 */

loc_00011A71: ;
    PUSH32(esp, 0x00011A76u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00011A76: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00011A7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011A7Bu); } /* indirect call */
    }

loc_00011A7E: ;
    MEM32(0x64D1E4) = ebx;
    PUSH32(esp, 0x00011A89u); RECOMP_ABI_CALL(0x000BDCE0u, sub_000BDCE0); /* call 0x000BDCE0 */

loc_00011A89: ;
    PUSH32(esp, 0x00011A8Eu); RECOMP_ABI_CALL(0x000C0190u, sub_000C0190); /* call 0x000C0190 */

loc_00011A8E: ;
    PUSH32(esp, 0x00011A93u); RECOMP_ABI_CALL(0x000F8450u, sub_000F8450); /* call 0x000F8450 */

loc_00011A93: ;
    PUSH32(esp, 0x00011A98u); RECOMP_ABI_CALL(0x00108160u, sub_00108160); /* call 0x00108160 */

loc_00011A98: ;
    PUSH32(esp, 0x00011A9Du); RECOMP_ABI_CALL(0x000BF5A0u, sub_000BF5A0); /* call 0x000BF5A0 */

loc_00011A9D: ;
    PUSH32(esp, 0x00011AA2u); RECOMP_ABI_CALL(0x00087B50u, sub_00087B50); /* call 0x00087B50 */

loc_00011AA2: ;
    edi = MEM32(0x34A780);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011ABF; /* je: equal / zero */

loc_00011AAC: ;
    PUSH32(esp, 0x00011AB1u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00011AB1: ;
    ecx = MEM32(0x34A780);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00011ABFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011ABCu); } /* indirect call */
    }

loc_00011ABF: ;
    eax = MEM32(0x64CF8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x34A780) = ebx;
    MEM32(0x34A788) = ebx;
    MEM32(0x34A784) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00011AE4; /* jne: not equal / not zero */

loc_00011ADA: ;
    PUSH32(esp, 0x00011ADFu); RECOMP_ABI_CALL(0x00273A50u, sub_00273A50); /* call 0x00273A50 */

loc_00011ADF: ;
    eax = MEM32(0x64CF8C);

loc_00011AE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00011AFC; /* je: equal / zero */

loc_00011AEA: ;
    PUSH32(esp, 0x00011AEFu); RECOMP_ABI_CALL(0x00011860u, sub_00011860); /* call 0x00011860 */

loc_00011AEF: ;
    PUSH32(esp, 0x00011AF4u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00011AF4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00011AFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011AF9u); } /* indirect call */
    }

loc_00011AFC: ;
    PUSH32(esp, 0x00011B01u); RECOMP_ABI_CALL(0x00019100u, sub_00019100); /* call 0x00019100 */

loc_00011B01: ;
    eax = MEM32(0x64D1DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00011B1F; /* je: equal / zero */

loc_00011B0C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011B12u); RECOMP_ABI_CALL(0x00016A50u, sub_00016A50); /* call 0x00016A50 */

loc_00011B12: ;
    PUSH32(esp, 0x00011B17u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00011B17: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00011B1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011B1Cu); } /* indirect call */
    }

loc_00011B1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00011B30
 * Original: 0x00011B30 - 0x00011BCB (155 bytes, 30 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011B30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x64DA00;
    MEM32(0x64CFC4) = 0x19A40;
    MEM32(0x64CFF0) = 1;
    PUSH32(esp, 0x00011B50u); RECOMP_ABI_CALL(0x00060EE0u, sub_00060EE0); /* call 0x00060EE0 */

loc_00011B50: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64D9E0) = edi;
    MEM32(0x64D9E4) = edi;
    MEM32(0x64D9F8) = edi;
    MEM32(0x64D9FC) = edi;
    MEM32(0x64D9F0) = edi;
    MEM32(0x64D9F4) = edi;
    MEM32(0x64D9E8) = edi;
    MEM32(0x64D9EC) = edi;
    PUSH32(esp, 0x00011B87u); RECOMP_ABI_CALL(0x00019090u, sub_00019090); /* call 0x00019090 */

loc_00011B87: ;
    PUSH32(esp, 0x00011B8Cu); RECOMP_ABI_CALL(0x00060EE0u, sub_00060EE0); /* call 0x00060EE0 */

loc_00011B8C: ;
    MEM32(0x64D9F8) = edi;
    MEM32(0x64D9FC) = edi;
    MEM32(0x64D9E0) = edi;
    MEM32(0x64D9E4) = edi;
    MEM32(0x64D9E8) = edi;
    MEM32(0x64D9EC) = edi;
    MEM32(0x64D9F0) = edi;
    MEM32(0x64D9F4) = edi;
    PUSH32(esp, 0x00011BC1u); RECOMP_ABI_CALL(0x000C0280u, sub_000C0280); /* call 0x000C0280 */

loc_00011BC1: ;
    POP32(esp, edi);
    MEM8(0x34AC5C) = 0xFE;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011BD0
 * Original: 0x00011BD0 - 0x00011D5E (398 bytes, 140 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011BD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D1F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x64CFE0);
    MEM32(esp + 8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00011BF4; /* jne: not equal / not zero */

loc_00011BE7: ;
    eax = MEM32(0x64D008);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011D53; /* je: equal / zero */

loc_00011BF4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00011BFCu); RECOMP_ABI_CALL(0x000F84E0u, sub_000F84E0); /* call 0x000F84E0 */

loc_00011BFC: ;
    ebx = MEM32(0x34AC44);
    edx = MEM32(0x34AC50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5F95A8) = eax;
    ecx = 0x2EE0;
    edi = 0x5F95B0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(0x5F95AC) = eax;
    MEM32(0x64CFE0) = 1;
    MEM32(esp + 0x10) = edx;
    if (CMP_A(_fa, _fb)) goto loc_00011CA9; /* ja: above (unsigned >) */

loc_00011C35: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011C97; /* je: equal / zero */

loc_00011C3B: ;
    eax = edi;
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011C97; /* je: equal / zero */

loc_00011C43: ;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(edi + 0x14);
    esi = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00011C97; /* ja: above (unsigned >) */

loc_00011C52: ;
    ebp = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011C8A; /* je: equal / zero */

loc_00011C58: ;
    ebx = ebp;
    SET_LO8(ebx, LO8(ebx) & 3);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011C8A; /* je: equal / zero */

loc_00011C62: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011C8A; /* je: equal / zero */

loc_00011C68: ;
    PUSH32(esp, 5);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, 0x00011C72u); RECOMP_ABI_CALL(0x000F8CE0u, sub_000F8CE0); /* call 0x000F8CE0 */

loc_00011C72: ;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(edi + 0x14);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((3) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx + esi * 8;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00011C8A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00011C52; /* jbe: below or equal (unsigned <=) */

loc_00011C91: ;
    ebx = MEM32(0x34AC44);

loc_00011C97: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00011C35; /* jbe: below or equal (unsigned <=) */

loc_00011CA5: ;
    esi = MEM32(esp + 0x14);

loc_00011CA9: ;
    edx = MEM32(0x34AC50);
    eax = ebx + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_A(_fa, _fb)) goto loc_00011D45; /* ja: above (unsigned >) */

loc_00011CBE: ;
    edi = edi;

loc_00011CC0: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011D25; /* je: equal / zero */

loc_00011CC6: ;
    ecx = edi;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011D25; /* je: equal / zero */

loc_00011CD0: ;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(edi + 0x14);
    esi = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00011D25; /* ja: above (unsigned >) */

loc_00011CDF: ;
    /* nop */

loc_00011CE0: ;
    ebp = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011D18; /* je: equal / zero */

loc_00011CE6: ;
    ebx = ebp;
    SET_LO8(ebx, LO8(ebx) & 3);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011D18; /* je: equal / zero */

loc_00011CF0: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011D18; /* je: equal / zero */

loc_00011CF6: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, 0x00011D00u); RECOMP_ABI_CALL(0x000F8CE0u, sub_000F8CE0); /* call 0x000F8CE0 */

loc_00011D00: ;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(edi + 0x14);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((3) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx + esi * 8;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00011D18: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00011CE0; /* jbe: below or equal (unsigned <=) */

loc_00011D1F: ;
    ebx = MEM32(0x34AC44);

loc_00011D25: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00011CC0; /* jbe: below or equal (unsigned <=) */

loc_00011D33: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(0x64CFE0) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00011D45: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(0x64CFE0) = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00011D53: ;
    MEM32(0x64CFE0) = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00011CF0
 * Original: 0x00011CF0 - 0x00011D5E (110 bytes, 42 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011CF0: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011D18; /* je: equal / zero */

loc_00011CF6: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, 0x00011D00u); RECOMP_ABI_CALL(0x000F8CE0u, sub_000F8CE0); /* call 0x000F8CE0 */

loc_00011D00: ;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(edi + 0x14);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((3) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx + esi * 8;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00011D18: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00011CE0(); return; } /* jbe: below or equal (unsigned <=) */

loc_00011D1F: ;
    ebx = MEM32(0x34AC44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00011CC0(); return; } /* jbe: below or equal (unsigned <=) */

loc_00011D33: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(0x64CFE0) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00011D60
 * Original: 0x00011D60 - 0x00012148 (1000 bytes, 321 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011D60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00011D73; /* je: equal / zero */

loc_00011D6A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011D70u); RECOMP_ABI_CALL(0x0001A990u, sub_0001A990); /* call 0x0001A990 */

loc_00011D70: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011D73: ;
    eax = MEM32(0x34AC38);
    SET_LO8(ecx, MEM8(eax + 0x418));
    ebx = 1;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, MEM8(esi + 0x1F));
    if (TEST_Z(_fa, _fb)) goto loc_00011D8F; /* je: equal / zero */

loc_00011D8A: ;
    SET_LO8(ecx, LO8(ecx) | 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00011D92;

loc_00011D8F: ;
    SET_LO8(ecx, LO8(ecx) & 0xDF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00011D92: ;
    MEM8(esi + 0x1F) = LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x41C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x41C), LO8(ebx) (8-bit) */
    SET_LO8(ecx, MEM8(esi + 0x1F));
    if (TEST_Z(_fa, _fb)) goto loc_00011DA5; /* je: equal / zero */

loc_00011DA0: ;
    SET_LO8(ecx, LO8(ecx) | 0x40);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00011DA8;

loc_00011DA5: ;
    SET_LO8(ecx, LO8(ecx) & 0xBF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00011DA8: ;
    MEM8(esi + 0x1F) = LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x420)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x420), LO8(ebx) (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x1F));
    if (TEST_Z(_fa, _fb)) goto loc_00011DBA; /* je: equal / zero */

loc_00011DB6: ;
    SET_LO8(eax, LO8(eax) | 0x80);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00011DBC;

loc_00011DBA: ;
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00011DBC: ;
    MEM8(esi + 0x1F) = LO8(eax);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011DD9; /* je: equal / zero */

loc_00011DC4: ;
    eax = MEM32(esi + 0x18);
    ebx = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00011DD1u); RECOMP_ABI_CALL(0x000F8F90u, sub_000F8F90); /* call 0x000F8F90 */

loc_00011DD1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 1;

loc_00011DD9: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011DEA; /* je: equal / zero */

loc_00011DDE: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + 0x50);
    MEM32(eax + 0x4C) = edx;

loc_00011DEA: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x2000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011DFD; /* je: equal / zero */

loc_00011DF2: ;
    eax = MEM32(esi + 0x18);
    edi = MEM32(eax + 0x20);
    PUSH32(esp, 0x00011DFDu); RECOMP_ABI_CALL(0x000F96F0u, sub_000F96F0); /* call 0x000F96F0 */

loc_00011DFD: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x40000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011E14; /* je: equal / zero */

loc_00011E05: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00011E11u); RECOMP_ABI_CALL(0x0001D010u, sub_0001D010); /* call 0x0001D010 */

loc_00011E11: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011E14: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00011E2A; /* jns: not sign (positive) */

loc_00011E1A: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 0x14);
    MEM32(ecx + 0x104) = 0;

loc_00011E2A: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011E39; /* jne: not equal / not zero */

loc_00011E35: ;
    edi = ebx;
    goto loc_00011E47;

loc_00011E39: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edx;

loc_00011E47: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011E70; /* je: equal / zero */

loc_00011E4E: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011E70; /* je: equal / zero */

loc_00011E55: ;
    eax = esi;
    PUSH32(esp, 0x00011E5Cu); RECOMP_ABI_CALL(0x0001D480u, sub_0001D480); /* call 0x0001D480 */

loc_00011E5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F5B; /* je: equal / zero */

loc_00011E64: ;
    edx = esi;
    PUSH32(esp, 0x00011E6Bu); RECOMP_ABI_CALL(0x0001DB60u, sub_0001DB60); /* call 0x0001DB60 */

loc_00011E6B: ;
    goto loc_00011F5B;

loc_00011E70: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011E91; /* je: equal / zero */

loc_00011E77: ;
    eax = esi;
    PUSH32(esp, 0x00011E7Eu); RECOMP_ABI_CALL(0x0001D480u, sub_0001D480); /* call 0x0001D480 */

loc_00011E7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F5B; /* je: equal / zero */

loc_00011E86: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011E8Cu); RECOMP_ABI_CALL(0x0001D930u, sub_0001D930); /* call 0x0001D930 */

loc_00011E8C: ;
    goto loc_00011F58;

loc_00011E91: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011F26; /* je: equal / zero */

loc_00011E9A: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011ECC; /* jne: not equal / not zero */

loc_00011EA5: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011F5B; /* je: equal / zero */

loc_00011EAE: ;
    eax = esi;
    PUSH32(esp, 0x00011EB5u); RECOMP_ABI_CALL(0x0001D480u, sub_0001D480); /* call 0x0001D480 */

loc_00011EB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F5B; /* je: equal / zero */

loc_00011EBD: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011EC4u); RECOMP_ABI_CALL(0x0001E9E0u, sub_0001E9E0); /* call 0x0001E9E0 */

loc_00011EC4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00011F5B;

loc_00011ECC: ;
    eax = MEM32(eax);
    eax = MEM32(eax);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00011F0E; /* je: equal / zero */

loc_00011ED3: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00011EF3; /* je: equal / zero */

loc_00011ED8: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00011F40; /* jne: not equal / not zero */

loc_00011EDD: ;
    eax = esi;
    PUSH32(esp, 0x00011EE4u); RECOMP_ABI_CALL(0x0001D480u, sub_0001D480); /* call 0x0001D480 */

loc_00011EE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F40; /* je: equal / zero */

loc_00011EE8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00011EEEu); RECOMP_ABI_CALL(0x0001E7A0u, sub_0001E7A0); /* call 0x0001E7A0 */

loc_00011EEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00011F40;

loc_00011EF3: ;
    eax = esi;
    PUSH32(esp, 0x00011EFAu); RECOMP_ABI_CALL(0x0001D480u, sub_0001D480); /* call 0x0001D480 */

loc_00011EFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F40; /* je: equal / zero */

loc_00011EFE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = esi;
    PUSH32(esp, 0x00011F0Cu); RECOMP_ABI_CALL(0x0001D9F0u, sub_0001D9F0); /* call 0x0001D9F0 */

loc_00011F0C: ;
    goto loc_00011F40;

loc_00011F0E: ;
    eax = esi;
    PUSH32(esp, 0x00011F15u); RECOMP_ABI_CALL(0x0001D480u, sub_0001D480); /* call 0x0001D480 */

loc_00011F15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F40; /* je: equal / zero */

loc_00011F19: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00011F21u); RECOMP_ABI_CALL(0x0001DD30u, sub_0001DD30); /* call 0x0001DD30 */

loc_00011F21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00011F40;

loc_00011F26: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011F40; /* je: equal / zero */

loc_00011F2B: ;
    eax = esi;
    PUSH32(esp, 0x00011F32u); RECOMP_ABI_CALL(0x0001D480u, sub_0001D480); /* call 0x0001D480 */

loc_00011F32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F40; /* je: equal / zero */

loc_00011F36: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011F3Du); RECOMP_ABI_CALL(0x0001E9E0u, sub_0001E9E0); /* call 0x0001E9E0 */

loc_00011F3D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011F40: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00011F5B; /* jns: not sign (positive) */

loc_00011F45: ;
    eax = esi;
    PUSH32(esp, 0x00011F4Cu); RECOMP_ABI_CALL(0x0001D480u, sub_0001D480); /* call 0x0001D480 */

loc_00011F4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F5B; /* je: equal / zero */

loc_00011F50: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00011F58u); RECOMP_ABI_CALL(0x0001DAA0u, sub_0001DAA0); /* call 0x0001DAA0 */

loc_00011F58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011F5B: ;
    eax = esi;
    PUSH32(esp, 0x00011F62u); RECOMP_ABI_CALL(0x0001F850u, sub_0001F850); /* call 0x0001F850 */

loc_00011F62: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011FBB; /* je: equal / zero */

loc_00011F69: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011FBB; /* je: equal / zero */

loc_00011F70: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F7E; /* je: equal / zero */

loc_00011F75: ;
    eax = ecx;
    ecx = MEM32(eax);
    MEM32(eax + 4) = ecx;
    goto loc_00011FBB;

loc_00011F7E: ;
    MEM32(esi) = MEM32(esi) & 0xFFBFFFFFu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011FA0; /* je: equal / zero */

loc_00011F8B: ;
    edi = eax;
    PUSH32(esp, 0x00011F92u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00011F92: ;
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00011FA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011F9Du); } /* indirect call */
    }

loc_00011FA0: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(0x34AC38);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x160;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = 0;
    PUSH32(esp, 0x00011FBBu); RECOMP_ABI_CALL(0x000BFB30u, sub_000BFB30); /* call 0x000BFB30 */

loc_00011FBB: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011FE4; /* je: equal / zero */

loc_00011FC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011FC6u); RECOMP_ABI_CALL(0x000203B0u, sub_000203B0); /* call 0x000203B0 */

loc_00011FC6: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011FE4; /* je: equal / zero */

loc_00011FD5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011FE1u); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_00011FE1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011FE4: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012060; /* je: equal / zero */

loc_00011FE9: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011FF5; /* je: equal / zero */

loc_00011FF0: ;
    edi = MEM32(eax + 4);
    goto loc_00011FF7;

loc_00011FF5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011FF7: ;
    eax = MEM32(esi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x49A888)); /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x49A88C)); /* movss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x49A890)); /* movss */
    MEMF(edi + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    xmm0 = XMM_SCALAR(MEMF(0x333888)); /* movss */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x80000041u);
    PUSH32(esp, edi);
    MEM32(edi + 4) = eax;
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00012054u); RECOMP_ABI_CALL(0x000702C0u, sub_000702C0); /* call 0x000702C0 */

loc_00012054: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFF3FFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = eax;

loc_00012060: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001207D; /* je: equal / zero */

loc_0001206A: ;
    edi = MEM32(0x34AC38);
    eax = eax & 0xFBFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0001207Du); RECOMP_ABI_CALL(0x00021810u, sub_00021810); /* call 0x00021810 */

loc_0001207D: ;
    SET_LO8(ecx, MEM8(esi + 0x1F));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, (uint32_t)(((int32_t)(int8_t)(LO8(eax))) >> ((2) & 31u)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sar result */
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, (uint32_t)(((int32_t)(int8_t)(LO8(ecx))) >> ((2) & 31u)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sar result */
    SET_LO8(ecx, LO8(ecx) & 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x1F) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000120B7; /* je: equal / zero */

loc_000120A0: ;
    MEM8(eax + 0x2E) = MEM8(eax + 0x2E) & 0xF7;
    _fa = (uint32_t)(MEM8(eax + 0x2E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(esi + 0x18);
    eax = 0xFFFF;
    MEM16(edx + 0x38) = LO16(eax);
    ecx = MEM32(esi + 0x18);
    MEM16(ecx + 0x3A) = LO16(eax);

loc_000120B7: ;
    edx = MEM32(esi + 4);
    SET_LO8(ebx, MEM8(esi + 8));
    edx = edx & 0x7FFDFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) & 0xFE);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x20000000 (32-bit) */
    MEM8(esi + 8) = LO8(ebx);
    MEM32(esi + 4) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000120E6; /* je: equal / zero */

loc_000120D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012100; /* jne: not equal / not zero */

loc_000120DC: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    goto loc_00012100;

loc_000120E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012100; /* je: equal / zero */

loc_000120ED: ;
    ebx = MEM32(0x34AC38);
    eax = eax & 0xFFDFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00012100u); RECOMP_ABI_CALL(0x00021990u, sub_00021990); /* call 0x00021990 */

loc_00012100: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001211B; /* je: equal / zero */

loc_0001210A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012135; /* jne: not equal / not zero */

loc_00012111: ;
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    goto loc_00012135;

loc_0001211B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012135; /* je: equal / zero */

loc_00012122: ;
    edi = MEM32(0x34AC38);
    eax = eax & 0xFFBFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00012135u); RECOMP_ABI_CALL(0x00021810u, sub_00021810); /* call 0x00021810 */

loc_00012135: ;
    esi = MEM32(esi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012144; /* je: equal / zero */

loc_0001213C: ;
    SET_LO16(edx, MEM16(esi + 0x2A));
    MEM16(esi + 0x28) = LO16(edx);

loc_00012144: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00011ED6
 * Original: 0x00011ED6 - 0x00012148 (626 bytes, 198 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011ED6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011ED6: ;
    if (_flags /* je: equal / zero */) goto loc_00011EF3;

loc_00011ED8: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00011F40; /* jne: not equal / not zero */

loc_00011EDD: ;
    eax = esi;
    PUSH32(esp, 0x00011EE4u); RECOMP_ABI_CALL(0x0001D480u, sub_0001D480); /* call 0x0001D480 */

loc_00011EE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F40; /* je: equal / zero */

loc_00011EE8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00011EEEu); RECOMP_ABI_CALL(0x0001E7A0u, sub_0001E7A0); /* call 0x0001E7A0 */

loc_00011EEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00011F40;

loc_00011EF3: ;
    eax = esi;
    PUSH32(esp, 0x00011EFAu); RECOMP_ABI_CALL(0x0001D480u, sub_0001D480); /* call 0x0001D480 */

loc_00011EFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F40; /* je: equal / zero */

loc_00011EFE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = esi;
    PUSH32(esp, 0x00011F0Cu); RECOMP_ABI_CALL(0x0001D9F0u, sub_0001D9F0); /* call 0x0001D9F0 */

loc_00011F0C: ;
    goto loc_00011F40;

    eax = esi;
    PUSH32(esp, 0x00011F15u); RECOMP_ABI_CALL(0x0001D480u, sub_0001D480); /* call 0x0001D480 */

loc_00011F15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F40; /* je: equal / zero */

loc_00011F19: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00011F21u); RECOMP_ABI_CALL(0x0001DD30u, sub_0001DD30); /* call 0x0001DD30 */

loc_00011F21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00011F40;

    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011F40; /* je: equal / zero */

loc_00011F2B: ;
    eax = esi;
    PUSH32(esp, 0x00011F32u); RECOMP_ABI_CALL(0x0001D480u, sub_0001D480); /* call 0x0001D480 */

loc_00011F32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F40; /* je: equal / zero */

loc_00011F36: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011F3Du); RECOMP_ABI_CALL(0x0001E9E0u, sub_0001E9E0); /* call 0x0001E9E0 */

loc_00011F3D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011F40: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00011F5B; /* jns: not sign (positive) */

loc_00011F45: ;
    eax = esi;
    PUSH32(esp, 0x00011F4Cu); RECOMP_ABI_CALL(0x0001D480u, sub_0001D480); /* call 0x0001D480 */

loc_00011F4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F5B; /* je: equal / zero */

loc_00011F50: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00011F58u); RECOMP_ABI_CALL(0x0001DAA0u, sub_0001DAA0); /* call 0x0001DAA0 */

loc_00011F58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011F5B: ;
    eax = esi;
    PUSH32(esp, 0x00011F62u); RECOMP_ABI_CALL(0x0001F850u, sub_0001F850); /* call 0x0001F850 */

loc_00011F62: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011FBB; /* je: equal / zero */

loc_00011F69: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011FBB; /* je: equal / zero */

loc_00011F70: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F7E; /* je: equal / zero */

loc_00011F75: ;
    eax = ecx;
    ecx = MEM32(eax);
    MEM32(eax + 4) = ecx;
    goto loc_00011FBB;

loc_00011F7E: ;
    MEM32(esi) = MEM32(esi) & 0xFFBFFFFFu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011FA0; /* je: equal / zero */

loc_00011F8B: ;
    edi = eax;
    PUSH32(esp, 0x00011F92u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00011F92: ;
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00011FA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011F9Du); } /* indirect call */
    }

loc_00011FA0: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(0x34AC38);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x160;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = 0;
    PUSH32(esp, 0x00011FBBu); RECOMP_ABI_CALL(0x000BFB30u, sub_000BFB30); /* call 0x000BFB30 */

loc_00011FBB: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011FE4; /* je: equal / zero */

loc_00011FC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011FC6u); RECOMP_ABI_CALL(0x000203B0u, sub_000203B0); /* call 0x000203B0 */

loc_00011FC6: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011FE4; /* je: equal / zero */

loc_00011FD5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011FE1u); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_00011FE1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011FE4: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012060; /* je: equal / zero */

loc_00011FE9: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011FF5; /* je: equal / zero */

loc_00011FF0: ;
    edi = MEM32(eax + 4);
    goto loc_00011FF7;

loc_00011FF5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011FF7: ;
    eax = MEM32(esi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x49A888)); /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x49A88C)); /* movss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x49A890)); /* movss */
    MEMF(edi + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    xmm0 = XMM_SCALAR(MEMF(0x333888)); /* movss */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x80000041u);
    PUSH32(esp, edi);
    MEM32(edi + 4) = eax;
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00012054u); RECOMP_ABI_CALL(0x000702C0u, sub_000702C0); /* call 0x000702C0 */

loc_00012054: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFF3FFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = eax;

loc_00012060: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001207D; /* je: equal / zero */

loc_0001206A: ;
    edi = MEM32(0x34AC38);
    eax = eax & 0xFBFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0001207Du); RECOMP_ABI_CALL(0x00021810u, sub_00021810); /* call 0x00021810 */

loc_0001207D: ;
    SET_LO8(ecx, MEM8(esi + 0x1F));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, (uint32_t)(((int32_t)(int8_t)(LO8(eax))) >> ((2) & 31u)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sar result */
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, (uint32_t)(((int32_t)(int8_t)(LO8(ecx))) >> ((2) & 31u)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sar result */
    SET_LO8(ecx, LO8(ecx) & 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x1F) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000120B7; /* je: equal / zero */

loc_000120A0: ;
    MEM8(eax + 0x2E) = MEM8(eax + 0x2E) & 0xF7;
    _fa = (uint32_t)(MEM8(eax + 0x2E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(esi + 0x18);
    eax = 0xFFFF;
    MEM16(edx + 0x38) = LO16(eax);
    ecx = MEM32(esi + 0x18);
    MEM16(ecx + 0x3A) = LO16(eax);

loc_000120B7: ;
    edx = MEM32(esi + 4);
    SET_LO8(ebx, MEM8(esi + 8));
    edx = edx & 0x7FFDFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) & 0xFE);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x20000000 (32-bit) */
    MEM8(esi + 8) = LO8(ebx);
    MEM32(esi + 4) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000120E6; /* je: equal / zero */

loc_000120D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012100; /* jne: not equal / not zero */

loc_000120DC: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    goto loc_00012100;

loc_000120E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012100; /* je: equal / zero */

loc_000120ED: ;
    ebx = MEM32(0x34AC38);
    eax = eax & 0xFFDFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00012100u); RECOMP_ABI_CALL(0x00021990u, sub_00021990); /* call 0x00021990 */

loc_00012100: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001211B; /* je: equal / zero */

loc_0001210A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012135; /* jne: not equal / not zero */

loc_00012111: ;
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    goto loc_00012135;

loc_0001211B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012135; /* je: equal / zero */

loc_00012122: ;
    edi = MEM32(0x34AC38);
    eax = eax & 0xFFBFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00012135u); RECOMP_ABI_CALL(0x00021810u, sub_00021810); /* call 0x00021810 */

loc_00012135: ;
    esi = MEM32(esi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012144; /* je: equal / zero */

loc_0001213C: ;
    SET_LO16(edx, MEM16(esi + 0x2A));
    MEM16(esi + 0x28) = LO16(edx);

loc_00012144: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00012150
 * Original: 0x00012150 - 0x000121D0 (128 bytes, 34 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012150: ;
    PUSH32(esp, edi);
    edi = eax;
    MEM32(0x64CFF0) = 1;
    MEM32(edi + 0x220) = 0;
    MEM32(edi + 0x264) = 0;
    PUSH32(esp, 0x00012176u); RECOMP_ABI_CALL(0x0001CC80u, sub_0001CC80); /* call 0x0001CC80 */

loc_00012176: ;
    eax = MEM32(edi + 0x1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000121BE; /* je: equal / zero */

loc_00012180: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012183: ;
    eax = MEM32(edi + 0x1C0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000121AB; /* jae: above or equal (unsigned >=) */

loc_0001218E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000121A0; /* je: equal / zero */

loc_00012194: ;
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000121A0; /* je: equal / zero */

loc_0001219B: ;
    PUSH32(esp, 0x000121A0u); RECOMP_ABI_CALL(0x00025050u, sub_00025050); /* call 0x00025050 */

loc_000121A0: ;
    eax = MEM32(edi + 0x1C0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012183; /* jne: not equal / not zero */

loc_000121AB: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337C4)); /* movss */
    POP32(esp, esi);
    MEMF(0x343DDC) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000121BE: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337C4)); /* movss */
    MEMF(0x343DDC) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000121A0
 * Original: 0x000121A0 - 0x000121D0 (48 bytes, 13 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000121A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000121A0: ;
    eax = MEM32(edi + 0x1C0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00012183(); return; } /* jne: not equal / not zero */

loc_000121AB: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337C4)); /* movss */
    POP32(esp, esi);
    MEMF(0x343DDC) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000121D0
 * Original: 0x000121D0 - 0x00012612 (1090 bytes, 326 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000121D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000121D0: ;
    eax = 0x2008;
    PUSH32(esp, 0x000121DAu); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_000121DA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000125B6; /* je: equal / zero */

loc_000121EA: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEM32(esi + 0x420) = ebx;
    MEM32(esi + 0x418) = ebx;
    MEM32(esi + 0x41C) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 1;
    MEM32(0x614FCC) = eax;
    MEM32(0x64CFBC) = edi;
    MEMF(0x33B4AC) = xmm0.f[0]; /* movss */
    MEM32(0x64CFF0) = edi;
    MEM32(0x64D8FC) = ebx;
    MEM32(0x64D900) = ebx;
    MEM32(0x614FD0) = eax;
    PUSH32(esp, 0x0001223Au); RECOMP_ABI_CALL(0x000F8060u, sub_000F8060); /* call 0x000F8060 */

loc_0001223A: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edi (32-bit) */
    MEM32(0x64D908) = ebx;
    MEM32(esi + 0x220) = ebx;
    MEM32(esi + 0x264) = ebx;
    edx = edi;
    if (CMP_BE(_fa, _fb)) goto loc_00012289; /* jbe: below or equal (unsigned <=) */

loc_00012253: ;
    eax = 0xD0;
    goto loc_00012260;

    /* nop */

loc_00012260: ;
    ecx = MEM32(esi + 0x30);
    MEM8(ecx + eax + 0xA4) = MEM8(ecx + eax + 0xA4) & 0xFE;
    _fa = (uint32_t)(MEM8(ecx + eax + 0xA4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = ecx + eax + 0xA4;
    ecx = MEM32(esi + 0x30);
    MEM32(ecx + eax + 0xC0) = ebx;
    ecx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012260; /* jb: below (unsigned <) */

loc_00012289: ;
    edx = MEM32(esi + 0x30);
    MEM32(esi + 4) = edi;
    MEM32(edx + 0xA0) = ebx;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = MEM32(esi + 0x1C);
    if (CMP_NE(_fa, _fb)) goto loc_000122A6; /* jne: not equal / not zero */

loc_000122A1: ;
    PUSH32(esp, 0x000122A6u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000122A6: ;
    edx = MEM32(eax);
    ecx = edi * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000122B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000122B2u); } /* indirect call */
    }

loc_000122B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000125C1; /* je: equal / zero */

loc_000122C1: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000122F5; /* ja: above (unsigned >) */

loc_000122D0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000122E8; /* je: equal / zero */

loc_000122D6: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000122E8; /* je: equal / zero */

loc_000122E0: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx + edi * 4) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000122E8: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000122D0; /* jbe: below or equal (unsigned <=) */

loc_000122F5: ;
    eax = edi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00012350; /* jbe: below or equal (unsigned <=) */

loc_00012301: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ecx + ebp * 4);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x20000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012347; /* jne: not equal / not zero */

loc_00012310: ;
    ebx = MEM32(edi + 4);
    eax = MEM32(esp + 0x201C);
    ebx = ebx >> 0x1A;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012329; /* jne: not equal / not zero */

loc_00012325: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012345; /* je: equal / zero */

loc_00012329: ;
    ecx = edi;
    PUSH32(esp, 0x00012330u); RECOMP_ABI_CALL(0x00011D60u, sub_00011D60); /* call 0x00011D60 */

loc_00012330: ;
    _fa = (uint32_t)(MEM32(esp + 0x201C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x201C), 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012345; /* jne: not equal / not zero */

loc_0001233A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012345; /* je: equal / zero */

loc_0001233E: ;
    MEM32(edi + 4) = MEM32(edi + 4) | 0x4000000;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00012345: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012347: ;
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012301; /* jb: below (unsigned <) */

loc_00012350: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000123C5; /* jbe: below or equal (unsigned <=) */

loc_00012356: ;
    goto loc_00012360;

    /* nop */
    /* nop */

loc_00012360: ;
    edx = MEM32(esp + 0x10);
    ebx = MEM32(edx + edi * 4);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000123BA; /* je: equal / zero */

loc_0001236F: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000123BA; /* jae: above or equal (unsigned >=) */

loc_00012379: ;
    /* nop */

loc_00012380: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001238D; /* je: equal / zero */

loc_00012384: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012380; /* jb: below (unsigned <) */

loc_0001238B: ;
    goto loc_000123BA;

loc_0001238D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012393u); RECOMP_ABI_CALL(0x00021A40u, sub_00021A40); /* call 0x00021A40 */

loc_00012393: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0001239Du); RECOMP_ABI_CALL(0x00026540u, sub_00026540); /* call 0x00026540 */

loc_0001239D: ;
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123B1; /* je: equal / zero */

loc_000123A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123B1; /* je: equal / zero */

loc_000123A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000123AEu); RECOMP_ABI_CALL(0x00021A40u, sub_00021A40); /* call 0x00021A40 */

loc_000123AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000123B1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000123B7u); RECOMP_ABI_CALL(0x0001B360u, sub_0001B360); /* call 0x0001B360 */

loc_000123B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000123BA: ;
    eax = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012360; /* jb: below (unsigned <) */

loc_000123C3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000123C5: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x000123CEu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000123CE: ;
    edx = MEM32(eax);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000123D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000123D5u); } /* indirect call */
    }

loc_000123D8: ;
    edi = esi;
    PUSH32(esp, 0x000123DFu); RECOMP_ABI_CALL(0x0001CC80u, sub_0001CC80); /* call 0x0001CC80 */

loc_000123DF: ;
    eax = MEM32(esi + 0x1C0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012414; /* je: equal / zero */

loc_000123EB: ;
    goto loc_000123F0;

    /* nop */

loc_000123F0: ;
    eax = MEM32(esi + 0x1C0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00012414; /* jae: above or equal (unsigned >=) */

loc_000123FB: ;
    edx = MEM32(eax);
    eax = MEM32(edx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012409; /* je: equal / zero */

loc_00012404: ;
    PUSH32(esp, 0x00012409u); RECOMP_ABI_CALL(0x00025050u, sub_00025050); /* call 0x00025050 */

loc_00012409: ;
    eax = MEM32(esi + 0x1C0);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000123F0; /* jne: not equal / not zero */

loc_00012414: ;
    edi = MEM32(esp + 0x201C);
    eax = esi + 0x424;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012428u); RECOMP_ABI_CALL(0x00088DA0u, sub_00088DA0); /* call 0x00088DA0 */

loc_00012428: ;
    ecx = esi + 0x428;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012435u); RECOMP_ABI_CALL(0x00088DA0u, sub_00088DA0); /* call 0x00088DA0 */

loc_00012435: ;
    edx = esi + 0x42C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012442u); RECOMP_ABI_CALL(0x00088DA0u, sub_00088DA0); /* call 0x00088DA0 */

loc_00012442: ;
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012489; /* je: equal / zero */

loc_0001244C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx) = LO16(ebx);
    ecx = 0x400;
    edi = edx + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0x10);
    ecx = 0x3FF0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0xC) = 1;

loc_00012489: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337C4)); /* movss */
    MEM32(esi + 0x430) = ebx;
    MEMF(0x343DDC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000124A4u); RECOMP_ABI_CALL(0x000BE3F0u, sub_000BE3F0); /* call 0x000BE3F0 */

loc_000124A4: ;
    eax = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000124D0; /* jbe: below or equal (unsigned <=) */

loc_000124AD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000124B0: ;
    eax = MEM32(esi + 0x30);
    MEM8(eax + edx + 0xA4) = MEM8(eax + edx + 0xA4) | 2;
    _fa = (uint32_t)(MEM8(eax + edx + 0xA4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = eax + edx + 0xA4;
    eax = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000124B0; /* jb: below (unsigned <) */

loc_000124D0: ;
    SET_LO8(eax, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000124E7; /* je: equal / zero */

loc_000124D9: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000124E7; /* je: equal / zero */

loc_000124E2: ;
    PUSH32(esp, 0x000124E7u); RECOMP_ABI_CALL(0x000CB360u, sub_000CB360); /* call 0x000CB360 */

loc_000124E7: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001255E; /* jne: not equal / not zero */

loc_000124F0: ;
    SET_LO8(eax, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001255E; /* jne: not equal / not zero */

loc_000124F9: ;
    eax = MEM32(0x64D204);
    MEM32(eax) = ebx;
    MEM32(eax + 8) = ebx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ecx;
    edx = 6;
    MEM32(eax + 4) = edx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(0x64D208);
    MEM32(eax) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x3C) = ebx;
    ebx = MEM32(0x64D20C);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x40) = ecx;
    PUSH32(esp, 0x0001255Cu); RECOMP_ABI_CALL(0x000279A0u, sub_000279A0); /* call 0x000279A0 */

loc_0001255C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001255E: ;
    xmm0 = XMM_SCALAR(MEMF(0x33A1E0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x33A1E8)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x33A1E4); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(0x33A1E4) = xmm2.f[0]; /* movss */
    MEMF(0x33A1E8) = xmm1.f[0]; /* movss */
    MEMF(0x33A1E0) = xmm0.f[0]; /* movss */
    MEMF(0x33A1EC) = xmm0.f[0]; /* movss */
    MEM32(0x64CFBC) = ebx;

loc_000125B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2008) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2008;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000125C1: ;
    PUSH32(esp, 0x322FB0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000125D0u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_000125D0: ;
    PUSH32(esp, 0x334D7C);
    edx = esp + 0x101C;
    ecx = 0x400;
    esi = esp + 0x1C;
    edi = esp + 0x101C;
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
    PUSH32(esp, 0x000125F4u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000125F4: ;
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
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012611; /* je: equal / zero */

loc_00012606: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012611; /* jne: not equal / not zero */

loc_0001260B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00012611u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001260Fu); } /* indirect call */
    }

loc_00012611: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012253
 * Original: 0x00012253 - 0x00012612 (959 bytes, 296 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012253(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012253: ;
    eax = 0xD0;
    goto loc_00012260;

    /* nop */

loc_00012260: ;
    ecx = MEM32(esi + 0x30);
    MEM8(ecx + eax + 0xA4) = MEM8(ecx + eax + 0xA4) & 0xFE;
    _fa = (uint32_t)(MEM8(ecx + eax + 0xA4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = ecx + eax + 0xA4;
    ecx = MEM32(esi + 0x30);
    MEM32(ecx + eax + 0xC0) = ebx;
    ecx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012260; /* jb: below (unsigned <) */

loc_00012289: ;
    edx = MEM32(esi + 0x30);
    MEM32(esi + 4) = edi;
    MEM32(edx + 0xA0) = ebx;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = MEM32(esi + 0x1C);
    if (CMP_NE(_fa, _fb)) goto loc_000122A6; /* jne: not equal / not zero */

loc_000122A1: ;
    PUSH32(esp, 0x000122A6u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000122A6: ;
    edx = MEM32(eax);
    ecx = edi * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000122B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000122B2u); } /* indirect call */
    }

loc_000122B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000125C1; /* je: equal / zero */

loc_000122C1: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000122F5; /* ja: above (unsigned >) */

loc_000122D0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000122E8; /* je: equal / zero */

loc_000122D6: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000122E8; /* je: equal / zero */

loc_000122E0: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx + edi * 4) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000122E8: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000122D0; /* jbe: below or equal (unsigned <=) */

loc_000122F5: ;
    eax = edi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00012350; /* jbe: below or equal (unsigned <=) */

loc_00012301: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ecx + ebp * 4);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x20000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012347; /* jne: not equal / not zero */

loc_00012310: ;
    ebx = MEM32(edi + 4);
    eax = MEM32(esp + 0x201C);
    ebx = ebx >> 0x1A;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012329; /* jne: not equal / not zero */

loc_00012325: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012345; /* je: equal / zero */

loc_00012329: ;
    ecx = edi;
    PUSH32(esp, 0x00012330u); RECOMP_ABI_CALL(0x00011D60u, sub_00011D60); /* call 0x00011D60 */

loc_00012330: ;
    _fa = (uint32_t)(MEM32(esp + 0x201C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x201C), 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012345; /* jne: not equal / not zero */

loc_0001233A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012345; /* je: equal / zero */

loc_0001233E: ;
    MEM32(edi + 4) = MEM32(edi + 4) | 0x4000000;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00012345: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012347: ;
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012301; /* jb: below (unsigned <) */

loc_00012350: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000123C5; /* jbe: below or equal (unsigned <=) */

loc_00012356: ;
    goto loc_00012360;

    /* nop */
    /* nop */

loc_00012360: ;
    edx = MEM32(esp + 0x10);
    ebx = MEM32(edx + edi * 4);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000123BA; /* je: equal / zero */

loc_0001236F: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000123BA; /* jae: above or equal (unsigned >=) */

loc_00012379: ;
    /* nop */

loc_00012380: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001238D; /* je: equal / zero */

loc_00012384: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012380; /* jb: below (unsigned <) */

loc_0001238B: ;
    goto loc_000123BA;

loc_0001238D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012393u); RECOMP_ABI_CALL(0x00021A40u, sub_00021A40); /* call 0x00021A40 */

loc_00012393: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0001239Du); RECOMP_ABI_CALL(0x00026540u, sub_00026540); /* call 0x00026540 */

loc_0001239D: ;
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123B1; /* je: equal / zero */

loc_000123A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123B1; /* je: equal / zero */

loc_000123A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000123AEu); RECOMP_ABI_CALL(0x00021A40u, sub_00021A40); /* call 0x00021A40 */

loc_000123AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000123B1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000123B7u); RECOMP_ABI_CALL(0x0001B360u, sub_0001B360); /* call 0x0001B360 */

loc_000123B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000123BA: ;
    eax = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012360; /* jb: below (unsigned <) */

loc_000123C3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000123C5: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x000123CEu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000123CE: ;
    edx = MEM32(eax);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000123D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000123D5u); } /* indirect call */
    }

loc_000123D8: ;
    edi = esi;
    PUSH32(esp, 0x000123DFu); RECOMP_ABI_CALL(0x0001CC80u, sub_0001CC80); /* call 0x0001CC80 */

loc_000123DF: ;
    eax = MEM32(esi + 0x1C0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012414; /* je: equal / zero */

loc_000123EB: ;
    goto loc_000123F0;

    /* nop */

loc_000123F0: ;
    eax = MEM32(esi + 0x1C0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00012414; /* jae: above or equal (unsigned >=) */

loc_000123FB: ;
    edx = MEM32(eax);
    eax = MEM32(edx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012409; /* je: equal / zero */

loc_00012404: ;
    PUSH32(esp, 0x00012409u); RECOMP_ABI_CALL(0x00025050u, sub_00025050); /* call 0x00025050 */

loc_00012409: ;
    eax = MEM32(esi + 0x1C0);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000123F0; /* jne: not equal / not zero */

loc_00012414: ;
    edi = MEM32(esp + 0x201C);
    eax = esi + 0x424;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012428u); RECOMP_ABI_CALL(0x00088DA0u, sub_00088DA0); /* call 0x00088DA0 */

loc_00012428: ;
    ecx = esi + 0x428;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012435u); RECOMP_ABI_CALL(0x00088DA0u, sub_00088DA0); /* call 0x00088DA0 */

loc_00012435: ;
    edx = esi + 0x42C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012442u); RECOMP_ABI_CALL(0x00088DA0u, sub_00088DA0); /* call 0x00088DA0 */

loc_00012442: ;
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012489; /* je: equal / zero */

loc_0001244C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx) = LO16(ebx);
    ecx = 0x400;
    edi = edx + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0x10);
    ecx = 0x3FF0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0xC) = 1;

loc_00012489: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337C4)); /* movss */
    MEM32(esi + 0x430) = ebx;
    MEMF(0x343DDC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000124A4u); RECOMP_ABI_CALL(0x000BE3F0u, sub_000BE3F0); /* call 0x000BE3F0 */

loc_000124A4: ;
    eax = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000124D0; /* jbe: below or equal (unsigned <=) */

loc_000124AD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000124B0: ;
    eax = MEM32(esi + 0x30);
    MEM8(eax + edx + 0xA4) = MEM8(eax + edx + 0xA4) | 2;
    _fa = (uint32_t)(MEM8(eax + edx + 0xA4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = eax + edx + 0xA4;
    eax = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000124B0; /* jb: below (unsigned <) */

loc_000124D0: ;
    SET_LO8(eax, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000124E7; /* je: equal / zero */

loc_000124D9: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000124E7; /* je: equal / zero */

loc_000124E2: ;
    PUSH32(esp, 0x000124E7u); RECOMP_ABI_CALL(0x000CB360u, sub_000CB360); /* call 0x000CB360 */

loc_000124E7: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001255E; /* jne: not equal / not zero */

loc_000124F0: ;
    SET_LO8(eax, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001255E; /* jne: not equal / not zero */

loc_000124F9: ;
    eax = MEM32(0x64D204);
    MEM32(eax) = ebx;
    MEM32(eax + 8) = ebx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ecx;
    edx = 6;
    MEM32(eax + 4) = edx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(0x64D208);
    MEM32(eax) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x3C) = ebx;
    ebx = MEM32(0x64D20C);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x40) = ecx;
    PUSH32(esp, 0x0001255Cu); RECOMP_ABI_CALL(0x000279A0u, sub_000279A0); /* call 0x000279A0 */

loc_0001255C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001255E: ;
    xmm0 = XMM_SCALAR(MEMF(0x33A1E0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x33A1E8)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x33A1E4); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(0x33A1E4) = xmm2.f[0]; /* movss */
    MEMF(0x33A1E8) = xmm1.f[0]; /* movss */
    MEMF(0x33A1E0) = xmm0.f[0]; /* movss */
    MEMF(0x33A1EC) = xmm0.f[0]; /* movss */
    MEM32(0x64CFBC) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2008) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2008;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000125C1: ;
    PUSH32(esp, 0x322FB0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000125D0u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_000125D0: ;
    PUSH32(esp, 0x334D7C);
    edx = esp + 0x101C;
    ecx = 0x400;
    esi = esp + 0x1C;
    edi = esp + 0x101C;
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
    PUSH32(esp, 0x000125F4u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000125F4: ;
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
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012611; /* je: equal / zero */

loc_00012606: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012611; /* jne: not equal / not zero */

loc_0001260B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00012611u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001260Fu); } /* indirect call */
    }

loc_00012611: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000122AF
 * Original: 0x000122AF - 0x00012612 (867 bytes, 273 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000122AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000122AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000122B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000122B2u); } /* indirect call */
    }

loc_000122B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000125C1; /* je: equal / zero */

loc_000122C1: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000122F5; /* ja: above (unsigned >) */

loc_000122D0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000122E8; /* je: equal / zero */

loc_000122D6: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000122E8; /* je: equal / zero */

loc_000122E0: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx + edi * 4) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000122E8: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000122D0; /* jbe: below or equal (unsigned <=) */

loc_000122F5: ;
    eax = edi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00012350; /* jbe: below or equal (unsigned <=) */

loc_00012301: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ecx + ebp * 4);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x20000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012347; /* jne: not equal / not zero */

loc_00012310: ;
    ebx = MEM32(edi + 4);
    eax = MEM32(esp + 0x201C);
    ebx = ebx >> 0x1A;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012329; /* jne: not equal / not zero */

loc_00012325: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012345; /* je: equal / zero */

loc_00012329: ;
    ecx = edi;
    PUSH32(esp, 0x00012330u); RECOMP_ABI_CALL(0x00011D60u, sub_00011D60); /* call 0x00011D60 */

loc_00012330: ;
    _fa = (uint32_t)(MEM32(esp + 0x201C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x201C), 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012345; /* jne: not equal / not zero */

loc_0001233A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012345; /* je: equal / zero */

loc_0001233E: ;
    MEM32(edi + 4) = MEM32(edi + 4) | 0x4000000;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00012345: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012347: ;
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012301; /* jb: below (unsigned <) */

loc_00012350: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000123C5; /* jbe: below or equal (unsigned <=) */

loc_00012356: ;
    goto loc_00012360;

    /* nop */
    /* nop */

loc_00012360: ;
    edx = MEM32(esp + 0x10);
    ebx = MEM32(edx + edi * 4);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000123BA; /* je: equal / zero */

loc_0001236F: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000123BA; /* jae: above or equal (unsigned >=) */

loc_00012379: ;
    /* nop */

loc_00012380: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001238D; /* je: equal / zero */

loc_00012384: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012380; /* jb: below (unsigned <) */

loc_0001238B: ;
    goto loc_000123BA;

loc_0001238D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012393u); RECOMP_ABI_CALL(0x00021A40u, sub_00021A40); /* call 0x00021A40 */

loc_00012393: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0001239Du); RECOMP_ABI_CALL(0x00026540u, sub_00026540); /* call 0x00026540 */

loc_0001239D: ;
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123B1; /* je: equal / zero */

loc_000123A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123B1; /* je: equal / zero */

loc_000123A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000123AEu); RECOMP_ABI_CALL(0x00021A40u, sub_00021A40); /* call 0x00021A40 */

loc_000123AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000123B1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000123B7u); RECOMP_ABI_CALL(0x0001B360u, sub_0001B360); /* call 0x0001B360 */

loc_000123B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000123BA: ;
    eax = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012360; /* jb: below (unsigned <) */

loc_000123C3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000123C5: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x000123CEu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000123CE: ;
    edx = MEM32(eax);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000123D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000123D5u); } /* indirect call */
    }

loc_000123D8: ;
    edi = esi;
    PUSH32(esp, 0x000123DFu); RECOMP_ABI_CALL(0x0001CC80u, sub_0001CC80); /* call 0x0001CC80 */

loc_000123DF: ;
    eax = MEM32(esi + 0x1C0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012414; /* je: equal / zero */

loc_000123EB: ;
    goto loc_000123F0;

    /* nop */

loc_000123F0: ;
    eax = MEM32(esi + 0x1C0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00012414; /* jae: above or equal (unsigned >=) */

loc_000123FB: ;
    edx = MEM32(eax);
    eax = MEM32(edx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012409; /* je: equal / zero */

loc_00012404: ;
    PUSH32(esp, 0x00012409u); RECOMP_ABI_CALL(0x00025050u, sub_00025050); /* call 0x00025050 */

loc_00012409: ;
    eax = MEM32(esi + 0x1C0);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000123F0; /* jne: not equal / not zero */

loc_00012414: ;
    edi = MEM32(esp + 0x201C);
    eax = esi + 0x424;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012428u); RECOMP_ABI_CALL(0x00088DA0u, sub_00088DA0); /* call 0x00088DA0 */

loc_00012428: ;
    ecx = esi + 0x428;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012435u); RECOMP_ABI_CALL(0x00088DA0u, sub_00088DA0); /* call 0x00088DA0 */

loc_00012435: ;
    edx = esi + 0x42C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012442u); RECOMP_ABI_CALL(0x00088DA0u, sub_00088DA0); /* call 0x00088DA0 */

loc_00012442: ;
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012489; /* je: equal / zero */

loc_0001244C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx) = LO16(ebx);
    ecx = 0x400;
    edi = edx + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0x10);
    ecx = 0x3FF0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0xC) = 1;

loc_00012489: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337C4)); /* movss */
    MEM32(esi + 0x430) = ebx;
    MEMF(0x343DDC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000124A4u); RECOMP_ABI_CALL(0x000BE3F0u, sub_000BE3F0); /* call 0x000BE3F0 */

loc_000124A4: ;
    eax = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000124D0; /* jbe: below or equal (unsigned <=) */

loc_000124AD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000124B0: ;
    eax = MEM32(esi + 0x30);
    MEM8(eax + edx + 0xA4) = MEM8(eax + edx + 0xA4) | 2;
    _fa = (uint32_t)(MEM8(eax + edx + 0xA4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = eax + edx + 0xA4;
    eax = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000124B0; /* jb: below (unsigned <) */

loc_000124D0: ;
    SET_LO8(eax, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000124E7; /* je: equal / zero */

loc_000124D9: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000124E7; /* je: equal / zero */

loc_000124E2: ;
    PUSH32(esp, 0x000124E7u); RECOMP_ABI_CALL(0x000CB360u, sub_000CB360); /* call 0x000CB360 */

loc_000124E7: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001255E; /* jne: not equal / not zero */

loc_000124F0: ;
    SET_LO8(eax, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001255E; /* jne: not equal / not zero */

loc_000124F9: ;
    eax = MEM32(0x64D204);
    MEM32(eax) = ebx;
    MEM32(eax + 8) = ebx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ecx;
    edx = 6;
    MEM32(eax + 4) = edx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(0x64D208);
    MEM32(eax) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x3C) = ebx;
    ebx = MEM32(0x64D20C);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x40) = ecx;
    PUSH32(esp, 0x0001255Cu); RECOMP_ABI_CALL(0x000279A0u, sub_000279A0); /* call 0x000279A0 */

loc_0001255C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001255E: ;
    xmm0 = XMM_SCALAR(MEMF(0x33A1E0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x33A1E8)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x33A1E4); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(0x33A1E4) = xmm2.f[0]; /* movss */
    MEMF(0x33A1E8) = xmm1.f[0]; /* movss */
    MEMF(0x33A1E0) = xmm0.f[0]; /* movss */
    MEMF(0x33A1EC) = xmm0.f[0]; /* movss */
    MEM32(0x64CFBC) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2008) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2008;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000125C1: ;
    PUSH32(esp, 0x322FB0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000125D0u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_000125D0: ;
    PUSH32(esp, 0x334D7C);
    edx = esp + 0x101C;
    ecx = 0x400;
    esi = esp + 0x1C;
    edi = esp + 0x101C;
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
    PUSH32(esp, 0x000125F4u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000125F4: ;
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
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012611; /* je: equal / zero */

loc_00012606: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012611; /* jne: not equal / not zero */

loc_0001260B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00012611u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001260Fu); } /* indirect call */
    }

loc_00012611: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012327
 * Original: 0x00012327 - 0x00012612 (747 bytes, 230 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012327(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012327: ;
    if (_flags /* je: equal / zero */) goto loc_00012345;

loc_00012329: ;
    ecx = edi;
    PUSH32(esp, 0x00012330u); RECOMP_ABI_CALL(0x00011D60u, sub_00011D60); /* call 0x00011D60 */

loc_00012330: ;
    _fa = (uint32_t)(MEM32(esp + 0x201C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x201C), 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012345; /* jne: not equal / not zero */

loc_0001233A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012345; /* je: equal / zero */

loc_0001233E: ;
    MEM32(edi + 4) = MEM32(edi + 4) | 0x4000000;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00012345: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00012301(); return; } /* jb: below (unsigned <) */

loc_00012350: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000123C5; /* jbe: below or equal (unsigned <=) */

loc_00012356: ;
    goto loc_00012360;

    /* nop */
    /* nop */

loc_00012360: ;
    edx = MEM32(esp + 0x10);
    ebx = MEM32(edx + edi * 4);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000123BA; /* je: equal / zero */

loc_0001236F: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000123BA; /* jae: above or equal (unsigned >=) */

loc_00012379: ;
    /* nop */

loc_00012380: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001238D; /* je: equal / zero */

loc_00012384: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012380; /* jb: below (unsigned <) */

loc_0001238B: ;
    goto loc_000123BA;

loc_0001238D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012393u); RECOMP_ABI_CALL(0x00021A40u, sub_00021A40); /* call 0x00021A40 */

loc_00012393: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0001239Du); RECOMP_ABI_CALL(0x00026540u, sub_00026540); /* call 0x00026540 */

loc_0001239D: ;
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123B1; /* je: equal / zero */

loc_000123A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123B1; /* je: equal / zero */

loc_000123A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000123AEu); RECOMP_ABI_CALL(0x00021A40u, sub_00021A40); /* call 0x00021A40 */

loc_000123AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000123B1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000123B7u); RECOMP_ABI_CALL(0x0001B360u, sub_0001B360); /* call 0x0001B360 */

loc_000123B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000123BA: ;
    eax = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012360; /* jb: below (unsigned <) */

loc_000123C3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000123C5: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x000123CEu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000123CE: ;
    edx = MEM32(eax);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000123D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000123D5u); } /* indirect call */
    }

loc_000123D8: ;
    edi = esi;
    PUSH32(esp, 0x000123DFu); RECOMP_ABI_CALL(0x0001CC80u, sub_0001CC80); /* call 0x0001CC80 */

loc_000123DF: ;
    eax = MEM32(esi + 0x1C0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012414; /* je: equal / zero */

loc_000123EB: ;
    goto loc_000123F0;

    /* nop */

loc_000123F0: ;
    eax = MEM32(esi + 0x1C0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00012414; /* jae: above or equal (unsigned >=) */

loc_000123FB: ;
    edx = MEM32(eax);
    eax = MEM32(edx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012409; /* je: equal / zero */

loc_00012404: ;
    PUSH32(esp, 0x00012409u); RECOMP_ABI_CALL(0x00025050u, sub_00025050); /* call 0x00025050 */

loc_00012409: ;
    eax = MEM32(esi + 0x1C0);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000123F0; /* jne: not equal / not zero */

loc_00012414: ;
    edi = MEM32(esp + 0x201C);
    eax = esi + 0x424;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012428u); RECOMP_ABI_CALL(0x00088DA0u, sub_00088DA0); /* call 0x00088DA0 */

loc_00012428: ;
    ecx = esi + 0x428;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012435u); RECOMP_ABI_CALL(0x00088DA0u, sub_00088DA0); /* call 0x00088DA0 */

loc_00012435: ;
    edx = esi + 0x42C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012442u); RECOMP_ABI_CALL(0x00088DA0u, sub_00088DA0); /* call 0x00088DA0 */

loc_00012442: ;
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012489; /* je: equal / zero */

loc_0001244C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx) = LO16(ebx);
    ecx = 0x400;
    edi = edx + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3FF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(edx + 0x10);
    ecx = 0x3FF0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0xC) = 1;

loc_00012489: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337C4)); /* movss */
    MEM32(esi + 0x430) = ebx;
    MEMF(0x343DDC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000124A4u); RECOMP_ABI_CALL(0x000BE3F0u, sub_000BE3F0); /* call 0x000BE3F0 */

loc_000124A4: ;
    eax = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000124D0; /* jbe: below or equal (unsigned <=) */

loc_000124AD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000124B0: ;
    eax = MEM32(esi + 0x30);
    MEM8(eax + edx + 0xA4) = MEM8(eax + edx + 0xA4) | 2;
    _fa = (uint32_t)(MEM8(eax + edx + 0xA4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = eax + edx + 0xA4;
    eax = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xD0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000124B0; /* jb: below (unsigned <) */

loc_000124D0: ;
    SET_LO8(eax, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000124E7; /* je: equal / zero */

loc_000124D9: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000124E7; /* je: equal / zero */

loc_000124E2: ;
    PUSH32(esp, 0x000124E7u); RECOMP_ABI_CALL(0x000CB360u, sub_000CB360); /* call 0x000CB360 */

loc_000124E7: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001255E; /* jne: not equal / not zero */

loc_000124F0: ;
    SET_LO8(eax, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001255E; /* jne: not equal / not zero */

loc_000124F9: ;
    eax = MEM32(0x64D204);
    MEM32(eax) = ebx;
    MEM32(eax + 8) = ebx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ecx;
    edx = 6;
    MEM32(eax + 4) = edx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(0x64D208);
    MEM32(eax) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x3C) = ebx;
    ebx = MEM32(0x64D20C);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x40) = ecx;
    PUSH32(esp, 0x0001255Cu); RECOMP_ABI_CALL(0x000279A0u, sub_000279A0); /* call 0x000279A0 */

loc_0001255C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001255E: ;
    xmm0 = XMM_SCALAR(MEMF(0x33A1E0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x33A1E8)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x33A1E4); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(0x33A1E4) = xmm2.f[0]; /* movss */
    MEMF(0x33A1E8) = xmm1.f[0]; /* movss */
    MEMF(0x33A1E0) = xmm0.f[0]; /* movss */
    MEMF(0x33A1EC) = xmm0.f[0]; /* movss */
    MEM32(0x64CFBC) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2008) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2008;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    PUSH32(esp, 0x334D7C);
    edx = esp + 0x101C;
    ecx = 0x400;
    esi = esp + 0x1C;
    edi = esp + 0x101C;
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
    PUSH32(esp, 0x000125F4u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000125F4: ;
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
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012611; /* je: equal / zero */

loc_00012606: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012611; /* jne: not equal / not zero */

loc_0001260B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00012611u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001260Fu); } /* indirect call */
    }

loc_00012611: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012579
 * Original: 0x00012579 - 0x00012612 (153 bytes, 49 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012579(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012579: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x33A1E4); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(0x33A1E4) = xmm2.f[0]; /* movss */
    MEMF(0x33A1E8) = xmm1.f[0]; /* movss */
    MEMF(0x33A1E0) = xmm0.f[0]; /* movss */
    MEMF(0x33A1EC) = xmm0.f[0]; /* movss */
    MEM32(0x64CFBC) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2008) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2008;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    PUSH32(esp, 0x334D7C);
    edx = esp + 0x101C;
    ecx = 0x400;
    esi = esp + 0x1C;
    edi = esp + 0x101C;
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
    PUSH32(esp, 0x000125F4u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000125F4: ;
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
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012611; /* je: equal / zero */

loc_00012606: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012611; /* jne: not equal / not zero */

loc_0001260B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00012611u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001260Fu); } /* indirect call */
    }

loc_00012611: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012600
 * Original: 0x00012600 - 0x00012612 (18 bytes, 9 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012600: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012611; /* je: equal / zero */

loc_00012606: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012611; /* jne: not equal / not zero */

loc_0001260B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00012611u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001260Fu); } /* indirect call */
    }

loc_00012611: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012620
 * Original: 0x00012620 - 0x00012674 (84 bytes, 33 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012620: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001265D; /* je: equal / zero */

loc_00012628: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012648; /* je: equal / zero */

loc_00012630: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012641; /* je: equal / zero */

loc_00012636: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012641; /* jne: not equal / not zero */

loc_0001263B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00012641u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001263Fu); } /* indirect call */
    }

loc_00012641: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012630; /* jne: not equal / not zero */

loc_00012648: ;
    edi = MEM32(ebx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001265C; /* je: equal / zero */

loc_0001264F: ;
    PUSH32(esp, 0x00012654u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00012654: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001265Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012659u); } /* indirect call */
    }

loc_0001265C: ;
    POP32(esp, edi);

loc_0001265D: ;
    MEM32(ebx + 4) = 0;
    MEM32(ebx + 8) = 0;
    MEM32(ebx + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001264B
 * Original: 0x0001264B - 0x00012674 (41 bytes, 13 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001264B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001264B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001265C; /* je: equal / zero */

loc_0001264F: ;
    PUSH32(esp, 0x00012654u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00012654: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001265Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012659u); } /* indirect call */
    }

loc_0001265C: ;
    POP32(esp, edi);
    MEM32(ebx + 4) = 0;
    MEM32(ebx + 8) = 0;
    MEM32(ebx + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012680
 * Original: 0x00012680 - 0x000126A1 (33 bytes, 17 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012680: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001269F; /* je: equal / zero */

loc_00012687: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012698; /* je: equal / zero */

loc_0001268D: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012698; /* jne: not equal / not zero */

loc_00012692: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00012698u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012696u); } /* indirect call */
    }

loc_00012698: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012687; /* jne: not equal / not zero */

loc_0001269F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000126B0
 * Original: 0x000126B0 - 0x000126C3 (19 bytes, 9 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000126B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000126B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000126BD; /* je: equal / zero */

loc_000126B4: ;
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000126BD; /* je: equal / zero */

loc_000126BA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000126BD: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000126D0
 * Original: 0x000126D0 - 0x00012709 (57 bytes, 18 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000126D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000126D0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx * 4 + 0x64CF78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012708; /* jne: not equal / not zero */

loc_000126DF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000126E8; /* jne: not equal / not zero */

loc_000126E3: ;
    g_seh_ebp = ebp; sub_00272E30(); return; /* tail jmp 0x00272E30 */

loc_000126E8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000126F2; /* jne: not equal / not zero */

loc_000126ED: ;
    g_seh_ebp = ebp; sub_00272ED0(); return; /* tail jmp 0x00272ED0 */

loc_000126F2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000126FC; /* jne: not equal / not zero */

loc_000126F7: ;
    g_seh_ebp = ebp; sub_00272F80(); return; /* tail jmp 0x00272F80 */

loc_000126FC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012706; /* jne: not equal / not zero */

loc_00012701: ;
    g_seh_ebp = ebp; sub_00273050(); return; /* tail jmp 0x00273050 */

loc_00012706: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012708: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000126E3
 * Original: 0x000126E3 - 0x00012709 (38 bytes, 12 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000126E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000126E3: ;
    g_seh_ebp = ebp; sub_00272E30(); return; /* tail jmp 0x00272E30 */

    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000126F2; /* jne: not equal / not zero */

loc_000126ED: ;
    g_seh_ebp = ebp; sub_00272ED0(); return; /* tail jmp 0x00272ED0 */

loc_000126F2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000126FC; /* jne: not equal / not zero */

loc_000126F7: ;
    g_seh_ebp = ebp; sub_00272F80(); return; /* tail jmp 0x00272F80 */

loc_000126FC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012706; /* jne: not equal / not zero */

loc_00012701: ;
    g_seh_ebp = ebp; sub_00273050(); return; /* tail jmp 0x00273050 */

loc_00012706: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001270E
 * Original: 0x0001270E - 0x00012710 (2 bytes, 2 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001270E(void)
{

loc_0001270E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00012710
 * Original: 0x00012710 - 0x0001271F (15 bytes, 5 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012710: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001271E; /* jne: not equal / not zero */

loc_00012719: ;
    g_seh_ebp = ebp; sub_00272F80(); return; /* tail jmp 0x00272F80 */

loc_0001271E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012720
 * Original: 0x00012720 - 0x00012775 (85 bytes, 29 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00012720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x2000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012730u); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_00012730: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00012738u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012735u); } /* indirect call */
    }

loc_00012738: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001276F; /* jne: not equal / not zero */

loc_0001273C: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001274Bu); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_0001274B: ;
    ecx = 0x400;
    esi = esp + 8;
    edi = esp + 0x1008;
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
    ecx = esp + 0x100C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001276Fu); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0001276F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00012780
 * Original: 0x00012780 - 0x00012821 (161 bytes, 58 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012780: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x34A75C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0001281E; /* je: equal / zero */

loc_00012792: ;
    eax = MEM32(esi + 0x488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000127ED; /* je: equal / zero */

loc_0001279C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000127ED; /* jne: not equal / not zero */

loc_000127A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0x64EDF0;
    eax = edi + 0x184;
    /* nop */

loc_000127B0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(ebp));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000127D9; /* jne: not equal / not zero */

loc_000127BB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000127D5; /* je: equal / zero */

loc_000127BF: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(ebp + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000127D9; /* jne: not equal / not zero */

loc_000127CB: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(2)) >> 32) & 1);
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000127B0; /* jne: not equal / not zero */

loc_000127D5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000127DE;

loc_000127D9: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000127DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000127ED; /* jne: not equal / not zero */

loc_000127E4: ;
    eax = MEM32(0x64D004);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001281E; /* je: equal / zero */

loc_000127ED: ;
    eax = edi + 0x184;
    edx = 0x64EDF0;
    MEM32(0x64D004) = 0;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00012804: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00012804; /* jne: not equal / not zero */

loc_0001280E: ;
    PUSH32(esp, 0x00012813u); RECOMP_ABI_CALL(0x00088BF0u, sub_00088BF0); /* call 0x00088BF0 */

loc_00012813: ;
    eax = MEM32(0x34A75C);
    MEM32(esi + 0x488) = eax;

loc_0001281E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012830
 * Original: 0x00012830 - 0x00012A54 (548 bytes, 132 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012830(void)
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

loc_00012830: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0x00012840u); RECOMP_ABI_CALL(0x00012780u, sub_00012780); /* call 0x00012780 */

loc_00012840: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00012846u); RECOMP_ABI_CALL(0x00087EA0u, sub_00087EA0); /* call 0x00087EA0 */

loc_00012846: ;
    eax = MEM32(0x34A75C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x488) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00012870; /* je: equal / zero */

loc_00012858: ;
    ecx = MEM32(eax + 0x30);
    MEM32(ecx + 0xA8) = ebx;
    edx = MEM32(ebx + 0x488);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001286Du); RECOMP_ABI_CALL(0x00028810u, sub_00028810); /* call 0x00028810 */

loc_0001286D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012870: ;
    eax = MEM32(0x64D010);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012A06; /* je: equal / zero */

loc_0001287D: ;
    PUSH32(esp, 0x00012882u); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_00012882: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x34A77C)); /* fsub dword ptr [0x34a77c] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x36A510);
    MEM32(0x64D29C) = ebx;
    MEMF(0x34A77C) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebx + 0x24); PUSH32(esp, 0x0001289Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00012899u); } /* indirect call */
    }

loc_0001289C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x49A920);
    { uint32_t _icall_target = MEM32(ebx + 0x20); PUSH32(esp, 0x000128A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000128A4u); } /* indirect call */
    }

loc_000128A7: ;
    xmm1 = XMM_SCALAR(MEMF(0x34A77C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x1C;
    MEM32(esp + 0xC) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x334104); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x24;
    edx = esp + 0x30;
    eax = esp + 0x3C;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    MEMF(0x34A77C) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00012A06; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000128FC: ;
    goto loc_00012910;

loc_000128FE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    /* nop */

loc_00012910: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(0x3337B4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x333ABC)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    xmm6 = xmm2; /* movaps */
    if ((_fca > _fcb)) goto loc_0001295E; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_0001295B: ;
    xmm6 = xmm1; /* movaps */

loc_0001295E: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    xmm5 = xmm2; /* movaps */
    if ((_fca > _fcb)) goto loc_00012980; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_0001297D: ;
    xmm5 = xmm1; /* movaps */

loc_00012980: ;
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    eax = esi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333FC0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(0x34A77C) = xmm1.f[0]; /* movss */
    if ((_fa == 0)) goto loc_000129DC; /* je: equal / zero */

loc_000129BB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000129D3; /* je: equal / zero */

loc_000129BE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000129CA; /* je: equal / zero */

loc_000129C1: ;
    MEM32(ebx + 0x78) = 0xFFFFFFFFu;
    goto loc_000129E3;

loc_000129CA: ;
    MEM32(ebx + 0x78) = 0xFF0000FFu;
    goto loc_000129E3;

loc_000129D3: ;
    MEM32(ebx + 0x78) = 0xFF00FF00u;
    goto loc_000129E3;

loc_000129DC: ;
    MEM32(ebx + 0x78) = 0xFFFF0000u;

loc_000129E3: ;
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(ebx + 0x2C); PUSH32(esp, 0x000129EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000129EAu); } /* indirect call */
    }

loc_000129ED: ;
    xmm1 = XMM_SCALAR(MEMF(0x34A77C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fca = xmm1.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca > _fcb)) goto loc_000128FE; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(0x3337C0)) */

loc_00012A06: ;
    _fa = (uint32_t)(MEM32(ebx + 0x47C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0x47C), 0x20000000 (32-bit) */
    MEM32(0x64D29C) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00012A2D; /* je: equal / zero */

loc_00012A18: ;
    eax = MEM32(ebx + 0x488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012A2D; /* je: equal / zero */

loc_00012A22: ;
    eax = MEM32(eax + 0x424);
    PUSH32(esp, 0x00012A2Du); RECOMP_ABI_CALL(0x000893D0u, sub_000893D0); /* call 0x000893D0 */

loc_00012A2D: ;
    eax = MEM32(ebx + 0x47C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200080) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200080 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012A43; /* jne: not equal / not zero */

loc_00012A3A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebx + 0x1C); PUSH32(esp, 0x00012A3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012A3Au); } /* indirect call */
    }

loc_00012A3D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00012A43: ;
    eax = eax & 0xFFDFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    MEM32(ebx + 0x47C) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012A60
 * Original: 0x00012A60 - 0x00012AEB (139 bytes, 38 insns)
 * Folder: main (between: 0x00011159 and 0x00012AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012A60: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x34AC5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(0x64CFC8) = 0x12830;
    MEM32(0x64CFC0) = 0xBE3E0;
    if (CMP_EQ(_fa, _fb)) goto loc_00012AE7; /* je: equal / zero */

loc_00012A80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFE (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012AD0; /* je: equal / zero */

loc_00012A84: ;
    ebx = MEM32(0x34AC3C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 1);
    MEM32(0x64D850) = eax;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = eax;
    MEM32(0x64D85C) = eax;
    MEM32(0x64D860) = eax;
    PUSH32(esp, 0x00012AACu); RECOMP_ABI_CALL(0x000F8F90u, sub_000F8F90); /* call 0x000F8F90 */

loc_00012AAC: ;
    eax = ZX8(MEM8(0x34AC5C));
    ecx = MEM32(0x34A75C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012AC2u); RECOMP_ABI_CALL(0x000121D0u, sub_000121D0); /* call 0x000121D0 */

loc_00012AC2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x34AC5C) = 0xFF;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00012AD0: ;
    PUSH32(esp, 0x00012AD5u); RECOMP_ABI_CALL(0x000F8060u, sub_000F8060); /* call 0x000F8060 */

loc_00012AD5: ;
    esi = MEM32(0x493500);
    PUSH32(esp, 0x00012AE0u); RECOMP_ABI_CALL(0x00012E50u, sub_00012E50); /* call 0x00012E50 */

loc_00012AE0: ;
    MEM8(0x34AC5C) = 0xFF;

loc_00012AE7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00012AF0
 * Original: 0x00012AF0 - 0x00012CFD (525 bytes, 153 insns)
 * Folder: main (string: e3_trail.int)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012AF0(void)
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

loc_00012AF0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D010);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00012B07; /* je: equal / zero */

loc_00012AFC: ;
    PUSH32(esp, 0x00012B01u); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_00012B01: ;
    MEMF(0x34A77C) = (float)fp_top(); fp_pop(); /* fstp */

loc_00012B07: ;
    PUSH32(esp, 0x00012B0Cu); RECOMP_ABI_CALL(0x000BE270u, sub_000BE270); /* call 0x000BE270 */

loc_00012B0C: ;
    eax = MEM32(0x64D008);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B1A; /* je: equal / zero */

loc_00012B15: ;
    PUSH32(esp, 0x00012B1Au); RECOMP_ABI_CALL(0x00012D70u, sub_00012D70); /* call 0x00012D70 */

loc_00012B1A: ;
    eax = MEM32(0x64CFC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D008) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00012B2F; /* je: equal / zero */

loc_00012B2D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00012B2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B2Du); } /* indirect call */
    }

loc_00012B2F: ;
    PUSH32(esp, 0x00012B34u); RECOMP_ABI_CALL(0x000C0C70u, sub_000C0C70); /* call 0x000C0C70 */

loc_00012B34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B43; /* je: equal / zero */

loc_00012B38: ;
    PUSH32(esp, 0x00012B3Du); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_00012B3D: ;
    MEMF(0x34A76C) = (float)fp_top(); fp_pop(); /* fstp */

loc_00012B43: ;
    eax = MEM32(0x64D018);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00012BDC; /* jne: not equal / not zero */

loc_00012B55: ;
    _fa = (uint32_t)(MEM16(0x34A770)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A770), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012BDC; /* jne: not equal / not zero */

loc_00012B5F: ;
    PUSH32(esp, 0x00012B64u); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_00012B64: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x34A76C)); /* fsub dword ptr [0x34a76c] */
    eax = ZX16(MEM16(0x33A1F8));
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_00012B94; /* jb: below (unsigned <) */

loc_00012B81: ;
    eax = MEM32(0x64D1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012BDC; /* jne: not equal / not zero */

loc_00012B8A: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x322C54);
    goto loc_00012BD4;

loc_00012B94: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(0x33A200); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00012BDC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x33A200)) */

loc_00012BA0: ;
    PUSH32(esp, 0x00012BA5u); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_00012BA5: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x64D014)); /* fsub dword ptr [0x64d014] */
    ecx = ZX16(MEM16(0x33A1FC));
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_00012BDC; /* jb: below (unsigned <) */

loc_00012BC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    MEM32(0x64D018) = 2;
    PUSH32(esp, 0x322FCC);

loc_00012BD4: ;
    PUSH32(esp, 0x00012BD9u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00012BD9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012BDC: ;
    eax = MEM32(0x64D020);
    edi = MEM32(0x64D1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0x64DA54);
    if (CMP_EQ(_fa, _fb)) goto loc_00012BFB; /* je: equal / zero */

loc_00012BF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012C09; /* jne: not equal / not zero */

loc_00012BF4: ;
    PUSH32(esp, 0x00012BF9u); RECOMP_ABI_CALL(0x00013B80u, sub_00013B80); /* call 0x00013B80 */

loc_00012BF9: ;
    goto loc_00012C55;

loc_00012BFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012C09; /* jne: not equal / not zero */

loc_00012BFF: ;
    eax = 0x64DA54;
    PUSH32(esp, 0x00012C09u); RECOMP_ABI_CALL(0x000EEA50u, sub_000EEA50); /* call 0x000EEA50 */

loc_00012C09: ;
    PUSH32(esp, 0x00012C0Eu); RECOMP_ABI_CALL(0x00017CB0u, sub_00017CB0); /* call 0x00017CB0 */

loc_00012C0E: ;
    _fa = (uint32_t)(MEM8(edi + 0x170)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x170), 0x1A (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012C40; /* jne: not equal / not zero */

loc_00012C17: ;
    eax = MEM32(edi + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C40; /* je: equal / zero */

loc_00012C21: ;
    edx = MEM32(edi + eax * 4 + 0x6C);
    edi = MEM32(edx + 0x80);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012C55; /* jne: not equal / not zero */

loc_00012C40: ;
    eax = MEM32(0x64CFC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C55; /* je: equal / zero */

loc_00012C49: ;
    ecx = MEM32(0x64CFD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012C55; /* jne: not equal / not zero */

loc_00012C53: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00012C55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012C53u); } /* indirect call */
    }

loc_00012C55: ;
    eax = MEM32(0x64CFC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C7F; /* je: equal / zero */

loc_00012C5E: ;
    ecx = MEM32(0x34A760);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C7F; /* je: equal / zero */

loc_00012C68: ;
    edx = MEM32(0x64D020);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012C7F; /* jne: not equal / not zero */

loc_00012C72: ;
    edx = MEM32(0x34A758);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00012C7Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00012C7Au); } /* indirect call */
    }

loc_00012C7C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012C7F: ;
    eax = MEM32(0x64D1DC);
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012C8F; /* jne: not equal / not zero */

loc_00012C89: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C8Fu); RECOMP_ABI_CALL(0x000151E0u, sub_000151E0); /* call 0x000151E0 */

loc_00012C8F: ;
    eax = MEM32(0x34A760);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012CE5; /* je: equal / zero */

loc_00012C98: ;
    eax = MEM32(0x64D020);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012CE5; /* jne: not equal / not zero */

loc_00012CA1: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012CD1; /* jne: not equal / not zero */

loc_00012CA9: ;
    SET_LO8(eax, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012CD1; /* jne: not equal / not zero */

loc_00012CB2: ;
    eax = MEM32(0x64D204);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012CBDu); RECOMP_ABI_CALL(0x00027540u, sub_00027540); /* call 0x00027540 */

loc_00012CBD: ;
    eax = MEM32(0x64D20C);
    PUSH32(esp, 0x00012CC7u); RECOMP_ABI_CALL(0x000279F0u, sub_000279F0); /* call 0x000279F0 */

loc_00012CC7: ;
    PUSH32(esp, 0x00012CCCu); RECOMP_ABI_CALL(0x000C7A40u, sub_000C7A40); /* call 0x000C7A40 */

loc_00012CCC: ;
    PUSH32(esp, 0x00012CD1u); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00012CD1: ;
    ecx = MEM32(0x34A760);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012CDDu); RECOMP_ABI_CALL(0x0008B720u, sub_0008B720); /* call 0x0008B720 */

loc_00012CDD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012CE5u); RECOMP_ABI_CALL(0x0008B930u, sub_0008B930); /* call 0x0008B930 */

loc_00012CE5: ;
    eax = MEM32(0x614FCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012CF9; /* je: equal / zero */

loc_00012CEE: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0x00012CF6u); RECOMP_ABI_CALL(0x00028FD0u, sub_00028FD0); /* call 0x00028FD0 */

loc_00012CF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012CF9: ;
    POP32(esp, edi);
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
 * sub_00012D00
 * Original: 0x00012D00 - 0x00012D68 (104 bytes, 28 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00012D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012D00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64CFE0) = 1;
    MEM32(0x64CFCC) = ebx;
    MEM32(0x64CFD0) = ebx;
    MEM32(0x64CFD4) = ebx;

loc_00012D26: ;
    _fa = (uint32_t)(MEM32(0x64CFCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64CFCC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012D42; /* jne: not equal / not zero */

loc_00012D2E: ;
    _fa = (uint32_t)(MEM32(0x64CFD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64CFD0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012D42; /* jne: not equal / not zero */

loc_00012D36: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012D3Bu); RECOMP_ABI_CALL(0x00012A60u, sub_00012A60); /* call 0x00012A60 */

loc_00012D3B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012D40u); RECOMP_ABI_CALL(0x00012AF0u, sub_00012AF0); /* call 0x00012AF0 */

loc_00012D40: ;
    goto loc_00012D26;

loc_00012D42: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012D58; /* je: equal / zero */

loc_00012D4A: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012D58; /* je: equal / zero */

loc_00012D53: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012D58u); RECOMP_ABI_CALL(0x000CB360u, sub_000CB360); /* call 0x000CB360 */

loc_00012D58: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012D5Du); RECOMP_ABI_CALL(0x00108250u, sub_00108250); /* call 0x00108250 */

loc_00012D5D: ;
    MEM32(0x64CFE0) = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00012D70
 * Original: 0x00012D70 - 0x00012DF6 (134 bytes, 46 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012D70: ;
    eax = MEM32(0x64D1DC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012D7Eu); RECOMP_ABI_CALL(0x00016B60u, sub_00016B60); /* call 0x00016B60 */

loc_00012D7E: ;
    ebx = MEM32(0x34AC3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00012D8Bu); RECOMP_ABI_CALL(0x000F8F90u, sub_000F8F90); /* call 0x000F8F90 */

loc_00012D8B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012D93u); RECOMP_ABI_CALL(0x00108250u, sub_00108250); /* call 0x00108250 */

loc_00012D93: ;
    edi = MEM32(0x34AC44);
    ecx = MEM32(0x64D1F8);
    esi = MEM32(0x34AC50);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFF8u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(0x64D1F8) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00012DD4; /* ja: above (unsigned >) */

loc_00012DB3: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012DCD; /* je: equal / zero */

loc_00012DB9: ;
    edx = ecx;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012DCD; /* je: equal / zero */

loc_00012DC3: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x00012DCAu); RECOMP_ABI_CALL(0x000121D0u, sub_000121D0); /* call 0x000121D0 */

loc_00012DCA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012DCD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00012DB3; /* jbe: below or equal (unsigned <=) */

loc_00012DD4: ;
    ecx = MEM32(0x64D1F8);
    eax = MEM32(0x64CFE0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D1F8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00012DF2; /* je: equal / zero */

loc_00012DEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00011BD0(); return; /* tail jmp 0x00011BD0 */

loc_00012DF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00012DB5
 * Original: 0x00012DB5 - 0x00012DF6 (65 bytes, 26 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012DB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012DB5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012DCD; /* je: equal / zero */

loc_00012DB9: ;
    edx = ecx;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012DCD; /* je: equal / zero */

loc_00012DC3: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x00012DCAu); RECOMP_ABI_CALL(0x000121D0u, sub_000121D0); /* call 0x000121D0 */

loc_00012DCA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012DCD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00012DB3(); return; } /* jbe: below or equal (unsigned <=) */

loc_00012DD4: ;
    ecx = MEM32(0x64D1F8);
    eax = MEM32(0x64CFE0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D1F8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00012DF2; /* je: equal / zero */

loc_00012DEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00011BD0(); return; /* tail jmp 0x00011BD0 */

loc_00012DF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00012E00
 * Original: 0x00012E00 - 0x00012E50 (80 bytes, 22 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012E00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00012E07u); RECOMP_ABI_CALL(0x00012E90u, sub_00012E90); /* call 0x00012E90 */

loc_00012E07: ;
    edi = MEM32(0x34AC50);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012E26; /* je: equal / zero */

loc_00012E13: ;
    PUSH32(esp, 0x00012E18u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00012E18: ;
    ecx = MEM32(0x34AC50);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00012E26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012E23u); } /* indirect call */
    }

loc_00012E26: ;
    POP32(esp, edi);
    MEM32(0x34AC50) = esi;
    MEM32(0x34AC4C) = esi;
    MEM32(0x34AC48) = esi;
    MEM32(0x34AC44) = esi;
    MEM32(0x34AC40) = esi;
    eax = 0x34AC40;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000BF5F0(); return; /* tail jmp 0x000BF5F0 */

}

/**
 * sub_00012E50
 * Original: 0x00012E50 - 0x00012E90 (64 bytes, 15 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012E50: ;
    PUSH32(esp, 0x00012E55u); RECOMP_ABI_CALL(0x00012E90u, sub_00012E90); /* call 0x00012E90 */

loc_00012E55: ;
    PUSH32(esp, 0x00012E5Au); RECOMP_ABI_CALL(0x00029470u, sub_00029470); /* call 0x00029470 */

loc_00012E5A: ;
    MEM32(0x64D21C) = eax;
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0x00012E68u); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_00012E68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012E7F; /* jne: not equal / not zero */

loc_00012E70: ;
    MEM32(0x34AC3C) = 0;
    g_seh_ebp = ebp; sub_000BD960(); return; /* tail jmp 0x000BD960 */

loc_00012E7F: ;
    eax = esi;
    PUSH32(esp, 0x00012E86u); RECOMP_ABI_CALL(0x0010A820u, sub_0010A820); /* call 0x0010A820 */

loc_00012E86: ;
    MEM32(0x34AC3C) = eax;
    g_seh_ebp = ebp; sub_000BD960(); return; /* tail jmp 0x000BD960 */

}

/**
 * sub_00012E90
 * Original: 0x00012E90 - 0x00012EE3 (83 bytes, 26 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012E90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00012E98u); RECOMP_ABI_CALL(0x0002A5A0u, sub_0002A5A0); /* call 0x0002A5A0 */

loc_00012E98: ;
    ebx = MEM32(0x34AC3C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012EAF; /* je: equal / zero */

loc_00012EA4: ;
    PUSH32(esp, 0x00012EA9u); RECOMP_ABI_CALL(0x000F8350u, sub_000F8350); /* call 0x000F8350 */

loc_00012EA9: ;
    MEM32(0x34AC3C) = esi;

loc_00012EAF: ;
    edi = MEM32(0x64D868);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012ED2; /* je: equal / zero */

loc_00012EB9: ;
    PUSH32(esp, 0x00012EBEu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00012EBE: ;
    ecx = MEM32(0x64D868);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00012ECCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012EC9u); } /* indirect call */
    }

loc_00012ECC: ;
    MEM32(0x64D868) = esi;

loc_00012ED2: ;
    POP32(esp, edi);
    MEM32(0x34A75C) = esi;
    POP32(esp, esi);
    MEM8(0x34AC5C) = 0xFE;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00012EE4
 * Original: 0x00012EE4 - 0x00012EE7 (3 bytes, 3 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012EE4(void)
{

loc_00012EE4: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00012EE7
 * Original: 0x00012EE7 - 0x00012EF0 (9 bytes, 9 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012EE7(void)
{

loc_00012EE7: ;
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

}

/**
 * sub_00012EF0
 * Original: 0x00012EF0 - 0x00012F47 (87 bytes, 35 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00012EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012EF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00012F41; /* je: equal / zero */

loc_00012F08: ;
    esi = MEM32(ecx + 0xC);
    ecx = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012F1E; /* je: equal / zero */

loc_00012F13: ;
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

loc_00012F1E: ;
    edi = eax + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012F2E; /* je: equal / zero */

loc_00012F25: ;
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

loc_00012F2E: ;
    edx = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012F41; /* je: equal / zero */

loc_00012F36: ;
    ecx = 0x14;
    esi = edx;
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

loc_00012F41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00012F50
 * Original: 0x00012F50 - 0x000130F2 (418 bytes, 115 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00012F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012F50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x2004;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012F60u); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_00012F60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00012F96; /* jbe: below or equal (unsigned <=) */

loc_00012F73: ;
    eax = MEM32(esi + 0x30);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00012F80;

    /* nop */

loc_00012F80: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012F92; /* je: equal / zero */

loc_00012F85: ;
    edx = MEM32(esi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012F80; /* jb: below (unsigned <) */

loc_00012F92: ;
    MEM32(esp + 0xC) = ebx;

loc_00012F96: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001301F; /* jb: below (unsigned <) */

loc_00012F9E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x64CF80);
    MEM32(esp + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00012FF7; /* jne: not equal / not zero */

loc_00012FAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012FB4; /* jne: not equal / not zero */

loc_00012FAF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012FB4u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00012FB4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00012FC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012FBDu); } /* indirect call */
    }

loc_00012FC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013015; /* jne: not equal / not zero */

loc_00012FC4: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012FD3u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_00012FD3: ;
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
    PUSH32(esp, 0x00012FF7u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_00012FF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013000; /* jne: not equal / not zero */

loc_00012FFB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00013000u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00013000: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 0x30);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD0);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00013015u); RECOMP_ABI_CALL(0x00013820u, sub_00013820); /* call 0x00013820 */

loc_00013015: ;
    ebx = MEM32(esp + 0xC);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0001301F: ;
    edx = MEM32(esi + 0x30);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xD0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x34;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    SET_LO8(ecx, MEM8(edx + 0xA4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49A920) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x49A920 (32-bit) */
    MEM8(edx + 0xA4) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0001305D; /* je: equal / zero */

loc_0001304C: ;
    ecx = 0x14;
    esi = 0x49A920;
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
    esi = MEM32(ebp + 8);

loc_0001305D: ;
    edi = edx + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49A920) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x49A920 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013077; /* je: equal / zero */

loc_00013068: ;
    ecx = 0x14;
    esi = 0x49A920;
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
    esi = MEM32(ebp + 8);

loc_00013077: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x34A644);
    MEM32(edx + 0xA0) = 0;
    MEM32(edx + 0xC0) = 0x12EF0;
    edx = MEM32(esi + 0x30);
    MEMF(ebx + edx + 0xAC) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x30);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0xB0) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xB4) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xBC) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x30);
    MEM32(ebx + eax + 0xA8) = ecx;
    esi = MEM32(esi + 0x30);
    edx = MEM32(esi + 0xAC);
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(esi + ebx + 0xAC) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00012F68
 * Original: 0x00012F68 - 0x000130F2 (394 bytes, 106 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012F68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012F68: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00012F96; /* jbe: below or equal (unsigned <=) */

loc_00012F73: ;
    eax = MEM32(esi + 0x30);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00012F80;

    /* nop */

loc_00012F80: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012F92; /* je: equal / zero */

loc_00012F85: ;
    edx = MEM32(esi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012F80; /* jb: below (unsigned <) */

loc_00012F92: ;
    MEM32(esp + 0xC) = ebx;

loc_00012F96: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001301F; /* jb: below (unsigned <) */

loc_00012F9E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x64CF80);
    MEM32(esp + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00012FF7; /* jne: not equal / not zero */

loc_00012FAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012FB4; /* jne: not equal / not zero */

loc_00012FAF: ;
    PUSH32(esp, 0x00012FB4u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00012FB4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00012FC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012FBDu); } /* indirect call */
    }

loc_00012FC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013015; /* jne: not equal / not zero */

loc_00012FC4: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012FD3u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_00012FD3: ;
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
    PUSH32(esp, 0x00012FF7u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_00012FF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013000; /* jne: not equal / not zero */

loc_00012FFB: ;
    PUSH32(esp, 0x00013000u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00013000: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 0x30);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00013015u); RECOMP_ABI_CALL(0x00013820u, sub_00013820); /* call 0x00013820 */

loc_00013015: ;
    ebx = MEM32(esp + 0xC);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0001301F: ;
    edx = MEM32(esi + 0x30);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xD0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x34;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    SET_LO8(ecx, MEM8(edx + 0xA4));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49A920) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x49A920 (32-bit) */
    MEM8(edx + 0xA4) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0001305D; /* je: equal / zero */

loc_0001304C: ;
    ecx = 0x14;
    esi = 0x49A920;
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
    esi = MEM32(ebp + 8);

loc_0001305D: ;
    edi = edx + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49A920) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x49A920 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013077; /* je: equal / zero */

loc_00013068: ;
    ecx = 0x14;
    esi = 0x49A920;
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
    esi = MEM32(ebp + 8);

loc_00013077: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x34A644);
    MEM32(edx + 0xA0) = 0;
    MEM32(edx + 0xC0) = 0x12EF0;
    edx = MEM32(esi + 0x30);
    MEMF(ebx + edx + 0xAC) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x30);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0xB0) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xB4) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xBC) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x30);
    MEM32(ebx + eax + 0xA8) = ecx;
    esi = MEM32(esi + 0x30);
    edx = MEM32(esi + 0xAC);
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(esi + ebx + 0xAC) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00013100
 * Original: 0x00013100 - 0x00013290 (400 bytes, 126 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00013100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x2004;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00013110u); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_00013110: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x24);
    ecx = MEM32(esi + 0x5C8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001314B; /* jbe: below or equal (unsigned <=) */

loc_00013124: ;
    edx = MEM32(esi + 0x5CC);
    /* nop */

loc_00013130: ;
    ebx = MEM32(edx);
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x30), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001321A; /* je: equal / zero */

loc_0001313B: ;
    ebx = MEM32(esi + 0x5C8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00013130; /* jb: below (unsigned <) */

loc_00013149: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */

loc_0001314B: ;
    eax = MEM32(0x64CF80);
    if (CMP_EQ(_fa, _fb)) goto loc_000131AE; /* je: equal / zero */

loc_00013152: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001315B; /* jne: not equal / not zero */

loc_00013156: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001315Bu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0001315B: ;
    ecx = MEM32(esi + 0x5C8);
    edx = MEM32(esi + 0x5CC);
    ebx = MEM32(eax);
    ecx = ecx * 4 + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(ebx + 0x10); PUSH32(esp, 0x00013177u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013174u); } /* indirect call */
    }

loc_00013177: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000131C8; /* jne: not equal / not zero */

loc_0001317B: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001318Au); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_0001318A: ;
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
    PUSH32(esp, 0x000131AEu); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000131AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000131B7; /* jne: not equal / not zero */

loc_000131B2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000131B7u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000131B7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000131C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000131BDu); } /* indirect call */
    }

loc_000131C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013254; /* je: equal / zero */

loc_000131C8: ;
    MEM32(esi + 0x5CC) = eax;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000131DC; /* jne: not equal / not zero */

loc_000131D7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000131DCu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000131DC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000131E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000131E5u); } /* indirect call */
    }

loc_000131E8: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013221; /* je: equal / zero */

loc_000131EE: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00013205u); RECOMP_ABI_CALL(0x0002C890u, sub_0002C890); /* call 0x0002C890 */

loc_00013205: ;
    ecx = MEM32(esi + 0x5C8);
    edx = MEM32(esi + 0x5CC);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 0x5C8) = MEM32(esi + 0x5C8) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x5C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0001321A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00013221: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0x1014;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00013233u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_00013233: ;
    ecx = 0x400;
    esi = esp + 0x1010;
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
    PUSH32(esp, 0x334D7C);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00013254u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_00013254: ;
    PUSH32(esp, 0x322FB0);
    edx = esp + 0x1014;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00013266u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_00013266: ;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00013287u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_00013287: ;
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

}

/**
 * sub_00013290
 * Original: 0x00013290 - 0x0001332B (155 bytes, 51 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013290: ;
    PUSH32(esp, ecx);
    eax = MEM32(ebx + 0x5C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013329; /* je: equal / zero */

loc_0001329F: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x5CC);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_000132F6; /* jbe: below or equal (unsigned <=) */

loc_000132B1: ;
    PUSH32(esp, esi);

loc_000132B2: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000132DF; /* je: equal / zero */

loc_000132B9: ;
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000132D0; /* je: equal / zero */

loc_000132C0: ;
    PUSH32(esp, 0x000132C5u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000132C5: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000132D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000132CDu); } /* indirect call */
    }

loc_000132D0: ;
    edi = esi;
    PUSH32(esp, 0x000132D7u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000132D7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000132DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000132DCu); } /* indirect call */
    }

loc_000132DF: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ebx + 0x5C8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000132B2; /* jb: below (unsigned <) */

loc_000132F5: ;
    POP32(esp, esi);

loc_000132F6: ;
    edi = MEM32(ebx + 0x5CC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001331D; /* je: equal / zero */

loc_00013300: ;
    PUSH32(esp, 0x00013305u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00013305: ;
    ecx = MEM32(ebx + 0x5CC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00013313u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013310u); } /* indirect call */
    }

loc_00013313: ;
    MEM32(ebx + 0x5CC) = 0;

loc_0001331D: ;
    POP32(esp, edi);
    MEM32(ebx + 0x5C8) = 0;
    POP32(esp, ebp);

loc_00013329: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000132D0
 * Original: 0x000132D0 - 0x0001332B (91 bytes, 29 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000132D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000132D0: ;
    edi = esi;
    PUSH32(esp, 0x000132D7u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000132D7: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000132DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000132DCu); } /* indirect call */
    }

loc_000132DF: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ebx + 0x5C8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_000132B2(); return; } /* jb: below (unsigned <) */

loc_000132F5: ;
    POP32(esp, esi);
    edi = MEM32(ebx + 0x5CC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001331D; /* je: equal / zero */

loc_00013300: ;
    PUSH32(esp, 0x00013305u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00013305: ;
    ecx = MEM32(ebx + 0x5CC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00013313u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013310u); } /* indirect call */
    }

loc_00013313: ;
    MEM32(ebx + 0x5CC) = 0;

loc_0001331D: ;
    POP32(esp, edi);
    MEM32(ebx + 0x5C8) = 0;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00013330
 * Original: 0x00013330 - 0x0001339C (108 bytes, 41 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013330: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013397; /* je: equal / zero */

loc_0001333A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00013340u); RECOMP_ABI_CALL(0x000134E0u, sub_000134E0); /* call 0x000134E0 */

loc_00013340: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001334F; /* je: equal / zero */

loc_00013347: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001334F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00013355u); RECOMP_ABI_CALL(0x000BDB60u, sub_000BDB60); /* call 0x000BDB60 */

loc_00013355: ;
    eax = MEM32(0x34A75C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013376; /* jne: not equal / not zero */

loc_00013361: ;
    eax = MEM32(0x34A760);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x34A75C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00013376; /* je: equal / zero */

loc_00013370: ;
    MEM32(eax + 0x488) = esi;

loc_00013376: ;
    PUSH32(esp, ebx);
    ebx = edi;
    PUSH32(esp, 0x0001337Eu); RECOMP_ABI_CALL(0x00013290u, sub_00013290); /* call 0x00013290 */

loc_0001337E: ;
    esi = edi + 0x5D0;
    PUSH32(esp, 0x00013389u); RECOMP_ABI_CALL(0x0002CA20u, sub_0002CA20); /* call 0x0002CA20 */

loc_00013389: ;
    PUSH32(esp, 0x0001338Eu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0001338E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00013396u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013393u); } /* indirect call */
    }

loc_00013396: ;
    POP32(esp, ebx);

loc_00013397: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001339F
 * Original: 0x0001339F - 0x000133A0 (1 bytes, 1 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001339F(void)
{

loc_0001339F: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000133A0
 * Original: 0x000133A0 - 0x00013465 (197 bytes, 56 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000133A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000133A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3DCCCCCD);
    ecx = edi + 0x10;
    MEM32(edi) = eax;
    PUSH32(esp, 0x000133B6u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_000133B6: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001342B; /* je: equal / zero */

loc_000133BF: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = edi + 0x48;
    eax = 0x3E8;
    PUSH32(esp, 0x000133D1u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_000133D1: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = edi + 0x64;
    eax = 0x64;
    MEM32(edi + 0x44) = 0x28280;
    MEM32(edi + 0x38) = ebx;
    MEM32(edi + 0x3C) = ebx;
    MEM32(edi + 0x40) = ebx;
    PUSH32(esp, 0x000133F3u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_000133F3: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = edi + 0x80;
    eax = 0x64;
    PUSH32(esp, 0x00013408u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_00013408: ;
    eax = MEM32(0x64CF80);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013419; /* jne: not equal / not zero */

loc_00013414: ;
    PUSH32(esp, 0x00013419u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00013419: ;
    edx = 0xFA00;
    ecx = eax;
    PUSH32(esp, 0x00013425u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00013425: ;
    MEM32(edi + 0x268) = eax;

loc_0001342B: ;
    PUSH32(esp, edi);
    MEM32(edi + 4) = ebx;
    MEM32(edi + 0x30) = ebx;
    PUSH32(esp, 0x00013437u); RECOMP_ABI_CALL(0x00012F50u, sub_00012F50); /* call 0x00012F50 */

loc_00013437: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013449; /* je: equal / zero */

loc_0001343E: ;
    esi = edi + 0x9C;
    PUSH32(esp, 0x00013449u); RECOMP_ABI_CALL(0x0002CB80u, sub_0002CB80); /* call 0x0002CB80 */

loc_00013449: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(edi + 0xC) = 1;
    MEM32(edi + 0x180) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00013461; /* je: equal / zero */

loc_0001345A: ;
    esi = edi;
    PUSH32(esp, 0x00013461u); RECOMP_ABI_CALL(0x000269C0u, sub_000269C0); /* call 0x000269C0 */

loc_00013461: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000133C7
 * Original: 0x000133C7 - 0x00013465 (158 bytes, 42 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000133C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000133C7: ;
    eax = 0x3E8;
    PUSH32(esp, 0x000133D1u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_000133D1: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = edi + 0x64;
    eax = 0x64;
    MEM32(edi + 0x44) = 0x28280;
    MEM32(edi + 0x38) = ebx;
    MEM32(edi + 0x3C) = ebx;
    MEM32(edi + 0x40) = ebx;
    PUSH32(esp, 0x000133F3u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_000133F3: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = edi + 0x80;
    eax = 0x64;
    PUSH32(esp, 0x00013408u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_00013408: ;
    eax = MEM32(0x64CF80);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013419; /* jne: not equal / not zero */

loc_00013414: ;
    PUSH32(esp, 0x00013419u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00013419: ;
    edx = 0xFA00;
    ecx = eax;
    PUSH32(esp, 0x00013425u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00013425: ;
    MEM32(edi + 0x268) = eax;
    PUSH32(esp, edi);
    MEM32(edi + 4) = ebx;
    MEM32(edi + 0x30) = ebx;
    PUSH32(esp, 0x00013437u); RECOMP_ABI_CALL(0x00012F50u, sub_00012F50); /* call 0x00012F50 */

loc_00013437: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013449; /* je: equal / zero */

loc_0001343E: ;
    esi = edi + 0x9C;
    PUSH32(esp, 0x00013449u); RECOMP_ABI_CALL(0x0002CB80u, sub_0002CB80); /* call 0x0002CB80 */

loc_00013449: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(edi + 0xC) = 1;
    MEM32(edi + 0x180) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00013461; /* je: equal / zero */

loc_0001345A: ;
    esi = edi;
    PUSH32(esp, 0x00013461u); RECOMP_ABI_CALL(0x000269C0u, sub_000269C0); /* call 0x000269C0 */

loc_00013461: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001346A
 * Original: 0x0001346A - 0x00013470 (6 bytes, 6 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001346A(void)
{

loc_0001346A: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00013470
 * Original: 0x00013470 - 0x000134D3 (99 bytes, 38 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013470: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000134D2; /* je: equal / zero */

loc_00013474: ;
    eax = MEM32(ecx + 0x424);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00013494; /* je: equal / zero */

loc_00013482: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001348D; /* jne: not equal / not zero */

loc_00013487: ;
    esi = MEM32(eax + 8);
    MEM32(esi + 0x6C) = edx;

loc_0001348D: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013482; /* jne: not equal / not zero */

loc_00013494: ;
    eax = MEM32(ecx + 0x428);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000134B2; /* je: equal / zero */

loc_0001349E: ;
    edi = edi;

loc_000134A0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000134AB; /* jne: not equal / not zero */

loc_000134A5: ;
    esi = MEM32(eax + 8);
    MEM32(esi + 0x6C) = edx;

loc_000134AB: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000134A0; /* jne: not equal / not zero */

loc_000134B2: ;
    eax = MEM32(ecx + 0x42C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000134D2; /* je: equal / zero */

loc_000134BD: ;
    /* nop */

loc_000134C0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000134CB; /* jne: not equal / not zero */

loc_000134C5: ;
    ecx = MEM32(eax + 8);
    MEM32(ecx + 0x6C) = edx;

loc_000134CB: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000134C0; /* jne: not equal / not zero */

loc_000134D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000134E0
 * Original: 0x000134E0 - 0x00013817 (823 bytes, 286 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000134E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000134E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013812; /* je: equal / zero */

loc_000134F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x424);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(0x64D01C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0001351A; /* je: equal / zero */

loc_00013506: ;
    edi = MEM32(ebx + 0x14);
    PUSH32(esp, 0x0001350Eu); RECOMP_ABI_CALL(0x00088C50u, sub_00088C50); /* call 0x00088C50 */

loc_0001350E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(ebp + 0x424) = edi;
    ebx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00013506; /* jne: not equal / not zero */

loc_0001351A: ;
    ebx = MEM32(ebp + 0x428);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013538; /* je: equal / zero */

loc_00013524: ;
    edi = MEM32(ebx + 0x14);
    PUSH32(esp, 0x0001352Cu); RECOMP_ABI_CALL(0x00088C50u, sub_00088C50); /* call 0x00088C50 */

loc_0001352C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(ebp + 0x428) = edi;
    ebx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00013524; /* jne: not equal / not zero */

loc_00013538: ;
    ebx = MEM32(ebp + 0x42C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013556; /* je: equal / zero */

loc_00013542: ;
    edi = MEM32(ebx + 0x14);
    PUSH32(esp, 0x0001354Au); RECOMP_ABI_CALL(0x00088C50u, sub_00088C50); /* call 0x00088C50 */

loc_0001354A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(ebp + 0x42C) = edi;
    ebx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00013542; /* jne: not equal / not zero */

loc_00013556: ;
    edi = MEM32(ebp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0001359B; /* jae: above or equal (unsigned >=) */

loc_0001355E: ;
    edi = edi;

loc_00013560: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013591; /* je: equal / zero */

loc_00013566: ;
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013591; /* je: equal / zero */

loc_00013570: ;
    edx = eax;
    edx = ~edx;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013591; /* je: equal / zero */

loc_00013579: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013587; /* jne: not equal / not zero */

loc_0001357E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013584u); RECOMP_ABI_CALL(0x0001B360u, sub_0001B360); /* call 0x0001B360 */

loc_00013584: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00013587: ;
    ecx = ebp + 0x10;
    eax = edi;
    PUSH32(esp, 0x00013591u); RECOMP_ABI_CALL(0x000BFAC0u, sub_000BFAC0); /* call 0x000BFAC0 */

loc_00013591: ;
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00013560; /* jb: below (unsigned <) */

loc_0001359B: ;
    edi = MEM32(ebp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebx = ebp + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_000135B5; /* je: equal / zero */

loc_000135A5: ;
    PUSH32(esp, 0x000135AAu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000135AA: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000135B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000135B2u); } /* indirect call */
    }

loc_000135B5: ;
    MEM32(ebx + 0x10) = esi;
    MEM32(ebx + 0xC) = esi;
    MEM32(ebx + 8) = esi;
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = esi;
    edi = MEM32(0x5E59CC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013611; /* je: equal / zero */

loc_000135CD: ;
    /* nop */

loc_000135D0: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000135DD; /* je: equal / zero */

loc_000135D5: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000135D0; /* jne: not equal / not zero */

loc_000135DB: ;
    goto loc_00013611;

loc_000135DD: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000135EA; /* je: equal / zero */

loc_000135E6: ;
    MEM32(eax) = ecx;
    goto loc_000135F0;

loc_000135EA: ;
    MEM32(0x5E59CC) = ecx;

loc_000135F0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000135F9; /* je: equal / zero */

loc_000135F4: ;
    MEM32(ecx + 4) = eax;
    goto loc_000135FE;

loc_000135F9: ;
    MEM32(0x5E59D0) = eax;

loc_000135FE: ;
    MEM32(0x5E59D4) = MEM32(0x5E59D4) - 1;
    _fa = (uint32_t)(MEM32(0x5E59D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00013609u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00013609: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00013611u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001360Eu); } /* indirect call */
    }

loc_00013611: ;
    edi = MEM32(ebp + 0x58);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebx = ebp + 0x48;
    if (CMP_EQ(_fa, _fb)) goto loc_0001362B; /* je: equal / zero */

loc_0001361B: ;
    PUSH32(esp, 0x00013620u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00013620: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001362Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013628u); } /* indirect call */
    }

loc_0001362B: ;
    MEM32(ebx + 0x10) = esi;
    MEM32(ebx + 0xC) = esi;
    MEM32(ebx + 8) = esi;
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = esi;
    edi = MEM32(0x5E59CC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013684; /* je: equal / zero */

loc_00013643: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013650; /* je: equal / zero */

loc_00013648: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013643; /* jne: not equal / not zero */

loc_0001364E: ;
    goto loc_00013684;

loc_00013650: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0001365D; /* je: equal / zero */

loc_00013659: ;
    MEM32(eax) = ecx;
    goto loc_00013663;

loc_0001365D: ;
    MEM32(0x5E59CC) = ecx;

loc_00013663: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001366C; /* je: equal / zero */

loc_00013667: ;
    MEM32(ecx + 4) = eax;
    goto loc_00013671;

loc_0001366C: ;
    MEM32(0x5E59D0) = eax;

loc_00013671: ;
    MEM32(0x5E59D4) = MEM32(0x5E59D4) - 1;
    _fa = (uint32_t)(MEM32(0x5E59D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0001367Cu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0001367C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00013684u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013681u); } /* indirect call */
    }

loc_00013684: ;
    esi = MEM32(ebp + 0x38);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000136A5; /* je: equal / zero */

loc_0001368D: ;
    /* nop */

loc_00013690: ;
    edi = esi;
    esi = MEM32(esi);
    PUSH32(esp, 0x00013699u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00013699: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000136A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001369Eu); } /* indirect call */
    }

loc_000136A1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013690; /* jne: not equal / not zero */

loc_000136A5: ;
    esi = ebp + 0x64;
    MEM32(ebp + 0x38) = ebx;
    MEM32(ebp + 0x3C) = ebx;
    MEM32(ebp + 0x40) = ebx;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000136C8; /* je: equal / zero */

loc_000136B8: ;
    PUSH32(esp, 0x000136BDu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000136BD: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000136C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000136C5u); } /* indirect call */
    }

loc_000136C8: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi) = ebx;
    edi = MEM32(0x5E59CC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013721; /* je: equal / zero */

loc_000136E0: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000136ED; /* je: equal / zero */

loc_000136E5: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000136E0; /* jne: not equal / not zero */

loc_000136EB: ;
    goto loc_00013721;

loc_000136ED: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000136FA; /* je: equal / zero */

loc_000136F6: ;
    MEM32(eax) = ecx;
    goto loc_00013700;

loc_000136FA: ;
    MEM32(0x5E59CC) = ecx;

loc_00013700: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013709; /* je: equal / zero */

loc_00013704: ;
    MEM32(ecx + 4) = eax;
    goto loc_0001370E;

loc_00013709: ;
    MEM32(0x5E59D0) = eax;

loc_0001370E: ;
    MEM32(0x5E59D4) = MEM32(0x5E59D4) - 1;
    _fa = (uint32_t)(MEM32(0x5E59D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00013719u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00013719: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00013721u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001371Eu); } /* indirect call */
    }

loc_00013721: ;
    edi = MEM32(ebp + 0x90);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = ebp + 0x80;
    if (CMP_EQ(_fa, _fb)) goto loc_00013741; /* je: equal / zero */

loc_00013731: ;
    PUSH32(esp, 0x00013736u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00013736: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00013741u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001373Eu); } /* indirect call */
    }

loc_00013741: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi) = ebx;
    edi = MEM32(0x5E59CC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000137A1; /* je: equal / zero */

loc_00013759: ;
    /* nop */

loc_00013760: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001376D; /* je: equal / zero */

loc_00013765: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013760; /* jne: not equal / not zero */

loc_0001376B: ;
    goto loc_000137A1;

loc_0001376D: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0001377A; /* je: equal / zero */

loc_00013776: ;
    MEM32(eax) = ecx;
    goto loc_00013780;

loc_0001377A: ;
    MEM32(0x5E59CC) = ecx;

loc_00013780: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013789; /* je: equal / zero */

loc_00013784: ;
    MEM32(ecx + 4) = eax;
    goto loc_0001378E;

loc_00013789: ;
    MEM32(0x5E59D0) = eax;

loc_0001378E: ;
    MEM32(0x5E59D4) = MEM32(0x5E59D4) - 1;
    _fa = (uint32_t)(MEM32(0x5E59D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00013799u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00013799: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000137A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001379Eu); } /* indirect call */
    }

loc_000137A1: ;
    eax = ebp + 0x9C;
    PUSH32(esp, 0x000137ACu); RECOMP_ABI_CALL(0x0002CC20u, sub_0002CC20); /* call 0x0002CC20 */

loc_000137AC: ;
    esi = MEM32(ebp + 0x180);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000137C1; /* je: equal / zero */

loc_000137B6: ;
    PUSH32(esp, 0x000137BBu); RECOMP_ABI_CALL(0x0001CE00u, sub_0001CE00); /* call 0x0001CE00 */

loc_000137BB: ;
    MEM32(ebp + 0x180) = ebx;

loc_000137C1: ;
    eax = MEM32(ebp + 0x1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = ebp + 0x1C0;
    if (CMP_EQ(_fa, _fb)) goto loc_000137D6; /* je: equal / zero */

loc_000137D1: ;
    PUSH32(esp, 0x000137D6u); RECOMP_ABI_CALL(0x0002ED90u, sub_0002ED90); /* call 0x0002ED90 */

loc_000137D6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000137E2; /* je: equal / zero */

loc_000137DB: ;
    esi = ebp;
    PUSH32(esp, 0x000137E2u); RECOMP_ABI_CALL(0x00026A40u, sub_00026A40); /* call 0x00026A40 */

loc_000137E2: ;
    _fa = (uint32_t)(MEM32(0x34A75C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x34A75C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000137F0; /* jne: not equal / not zero */

loc_000137EA: ;
    MEM32(0x34A75C) = ebx;

loc_000137F0: ;
    edi = MEM32(ebp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001380A; /* je: equal / zero */

loc_000137F7: ;
    PUSH32(esp, 0x000137FCu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000137FC: ;
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00013807u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013804u); } /* indirect call */
    }

loc_00013807: ;
    MEM32(ebp + 0x30) = ebx;

loc_0001380A: ;
    POP32(esp, edi);
    MEM32(0x64D01C) = ebx;
    POP32(esp, ebx);

loc_00013812: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00013772
 * Original: 0x00013772 - 0x00013817 (165 bytes, 52 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013772(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013772: ;
    ecx = MEM32(edi);
    if (_flags /* je: equal / zero */) goto loc_0001377A;

loc_00013776: ;
    MEM32(eax) = ecx;
    goto loc_00013780;

loc_0001377A: ;
    MEM32(0x5E59CC) = ecx;

loc_00013780: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013789; /* je: equal / zero */

loc_00013784: ;
    MEM32(ecx + 4) = eax;
    goto loc_0001378E;

loc_00013789: ;
    MEM32(0x5E59D0) = eax;

loc_0001378E: ;
    MEM32(0x5E59D4) = MEM32(0x5E59D4) - 1;
    _fa = (uint32_t)(MEM32(0x5E59D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00013799u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00013799: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000137A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001379Eu); } /* indirect call */
    }

loc_000137A1: ;
    eax = ebp + 0x9C;
    PUSH32(esp, 0x000137ACu); RECOMP_ABI_CALL(0x0002CC20u, sub_0002CC20); /* call 0x0002CC20 */

loc_000137AC: ;
    esi = MEM32(ebp + 0x180);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000137C1; /* je: equal / zero */

loc_000137B6: ;
    PUSH32(esp, 0x000137BBu); RECOMP_ABI_CALL(0x0001CE00u, sub_0001CE00); /* call 0x0001CE00 */

loc_000137BB: ;
    MEM32(ebp + 0x180) = ebx;

loc_000137C1: ;
    eax = MEM32(ebp + 0x1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = ebp + 0x1C0;
    if (CMP_EQ(_fa, _fb)) goto loc_000137D6; /* je: equal / zero */

loc_000137D1: ;
    PUSH32(esp, 0x000137D6u); RECOMP_ABI_CALL(0x0002ED90u, sub_0002ED90); /* call 0x0002ED90 */

loc_000137D6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000137E2; /* je: equal / zero */

loc_000137DB: ;
    esi = ebp;
    PUSH32(esp, 0x000137E2u); RECOMP_ABI_CALL(0x00026A40u, sub_00026A40); /* call 0x00026A40 */

loc_000137E2: ;
    _fa = (uint32_t)(MEM32(0x34A75C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x34A75C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000137F0; /* jne: not equal / not zero */

loc_000137EA: ;
    MEM32(0x34A75C) = ebx;

loc_000137F0: ;
    edi = MEM32(ebp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001380A; /* je: equal / zero */

loc_000137F7: ;
    PUSH32(esp, 0x000137FCu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000137FC: ;
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00013807u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013804u); } /* indirect call */
    }

loc_00013807: ;
    MEM32(ebp + 0x30) = ebx;

loc_0001380A: ;
    POP32(esp, edi);
    MEM32(0x64D01C) = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000137BB
 * Original: 0x000137BB - 0x00013817 (92 bytes, 30 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000137BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000137BB: ;
    MEM32(ebp + 0x180) = ebx;
    eax = MEM32(ebp + 0x1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = ebp + 0x1C0;
    if (CMP_EQ(_fa, _fb)) goto loc_000137D6; /* je: equal / zero */

loc_000137D1: ;
    PUSH32(esp, 0x000137D6u); RECOMP_ABI_CALL(0x0002ED90u, sub_0002ED90); /* call 0x0002ED90 */

loc_000137D6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000137E2; /* je: equal / zero */

loc_000137DB: ;
    esi = ebp;
    PUSH32(esp, 0x000137E2u); RECOMP_ABI_CALL(0x00026A40u, sub_00026A40); /* call 0x00026A40 */

loc_000137E2: ;
    _fa = (uint32_t)(MEM32(0x34A75C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x34A75C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000137F0; /* jne: not equal / not zero */

loc_000137EA: ;
    MEM32(0x34A75C) = ebx;

loc_000137F0: ;
    edi = MEM32(ebp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001380A; /* je: equal / zero */

loc_000137F7: ;
    PUSH32(esp, 0x000137FCu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000137FC: ;
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00013807u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013804u); } /* indirect call */
    }

loc_00013807: ;
    MEM32(ebp + 0x30) = ebx;

loc_0001380A: ;
    POP32(esp, edi);
    MEM32(0x64D01C) = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00013820
 * Original: 0x00013820 - 0x0001387B (91 bytes, 31 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00013820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x2000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00013830u); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_00013830: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0001383Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013839u); } /* indirect call */
    }

loc_0001383C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013873; /* jne: not equal / not zero */

loc_00013840: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001384Fu); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_0001384F: ;
    ecx = 0x400;
    esi = esp + 8;
    edi = esp + 0x1008;
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
    ecx = esp + 0x100C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00013873u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_00013873: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013840
 * Original: 0x00013840 - 0x0001387B (59 bytes, 17 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013840: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001384Fu); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_0001384F: ;
    ecx = 0x400;
    esi = esp + 8;
    edi = esp + 0x1008;
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
    ecx = esp + 0x100C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00013873u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_00013873: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013880
 * Original: 0x00013880 - 0x00013894 (20 bytes, 11 insns)
 * Folder: main (between: 0x00012AF0 and 0x000138A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013880: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013891; /* je: equal / zero */

loc_0001388A: ;
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

loc_00013891: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000138A0
 * Original: 0x000138A0 - 0x00013A84 (484 bytes, 141 insns)
 * Folder: main (string: e3_trail.int)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000138A0(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000138A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D07C); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x333884)); /* movss */
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM32(0x64D1D8) = ebx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000138E0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000138CB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x64D080);
    PUSH32(esp, 0x000138D6u); RECOMP_ABI_CALL(0x0028A8B1u, sub_0028A8B1); /* call 0x0028A8B1 */

loc_000138D6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000138E0; /* jne: not equal / not zero */

loc_000138DD: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000138E0: ;
    _fa = (uint32_t)(MEM32(0x64D020)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D020), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00013A16; /* je: equal / zero */

loc_000138EE: ;
    _fa = (uint32_t)(MEM32(0x64D180)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D180), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013A16; /* jne: not equal / not zero */

loc_000138FA: ;
    _fa = (uint32_t)(MEM32(0x64D018)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D018), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013997; /* jne: not equal / not zero */

loc_00013906: ;
    edi = 0x322C54;
    esi = ebp;
    ecx = 0xD;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0001391D; /* je: equal / zero */

loc_00013918: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0001391D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013929; /* jne: not equal / not zero */

loc_00013921: ;
    _fa = (uint32_t)(MEM32(0x64D02C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D02C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001399F; /* jne: not equal / not zero */

loc_00013929: ;
    edi = 0x322C54;
    esi = ebp;
    ecx = 0xD;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00013940; /* je: equal / zero */

loc_0001393B: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00013940: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001394E; /* jne: not equal / not zero */

loc_00013944: ;
    MEM32(0x64D1D8) = 1;

loc_0001394E: ;
    esi = 1;
    edx = 0x64D190;
    MEM32(0x64D180) = esi;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ebp));
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00013962: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013962; /* jne: not equal / not zero */

loc_0001396C: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(esp + 0x18);
    MEM32(0x64D184) = eax;
    MEM32(0x64D188) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00013A7A; /* je: equal / zero */

loc_00013987: ;
    POP32(esp, edi);
    MEM32(0x64D188) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013997: ;
    _fa = (uint32_t)(MEM32(0x64D02C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D02C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013A06; /* je: equal / zero */

loc_0001399F: ;
    esi = 1;
    MEM32(0x64D1D8) = esi;
    MEM32(0x64D1D0) = ebx;
    MEM32(0x64D1D4) = ebx;
    MEM32(0x64D020) = ebx;
    PUSH32(esp, 0x000139C1u); RECOMP_ABI_CALL(0x00019000u, sub_00019000); /* call 0x00019000 */

loc_000139C1: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000139D6u); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_000139D6: ;
    PUSH32(esp, 0x000139DBu); RECOMP_ABI_CALL(0x0010B230u, sub_0010B230); /* call 0x0010B230 */

loc_000139DB: ;
    edx = 0x64D038;
    MEM32(0x64D024) = esi;
    MEM32(0x64D020) = esi;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ebp));
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000139F0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000139F0; /* jne: not equal / not zero */

loc_000139FA: ;
    edx = MEM32(esp + 0x18);
    MEM32(0x64D030) = edx;
    goto loc_00013A63;

loc_00013A06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x64D018) = ebx;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013A16: ;
    edi = 0x322C54;
    esi = ebp;
    ecx = 0xD;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00013A2D; /* je: equal / zero */

loc_00013A28: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00013A2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00013A3B; /* jne: not equal / not zero */

loc_00013A36: ;
    MEM32(0x64D1D8) = eax;

loc_00013A3B: ;
    edx = 0x64D038;
    MEM32(0x64D024) = eax;
    MEM32(0x64D020) = eax;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ebp));
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_00013A50: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013A50; /* jne: not equal / not zero */

loc_00013A5A: ;
    eax = MEM32(esp + 0x18);
    MEM32(0x64D030) = eax;

loc_00013A63: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x64D02C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00013A7A; /* je: equal / zero */

loc_00013A70: ;
    MEM32(0x64D030) = 1;

loc_00013A7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000139EC
 * Original: 0x000139EC - 0x00013A84 (152 bytes, 53 insns)
 * Folder: main (string: e3_trail.int)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000139EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000139EC: ;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ebp));
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000139F0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000139F0; /* jne: not equal / not zero */

loc_000139FA: ;
    edx = MEM32(esp + 0x18);
    MEM32(0x64D030) = edx;
    goto loc_00013A63;

    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x64D018) = ebx;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00013A2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00013A3B; /* jne: not equal / not zero */

loc_00013A36: ;
    MEM32(0x64D1D8) = eax;

loc_00013A3B: ;
    edx = 0x64D038;
    MEM32(0x64D024) = eax;
    MEM32(0x64D020) = eax;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ebp));
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_00013A50: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013A50; /* jne: not equal / not zero */

loc_00013A5A: ;
    eax = MEM32(esp + 0x18);
    MEM32(0x64D030) = eax;

loc_00013A63: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x64D02C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00013A7A; /* je: equal / zero */

loc_00013A70: ;
    MEM32(0x64D030) = 1;

loc_00013A7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00013A7C
 * Original: 0x00013A7C - 0x00013A84 (8 bytes, 4 insns)
 * Folder: main (between: 0x000139EC and 0x00013A90)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013A7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013A7C: ;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00013A90
 * Original: 0x00013A90 - 0x00013B7A (234 bytes, 64 insns)
 * Folder: main (string: Intersti\Inter_%02d.int)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00013A90: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1D (32-bit) */
    MEM32(0x64D1D8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00013AA9; /* je: equal / zero */

loc_00013A9F: ;
    MEM32(0x33A204) = 0xFFFFFFFFu;

loc_00013AA9: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 1;
    if ((_fa == 0)) goto loc_00013AE8; /* je: equal / zero */

loc_00013AB4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00013AE0; /* je: equal / zero */

loc_00013AB7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00013B2E; /* jne: not equal / not zero */

loc_00013ABA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x323054);
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x00013ACAu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_00013ACA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1D (32-bit) */
    MEM32(0x64D1D4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00013AFB; /* je: equal / zero */

loc_00013AD8: ;
    MEM32(0x33A204) = esi;
    goto loc_00013AFB;

loc_00013AE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x32306C);
    goto loc_00013AEE;

loc_00013AE8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x32307C);

loc_00013AEE: ;
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x00013AF8u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_00013AF8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00013AFB: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D07C); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x333884)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00013B32; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00013B18: ;
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x64D080);
    PUSH32(esp, 0x00013B27u); RECOMP_ABI_CALL(0x0028A8B1u, sub_0028A8B1); /* call 0x0028A8B1 */

loc_00013B27: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013B32; /* jne: not equal / not zero */

loc_00013B2E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00013B32: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00013B40;

    /* nop */
    /* nop */

loc_00013B40: ;
    SET_LO8(ecx, MEM8(eax + 0x64D038));
    MEM8(eax + 0x64D080) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013B40; /* jne: not equal / not zero */

loc_00013B51: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = MEM32(esp + 8);
    MEM32(0x64D024) = edi;
    MEM32(0x64D020) = edi;
    MEM32(0x64D030) = eax;
    MEM32(0x64D02C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00013B76; /* je: equal / zero */

loc_00013B70: ;
    MEM32(0x64D030) = edi;

loc_00013B76: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013B80
 * Original: 0x00013B80 - 0x0001407B (1275 bytes, 301 insns)
 * Folder: main (between: 0x00013A90 and 0x00013B9F)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013B80(void)
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

loc_00013B80: ;
    eax = MEM32(0x33A204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_00013C7F; /* jl: less (signed <) */

loc_00013B91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00013C7F; /* jg: greater (signed >) */

loc_00013B9A: ;
    eax = MEM32(0x64D1D8);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013C81; /* jne: not equal / not zero */

loc_00013BA9: ;
    _fa = (uint32_t)(MEM32(0x64D370)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D370), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013C81; /* je: equal / zero */

loc_00013BB5: ;
    _fa = (uint32_t)(MEM32(0x64D1D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D1D0), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013C81; /* jne: not equal / not zero */

loc_00013BC1: ;
    _fa = (uint32_t)(MEM32(0x64D020)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D020), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013BE3; /* je: equal / zero */

loc_00013BC9: ;
    PUSH32(esp, 0x00013BCEu); RECOMP_ABI_CALL(0x00019000u, sub_00019000); /* call 0x00019000 */

loc_00013BCE: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013BE3u); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_00013BE3: ;
    PUSH32(esp, 0x00013BE8u); RECOMP_ABI_CALL(0x0010B1D0u, sub_0010B1D0); /* call 0x0010B1D0 */

loc_00013BE8: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x323054);
    PUSH32(esp, 0x64D038);
    MEM32(0x64D1D8) = ebx;
    PUSH32(esp, 0x00013BFFu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_00013BFF: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D07C); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x333884)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    esi = 1;
    MEM32(0x64D1D4) = esi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00013C40; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00013C2A: ;
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x64D080);
    PUSH32(esp, 0x00013C39u); RECOMP_ABI_CALL(0x0028A8B1u, sub_0028A8B1); /* call 0x0028A8B1 */

loc_00013C39: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00013C73; /* je: equal / zero */

loc_00013C40: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013C42: ;
    SET_LO8(ecx, MEM8(eax + 0x64D038));
    MEM8(eax + 0x64D080) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013C42; /* jne: not equal / not zero */

loc_00013C53: ;
    MEM32(0x64D024) = esi;
    MEM32(0x64D020) = esi;
    MEM32(0x64D02C) = esi;
    MEM32(0x64D030) = esi;
    MEM32(0x64D1D0) = esi;
    goto loc_00013C92;

loc_00013C73: ;
    PUSH32(esp, 0x323000);
    PUSH32(esp, 0x00013C7Du); RECOMP_ABI_CALL(0x0027F785u, sub_0027F785); /* call 0x0027F785 */

loc_00013C7D: ;
    goto loc_00013C86;

loc_00013C7F: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013C81: ;
    esi = 1;

loc_00013C86: ;
    _fa = (uint32_t)(MEM32(0x64D024)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D024), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013D46; /* je: equal / zero */

loc_00013C92: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013CA8; /* je: equal / zero */

loc_00013C9A: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013CA8; /* je: equal / zero */

loc_00013CA3: ;
    PUSH32(esp, 0x00013CA8u); RECOMP_ABI_CALL(0x000CB800u, sub_000CB800); /* call 0x000CB800 */

loc_00013CA8: ;
    MEM32(0x64D024) = ebx;
    PUSH32(esp, 0x00013CB3u); RECOMP_ABI_CALL(0x00018C00u, sub_00018C00); /* call 0x00018C00 */

loc_00013CB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013CED; /* jne: not equal / not zero */

loc_00013CB7: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x64D020) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00013CDE; /* je: equal / zero */

loc_00013CC5: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013CDE; /* je: equal / zero */

loc_00013CCE: ;
    PUSH32(esp, 0x00013CD3u); RECOMP_ABI_CALL(0x000CB850u, sub_000CB850); /* call 0x000CB850 */

loc_00013CD3: ;
    edi = MEM32(0x64D204);
    PUSH32(esp, 0x00013CDEu); RECOMP_ABI_CALL(0x000274C0u, sub_000274C0); /* call 0x000274C0 */

loc_00013CDE: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013D46; /* jne: not equal / not zero */

loc_00013CE6: ;
    PUSH32(esp, 0x00013CEBu); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013CEB: ;
    goto loc_00013D46;

loc_00013CED: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(0x343DE0); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00013D27; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x343DE0)) */

loc_00013D09: ;
    eax = MEM32(0x64D9F0);
    ecx = MEM32(0x64D9F4);
    MEMF(0x343DE0) = xmm1.f[0]; /* movss */
    MEM32(0x343DE8) = eax;
    MEM32(0x343DEC) = ecx;

loc_00013D27: ;
    eax = MEM32(0x64D918);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fca = xmm0.f[0]; _fcb = MEMF(0x33A200); /* comiss */
    MEM32(0x64D918) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00013D46; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x33A200)) */

loc_00013D3B: ;
    PUSH32(esp, 0x00013D40u); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_00013D40: ;
    MEMF(0x33A200) = (float)fp_top(); fp_pop(); /* fstp */

loc_00013D46: ;
    _fa = (uint32_t)(MEM32(0x64D020)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D020), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014077; /* je: equal / zero */

loc_00013D52: ;
    _fa = (uint32_t)(MEM32(0x64D030)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D030), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013EB0; /* je: equal / zero */

loc_00013D5E: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D07C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3337A0); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00013EB0; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00013D7F: ;
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00013D87u); RECOMP_ABI_CALL(0x000C0C10u, sub_000C0C10); /* call 0x000C0C10 */

loc_00013D87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013DA4; /* jne: not equal / not zero */

loc_00013D8E: ;
    PUSH32(esp, ebx);
    ecx = 9;
    PUSH32(esp, 0x00013D99u); RECOMP_ABI_CALL(0x000C0C10u, sub_000C0C10); /* call 0x000C0C10 */

loc_00013D99: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00013EB0; /* je: equal / zero */

loc_00013DA4: ;
    _fa = (uint32_t)(MEM32(0x64D1D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D1D0), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E01; /* je: equal / zero */

loc_00013DAC: ;
    PUSH32(esp, 0x00013DB1u); RECOMP_ABI_CALL(0x00019000u, sub_00019000); /* call 0x00019000 */

loc_00013DB1: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013DC6u); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_00013DC6: ;
    PUSH32(esp, 0x00013DCBu); RECOMP_ABI_CALL(0x0010B1D0u, sub_0010B1D0); /* call 0x0010B1D0 */

loc_00013DCB: ;
    PUSH32(esp, esi);
    ebx = esi;
    esi = MEM32(0x33A204);
    eax = 2;
    PUSH32(esp, 0x00013DDEu); RECOMP_ABI_CALL(0x00013A90u, sub_00013A90); /* call 0x00013A90 */

loc_00013DDE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013DF3; /* jne: not equal / not zero */

loc_00013DE5: ;
    PUSH32(esp, 0x323000);
    PUSH32(esp, 0x00013DEFu); RECOMP_ABI_CALL(0x0027F785u, sub_0027F785); /* call 0x0027F785 */

loc_00013DEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013DF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D1D0) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013E01: ;
    MEM32(0x64D1D8) = ebx;
    MEM32(0x64D1D4) = ebx;
    MEM32(0x64D020) = ebx;
    PUSH32(esp, 0x00013E18u); RECOMP_ABI_CALL(0x00019000u, sub_00019000); /* call 0x00019000 */

loc_00013E18: ;
    PUSH32(esp, 0x00013E1Du); RECOMP_ABI_CALL(0x00026CD0u, sub_00026CD0); /* call 0x00026CD0 */

loc_00013E1D: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013E2A; /* jne: not equal / not zero */

loc_00013E25: ;
    PUSH32(esp, 0x00013E2Au); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013E2A: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013E3Fu); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_00013E3F: ;
    PUSH32(esp, 0x00013E44u); RECOMP_ABI_CALL(0x0010B230u, sub_0010B230); /* call 0x0010B230 */

loc_00013E44: ;
    _fa = (uint32_t)(MEM32(0x64D02C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D02C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E4C: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E54: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E5D: ;
    _fa = (uint32_t)(MEM8(0x33A1F0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x33A1F0), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E65: ;
    ebx = MEM32(0x33A1B8);
    eax = 0xE0005;
    PUSH32(esp, 0x00013E75u); RECOMP_ABI_CALL(0x000D00A0u, sub_000D00A0); /* call 0x000D00A0 */

loc_00013E75: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00013E81u); RECOMP_ABI_CALL(0x000CB0A0u, sub_000CB0A0); /* call 0x000CB0A0 */

loc_00013E81: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 1;

loc_00013E88: ;
    _fa = (uint32_t)(MEM16(0x34A770)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A770), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013E9A; /* jne: not equal / not zero */

loc_00013E91: ;
    MEM16(0x34A770) = 2;

loc_00013E9A: ;
    _fa = (uint32_t)(MEM32(0x64D018)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D018), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014077; /* je: equal / zero */

loc_00013EA6: ;
    POP32(esp, edi);
    MEM32(0x64CFCC) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013EB0: ;
    PUSH32(esp, 0x00013EB5u); RECOMP_ABI_CALL(0x00018EA0u, sub_00018EA0); /* call 0x00018EA0 */

loc_00013EB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00013EC1; /* je: equal / zero */

loc_00013EB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00018F60(); return; /* tail jmp 0x00018F60 */

loc_00013EC1: ;
    _fa = (uint32_t)(MEM32(0x64D02C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D02C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00014077; /* jne: not equal / not zero */

loc_00013ECD: ;
    MEM32(0x64D020) = ebx;
    PUSH32(esp, 0x00013ED8u); RECOMP_ABI_CALL(0x00019000u, sub_00019000); /* call 0x00019000 */

loc_00013ED8: ;
    _fa = (uint32_t)(MEM32(0x64D180)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D180), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013F1E; /* jne: not equal / not zero */

loc_00013EE0: ;
    PUSH32(esp, 0x322FEC);
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x00013EEFu); RECOMP_ABI_CALL(0x0028B1A0u, sub_0028B1A0); /* call 0x0028B1A0 */

loc_00013EEF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013F11; /* jne: not equal / not zero */

loc_00013EF6: ;
    PUSH32(esp, 0x322FE4);
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x00013F05u); RECOMP_ABI_CALL(0x0028B1A0u, sub_0028B1A0); /* call 0x0028B1A0 */

loc_00013F05: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013F11; /* jne: not equal / not zero */

loc_00013F0C: ;
    PUSH32(esp, 0x00013F11u); RECOMP_ABI_CALL(0x00026CD0u, sub_00026CD0); /* call 0x00026CD0 */

loc_00013F11: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013F1E; /* jne: not equal / not zero */

loc_00013F19: ;
    PUSH32(esp, 0x00013F1Eu); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013F1E: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013F33u); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_00013F33: ;
    PUSH32(esp, 0x00013F38u); RECOMP_ABI_CALL(0x0010B230u, sub_0010B230); /* call 0x0010B230 */

loc_00013F38: ;
    _fa = (uint32_t)(MEM32(0x64D180)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D180), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014022; /* je: equal / zero */

loc_00013F44: ;
    edi = 0x322C54;
    esi = 0x64D190;
    ecx = 0xD;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00013F5E; /* je: equal / zero */

loc_00013F59: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00013F5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013F78; /* jne: not equal / not zero */

loc_00013F62: ;
    MEM32(0x64D1D8) = 1;
    MEM32(0x64D1D0) = ebx;
    MEM32(0x64D1D4) = ebx;

loc_00013F78: ;
    eax = MEM32(0x64D188);
    edx = MEM32(0x64D184);
    MEM32(0x64D030) = eax;
    MEM32(0x64D020) = 1;
    MEM32(0x64D180) = ebx;
    MEM32(0x64D02C) = edx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013FA0: ;
    SET_LO8(ecx, MEM8(eax + 0x64D038));
    MEM8(eax + 0x64D080) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FA0; /* jne: not equal / not zero */

loc_00013FB1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013FB3: ;
    SET_LO8(ecx, MEM8(eax + 0x64D190));
    MEM8(eax + 0x64D038) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FB3; /* jne: not equal / not zero */

loc_00013FC4: ;
    PUSH32(esp, 0x00013FC9u); RECOMP_ABI_CALL(0x00018C00u, sub_00018C00); /* call 0x00018C00 */

loc_00013FC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001400B; /* jne: not equal / not zero */

loc_00013FCD: ;
    MEM32(0x64D020) = ebx;
    PUSH32(esp, 0x00013FD8u); RECOMP_ABI_CALL(0x00026CD0u, sub_00026CD0); /* call 0x00026CD0 */

loc_00013FD8: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FE5; /* jne: not equal / not zero */

loc_00013FE0: ;
    PUSH32(esp, 0x00013FE5u); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013FE5: ;
    esi = 1;

loc_00013FEA: ;
    eax = MEM32(0x64D018);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00014077; /* jbe: below or equal (unsigned <=) */

loc_00013FF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0001405E; /* jbe: below or equal (unsigned <=) */

loc_00013FFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00014077; /* jne: not equal / not zero */

loc_00014001: ;
    POP32(esp, edi);
    MEM32(0x64CFCC) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001400B: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00014020u); RECOMP_ABI_CALL(0x0010AF20u, sub_0010AF20); /* call 0x0010AF20 */

loc_00014020: ;
    goto loc_00013FE5;

loc_00014022: ;
    _fa = (uint32_t)(MEM16(0x34A770)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A770), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014033; /* je: equal / zero */

loc_0001402B: ;
    _fa = (uint32_t)(MEM32(0x64D1D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D1D8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013FEA; /* je: equal / zero */

loc_00014033: ;
    _fa = (uint32_t)(MEM32(0x64D018)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D018), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014043; /* je: equal / zero */

loc_0001403B: ;
    MEM32(0x64CFCC) = esi;
    goto loc_00013FEA;

loc_00014043: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x322FD8);
    MEM32(0x64D018) = 3;
    PUSH32(esp, 0x00014059u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00014059: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00013FEA;

loc_0001405E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x322FD8);
    MEM32(0x64D018) = 3;
    PUSH32(esp, 0x00014074u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00014074: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014077: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013B9F
 * Original: 0x00013B9F - 0x0001407B (1244 bytes, 292 insns)
 * Folder: main (string: VIDEO_MainCall : Make sure you have the video Intersti_29 on your video directory)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013B9F(void)
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

loc_00013B9F: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013C81; /* jne: not equal / not zero */

loc_00013BA9: ;
    _fa = (uint32_t)(MEM32(0x64D370)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D370), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013C81; /* je: equal / zero */

loc_00013BB5: ;
    _fa = (uint32_t)(MEM32(0x64D1D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D1D0), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013C81; /* jne: not equal / not zero */

loc_00013BC1: ;
    _fa = (uint32_t)(MEM32(0x64D020)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D020), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013BE3; /* je: equal / zero */

loc_00013BC9: ;
    PUSH32(esp, 0x00013BCEu); RECOMP_ABI_CALL(0x00019000u, sub_00019000); /* call 0x00019000 */

loc_00013BCE: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013BE3u); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_00013BE3: ;
    PUSH32(esp, 0x00013BE8u); RECOMP_ABI_CALL(0x0010B1D0u, sub_0010B1D0); /* call 0x0010B1D0 */

loc_00013BE8: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x323054);
    PUSH32(esp, 0x64D038);
    MEM32(0x64D1D8) = ebx;
    PUSH32(esp, 0x00013BFFu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_00013BFF: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D07C); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x333884)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    esi = 1;
    MEM32(0x64D1D4) = esi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00013C40; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00013C2A: ;
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x64D080);
    PUSH32(esp, 0x00013C39u); RECOMP_ABI_CALL(0x0028A8B1u, sub_0028A8B1); /* call 0x0028A8B1 */

loc_00013C39: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00013C73; /* je: equal / zero */

loc_00013C40: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013C42: ;
    SET_LO8(ecx, MEM8(eax + 0x64D038));
    MEM8(eax + 0x64D080) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013C42; /* jne: not equal / not zero */

loc_00013C53: ;
    MEM32(0x64D024) = esi;
    MEM32(0x64D020) = esi;
    MEM32(0x64D02C) = esi;
    MEM32(0x64D030) = esi;
    MEM32(0x64D1D0) = esi;
    goto loc_00013C92;

loc_00013C73: ;
    PUSH32(esp, 0x323000);
    PUSH32(esp, 0x00013C7Du); RECOMP_ABI_CALL(0x0027F785u, sub_0027F785); /* call 0x0027F785 */

loc_00013C7D: ;
    goto loc_00013C86;

    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013C81: ;
    esi = 1;

loc_00013C86: ;
    _fa = (uint32_t)(MEM32(0x64D024)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D024), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013D46; /* je: equal / zero */

loc_00013C92: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013CA8; /* je: equal / zero */

loc_00013C9A: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013CA8; /* je: equal / zero */

loc_00013CA3: ;
    PUSH32(esp, 0x00013CA8u); RECOMP_ABI_CALL(0x000CB800u, sub_000CB800); /* call 0x000CB800 */

loc_00013CA8: ;
    MEM32(0x64D024) = ebx;
    PUSH32(esp, 0x00013CB3u); RECOMP_ABI_CALL(0x00018C00u, sub_00018C00); /* call 0x00018C00 */

loc_00013CB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013CED; /* jne: not equal / not zero */

loc_00013CB7: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x64D020) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00013CDE; /* je: equal / zero */

loc_00013CC5: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013CDE; /* je: equal / zero */

loc_00013CCE: ;
    PUSH32(esp, 0x00013CD3u); RECOMP_ABI_CALL(0x000CB850u, sub_000CB850); /* call 0x000CB850 */

loc_00013CD3: ;
    edi = MEM32(0x64D204);
    PUSH32(esp, 0x00013CDEu); RECOMP_ABI_CALL(0x000274C0u, sub_000274C0); /* call 0x000274C0 */

loc_00013CDE: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013D46; /* jne: not equal / not zero */

loc_00013CE6: ;
    PUSH32(esp, 0x00013CEBu); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013CEB: ;
    goto loc_00013D46;

loc_00013CED: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(0x343DE0); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00013D27; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x343DE0)) */

loc_00013D09: ;
    eax = MEM32(0x64D9F0);
    ecx = MEM32(0x64D9F4);
    MEMF(0x343DE0) = xmm1.f[0]; /* movss */
    MEM32(0x343DE8) = eax;
    MEM32(0x343DEC) = ecx;

loc_00013D27: ;
    eax = MEM32(0x64D918);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fca = xmm0.f[0]; _fcb = MEMF(0x33A200); /* comiss */
    MEM32(0x64D918) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00013D46; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x33A200)) */

loc_00013D3B: ;
    PUSH32(esp, 0x00013D40u); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_00013D40: ;
    MEMF(0x33A200) = (float)fp_top(); fp_pop(); /* fstp */

loc_00013D46: ;
    _fa = (uint32_t)(MEM32(0x64D020)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D020), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014077; /* je: equal / zero */

loc_00013D52: ;
    _fa = (uint32_t)(MEM32(0x64D030)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D030), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013EB0; /* je: equal / zero */

loc_00013D5E: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D07C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3337A0); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00013EB0; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00013D7F: ;
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00013D87u); RECOMP_ABI_CALL(0x000C0C10u, sub_000C0C10); /* call 0x000C0C10 */

loc_00013D87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013DA4; /* jne: not equal / not zero */

loc_00013D8E: ;
    PUSH32(esp, ebx);
    ecx = 9;
    PUSH32(esp, 0x00013D99u); RECOMP_ABI_CALL(0x000C0C10u, sub_000C0C10); /* call 0x000C0C10 */

loc_00013D99: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00013EB0; /* je: equal / zero */

loc_00013DA4: ;
    _fa = (uint32_t)(MEM32(0x64D1D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D1D0), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E01; /* je: equal / zero */

loc_00013DAC: ;
    PUSH32(esp, 0x00013DB1u); RECOMP_ABI_CALL(0x00019000u, sub_00019000); /* call 0x00019000 */

loc_00013DB1: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013DC6u); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_00013DC6: ;
    PUSH32(esp, 0x00013DCBu); RECOMP_ABI_CALL(0x0010B1D0u, sub_0010B1D0); /* call 0x0010B1D0 */

loc_00013DCB: ;
    PUSH32(esp, esi);
    ebx = esi;
    esi = MEM32(0x33A204);
    eax = 2;
    PUSH32(esp, 0x00013DDEu); RECOMP_ABI_CALL(0x00013A90u, sub_00013A90); /* call 0x00013A90 */

loc_00013DDE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013DF3; /* jne: not equal / not zero */

loc_00013DE5: ;
    PUSH32(esp, 0x323000);
    PUSH32(esp, 0x00013DEFu); RECOMP_ABI_CALL(0x0027F785u, sub_0027F785); /* call 0x0027F785 */

loc_00013DEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013DF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D1D0) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013E01: ;
    MEM32(0x64D1D8) = ebx;
    MEM32(0x64D1D4) = ebx;
    MEM32(0x64D020) = ebx;
    PUSH32(esp, 0x00013E18u); RECOMP_ABI_CALL(0x00019000u, sub_00019000); /* call 0x00019000 */

loc_00013E18: ;
    PUSH32(esp, 0x00013E1Du); RECOMP_ABI_CALL(0x00026CD0u, sub_00026CD0); /* call 0x00026CD0 */

loc_00013E1D: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013E2A; /* jne: not equal / not zero */

loc_00013E25: ;
    PUSH32(esp, 0x00013E2Au); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013E2A: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013E3Fu); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_00013E3F: ;
    PUSH32(esp, 0x00013E44u); RECOMP_ABI_CALL(0x0010B230u, sub_0010B230); /* call 0x0010B230 */

loc_00013E44: ;
    _fa = (uint32_t)(MEM32(0x64D02C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D02C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E4C: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E54: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E5D: ;
    _fa = (uint32_t)(MEM8(0x33A1F0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x33A1F0), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E65: ;
    ebx = MEM32(0x33A1B8);
    eax = 0xE0005;
    PUSH32(esp, 0x00013E75u); RECOMP_ABI_CALL(0x000D00A0u, sub_000D00A0); /* call 0x000D00A0 */

loc_00013E75: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00013E81u); RECOMP_ABI_CALL(0x000CB0A0u, sub_000CB0A0); /* call 0x000CB0A0 */

loc_00013E81: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 1;

loc_00013E88: ;
    _fa = (uint32_t)(MEM16(0x34A770)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A770), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013E9A; /* jne: not equal / not zero */

loc_00013E91: ;
    MEM16(0x34A770) = 2;

loc_00013E9A: ;
    _fa = (uint32_t)(MEM32(0x64D018)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D018), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014077; /* je: equal / zero */

loc_00013EA6: ;
    POP32(esp, edi);
    MEM32(0x64CFCC) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013EB0: ;
    PUSH32(esp, 0x00013EB5u); RECOMP_ABI_CALL(0x00018EA0u, sub_00018EA0); /* call 0x00018EA0 */

loc_00013EB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00013EC1; /* je: equal / zero */

loc_00013EB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00018F60(); return; /* tail jmp 0x00018F60 */

loc_00013EC1: ;
    _fa = (uint32_t)(MEM32(0x64D02C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D02C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00014077; /* jne: not equal / not zero */

loc_00013ECD: ;
    MEM32(0x64D020) = ebx;
    PUSH32(esp, 0x00013ED8u); RECOMP_ABI_CALL(0x00019000u, sub_00019000); /* call 0x00019000 */

loc_00013ED8: ;
    _fa = (uint32_t)(MEM32(0x64D180)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D180), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013F1E; /* jne: not equal / not zero */

loc_00013EE0: ;
    PUSH32(esp, 0x322FEC);
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x00013EEFu); RECOMP_ABI_CALL(0x0028B1A0u, sub_0028B1A0); /* call 0x0028B1A0 */

loc_00013EEF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013F11; /* jne: not equal / not zero */

loc_00013EF6: ;
    PUSH32(esp, 0x322FE4);
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x00013F05u); RECOMP_ABI_CALL(0x0028B1A0u, sub_0028B1A0); /* call 0x0028B1A0 */

loc_00013F05: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013F11; /* jne: not equal / not zero */

loc_00013F0C: ;
    PUSH32(esp, 0x00013F11u); RECOMP_ABI_CALL(0x00026CD0u, sub_00026CD0); /* call 0x00026CD0 */

loc_00013F11: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013F1E; /* jne: not equal / not zero */

loc_00013F19: ;
    PUSH32(esp, 0x00013F1Eu); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013F1E: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013F33u); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_00013F33: ;
    PUSH32(esp, 0x00013F38u); RECOMP_ABI_CALL(0x0010B230u, sub_0010B230); /* call 0x0010B230 */

loc_00013F38: ;
    _fa = (uint32_t)(MEM32(0x64D180)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D180), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014022; /* je: equal / zero */

loc_00013F44: ;
    edi = 0x322C54;
    esi = 0x64D190;
    ecx = 0xD;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00013F5E; /* je: equal / zero */

loc_00013F59: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00013F5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013F78; /* jne: not equal / not zero */

loc_00013F62: ;
    MEM32(0x64D1D8) = 1;
    MEM32(0x64D1D0) = ebx;
    MEM32(0x64D1D4) = ebx;

loc_00013F78: ;
    eax = MEM32(0x64D188);
    edx = MEM32(0x64D184);
    MEM32(0x64D030) = eax;
    MEM32(0x64D020) = 1;
    MEM32(0x64D180) = ebx;
    MEM32(0x64D02C) = edx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013FA0: ;
    SET_LO8(ecx, MEM8(eax + 0x64D038));
    MEM8(eax + 0x64D080) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FA0; /* jne: not equal / not zero */

loc_00013FB1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013FB3: ;
    SET_LO8(ecx, MEM8(eax + 0x64D190));
    MEM8(eax + 0x64D038) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FB3; /* jne: not equal / not zero */

loc_00013FC4: ;
    PUSH32(esp, 0x00013FC9u); RECOMP_ABI_CALL(0x00018C00u, sub_00018C00); /* call 0x00018C00 */

loc_00013FC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001400B; /* jne: not equal / not zero */

loc_00013FCD: ;
    MEM32(0x64D020) = ebx;
    PUSH32(esp, 0x00013FD8u); RECOMP_ABI_CALL(0x00026CD0u, sub_00026CD0); /* call 0x00026CD0 */

loc_00013FD8: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FE5; /* jne: not equal / not zero */

loc_00013FE0: ;
    PUSH32(esp, 0x00013FE5u); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013FE5: ;
    esi = 1;

loc_00013FEA: ;
    eax = MEM32(0x64D018);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00014077; /* jbe: below or equal (unsigned <=) */

loc_00013FF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0001405E; /* jbe: below or equal (unsigned <=) */

loc_00013FFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00014077; /* jne: not equal / not zero */

loc_00014001: ;
    POP32(esp, edi);
    MEM32(0x64CFCC) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001400B: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00014020u); RECOMP_ABI_CALL(0x0010AF20u, sub_0010AF20); /* call 0x0010AF20 */

loc_00014020: ;
    goto loc_00013FE5;

loc_00014022: ;
    _fa = (uint32_t)(MEM16(0x34A770)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A770), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014033; /* je: equal / zero */

loc_0001402B: ;
    _fa = (uint32_t)(MEM32(0x64D1D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D1D8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013FEA; /* je: equal / zero */

loc_00014033: ;
    _fa = (uint32_t)(MEM32(0x64D018)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D018), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014043; /* je: equal / zero */

loc_0001403B: ;
    MEM32(0x64CFCC) = esi;
    goto loc_00013FEA;

loc_00014043: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x322FD8);
    MEM32(0x64D018) = 3;
    PUSH32(esp, 0x00014059u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00014059: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00013FEA;

loc_0001405E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x322FD8);
    MEM32(0x64D018) = 3;
    PUSH32(esp, 0x00014074u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00014074: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014077: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013D80
 * Original: 0x00013D80 - 0x0001407B (763 bytes, 192 insns)
 * Folder: main (between: 0x00013B9F and 0x00013DD9)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013D80: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00013D87u); RECOMP_ABI_CALL(0x000C0C10u, sub_000C0C10); /* call 0x000C0C10 */

loc_00013D87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013DA4; /* jne: not equal / not zero */

loc_00013D8E: ;
    PUSH32(esp, ebx);
    ecx = 9;
    PUSH32(esp, 0x00013D99u); RECOMP_ABI_CALL(0x000C0C10u, sub_000C0C10); /* call 0x000C0C10 */

loc_00013D99: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00013EB0; /* je: equal / zero */

loc_00013DA4: ;
    _fa = (uint32_t)(MEM32(0x64D1D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D1D0), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E01; /* je: equal / zero */

loc_00013DAC: ;
    PUSH32(esp, 0x00013DB1u); RECOMP_ABI_CALL(0x00019000u, sub_00019000); /* call 0x00019000 */

loc_00013DB1: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013DC6u); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_00013DC6: ;
    PUSH32(esp, 0x00013DCBu); RECOMP_ABI_CALL(0x0010B1D0u, sub_0010B1D0); /* call 0x0010B1D0 */

loc_00013DCB: ;
    PUSH32(esp, esi);
    ebx = esi;
    esi = MEM32(0x33A204);
    eax = 2;
    PUSH32(esp, 0x00013DDEu); RECOMP_ABI_CALL(0x00013A90u, sub_00013A90); /* call 0x00013A90 */

loc_00013DDE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013DF3; /* jne: not equal / not zero */

loc_00013DE5: ;
    PUSH32(esp, 0x323000);
    PUSH32(esp, 0x00013DEFu); RECOMP_ABI_CALL(0x0027F785u, sub_0027F785); /* call 0x0027F785 */

loc_00013DEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013DF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D1D0) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013E01: ;
    MEM32(0x64D1D8) = ebx;
    MEM32(0x64D1D4) = ebx;
    MEM32(0x64D020) = ebx;
    PUSH32(esp, 0x00013E18u); RECOMP_ABI_CALL(0x00019000u, sub_00019000); /* call 0x00019000 */

loc_00013E18: ;
    PUSH32(esp, 0x00013E1Du); RECOMP_ABI_CALL(0x00026CD0u, sub_00026CD0); /* call 0x00026CD0 */

loc_00013E1D: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013E2A; /* jne: not equal / not zero */

loc_00013E25: ;
    PUSH32(esp, 0x00013E2Au); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013E2A: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013E3Fu); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_00013E3F: ;
    PUSH32(esp, 0x00013E44u); RECOMP_ABI_CALL(0x0010B230u, sub_0010B230); /* call 0x0010B230 */

loc_00013E44: ;
    _fa = (uint32_t)(MEM32(0x64D02C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D02C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E4C: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E54: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E5D: ;
    _fa = (uint32_t)(MEM8(0x33A1F0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x33A1F0), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E65: ;
    ebx = MEM32(0x33A1B8);
    eax = 0xE0005;
    PUSH32(esp, 0x00013E75u); RECOMP_ABI_CALL(0x000D00A0u, sub_000D00A0); /* call 0x000D00A0 */

loc_00013E75: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00013E81u); RECOMP_ABI_CALL(0x000CB0A0u, sub_000CB0A0); /* call 0x000CB0A0 */

loc_00013E81: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 1;

loc_00013E88: ;
    _fa = (uint32_t)(MEM16(0x34A770)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A770), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013E9A; /* jne: not equal / not zero */

loc_00013E91: ;
    MEM16(0x34A770) = 2;

loc_00013E9A: ;
    _fa = (uint32_t)(MEM32(0x64D018)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D018), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014077; /* je: equal / zero */

loc_00013EA6: ;
    POP32(esp, edi);
    MEM32(0x64CFCC) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013EB0: ;
    PUSH32(esp, 0x00013EB5u); RECOMP_ABI_CALL(0x00018EA0u, sub_00018EA0); /* call 0x00018EA0 */

loc_00013EB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00013EC1; /* je: equal / zero */

loc_00013EB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00018F60(); return; /* tail jmp 0x00018F60 */

loc_00013EC1: ;
    _fa = (uint32_t)(MEM32(0x64D02C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D02C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00014077; /* jne: not equal / not zero */

loc_00013ECD: ;
    MEM32(0x64D020) = ebx;
    PUSH32(esp, 0x00013ED8u); RECOMP_ABI_CALL(0x00019000u, sub_00019000); /* call 0x00019000 */

loc_00013ED8: ;
    _fa = (uint32_t)(MEM32(0x64D180)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D180), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013F1E; /* jne: not equal / not zero */

loc_00013EE0: ;
    PUSH32(esp, 0x322FEC);
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x00013EEFu); RECOMP_ABI_CALL(0x0028B1A0u, sub_0028B1A0); /* call 0x0028B1A0 */

loc_00013EEF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013F11; /* jne: not equal / not zero */

loc_00013EF6: ;
    PUSH32(esp, 0x322FE4);
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x00013F05u); RECOMP_ABI_CALL(0x0028B1A0u, sub_0028B1A0); /* call 0x0028B1A0 */

loc_00013F05: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013F11; /* jne: not equal / not zero */

loc_00013F0C: ;
    PUSH32(esp, 0x00013F11u); RECOMP_ABI_CALL(0x00026CD0u, sub_00026CD0); /* call 0x00026CD0 */

loc_00013F11: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013F1E; /* jne: not equal / not zero */

loc_00013F19: ;
    PUSH32(esp, 0x00013F1Eu); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013F1E: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013F33u); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_00013F33: ;
    PUSH32(esp, 0x00013F38u); RECOMP_ABI_CALL(0x0010B230u, sub_0010B230); /* call 0x0010B230 */

loc_00013F38: ;
    _fa = (uint32_t)(MEM32(0x64D180)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D180), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014022; /* je: equal / zero */

loc_00013F44: ;
    edi = 0x322C54;
    esi = 0x64D190;
    ecx = 0xD;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00013F5E; /* je: equal / zero */

loc_00013F59: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00013F5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013F78; /* jne: not equal / not zero */

loc_00013F62: ;
    MEM32(0x64D1D8) = 1;
    MEM32(0x64D1D0) = ebx;
    MEM32(0x64D1D4) = ebx;

loc_00013F78: ;
    eax = MEM32(0x64D188);
    edx = MEM32(0x64D184);
    MEM32(0x64D030) = eax;
    MEM32(0x64D020) = 1;
    MEM32(0x64D180) = ebx;
    MEM32(0x64D02C) = edx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013FA0: ;
    SET_LO8(ecx, MEM8(eax + 0x64D038));
    MEM8(eax + 0x64D080) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FA0; /* jne: not equal / not zero */

loc_00013FB1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013FB3: ;
    SET_LO8(ecx, MEM8(eax + 0x64D190));
    MEM8(eax + 0x64D038) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FB3; /* jne: not equal / not zero */

loc_00013FC4: ;
    PUSH32(esp, 0x00013FC9u); RECOMP_ABI_CALL(0x00018C00u, sub_00018C00); /* call 0x00018C00 */

loc_00013FC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001400B; /* jne: not equal / not zero */

loc_00013FCD: ;
    MEM32(0x64D020) = ebx;
    PUSH32(esp, 0x00013FD8u); RECOMP_ABI_CALL(0x00026CD0u, sub_00026CD0); /* call 0x00026CD0 */

loc_00013FD8: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FE5; /* jne: not equal / not zero */

loc_00013FE0: ;
    PUSH32(esp, 0x00013FE5u); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013FE5: ;
    esi = 1;

loc_00013FEA: ;
    eax = MEM32(0x64D018);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00014077; /* jbe: below or equal (unsigned <=) */

loc_00013FF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0001405E; /* jbe: below or equal (unsigned <=) */

loc_00013FFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00014077; /* jne: not equal / not zero */

loc_00014001: ;
    POP32(esp, edi);
    MEM32(0x64CFCC) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001400B: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00014020u); RECOMP_ABI_CALL(0x0010AF20u, sub_0010AF20); /* call 0x0010AF20 */

loc_00014020: ;
    goto loc_00013FE5;

loc_00014022: ;
    _fa = (uint32_t)(MEM16(0x34A770)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A770), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014033; /* je: equal / zero */

loc_0001402B: ;
    _fa = (uint32_t)(MEM32(0x64D1D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D1D8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013FEA; /* je: equal / zero */

loc_00014033: ;
    _fa = (uint32_t)(MEM32(0x64D018)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D018), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014043; /* je: equal / zero */

loc_0001403B: ;
    MEM32(0x64CFCC) = esi;
    goto loc_00013FEA;

loc_00014043: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x322FD8);
    MEM32(0x64D018) = 3;
    PUSH32(esp, 0x00014059u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00014059: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00013FEA;

loc_0001405E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x322FD8);
    MEM32(0x64D018) = 3;
    PUSH32(esp, 0x00014074u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00014074: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014077: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00013DD9
 * Original: 0x00013DD9 - 0x0001407B (674 bytes, 170 insns)
 * Folder: main (string: Intersti\Inter_2)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013DD9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013DD9: ;
    PUSH32(esp, 0x00013DDEu); RECOMP_ABI_CALL(0x00013A90u, sub_00013A90); /* call 0x00013A90 */

loc_00013DDE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013DF3; /* jne: not equal / not zero */

loc_00013DE5: ;
    PUSH32(esp, 0x323000);
    PUSH32(esp, 0x00013DEFu); RECOMP_ABI_CALL(0x0027F785u, sub_0027F785); /* call 0x0027F785 */

loc_00013DEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013DF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D1D0) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    PUSH32(esp, 0x00013E1Du); RECOMP_ABI_CALL(0x00026CD0u, sub_00026CD0); /* call 0x00026CD0 */

loc_00013E1D: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013E2A; /* jne: not equal / not zero */

loc_00013E25: ;
    PUSH32(esp, 0x00013E2Au); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013E2A: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013E3Fu); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_00013E3F: ;
    PUSH32(esp, 0x00013E44u); RECOMP_ABI_CALL(0x0010B230u, sub_0010B230); /* call 0x0010B230 */

loc_00013E44: ;
    _fa = (uint32_t)(MEM32(0x64D02C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D02C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E4C: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E54: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E5D: ;
    _fa = (uint32_t)(MEM8(0x33A1F0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x33A1F0), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013E88; /* je: equal / zero */

loc_00013E65: ;
    ebx = MEM32(0x33A1B8);
    eax = 0xE0005;
    PUSH32(esp, 0x00013E75u); RECOMP_ABI_CALL(0x000D00A0u, sub_000D00A0); /* call 0x000D00A0 */

loc_00013E75: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00013E81u); RECOMP_ABI_CALL(0x000CB0A0u, sub_000CB0A0); /* call 0x000CB0A0 */

loc_00013E81: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 1;

loc_00013E88: ;
    _fa = (uint32_t)(MEM16(0x34A770)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A770), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013E9A; /* jne: not equal / not zero */

loc_00013E91: ;
    MEM16(0x34A770) = 2;

loc_00013E9A: ;
    _fa = (uint32_t)(MEM32(0x64D018)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D018), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014077; /* je: equal / zero */

loc_00013EA6: ;
    POP32(esp, edi);
    MEM32(0x64CFCC) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00013EC1; /* je: equal / zero */

loc_00013EB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00018F60(); return; /* tail jmp 0x00018F60 */

loc_00013EC1: ;
    _fa = (uint32_t)(MEM32(0x64D02C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D02C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00014077; /* jne: not equal / not zero */

loc_00013ECD: ;
    MEM32(0x64D020) = ebx;
    PUSH32(esp, 0x00013ED8u); RECOMP_ABI_CALL(0x00019000u, sub_00019000); /* call 0x00019000 */

loc_00013ED8: ;
    _fa = (uint32_t)(MEM32(0x64D180)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D180), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013F1E; /* jne: not equal / not zero */

loc_00013EE0: ;
    PUSH32(esp, 0x322FEC);
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x00013EEFu); RECOMP_ABI_CALL(0x0028B1A0u, sub_0028B1A0); /* call 0x0028B1A0 */

loc_00013EEF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013F11; /* jne: not equal / not zero */

loc_00013EF6: ;
    PUSH32(esp, 0x322FE4);
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x00013F05u); RECOMP_ABI_CALL(0x0028B1A0u, sub_0028B1A0); /* call 0x0028B1A0 */

loc_00013F05: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00013F11; /* jne: not equal / not zero */

loc_00013F0C: ;
    PUSH32(esp, 0x00013F11u); RECOMP_ABI_CALL(0x00026CD0u, sub_00026CD0); /* call 0x00026CD0 */

loc_00013F11: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013F1E; /* jne: not equal / not zero */

loc_00013F19: ;
    PUSH32(esp, 0x00013F1Eu); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013F1E: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013F33u); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_00013F33: ;
    PUSH32(esp, 0x00013F38u); RECOMP_ABI_CALL(0x0010B230u, sub_0010B230); /* call 0x0010B230 */

loc_00013F38: ;
    _fa = (uint32_t)(MEM32(0x64D180)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D180), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014022; /* je: equal / zero */

loc_00013F44: ;
    edi = 0x322C54;
    esi = 0x64D190;
    ecx = 0xD;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00013F5E; /* je: equal / zero */

loc_00013F59: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00013F5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013F78; /* jne: not equal / not zero */

loc_00013F62: ;
    MEM32(0x64D1D8) = 1;
    MEM32(0x64D1D0) = ebx;
    MEM32(0x64D1D4) = ebx;

loc_00013F78: ;
    eax = MEM32(0x64D188);
    edx = MEM32(0x64D184);
    MEM32(0x64D030) = eax;
    MEM32(0x64D020) = 1;
    MEM32(0x64D180) = ebx;
    MEM32(0x64D02C) = edx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013FA0: ;
    SET_LO8(ecx, MEM8(eax + 0x64D038));
    MEM8(eax + 0x64D080) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FA0; /* jne: not equal / not zero */

loc_00013FB1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013FB3: ;
    SET_LO8(ecx, MEM8(eax + 0x64D190));
    MEM8(eax + 0x64D038) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FB3; /* jne: not equal / not zero */

loc_00013FC4: ;
    PUSH32(esp, 0x00013FC9u); RECOMP_ABI_CALL(0x00018C00u, sub_00018C00); /* call 0x00018C00 */

loc_00013FC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001400B; /* jne: not equal / not zero */

loc_00013FCD: ;
    MEM32(0x64D020) = ebx;
    PUSH32(esp, 0x00013FD8u); RECOMP_ABI_CALL(0x00026CD0u, sub_00026CD0); /* call 0x00026CD0 */

loc_00013FD8: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FE5; /* jne: not equal / not zero */

loc_00013FE0: ;
    PUSH32(esp, 0x00013FE5u); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013FE5: ;
    esi = 1;

loc_00013FEA: ;
    eax = MEM32(0x64D018);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00014077; /* jbe: below or equal (unsigned <=) */

loc_00013FF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0001405E; /* jbe: below or equal (unsigned <=) */

loc_00013FFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00014077; /* jne: not equal / not zero */

loc_00014001: ;
    POP32(esp, edi);
    MEM32(0x64CFCC) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001400B: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00014020u); RECOMP_ABI_CALL(0x0010AF20u, sub_0010AF20); /* call 0x0010AF20 */

loc_00014020: ;
    goto loc_00013FE5;

loc_00014022: ;
    _fa = (uint32_t)(MEM16(0x34A770)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A770), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014033; /* je: equal / zero */

loc_0001402B: ;
    _fa = (uint32_t)(MEM32(0x64D1D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D1D8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013FEA; /* je: equal / zero */

loc_00014033: ;
    _fa = (uint32_t)(MEM32(0x64D018)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D018), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014043; /* je: equal / zero */

loc_0001403B: ;
    MEM32(0x64CFCC) = esi;
    goto loc_00013FEA;

loc_00014043: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x322FD8);
    MEM32(0x64D018) = 3;
    PUSH32(esp, 0x00014059u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00014059: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00013FEA;

loc_0001405E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x322FD8);
    MEM32(0x64D018) = 3;
    PUSH32(esp, 0x00014074u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00014074: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014077: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00013F17
 * Original: 0x00013F17 - 0x0001407B (356 bytes, 89 insns)
 * Folder: main (string: e3_trail.int)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013F17(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00013F17: ;
    if (_flags /* jne: not equal / not zero */) goto loc_00013F1E;

loc_00013F19: ;
    PUSH32(esp, 0x00013F1Eu); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013F1E: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013F33u); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_00013F33: ;
    PUSH32(esp, 0x00013F38u); RECOMP_ABI_CALL(0x0010B230u, sub_0010B230); /* call 0x0010B230 */

loc_00013F38: ;
    _fa = (uint32_t)(MEM32(0x64D180)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D180), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014022; /* je: equal / zero */

loc_00013F44: ;
    edi = 0x322C54;
    esi = 0x64D190;
    ecx = 0xD;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00013F5E; /* je: equal / zero */

loc_00013F59: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00013F5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013F78; /* jne: not equal / not zero */

loc_00013F62: ;
    MEM32(0x64D1D8) = 1;
    MEM32(0x64D1D0) = ebx;
    MEM32(0x64D1D4) = ebx;

loc_00013F78: ;
    eax = MEM32(0x64D188);
    edx = MEM32(0x64D184);
    MEM32(0x64D030) = eax;
    MEM32(0x64D020) = 1;
    MEM32(0x64D180) = ebx;
    MEM32(0x64D02C) = edx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013FA0: ;
    SET_LO8(ecx, MEM8(eax + 0x64D038));
    MEM8(eax + 0x64D080) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FA0; /* jne: not equal / not zero */

loc_00013FB1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013FB3: ;
    SET_LO8(ecx, MEM8(eax + 0x64D190));
    MEM8(eax + 0x64D038) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FB3; /* jne: not equal / not zero */

loc_00013FC4: ;
    PUSH32(esp, 0x00013FC9u); RECOMP_ABI_CALL(0x00018C00u, sub_00018C00); /* call 0x00018C00 */

loc_00013FC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001400B; /* jne: not equal / not zero */

loc_00013FCD: ;
    MEM32(0x64D020) = ebx;
    PUSH32(esp, 0x00013FD8u); RECOMP_ABI_CALL(0x00026CD0u, sub_00026CD0); /* call 0x00026CD0 */

loc_00013FD8: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013FE5; /* jne: not equal / not zero */

loc_00013FE0: ;
    PUSH32(esp, 0x00013FE5u); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013FE5: ;
    esi = 1;

loc_00013FEA: ;
    eax = MEM32(0x64D018);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00014077; /* jbe: below or equal (unsigned <=) */

loc_00013FF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0001405E; /* jbe: below or equal (unsigned <=) */

loc_00013FFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00014077; /* jne: not equal / not zero */

loc_00014001: ;
    POP32(esp, edi);
    MEM32(0x64CFCC) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001400B: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00014020u); RECOMP_ABI_CALL(0x0010AF20u, sub_0010AF20); /* call 0x0010AF20 */

loc_00014020: ;
    goto loc_00013FE5;

loc_00014022: ;
    _fa = (uint32_t)(MEM16(0x34A770)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A770), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014033; /* je: equal / zero */

loc_0001402B: ;
    _fa = (uint32_t)(MEM32(0x64D1D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D1D8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00013FEA; /* je: equal / zero */

loc_00014033: ;
    _fa = (uint32_t)(MEM32(0x64D018)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D018), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00014043; /* je: equal / zero */

loc_0001403B: ;
    MEM32(0x64CFCC) = esi;
    goto loc_00013FEA;

loc_00014043: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x322FD8);
    MEM32(0x64D018) = 3;
    PUSH32(esp, 0x00014059u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00014059: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00013FEA;

loc_0001405E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x322FD8);
    MEM32(0x64D018) = 3;
    PUSH32(esp, 0x00014074u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00014074: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014077: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00013F98
 * Original: 0x00013F98 - 0x0001407B (227 bytes, 63 insns)
 * Folder: main (string: e3_end.int)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013F98(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013F98: ;
    MEM32(0x64D02C) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013FA0: ;
    SET_LO8(ecx, MEM8(eax + 0x64D038));
    MEM8(eax + 0x64D080) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013FA0; /* jne: not equal / not zero */

loc_00013FB1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013FB3: ;
    SET_LO8(ecx, MEM8(eax + 0x64D190));
    MEM8(eax + 0x64D038) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013FB3; /* jne: not equal / not zero */

loc_00013FC4: ;
    PUSH32(esp, 0x00013FC9u); RECOMP_ABI_CALL(0x00018C00u, sub_00018C00); /* call 0x00018C00 */

loc_00013FC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001400B; /* jne: not equal / not zero */

loc_00013FCD: ;
    MEM32(0x64D020) = ebx;
    PUSH32(esp, 0x00013FD8u); RECOMP_ABI_CALL(0x00026CD0u, sub_00026CD0); /* call 0x00026CD0 */

loc_00013FD8: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013FE5; /* jne: not equal / not zero */

loc_00013FE0: ;
    PUSH32(esp, 0x00013FE5u); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_00013FE5: ;
    esi = 1;

loc_00013FEA: ;
    eax = MEM32(0x64D018);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00014077; /* jbe: below or equal (unsigned <=) */

loc_00013FF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001405E; /* jbe: below or equal (unsigned <=) */

loc_00013FFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014077; /* jne: not equal / not zero */

loc_00014001: ;
    POP32(esp, edi);
    MEM32(0x64CFCC) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001400B: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEMF(0x64D07C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00014020u); RECOMP_ABI_CALL(0x0010AF20u, sub_0010AF20); /* call 0x0010AF20 */

loc_00014020: ;
    goto loc_00013FE5;

    _fa = (uint32_t)(MEM16(0x34A770)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A770), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014033; /* je: equal / zero */

loc_0001402B: ;
    _fa = (uint32_t)(MEM32(0x64D1D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D1D8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013FEA; /* je: equal / zero */

loc_00014033: ;
    _fa = (uint32_t)(MEM32(0x64D018)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D018), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014043; /* je: equal / zero */

loc_0001403B: ;
    MEM32(0x64CFCC) = esi;
    goto loc_00013FEA;

loc_00014043: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x322FD8);
    MEM32(0x64D018) = 3;
    PUSH32(esp, 0x00014059u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00014059: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00013FEA;

loc_0001405E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x322FD8);
    MEM32(0x64D018) = 3;
    PUSH32(esp, 0x00014074u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00014074: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014077: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018C00
 * Original: 0x00018C00 - 0x00018E93 (659 bytes, 209 insns)
 * Folder: main (string: Intersti\Inter_2)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018C00: ;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x124) = eax;
    SET_LO8(eax, MEM8(0x64EE54));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00018C59; /* jne: not equal / not zero */

loc_00018C20: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(ebx) (8-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00018C3A; /* je: equal / zero */

loc_00018C2C: ;
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00018C38u); RECOMP_ABI_CALL(0x002EC9D1u, sub_002EC9D1); /* call 0x002EC9D1 */

loc_00018C38: ;
    goto loc_00018C43;

loc_00018C3A: ;
    PUSH32(esp, 0x00018C3Fu); RECOMP_ABI_CALL(0x000CE970u, sub_000CE970); /* call 0x000CE970 */

loc_00018C3F: ;
    MEM32(esp + 0x14) = eax;

loc_00018C43: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2AE4E0);
    PUSH32(esp, 0x00018C52u); RECOMP_ABI_CALL(0x002AACD0u, sub_002AACD0); /* call 0x002AACD0 */

loc_00018C52: ;
    MEM8(0x64EE54) = 1;

loc_00018C59: ;
    PUSH32(esp, 0x322FEC);
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x00018C68u); RECOMP_ABI_CALL(0x0028B1A0u, sub_0028B1A0); /* call 0x0028B1A0 */

loc_00018C68: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C8B; /* jne: not equal / not zero */

loc_00018C6F: ;
    PUSH32(esp, 0x322FE4);
    PUSH32(esp, 0x64D038);
    PUSH32(esp, 0x00018C7Eu); RECOMP_ABI_CALL(0x0028B1A0u, sub_0028B1A0); /* call 0x0028B1A0 */

loc_00018C7E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(0x64D1E8) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00018C92; /* je: equal / zero */

loc_00018C8B: ;
    MEM8(0x64D1E8) = 1;

loc_00018C92: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018C94: ;
    SET_LO8(ecx, MEM8(eax + 0x34A228));
    MEM8(esp + eax + 0x28) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C94; /* jne: not equal / not zero */

loc_00018CA3: ;
    eax = 0x64D038;
    esi = eax;
    /* nop */

loc_00018CB0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018CB0; /* jne: not equal / not zero */

loc_00018CB7: ;
    edi = esp + 0x28;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_00018CC0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018CC0; /* jne: not equal / not zero */

loc_00018CC8: ;
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
    edx = esp + 0x18;
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
    PUSH32(esp, edx);
    edi = 1;
    esi = 2;
    PUSH32(esp, 4);
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x2C) = 3;
    PUSH32(esp, 0x00018D00u); RECOMP_ABI_CALL(0x002AB140u, sub_002AB140); /* call 0x002AB140 */

loc_00018D00: ;
    PUSH32(esp, ebx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018D0Bu); RECOMP_ABI_CALL(0x002AB360u, sub_002AB360); /* call 0x002AB360 */

loc_00018D0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x34AC34) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00018D31; /* jne: not equal / not zero */

loc_00018D14: ;
    PUSH32(esp, 0x00018D19u); RECOMP_ABI_CALL(0x002AACC0u, sub_002AACC0); /* call 0x002AACC0 */

loc_00018D19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x120);
    PUSH32(esp, 0x00018D2Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_00018D2A: ;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00018D31: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x00018D46u); RECOMP_ABI_CALL(0x002ACEC0u, sub_002ACEC0); /* call 0x002ACEC0 */

loc_00018D46: ;
    eax = MEM32(0x34AC34);
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x00018D5Cu); RECOMP_ABI_CALL(0x002ACEC0u, sub_002ACEC0); /* call 0x002ACEC0 */

loc_00018D5C: ;
    edx = MEM32(0x34AC34);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = 3;
    PUSH32(esp, 0x00018D77u); RECOMP_ABI_CALL(0x002ACEC0u, sub_002ACEC0); /* call 0x002ACEC0 */

loc_00018D77: ;
    ecx = MEM32(0x34AC34);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 4;
    MEM32(esp + 0x20) = 5;
    PUSH32(esp, 0x00018D9Bu); RECOMP_ABI_CALL(0x002ACEC0u, sub_002ACEC0); /* call 0x002ACEC0 */

loc_00018D9B: ;
    eax = MEM32(0x34AC2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018DB0; /* je: equal / zero */

loc_00018DA4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018DAAu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_00018DAA: ;
    MEM32(0x34AC2C) = ebx;

loc_00018DB0: ;
    eax = MEM32(0x34AC30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018DC5; /* je: equal / zero */

loc_00018DB9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018DBFu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_00018DBF: ;
    MEM32(0x34AC30) = ebx;

loc_00018DC5: ;
    eax = MEM32(0x34AC34);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018DDDu); RECOMP_ABI_CALL(0x002A5BB0u, sub_002A5BB0); /* call 0x002A5BB0 */

loc_00018DDD: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x24);
    PUSH32(esp, ebx);
    MEM32(0x34AC2C) = eax;
    eax = MEM32(0x34AC34);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018DFAu); RECOMP_ABI_CALL(0x002A5BB0u, sub_002A5BB0); /* call 0x002A5BB0 */

loc_00018DFA: ;
    MEM32(0x34AC30) = eax;
    eax = MEM32(0x34AC2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018E70; /* je: equal / zero */

loc_00018E08: ;
    _fa = (uint32_t)(MEM32(0x34AC30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x34AC30), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018E70; /* je: equal / zero */

loc_00018E10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018E17u); RECOMP_ABI_CALL(0x002A5C80u, sub_002A5C80); /* call 0x002A5C80 */

loc_00018E17: ;
    edx = MEM32(0x34AC30);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(0x34AC24) = eax;
    PUSH32(esp, 0x00018E29u); RECOMP_ABI_CALL(0x002A5C80u, sub_002A5C80); /* call 0x002A5C80 */

loc_00018E29: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(0x34AC28) = eax;
    PUSH32(esp, 0x00018E3Du); RECOMP_ABI_CALL(0x00298A50u, sub_00298A50); /* call 0x00298A50 */

loc_00018E3D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00018E43u); RECOMP_ABI_CALL(0x00299BA0u, sub_00299BA0); /* call 0x00299BA0 */

loc_00018E43: ;
    _fa = (uint32_t)(MEM8(0x64D1E9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64D1E9), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018E58; /* jne: not equal / not zero */

loc_00018E4B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00018E51u); RECOMP_ABI_CALL(0x002A5E80u, sub_002A5E80); /* call 0x002A5E80 */

loc_00018E51: ;
    MEM8(0x64D1E9) = 1;

loc_00018E58: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x120);
    PUSH32(esp, 0x00018E69u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_00018E69: ;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00018E70: ;
    eax = MEM32(0x34AC34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018E7Bu); RECOMP_ABI_CALL(0x002AD840u, sub_002AD840); /* call 0x002AD840 */

loc_00018E7B: ;
    ecx = MEM32(esp + 0x12C);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    PUSH32(esp, 0x00018E8Cu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_00018E8C: ;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EEA50
 * Original: 0x000EEA50 - 0x000EEA76 (38 bytes, 11 insns)
 * Folder: main (string: loading.int)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EEA50: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EEA75; /* jne: not equal / not zero */

loc_000EEA57: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x330D78);
    MEM32(eax + 4) = 1;
    MEM32(eax) = 1;
    PUSH32(esp, 0x000EEA72u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_000EEA72: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EEA75: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010B150
 * Original: 0x0010B150 - 0x0010B1A2 (82 bytes, 21 insns)
 * Folder: main (string: e3_die.int)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010B150: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    if ((_fa == 0)) goto loc_0010B18A; /* je: equal / zero */

loc_0010B157: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0010B172; /* je: equal / zero */

loc_0010B15A: ;
    PUSH32(esp, 0x322FD8);
    MEM32(0x64D018) = 3;
    PUSH32(esp, 0x0010B16Eu); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_0010B16E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010B172: ;
    PUSH32(esp, 0x33261C);
    MEM32(0x64D018) = 1;
    PUSH32(esp, 0x0010B186u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_0010B186: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010B18A: ;
    PUSH32(esp, 0x322FCC);
    MEM32(0x64D018) = 2;
    PUSH32(esp, 0x0010B19Eu); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_0010B19E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0017E910
 * Original: 0x0017E910 - 0x0017ED15 (1029 bytes, 269 insns)
 * Folder: main (string: e3_end.int)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017E910: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp) = eax;
    eax = MEM32(0x64D87C);
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(ebx + 0x18);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x44);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(0x64D1F8);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = eax;
    _fa = (uint32_t)(MEM32(0x3445E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3445E4), edx (32-bit) */
    MEM32(esp + 0x1C) = edi;
    MEM32(0x64D884) = ebx;
    MEM32(0x64D880) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0017EA7A; /* je: equal / zero */

loc_0017E970: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017E999; /* jne: not equal / not zero */

loc_0017E979: ;
    SET_LO8(eax, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017E999; /* jne: not equal / not zero */

loc_0017E982: ;
    eax = MEM32(0x64CFB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 0x70073;
    if (CMP_NE(_fa, _fb)) goto loc_0017E99E; /* jne: not equal / not zero */

loc_0017E990: ;
    PUSH32(esp, 0x0017E995u); RECOMP_ABI_CALL(0x000D00A0u, sub_000D00A0); /* call 0x000D00A0 */

loc_0017E995: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017E99E; /* jne: not equal / not zero */

loc_0017E999: ;
    eax = 0xF0070073u;

loc_0017E99E: ;
    MEM32(0x64F9E8) = eax;
    PUSH32(esp, 0xE00027F);
    eax = 0x493610;
    PUSH32(esp, 0x0017E9B2u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0017E9B2: ;
    esi = MEM32(0x64D33C);
    ebp = MEM32(0x3400FC);
    edi = MEM32(0x64D3A4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017E9D0; /* je: equal / zero */

loc_0017E9CB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017E9D4; /* je: equal / zero */

loc_0017E9D0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017E9E0; /* je: equal / zero */

loc_0017E9D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017E9E0; /* jne: not equal / not zero */

loc_0017E9D9: ;
    ecx = 0xE00027F;
    goto loc_0017E9E7;

loc_0017E9E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0017EA04; /* je: equal / zero */

loc_0017E9E7: ;
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
    PUSH32(esp, 0x0017E9FFu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0017E9FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0017EA09;

loc_0017EA04: ;
    eax = 0xE00027F;

loc_0017EA09: ;
    MEM32(0x64F9E4) = eax;
    PUSH32(esp, 0xB0044F7);
    eax = 0x493610;
    PUSH32(esp, 0x0017EA1Du); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0017EA1D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017EA29; /* je: equal / zero */

loc_0017EA24: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017EA2D; /* je: equal / zero */

loc_0017EA29: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017EA39; /* je: equal / zero */

loc_0017EA2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017EA39; /* jne: not equal / not zero */

loc_0017EA32: ;
    ecx = 0xB0044F7;
    goto loc_0017EA40;

loc_0017EA39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0017EA5D; /* je: equal / zero */

loc_0017EA40: ;
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
    PUSH32(esp, 0x0017EA58u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0017EA58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0017EA62;

loc_0017EA5D: ;
    eax = 0xB0044F7;

loc_0017EA62: ;
    edi = MEM32(esp + 0x1C);
    esi = eax;
    eax = MEM32(0x64D1F8);
    MEM32(0x64F9EC) = esi;
    MEM32(0x3445E4) = eax;
    goto loc_0017EA80;

loc_0017EA7A: ;
    esi = MEM32(0x64F9EC);

loc_0017EA80: ;
    ecx = MEM32(edi + 0x1F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017ECE7; /* je: equal / zero */

loc_0017EA8E: ;
    eax = MEM32(0x64D1E4);
    SET_LO16(edx, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ecx) (16-bit) */
    ebp = 0x10000;
    if (CMP_NE(_fa, _fb)) goto loc_0017EB97; /* jne: not equal / not zero */

loc_0017EAA8: ;
    ebp = MEM32(eax + 0x168);

loc_0017EAAE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017ECBA; /* je: equal / zero */

loc_0017EAB6: ;
    eax = MEM32(edi + 0x280);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x1F0) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0017EBDB; /* jne: not equal / not zero */

loc_0017EACE: ;
    eax = MEM32(edi + 0x254);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017EBDB; /* jne: not equal / not zero */

loc_0017EADC: ;
    eax = MEM32(0x64F9E8);
    PUSH32(esp, ebx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0017EAE9u); RECOMP_ABI_CALL(0x0026EF50u, sub_0026EF50); /* call 0x0026EF50 */

loc_0017EAE9: ;
    SET_LO8(eax, MEM8(0x64CFB8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017EB43; /* je: equal / zero */

loc_0017EAF5: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017EB09; /* je: equal / zero */

loc_0017EAFE: ;
    edi = MEM32(0x33A1C0);
    PUSH32(esp, 0x0017EB09u); RECOMP_ABI_CALL(0x000CB990u, sub_000CB990); /* call 0x000CB990 */

loc_0017EB09: ;
    SET_LO8(eax, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017EB43; /* je: equal / zero */

loc_0017EB12: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017EB26; /* je: equal / zero */

loc_0017EB1B: ;
    edi = MEM32(0x33A1BC);
    PUSH32(esp, 0x0017EB26u); RECOMP_ABI_CALL(0x000CB990u, sub_000CB990); /* call 0x000CB990 */

loc_0017EB26: ;
    SET_LO8(eax, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017EB43; /* je: equal / zero */

loc_0017EB2F: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017EB43; /* je: equal / zero */

loc_0017EB38: ;
    edi = MEM32(0x33A1B8);
    PUSH32(esp, 0x0017EB43u); RECOMP_ABI_CALL(0x000CB990u, sub_000CB990); /* call 0x000CB990 */

loc_0017EB43: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0017EB4Cu); RECOMP_ABI_CALL(0x00257EC0u, sub_00257EC0); /* call 0x00257EC0 */

loc_0017EB4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0017EB54u); RECOMP_ABI_CALL(0x0026EED0u, sub_0026EED0); /* call 0x0026EED0 */

loc_0017EB54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017EB62; /* je: equal / zero */

loc_0017EB58: ;
    eax = MEM32(0x64D1DC);
    PUSH32(esp, 0x0017EB62u); RECOMP_ABI_CALL(0x00016860u, sub_00016860); /* call 0x00016860 */

loc_0017EB62: ;
    PUSH32(esp, 0x0017EB67u); RECOMP_ABI_CALL(0x0010AFA0u, sub_0010AFA0); /* call 0x0010AFA0 */

loc_0017EB67: ;
    PUSH32(esp, 0x0017EB6Cu); RECOMP_ABI_CALL(0x0010B230u, sub_0010B230); /* call 0x0010B230 */

loc_0017EB6C: ;
    eax = MEM32(0x64F9E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ecx = MEM32(0x64D880);
    MEM32(esp + 0x50) = 0x6E;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0017EBBE; /* jne: not equal / not zero */

loc_0017EB90: ;
    eax = MEM32(0x614FCC);
    goto loc_0017EBC8;

loc_0017EB97: ;
    _fa = (uint32_t)(MEM16(eax + 0x17C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x17C), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017EBAB; /* jne: not equal / not zero */

loc_0017EBA0: ;
    ebp = MEM32(eax + 0x178);
    goto loc_0017EAAE;

loc_0017EBAB: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017EAB6; /* je: equal / zero */

loc_0017EBB4: ;
    ebp = 0x20000;
    goto loc_0017EAB6;

loc_0017EBBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017EBC8; /* jne: not equal / not zero */

loc_0017EBC3: ;
    eax = MEM32(0x614FD0);

loc_0017EBC8: ;
    edx = esp + 0x20;
    PUSH32(esp, 0x0017EBD1u); RECOMP_ABI_CALL(0x0010F4D0u, sub_0010F4D0); /* call 0x0010F4D0 */

loc_0017EBD1: ;
    esi = MEM32(0x64F9EC);
    edi = MEM32(esp + 0x1C);

loc_0017EBDB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017EBE7; /* jne: not equal / not zero */

loc_0017EBE0: ;
    eax = MEM32(0x614FCC);
    goto loc_0017EBF3;

loc_0017EBE7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0017EBF3; /* je: equal / zero */

loc_0017EBF1: ;
    eax = esi;

loc_0017EBF3: ;
    edx = MEM32(edi + 0x27C);
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0017EC01u); RECOMP_ABI_CALL(0x002594B0u, sub_002594B0); /* call 0x002594B0 */

loc_0017EC01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017EC10; /* jne: not equal / not zero */

loc_0017EC09: ;
    eax = MEM32(0x614FCC);
    goto loc_0017EC1C;

loc_0017EC10: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0017EC1C; /* je: equal / zero */

loc_0017EC1A: ;
    eax = esi;

loc_0017EC1C: ;
    ecx = MEM32(edi + 0x27C);
    PUSH32(esp, ecx);
    ecx = 1;
    PUSH32(esp, 0x0017EC2Du); RECOMP_ABI_CALL(0x002594B0u, sub_002594B0); /* call 0x002594B0 */

loc_0017EC2D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    MEM32(edi + 0x258) = 0xF;
    if (CMP_NE(_fa, _fb)) goto loc_0017EC8C; /* jne: not equal / not zero */

loc_0017EC3F: ;
    eax = MEM32(edi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017EC64; /* jne: not equal / not zero */

loc_0017EC49: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x322FD8);
    MEM32(0x64D018) = 3;
    PUSH32(esp, 0x0017EC5Fu); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_0017EC5F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0017EC8C;

loc_0017EC64: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x4C) = eax;
    edx = esp + 0x20;
    eax = ebx;
    MEM32(esp + 0x50) = 0x32;
    MEM32(esp + 0x48) = 0x3E8;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0017EC8Cu); RECOMP_ABI_CALL(0x0010F4D0u, sub_0010F4D0); /* call 0x0010F4D0 */

loc_0017EC8C: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(0x64D884) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D880) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0017ECBA: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(0x64D884) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = edx;
    MEM32(0x64D880) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0017ECE7: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    MEM32(0x64D878) = edx;
    MEM32(0x64D87C) = eax;
    MEM32(0x64D880) = ecx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
