/**
 * PoP Warrior Within Xbox retail - scripts, chunk 19
 * The game's AI models compiled to C (AI2C), listed in the compiled AI table
 * Functions: 22 (0x003889D0 - 0x0038CB70)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_003889D0
 * Original: 0x003889D0 - 0x00388B01 (305 bytes, 89 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003889D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003889D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x91F104);
    ecx = MEM32(0x91F108);
    edx = MEM32(esi + 0x18);
    MEM32(esp) = eax;
    eax = MEM32(edx + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x91F110);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x91EDAC);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = eax;
    eax = MEM32(0x5ABD44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(0x91F10C);
    PUSH32(esp, edi);
    MEM32(0x91F110) = esi;
    MEM32(0x91F10C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00388A6A; /* je: equal / zero */

loc_00388A1F: ;
    _fa = (uint32_t)(MEM8(0x91ED80)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91ED80), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00388A52; /* jne: not equal / not zero */

loc_00388A28: ;
    SET_LO8(eax, MEM8(0x91ED81));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00388A52; /* jne: not equal / not zero */

loc_00388A31: ;
    eax = MEM32(0x91ED74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00388A41; /* je: equal / zero */

loc_00388A3A: ;
    eax = 0x40000E;
    goto loc_00388A57;

loc_00388A41: ;
    PUSH32(esp, 0x40000E);
    PUSH32(esp, 0x00388A4Bu); RECOMP_ABI_CALL(0x0043BDC0u, sub_0043BDC0); /* call 0x0043BDC0 */

loc_00388A4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00388A57; /* jne: not equal / not zero */

loc_00388A52: ;
    eax = 0xF040000Eu;

loc_00388A57: ;
    ecx = MEM32(0x91EDAC);
    MEM32(0x955DE8) = eax;
    MEM32(0x5ABD44) = ecx;
    goto loc_00388A6F;

loc_00388A6A: ;
    eax = MEM32(0x955DE8);

loc_00388A6F: ;
    SET_LO8(ecx, MEM8(0x91ED80));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00388ACD; /* je: equal / zero */

loc_00388A7B: ;
    _fa = (uint32_t)(MEM8(0x91ED81)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91ED81), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00388ACD; /* je: equal / zero */

loc_00388A84: ;
    SET_LO8(ecx, MEM8(0x59A52C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00388ACD; /* je: equal / zero */

loc_00388A8E: ;
    ecx = MEM32(0x91ED74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00388AA3; /* je: equal / zero */

loc_00388A98: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00388A9Eu); RECOMP_ABI_CALL(0x0043BDC0u, sub_0043BDC0); /* call 0x0043BDC0 */

loc_00388A9E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00388AA3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00388ACD; /* je: equal / zero */

loc_00388AA7: ;
    eax = MEM32(0x59A4F4);
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00388ABFu); RECOMP_ABI_CALL(0x0043B450u, sub_0043B450); /* call 0x0043B450 */

loc_00388ABF: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00388ACAu); RECOMP_ABI_CALL(0x000328C0u, sub_000328C0); /* call 0x000328C0 */

loc_00388ACA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00388ACD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0x00388AD8u); RECOMP_ABI_CALL(0x00389930u, sub_00389930); /* call 0x00389930 */

loc_00388AD8: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x91F10C) = ebp;
    POP32(esp, ebp);
    MEM32(0x91F110) = ebx;
    MEM32(0x91F104) = edx;
    MEM32(0x91F108) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00388B10
 * Original: 0x00388B10 - 0x00388E1E (782 bytes, 210 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00388B10: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x91F110);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x91F10C);
    edx = MEM32(0x91F104);
    PUSH32(esp, ebx);
    MEM32(esp + 8) = eax;
    eax = MEM32(0x91F108);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x88);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x48);
    ecx = MEM32(0x5ABD40);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x54) = ebx;
    edx = MEM32(eax + 4);
    eax = MEM32(0x91EDAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(0x91F104) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00388CB8; /* je: equal / zero */

loc_00388BB6: ;
    PUSH32(esp, 0x4E000254);
    eax = 0x842580;
    PUSH32(esp, 0x00388BC5u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00388BC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00388BD4; /* jne: not equal / not zero */

loc_00388BCD: ;
    ecx = 0x4E000254;
    goto loc_00388BDB;

loc_00388BD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00388BF8; /* je: equal / zero */

loc_00388BDB: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00388BF3u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00388BF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00388BFD;

loc_00388BF8: ;
    eax = 0x4E000254;

loc_00388BFD: ;
    MEM32(0x955DE4) = eax;
    PUSH32(esp, 0x8002717);
    eax = 0x842580;
    PUSH32(esp, 0x00388C11u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00388C11: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00388C20; /* jne: not equal / not zero */

loc_00388C19: ;
    ecx = 0x8002717;
    goto loc_00388C27;

loc_00388C20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00388C44; /* je: equal / zero */

loc_00388C27: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00388C3Fu); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00388C3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00388C49;

loc_00388C44: ;
    eax = 0x8002717;

loc_00388C49: ;
    esi = eax;
    PUSH32(esp, 0xE00027F);
    eax = 0x842580;
    MEM32(0x955DE0) = esi;
    PUSH32(esp, 0x00388C60u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00388C60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00388C6F; /* jne: not equal / not zero */

loc_00388C68: ;
    ecx = 0xE00027F;
    goto loc_00388C76;

loc_00388C6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00388CA2; /* je: equal / zero */

loc_00388C76: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00388C8Eu); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00388C8E: ;
    MEM32(0x955DDC) = eax;
    eax = MEM32(0x91EDAC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x5ABD40) = eax;
    goto loc_00388CBE;

loc_00388CA2: ;
    eax = 0xE00027F;
    MEM32(0x955DDC) = eax;
    eax = MEM32(0x91EDAC);
    MEM32(0x5ABD40) = eax;
    goto loc_00388CBE;

loc_00388CB8: ;
    esi = MEM32(0x955DE0);

loc_00388CBE: ;
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0x48);
    _fa = (uint32_t)(MEM32(eax + 0x123C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x123C), ebx (32-bit) */
    MEM32(0x91F10C) = ebp;
    MEM32(0x91F110) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00388CFD; /* jne: not equal / not zero */

loc_00388CDB: ;
    eax = MEM32(edi + 0x1434);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = MEM32(0x91F104);
    MEM32(0x91F108) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00388D57; /* je: equal / zero */

loc_00388CF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00388D0B; /* jne: not equal / not zero */

loc_00388CF6: ;
    eax = MEM32(0x873364);
    goto loc_00388D15;

loc_00388CFD: ;
    edx = MEM32(0x91F104);
    MEM32(0x91F108) = edx;
    goto loc_00388D57;

loc_00388D0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00388D15; /* jne: not equal / not zero */

loc_00388D10: ;
    eax = MEM32(0x873368);

loc_00388D15: ;
    edi = 0x19;
    PUSH32(esp, 0x00388D1Fu); RECOMP_ABI_CALL(0x0038DA10u, sub_0038DA10); /* call 0x0038DA10 */

loc_00388D1F: ;
    eax = MEM32(0x955DE4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + 0x48);
    _fa = (uint32_t)(MEM32(ecx + 0xF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xF4), ebx (32-bit) */
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00388D57; /* je: equal / zero */

loc_00388D39: ;
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx + 4);
    eax = MEM32(eax + 0x48);
    edx = MEM32(eax + 0x258);
    ecx = MEM32(esp + 0x94);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x258) = edx;

loc_00388D57: ;
    eax = MEM32(edi + 0xA94);
    ecx = MEM32(edi + 0x11C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00388DF0; /* jge: greater or equal (signed >=) */

loc_00388D6B: ;
    edx = MEM32(esp + 0x94);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00388D81; /* jle: less or equal (signed <=) */

loc_00388D78: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x94) = ecx;

loc_00388D81: ;
    edx = MEM32(esp + 0x94);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xA94) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 0x24;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x64) = 0x100192;
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0x00388DBEu); RECOMP_ABI_CALL(0x0029E470u, sub_0029E470); /* call 0x0029E470 */

loc_00388DBE: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    MEM32(0x91F110) = edx;
    edx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = ecx;
    MEM32(0x91F10C) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00388DF0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x91F110) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(0x91F104) = ecx;
    MEM32(0x91F108) = edx;
    MEM32(0x91F10C) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00388E14
 * Original: 0x00388E14 - 0x00388E1E (10 bytes, 4 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388E14(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00388E14: ;
    MEM32(0x91F10C) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00388E20
 * Original: 0x00388E20 - 0x00389440 (1568 bytes, 475 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00388E20: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x91F10C);
    edx = MEM32(0x91F104);
    PUSH32(esp, ebx);
    ebx = MEM32(0x91EDAC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x91F110);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x91F108);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(ecx + 4);
    ebp = MEM32(eax + 0x48);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = eax;
    _fa = (uint32_t)(MEM32(0x5ABD3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5ABD3C), ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x98);
    MEM32(esp + 0x28) = edx;
    MEM32(0x91F110) = esi;
    MEM32(0x91F10C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00388F28; /* je: equal / zero */

loc_00388E8A: ;
    PUSH32(esp, 0xB60024A9u);
    eax = 0x842580;
    PUSH32(esp, 0x00388E99u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00388E99: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00388EA8; /* jne: not equal / not zero */

loc_00388EA1: ;
    ecx = 0xB60024A9u;
    goto loc_00388EAF;

loc_00388EA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00388ECC; /* je: equal / zero */

loc_00388EAF: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00388EC7u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00388EC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00388ED1;

loc_00388ECC: ;
    eax = 0xB60024A9u;

loc_00388ED1: ;
    MEM32(0x955DD4) = eax;
    PUSH32(esp, 0x13006C13);
    eax = 0x842580;
    PUSH32(esp, 0x00388EE5u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00388EE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00388EF4; /* jne: not equal / not zero */

loc_00388EED: ;
    ecx = 0x13006C13;
    goto loc_00388EFB;

loc_00388EF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00388F18; /* je: equal / zero */

loc_00388EFB: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00388F13u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00388F13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00388F1D;

loc_00388F18: ;
    eax = 0x13006C13;

loc_00388F1D: ;
    MEM32(0x955DD8) = eax;
    MEM32(0x5ABD3C) = ebx;

loc_00388F28: ;
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x00388F34u); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_00388F34: ;
    eax = MEM32(0x955DD4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x64;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00388F47u); RECOMP_ABI_CALL(0x0036C800u, sub_0036C800); /* call 0x0036C800 */

loc_00388F47: ;
    eax = esp + 0x78;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00388F53u); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_00388F53: ;
    ecx = esp + 0x7C;
    edx = esp + 0x64;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    ecx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x98);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    eax = esp + 0x58;
    MEM32(esp + 0x18) = eax;
    edx = MEM32(esp + 0x18);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x586C38); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00388FDEu); RECOMP_ABI_CALL(0x000E9370u, sub_000E9370); /* call 0x000E9370 */

loc_00388FDE: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389012; /* je: equal / zero */

loc_00388FE5: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389012; /* je: equal / zero */

loc_00388FEB: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389012; /* je: equal / zero */

loc_00388FF2: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    eax = MEM32(edi + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edi + 8);
    MEM32(ecx + 8) = edx;
    MEM32(0x59A618) = 0;

loc_00389012: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x9C);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    PUSH32(esp, ecx);
    edi = esi;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00389043u); RECOMP_ABI_CALL(0x000E9720u, sub_000E9720); /* call 0x000E9720 */

loc_00389043: ;
    xmm0 = XMM_SCALAR(MEMF(0x586634)); /* movss */
    edx = esp + 0x84;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    edx = MEM32(esp + 0x9C);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x586834)); /* movss */
    eax = esp + 0x40;
    ecx = esp + 0x7C;
    edx = esp + 0x4C;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    eax = esp + 0x4C;
    ecx = esp + 0x88;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x98);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    esi = MEM32(0x955DD8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389133; /* jne: not equal / not zero */

loc_0038912B: ;
    esi = MEM32(0x873364);
    goto loc_0038913E;

loc_00389133: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038913E; /* jne: not equal / not zero */

loc_00389138: ;
    esi = MEM32(0x873368);

loc_0038913E: ;
    edi = esp + 0x88;
    PUSH32(esp, 0x0038914Au); RECOMP_ABI_CALL(0x000E9370u, sub_000E9370); /* call 0x000E9370 */

loc_0038914A: ;
    eax = MEM32(ebp + 0x1434);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    MEMF(ebp + 0x1480) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0038916C; /* jne: not equal / not zero */

loc_00389165: ;
    eax = MEM32(0x873364);
    goto loc_00389176;

loc_0038916C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389176; /* jne: not equal / not zero */

loc_00389171: ;
    eax = MEM32(0x873368);

loc_00389176: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003891AE; /* je: equal / zero */

loc_0038917A: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003891AE; /* je: equal / zero */

loc_00389181: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003891AE; /* je: equal / zero */

loc_00389188: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389199; /* jne: not equal / not zero */

loc_0038918F: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x60);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003891A2; /* je: equal / zero */

loc_00389199: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389188; /* jne: not equal / not zero */

loc_003891A0: ;
    goto loc_003891AE;

loc_003891A2: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003891AE; /* je: equal / zero */

loc_003891A9: ;
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */

loc_003891AE: ;
    eax = MEM32(ebp + 0x1488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003891C0; /* jne: not equal / not zero */

loc_003891B9: ;
    eax = MEM32(0x873364);
    goto loc_003891CA;

loc_003891C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003891CA; /* jne: not equal / not zero */

loc_003891C5: ;
    eax = MEM32(0x873368);

loc_003891CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389206; /* je: equal / zero */

loc_003891CE: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389206; /* je: equal / zero */

loc_003891D5: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389206; /* je: equal / zero */

loc_003891DC: ;
    /* nop */

loc_003891E0: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003891F1; /* jne: not equal / not zero */

loc_003891E7: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x60);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003891FA; /* je: equal / zero */

loc_003891F1: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003891E0; /* jne: not equal / not zero */

loc_003891F8: ;
    goto loc_00389206;

loc_003891FA: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389206; /* je: equal / zero */

loc_00389201: ;
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */

loc_00389206: ;
    eax = MEM32(ebp + 0x11B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389218; /* jne: not equal / not zero */

loc_00389211: ;
    eax = MEM32(0x873364);
    goto loc_00389222;

loc_00389218: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389222; /* jne: not equal / not zero */

loc_0038921D: ;
    eax = MEM32(0x873368);

loc_00389222: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038925A; /* je: equal / zero */

loc_00389226: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038925A; /* je: equal / zero */

loc_0038922D: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038925A; /* je: equal / zero */

loc_00389234: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389245; /* jne: not equal / not zero */

loc_0038923B: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x60);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038924E; /* je: equal / zero */

loc_00389245: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389234; /* jne: not equal / not zero */

loc_0038924C: ;
    goto loc_0038925A;

loc_0038924E: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038925A; /* je: equal / zero */

loc_00389255: ;
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */

loc_0038925A: ;
    eax = MEM32(ebp + 0x99C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038926C; /* jne: not equal / not zero */

loc_00389265: ;
    eax = MEM32(0x873364);
    goto loc_00389276;

loc_0038926C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389276; /* jne: not equal / not zero */

loc_00389271: ;
    eax = MEM32(0x873368);

loc_00389276: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003892AE; /* je: equal / zero */

loc_0038927A: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003892AE; /* je: equal / zero */

loc_00389281: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003892AE; /* je: equal / zero */

loc_00389288: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389299; /* jne: not equal / not zero */

loc_0038928F: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x60);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003892A2; /* je: equal / zero */

loc_00389299: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389288; /* jne: not equal / not zero */

loc_003892A0: ;
    goto loc_003892AE;

loc_003892A2: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003892AE; /* je: equal / zero */

loc_003892A9: ;
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */

loc_003892AE: ;
    eax = MEM32(ebp + 0x1434);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003892C0; /* jne: not equal / not zero */

loc_003892B9: ;
    eax = MEM32(0x873364);
    goto loc_003892CA;

loc_003892C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003892CA; /* jne: not equal / not zero */

loc_003892C5: ;
    eax = MEM32(0x873368);

loc_003892CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003892F8; /* je: equal / zero */

loc_003892CE: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003892F8; /* je: equal / zero */

loc_003892D5: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003892F8; /* je: equal / zero */

loc_003892DC: ;
    /* nop */

loc_003892E0: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003892F1; /* jne: not equal / not zero */

loc_003892E7: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x60);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389310; /* je: equal / zero */

loc_003892F1: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003892E0; /* jne: not equal / not zero */

loc_003892F8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_003892FE: ;
    eax = MEM32(ebp + 0x1488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389324; /* jne: not equal / not zero */

loc_00389309: ;
    eax = MEM32(0x873364);
    goto loc_0038932E;

loc_00389310: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003892F8; /* je: equal / zero */

loc_00389317: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    goto loc_003892FE;

loc_00389324: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038932E; /* jne: not equal / not zero */

loc_00389329: ;
    eax = MEM32(0x873368);

loc_0038932E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389366; /* je: equal / zero */

loc_00389332: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389366; /* je: equal / zero */

loc_00389339: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389366; /* je: equal / zero */

loc_00389340: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389351; /* jne: not equal / not zero */

loc_00389347: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x60);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038935A; /* je: equal / zero */

loc_00389351: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389340; /* jne: not equal / not zero */

loc_00389358: ;
    goto loc_00389366;

loc_0038935A: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389366; /* je: equal / zero */

loc_00389361: ;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */

loc_00389366: ;
    eax = MEM32(ebp + 0x11B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389378; /* jne: not equal / not zero */

loc_00389371: ;
    eax = MEM32(0x873364);
    goto loc_00389382;

loc_00389378: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389382; /* jne: not equal / not zero */

loc_0038937D: ;
    eax = MEM32(0x873368);

loc_00389382: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003893BA; /* je: equal / zero */

loc_00389386: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003893BA; /* je: equal / zero */

loc_0038938D: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003893BA; /* je: equal / zero */

loc_00389394: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003893A5; /* jne: not equal / not zero */

loc_0038939B: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x60);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003893AE; /* je: equal / zero */

loc_003893A5: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389394; /* jne: not equal / not zero */

loc_003893AC: ;
    goto loc_003893BA;

loc_003893AE: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003893BA; /* je: equal / zero */

loc_003893B5: ;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */

loc_003893BA: ;
    eax = MEM32(ebp + 0x99C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003893CC; /* jne: not equal / not zero */

loc_003893C5: ;
    eax = MEM32(0x873364);
    goto loc_003893D6;

loc_003893CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003893D6; /* jne: not equal / not zero */

loc_003893D1: ;
    eax = MEM32(0x873368);

loc_003893D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038940E; /* je: equal / zero */

loc_003893DA: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038940E; /* je: equal / zero */

loc_003893E1: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038940E; /* je: equal / zero */

loc_003893E8: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003893F9; /* jne: not equal / not zero */

loc_003893EF: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x60);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389402; /* je: equal / zero */

loc_003893F9: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003893E8; /* jne: not equal / not zero */

loc_00389400: ;
    goto loc_0038940E;

loc_00389402: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038940E; /* je: equal / zero */

loc_00389409: ;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */

loc_0038940E: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x91F110) = edx;
    edx = MEM32(esp + 0x28);
    POP32(esp, ebp);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = ecx;
    MEM32(0x91F10C) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00389440
 * Original: 0x00389440 - 0x003898C2 (1154 bytes, 273 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389440(void)
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

loc_00389440: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x91F110);
    ecx = MEM32(0x91F10C);
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x91F104);
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x91F108);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x8C);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x48);
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm4.f[0]; /* movss */
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x54) = ebx;
    eax = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(0x91EDAC);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = eax;
    _fa = (uint32_t)(MEM32(0x5ABD38)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5ABD38), edi (32-bit) */
    MEM32(esp + 0x1C) = edx;
    MEM32(0x91F110) = ebp;
    MEM32(0x91F10C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00389592; /* je: equal / zero */

loc_003894F4: ;
    PUSH32(esp, 0x8002717);
    eax = 0x842580;
    PUSH32(esp, 0x00389503u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00389503: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389512; /* jne: not equal / not zero */

loc_0038950B: ;
    ecx = 0x8002717;
    goto loc_00389519;

loc_00389512: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00389536; /* je: equal / zero */

loc_00389519: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00389531u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00389531: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0038953B;

loc_00389536: ;
    eax = 0x8002717;

loc_0038953B: ;
    MEM32(0x955DCC) = eax;
    PUSH32(esp, 0xCC000403u);
    eax = 0x842580;
    PUSH32(esp, 0x0038954Fu); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038954F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038955E; /* jne: not equal / not zero */

loc_00389557: ;
    ecx = 0xCC000403u;
    goto loc_00389565;

loc_0038955E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00389582; /* je: equal / zero */

loc_00389565: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0038957Du); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038957D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00389587;

loc_00389582: ;
    eax = 0xCC000403u;

loc_00389587: ;
    MEM32(0x955DD0) = eax;
    MEM32(0x5ABD38) = edi;

loc_00389592: ;
    _fa = (uint32_t)(MEM32(esi + 0x1210)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1210), ebx (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x59FD1C)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    MEM32(esp + 0x14) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_003895E5; /* je: equal / zero */

loc_003895B9: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x118C)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(esi + 0x136C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003895E5; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(esi + 0x136C)) */

loc_003895CA: ;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ecx);
    edx = ZX8(MEM8(eax + 0x3A));
    eax = MEM32(eax + 0x2C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34);
    _fa = (uint32_t)(MEM8(edx + eax + 1)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + eax + 1), 0x40 (8-bit) */
    MEM32(esp + 0x14) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0038965D; /* jne: not equal / not zero */

loc_003895E5: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003895F3; /* je: equal / zero */

loc_003895EC: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_003895F6;

loc_003895F3: ;
    xmm2 = xmm1; /* movaps */

loc_003895F6: ;
    xmm2.f[0] = xmm2.f[0] * MEMF(0x84266C); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC50)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x13C0); /* addss */
    MEMF(esi + 0x13C0) = xmm3.f[0]; /* movss */
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038962C; /* je: equal / zero */

loc_00389625: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_0038962F;

loc_0038962C: ;
    xmm2 = xmm1; /* movaps */

loc_0038962F: ;
    xmm2.f[0] = xmm2.f[0] * MEMF(0x84266C); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xB10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xEC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esi + 0xEC4) = xmm0.f[0]; /* movss */
    goto loc_003896D7;

loc_0038965D: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038966B; /* je: equal / zero */

loc_00389664: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_0038966E;

loc_0038966B: ;
    xmm2 = xmm1; /* movaps */

loc_0038966E: ;
    xmm2.f[0] = xmm2.f[0] * MEMF(0x84266C); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC50)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x13C0)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esi + 0x13C0) = xmm2.f[0]; /* movss */
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003896A8; /* je: equal / zero */

loc_003896A1: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_003896AB;

loc_003896A8: ;
    xmm3 = xmm1; /* movaps */

loc_003896AB: ;
    xmm2 = XMM_SCALAR(MEMF(0x84266C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x13C4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0xEC4); /* addss */
    MEMF(esi + 0xEC4) = xmm3.f[0]; /* movss */

loc_003896D7: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003896E5; /* je: equal / zero */

loc_003896DE: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_003896E8;

loc_003896E5: ;
    xmm0 = xmm1; /* movaps */

loc_003896E8: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x84266C); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x136C)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x13C0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x136C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x1218)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038971E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00389719: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00389726;

loc_0038971E: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00389726; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00389723: ;
    xmm0 = xmm2; /* movaps */

loc_00389726: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x13C0) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00389741; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_00389733: ;
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(0x59FD1C) = xmm4.f[0]; /* movss */
    goto loc_003897A4;

loc_00389741: ;
    xmm3 = XMM_SCALAR(MEMF(0x586658)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(0x59FD1C) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0038975D; /* jp: parity */

loc_0038975A: ;
    xmm3 = xmm4; /* movaps */

loc_0038975D: ;
    xmm2 = XMM_SCALAR(MEMF(0x59A51C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x59A524)); /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x59A520); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    MEMF(0x59A520) = xmm5.f[0]; /* movss */
    MEMF(0x59A524) = xmm0.f[0]; /* movss */
    MEMF(0x59A51C) = xmm4.f[0]; /* movss */
    MEMF(0x59A528) = xmm3.f[0]; /* movss */

loc_003897A4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xEC4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_003897B4; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003897B1: ;
    xmm1 = xmm0; /* movaps */

loc_003897B4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x1218); /* divss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0xEC4) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003897D4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003897D1: ;
    xmm0 = xmm1; /* movaps */

loc_003897D4: ;
    MEMF(esi + 0xEC4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003897E8; /* je: equal / zero */

loc_003897E3: ;
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */

loc_003897E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 0x28;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x955DCC);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x60) = 0x100190;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x13C0)); /* movss */
    edx = esp + 0x64;
    PUSH32(esp, edx);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xEC4)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = ebp;
    PUSH32(esp, 0x00389833u); RECOMP_ABI_CALL(0x0029E470u, sub_0029E470); /* call 0x0029E470 */

loc_00389833: ;
    ebx = MEM32(0x955DD0);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    edx = esp + 0x3C;
    MEM32(esp + 0x6C) = 0x3E8;
    PUSH32(esp, 0x0038984Fu); RECOMP_ABI_CALL(0x0032E650u, sub_0032E650); /* call 0x0032E650 */

loc_0038984F: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389890; /* je: equal / zero */

loc_0038985A: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x13C0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00389890; /* jp: parity */

loc_00389873: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xEC4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00389890; /* jp: parity */

loc_00389884: ;
    PUSH32(esp, 0);
    edi = ebp;
    PUSH32(esp, 0x0038988Du); RECOMP_ABI_CALL(0x00387850u, sub_00387850); /* call 0x00387850 */

loc_0038988D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00389890: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x91F110) = ecx;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, ebp);
    MEM32(0x91F104) = edx;
    MEM32(0x91F108) = eax;
    MEM32(0x91F10C) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003898D0
 * Original: 0x003898D0 - 0x00389925 (85 bytes, 23 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003898D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003898D0: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00389918; /* jnp: not parity */

loc_003898DC: ;
    xmm0 = XMM_SCALAR(MEMF(0x91F09C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x91F120); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038990B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00389903: ;
    xmm0 = xmm1; /* movaps */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0038990B: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00389920; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00389910: ;
    xmm0 = xmm2; /* movaps */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00389918: ;
    xmm0 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */

loc_00389920: ;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389930
 * Original: 0x00389930 - 0x00389C7E (846 bytes, 217 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00389930: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x91F10C);
    edx = MEM32(0x91F104);
    PUSH32(esp, ebx);
    ebx = MEM32(0x91EDAC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x91F110);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x91F108);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x48);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = eax;
    _fa = (uint32_t)(MEM32(0x5ABD34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5ABD34), ebx (32-bit) */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(0x91F110) = esi;
    MEM32(0x91F10C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00389A48; /* je: equal / zero */

loc_0038999A: ;
    PUSH32(esp, 0x8002717);
    eax = 0x842580;
    PUSH32(esp, 0x003899A9u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_003899A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003899B8; /* jne: not equal / not zero */

loc_003899B1: ;
    ecx = 0x8002717;
    goto loc_003899BF;

loc_003899B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003899DC; /* je: equal / zero */

loc_003899BF: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003899D7u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_003899D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003899E1;

loc_003899DC: ;
    eax = 0x8002717;

loc_003899E1: ;
    ebp = eax;
    PUSH32(esp, 0xE00027F);
    eax = 0x842580;
    MEM32(0x955DC8) = ebp;
    PUSH32(esp, 0x003899F8u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_003899F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389A07; /* jne: not equal / not zero */

loc_00389A00: ;
    ecx = 0xE00027F;
    goto loc_00389A0E;

loc_00389A07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00389A36; /* je: equal / zero */

loc_00389A0E: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00389A26u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00389A26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x955DC4) = eax;
    MEM32(0x5ABD34) = ebx;
    goto loc_00389A4E;

loc_00389A36: ;
    eax = 0xE00027F;
    MEM32(0x955DC4) = eax;
    MEM32(0x5ABD34) = ebx;
    goto loc_00389A4E;

loc_00389A48: ;
    ebp = MEM32(0x955DC8);

loc_00389A4E: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ebx = esi;
    eax = ebp;
    PUSH32(esp, 0x00389A5Eu); RECOMP_ABI_CALL(0x0031FEF0u, sub_0031FEF0); /* call 0x0031FEF0 */

loc_00389A5E: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389A94; /* jne: not equal / not zero */

loc_00389A69: ;
    ebx = MEM32(0x873368);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389C4F; /* je: equal / zero */

loc_00389A77: ;
    edx = esp + 0x18;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0x00389A85u); RECOMP_ABI_CALL(0x0031FEF0u, sub_0031FEF0); /* call 0x0031FEF0 */

loc_00389A85: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389C4F; /* je: equal / zero */

loc_00389A94: ;
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    eax = MEM32(0x955DC4);
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x120C) = ecx;
    MEMF(edi + 0x15C0) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x15C4) = xmm1.f[0]; /* movss */
    MEMF(edi + 0xC0C) = xmm3.f[0]; /* movss */
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx + 4);
    edx = MEM32(eax + 0x48);
    MEM32(edx + 0xA4) = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389ADF; /* je: equal / zero */

loc_00389ADA: ;
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */

loc_00389ADF: ;
    xmm2 = XMM_SCALAR(MEMF(0x59A51C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x59A524)); /* movss */
    edx = MEM32(edi + 0xCE4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x59A520); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    MEMF(0x59FD1C) = xmm1.f[0]; /* movss */
    MEMF(0x59A520) = xmm0.f[0]; /* movss */
    MEMF(0x59A524) = xmm2.f[0]; /* movss */
    MEMF(0x59A51C) = xmm3.f[0]; /* movss */
    MEMF(0x59A528) = xmm3.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00389B7F; /* je: equal / zero */

loc_00389B3C: ;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x34), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389B53; /* jne: not equal / not zero */

loc_00389B42: ;
    ecx = 2;
    edi = 0x65F4;
    PUSH32(esp, 0x00389B51u); RECOMP_ABI_CALL(0x000E1F20u, sub_000E1F20); /* call 0x000E1F20 */

loc_00389B51: ;
    goto loc_00389B64;

loc_00389B53: ;
    ecx = edx;
    PUSH32(esp, 0x00389B5Au); RECOMP_ABI_CALL(0x000E1E70u, sub_000E1E70); /* call 0x000E1E70 */

loc_00389B5A: ;
    MEM32(edi + 0xCE4) = 0xFFFFFFFFu;

loc_00389B64: ;
    xmm2 = XMM_SCALAR(MEMF(0x59A524)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x59A520)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */

loc_00389B7F: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389BCA; /* jne: not equal / not zero */

loc_00389B87: ;
    xmm4 = XMM_SCALAR(MEMF(0x59A51C)); /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm4.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x586658)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    MEMF(0x59A520) = xmm5.f[0]; /* movss */
    MEMF(0x59A524) = xmm1.f[0]; /* movss */
    MEMF(0x59A51C) = xmm3.f[0]; /* movss */
    MEMF(0x59A528) = xmm0.f[0]; /* movss */

loc_00389BCA: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 4);
    ebx = MEM32(ecx + 0x48);
    eax = MEM32(ebx + 0x1400);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = 0xFFFFFFFDu;
    if (CMP_EQ(_fa, _fb)) goto loc_00389C14; /* je: equal / zero */

loc_00389BE2: ;
    edi = MEM32(ebx + 0x670);
    edi = edi & ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(ebx + 0x670) = edi;
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00389BFE; /* jne: not equal / not zero */

loc_00389BF7: ;
    eax = MEM32(0x873364);
    goto loc_00389C08;

loc_00389BFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389C08; /* jne: not equal / not zero */

loc_00389C03: ;
    eax = MEM32(0x873368);

loc_00389C08: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00389C11u); RECOMP_ABI_CALL(0x0038FBA0u, sub_0038FBA0); /* call 0x0038FBA0 */

loc_00389C11: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00389C14: ;
    eax = MEM32(ebx + 0x1358);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389C4A; /* je: equal / zero */

loc_00389C1E: ;
    edx = MEM32(ebx + 0x1C);
    edx = edx & ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(ebx + 0x1C) = edx;
    ebx = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00389C34; /* jne: not equal / not zero */

loc_00389C2D: ;
    eax = MEM32(0x873364);
    goto loc_00389C3E;

loc_00389C34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389C3E; /* jne: not equal / not zero */

loc_00389C39: ;
    eax = MEM32(0x873368);

loc_00389C3E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00389C47u); RECOMP_ABI_CALL(0x0038FBA0u, sub_0038FBA0); /* call 0x0038FBA0 */

loc_00389C47: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00389C4A: ;
    PUSH32(esp, 0x00389C4Fu); RECOMP_ABI_CALL(0x003880C0u, sub_003880C0); /* call 0x003880C0 */

loc_00389C4F: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x91F110) = edx;
    edx = MEM32(esp + 0x20);
    POP32(esp, ebp);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = ecx;
    MEM32(0x91F10C) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00389C80
 * Original: 0x00389C80 - 0x0038A15B (1243 bytes, 326 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389C80(void)
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

loc_00389C80: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x91F10C);
    edx = MEM32(0x91F104);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x91F110);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(0x91F108);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ecx + 4);
    ebx = MEM32(eax + 0x48);
    PUSH32(esp, edi);
    edi = MEM32(0x91EDAC);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = eax;
    _fa = (uint32_t)(MEM32(0x5ABD30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5ABD30), edi (32-bit) */
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x34) = ebp;
    MEM32(esp + 0x3C) = ebp;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = ebp;
    MEM32(0x91F110) = esi;
    MEM32(0x91F10C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00389DAF; /* je: equal / zero */

loc_00389D11: ;
    PUSH32(esp, 0x4E000254);
    eax = 0x842580;
    PUSH32(esp, 0x00389D20u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00389D20: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389D2F; /* jne: not equal / not zero */

loc_00389D28: ;
    ecx = 0x4E000254;
    goto loc_00389D36;

loc_00389D2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00389D53; /* je: equal / zero */

loc_00389D36: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00389D4Eu); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00389D4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00389D58;

loc_00389D53: ;
    eax = 0x4E000254;

loc_00389D58: ;
    MEM32(0x955DC0) = eax;
    PUSH32(esp, 0x8002717);
    eax = 0x842580;
    PUSH32(esp, 0x00389D6Cu); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00389D6C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389D7B; /* jne: not equal / not zero */

loc_00389D74: ;
    ecx = 0x8002717;
    goto loc_00389D82;

loc_00389D7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00389D9F; /* je: equal / zero */

loc_00389D82: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00389D9Au); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00389D9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00389DA4;

loc_00389D9F: ;
    eax = 0x8002717;

loc_00389DA4: ;
    MEM32(0x955DBC) = eax;
    MEM32(0x5ABD30) = edi;

loc_00389DAF: ;
    edi = esp + 0x14;
    PUSH32(esp, 0x00389DB8u); RECOMP_ABI_CALL(0x0011C060u, sub_0011C060); /* call 0x0011C060 */

loc_00389DB8: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A129; /* je: equal / zero */

loc_00389DC2: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389DEE; /* je: equal / zero */

loc_00389DC9: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389DEE; /* je: equal / zero */

loc_00389DD0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00389DEE; /* je: equal / zero */

loc_00389DD5: ;
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx);
    MEM32(esp + 0x58) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x5C) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x60) = ecx;
    goto loc_00389DFA;

loc_00389DEE: ;
    MEM32(esp + 0x58) = ebp;
    MEM32(esp + 0x5C) = ebp;
    MEM32(esp + 0x60) = ebp;

loc_00389DFA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x70;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00389E21u); RECOMP_ABI_CALL(0x000DE700u, sub_000DE700); /* call 0x000DE700 */

loc_00389E21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389EDB; /* jne: not equal / not zero */

loc_00389E2C: ;
    _fa = (uint32_t)(MEM32(ebx + 0x120C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x120C), ebp (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_00389E64; /* jne: not equal / not zero */

loc_00389E37: ;
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x586B28)); /* movss */
    ecx = esp + 0x7C;
    eax = esi;
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00389E62u); RECOMP_ABI_CALL(0x0038ED30u, sub_0038ED30); /* call 0x0038ED30 */

loc_00389E62: ;
    goto loc_00389EDB;

loc_00389E64: ;
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x586B28)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5867FC)); /* movss */
    ecx = esp + 0x64;
    edx = esp + 0x88;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    edx = MEM32(esp + 0x50);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    ecx = esp + 0x88;
    eax = esi;
    PUSH32(esp, 0x00389ED2u); RECOMP_ABI_CALL(0x0038ED30u, sub_0038ED30); /* call 0x0038ED30 */

loc_00389ED2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00389ED8u); RECOMP_ABI_CALL(0x00386F70u, sub_00386F70); /* call 0x00386F70 */

loc_00389ED8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00389EDB: ;
    ecx = MEM32(0x91EE0C);
    eax = MEM32(ecx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A0F7; /* je: equal / zero */

loc_00389EED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A0F7; /* je: equal / zero */

loc_00389EF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A0F7; /* je: equal / zero */

loc_00389EFF: ;
    fp_push((double)SMEM64(ecx + 0x38)); /* fild */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x586664)); /* fdiv dword ptr [0x586664] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x5865C8)); /* fld float */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0038A0F7; /* jbe: below or equal (unsigned <=) */

loc_00389F28: ;
    eax = MEM32(ebx + 0x10B8);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edi = esp + 0x24;
    PUSH32(esp, 0x00389F3Bu); RECOMP_ABI_CALL(0x002FA350u, sub_002FA350); /* call 0x002FA350 */

loc_00389F3B: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389F53; /* je: equal / zero */

loc_00389F46: ;
    _fa = (uint32_t)(MEM32(ebx + 0x644)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x644), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A0F7; /* je: equal / zero */

loc_00389F53: ;
    eax = MEM32(ebx + 0x644);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A0F7; /* je: equal / zero */

loc_00389F62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A0F7; /* je: equal / zero */

loc_00389F6B: ;
    _fa = (uint32_t)(MEM32(ebx + 0xD5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xD5C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A0F7; /* jne: not equal / not zero */

loc_00389F77: ;
    ecx = MEM32(ebx + 0x10B8);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edi = esp + 0x28;
    PUSH32(esp, 0x00389F8Au); RECOMP_ABI_CALL(0x002FA350u, sub_002FA350); /* call 0x002FA350 */

loc_00389F8A: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389FF2; /* je: equal / zero */

loc_00389F95: ;
    edx = (uint32_t)(int32_t)SMEM16(0x5A1DE2);
    xmm0 = XMM_SCALAR(MEMF(ebx + edx * 4 + 0x710)); /* movss */
    PUSH32(esp, 0x3E99999A);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00389FB3u); RECOMP_ABI_CALL(0x0038AA90u, sub_0038AA90); /* call 0x0038AA90 */

loc_00389FB3: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389FF2; /* je: equal / zero */

loc_00389FBE: ;
    ecx = esp + 0x24;
    eax = esi;
    PUSH32(esp, 0x00389FC9u); RECOMP_ABI_CALL(0x00387820u, sub_00387820); /* call 0x00387820 */

loc_00389FC9: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389FDA; /* je: equal / zero */

loc_00389FCF: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00389FD7u); RECOMP_ABI_CALL(0x0038A160u, sub_0038A160); /* call 0x0038A160 */

loc_00389FD7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00389FDA: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(ebx + 0xD5C) = 1;
    PUSH32(esp, 0x00389FEFu); RECOMP_ABI_CALL(0x00388570u, sub_00388570); /* call 0x00388570 */

loc_00389FEF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00389FF2: ;
    _fa = (uint32_t)(MEM32(ebx + 0xD5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xD5C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A0F7; /* jne: not equal / not zero */

loc_00389FFE: ;
    _fa = (uint32_t)(MEM32(ebx + 0x644)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x644), 0x15 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A0F7; /* je: equal / zero */

loc_0038A00B: ;
    ecx = MEM32(ebx + 0x10B8);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edi = esp + 0x34;
    PUSH32(esp, 0x0038A01Eu); RECOMP_ABI_CALL(0x002FAB10u, sub_002FAB10); /* call 0x002FAB10 */

loc_0038A01E: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A0F7; /* je: equal / zero */

loc_0038A02D: ;
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 4);
    ebx = esp + 0x34;
    eax = esi;
    PUSH32(esp, 0x0038A03Fu); RECOMP_ABI_CALL(0x002FAEA0u, sub_002FAEA0); /* call 0x002FAEA0 */

loc_0038A03F: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A0F7; /* je: equal / zero */

loc_0038A04E: ;
    ecx = esp + 0x30;
    eax = esi;
    PUSH32(esp, 0x0038A059u); RECOMP_ABI_CALL(0x00387820u, sub_00387820); /* call 0x00387820 */

loc_0038A059: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A0EC; /* jne: not equal / not zero */

loc_0038A063: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + 0x48);
    eax = MEM32(ecx + 0x11C4);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0038A0F7; /* jle: less or equal (signed <=) */

loc_0038A07B: ;
    eax = esp + 0x34;
    ecx = esi;
    PUSH32(esp, 0x0038A086u); RECOMP_ABI_CALL(0x00387DF0u, sub_00387DF0); /* call 0x00387DF0 */

loc_0038A086: ;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x34), ebp (32-bit) */
    eax = MEM32(esp + 0x38);
    if (CMP_EQ(_fa, _fb)) goto loc_0038A0A6; /* je: equal / zero */

loc_0038A090: ;
    _fa = (uint32_t)(MEM32(eax + 0x120C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x120C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A0A6; /* jne: not equal / not zero */

loc_0038A098: ;
    edx = MEM32(eax + 0x1188);
    MEM32(eax + 0xC0C) = edx;
    goto loc_0038A0F7;

loc_0038A0A6: ;
    _fa = (uint32_t)(MEM32(eax + 0xA94)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA94), ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0038A0CF; /* jle: less or equal (signed <=) */

loc_0038A0AE: ;
    ebx = MEM32(0x91F10C);
    eax = esp + 0x3C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(0x955DBC);
    PUSH32(esp, 0x0038A0C4u); RECOMP_ABI_CALL(0x0031FEF0u, sub_0031FEF0); /* call 0x0031FEF0 */

loc_0038A0C4: ;
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A0D8; /* jne: not equal / not zero */

loc_0038A0CF: ;
    eax = esi;
    PUSH32(esp, 0x0038A0D6u); RECOMP_ABI_CALL(0x0038A990u, sub_0038A990); /* call 0x0038A990 */

loc_0038A0D6: ;
    goto loc_0038A0F7;

loc_0038A0D8: ;
    PUSH32(esp, 9);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0038A0E0u); RECOMP_ABI_CALL(0x003882F0u, sub_003882F0); /* call 0x003882F0 */

loc_0038A0E0: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0038A0E7u); RECOMP_ABI_CALL(0x0038A530u, sub_0038A530); /* call 0x0038A530 */

loc_0038A0E7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0038A0F7;

loc_0038A0EC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0038A0F4u); RECOMP_ABI_CALL(0x0038A160u, sub_0038A160); /* call 0x0038A160 */

loc_0038A0F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038A0F7: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x48);
    MEM32(0x91F110) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(0x91F104) = edx;
    MEM32(0x91F108) = eax;
    MEM32(0x91F10C) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0038A129: ;
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x48);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x91F110) = edx;
    edx = MEM32(esp + 0x44);
    POP32(esp, ebp);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = ecx;
    MEM32(0x91F10C) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A160
 * Original: 0x0038A160 - 0x0038A4E3 (899 bytes, 242 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038A160: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x91F110);
    ecx = MEM32(0x91F10C);
    edx = MEM32(0x91F104);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x91F108);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(ebp + 0x18);
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x48);
    MEM32(esp + 8) = edx;
    edx = MEM32(0x5ABD2C);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x91EDAC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x91EDAC) (32-bit) */
    MEM32(0x91F110) = ebp;
    MEM32(0x91F10C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0038A29F; /* je: equal / zero */

loc_0038A1C0: ;
    PUSH32(esp, 0x8002717);
    eax = 0x842580;
    PUSH32(esp, 0x0038A1CFu); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038A1CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A1DE; /* jne: not equal / not zero */

loc_0038A1D7: ;
    ecx = 0x8002717;
    goto loc_0038A1E5;

loc_0038A1DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0038A202; /* je: equal / zero */

loc_0038A1E5: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0038A1FDu); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038A1FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0038A207;

loc_0038A202: ;
    eax = 0x8002717;

loc_0038A207: ;
    MEM32(0x955DB4) = eax;
    PUSH32(esp, 0xE00027F);
    eax = 0x842580;
    PUSH32(esp, 0x0038A21Bu); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038A21B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A22A; /* jne: not equal / not zero */

loc_0038A223: ;
    ecx = 0xE00027F;
    goto loc_0038A231;

loc_0038A22A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0038A24E; /* je: equal / zero */

loc_0038A231: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0038A249u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038A249: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0038A253;

loc_0038A24E: ;
    eax = 0xE00027F;

loc_0038A253: ;
    MEM32(0x955DB0) = eax;
    _fa = (uint32_t)(MEM8(0x91ED80)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91ED80), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A28B; /* jne: not equal / not zero */

loc_0038A261: ;
    SET_LO8(eax, MEM8(0x91ED81));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A28B; /* jne: not equal / not zero */

loc_0038A26A: ;
    eax = MEM32(0x91ED74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A27A; /* je: equal / zero */

loc_0038A273: ;
    eax = 0x400005;
    goto loc_0038A290;

loc_0038A27A: ;
    PUSH32(esp, 0x400005);
    PUSH32(esp, 0x0038A284u); RECOMP_ABI_CALL(0x0043BDC0u, sub_0043BDC0); /* call 0x0043BDC0 */

loc_0038A284: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A290; /* jne: not equal / not zero */

loc_0038A28B: ;
    eax = 0xF0400005u;

loc_0038A290: ;
    MEM32(0x955DB8) = eax;
    eax = MEM32(0x91EDAC);
    MEM32(0x5ABD2C) = eax;

loc_0038A29F: ;
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0x48);
    _fa = (uint32_t)(MEM32(eax + 0x644)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x644), 0x17 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A2BF; /* je: equal / zero */

loc_0038A2B1: ;
    ecx = MEM32(eax + 0x1210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A4B6; /* je: equal / zero */

loc_0038A2BF: ;
    eax = MEM32(0x955DB4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + 0x48);
    edx = MEM32(0x955DB0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xD90) = eax;
    ecx = MEM32(edx + 0x18);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + 0x48);
    MEM32(ecx + 0xA4) = eax;
    edx = MEM32(esi + 0x1368);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0038A31E; /* je: equal / zero */

loc_0038A2F6: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A30D; /* jne: not equal / not zero */

loc_0038A2FC: ;
    ecx = 2;
    edi = 0x65F4;
    PUSH32(esp, 0x0038A30Bu); RECOMP_ABI_CALL(0x000E1F20u, sub_000E1F20); /* call 0x000E1F20 */

loc_0038A30B: ;
    goto loc_0038A31E;

loc_0038A30D: ;
    ecx = edx;
    PUSH32(esp, 0x0038A314u); RECOMP_ABI_CALL(0x000E1E70u, sub_000E1E70); /* call 0x000E1E70 */

loc_0038A314: ;
    MEM32(esi + 0x1368) = 0xFFFFFFFFu;

loc_0038A31E: ;
    eax = ebp;
    PUSH32(esp, 0x0038A325u); RECOMP_ABI_CALL(0x00386390u, sub_00386390); /* call 0x00386390 */

loc_0038A325: ;
    xmm0 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x1210) = 0;
    MEMF(esi + 0xEC4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x13C0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x136C) = xmm1.f[0]; /* movss */
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A35E; /* je: equal / zero */

loc_0038A359: ;
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */

loc_0038A35E: ;
    edx = MEM32(ebp + 0x18);
    eax = MEM32(edx + 4);
    xmm2 = XMM_SCALAR(MEMF(0x59A51C)); /* movss */
    esi = MEM32(eax + 0x48);
    xmm4 = XMM_SCALAR(MEMF(0x59A524)); /* movss */
    eax = MEM32(esi + 0x1400);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x59A520); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(0x59FD1C) = xmm0.f[0]; /* movss */
    MEMF(0x59A520) = xmm3.f[0]; /* movss */
    MEMF(0x59A524) = xmm0.f[0]; /* movss */
    MEMF(0x59A51C) = xmm1.f[0]; /* movss */
    MEMF(0x59A528) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A3F3; /* je: equal / zero */

loc_0038A3C0: ;
    edi = MEM32(esi + 0x670);
    edi = edi & 0xFFFFFFFDu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esi + 0x670) = edi;
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0038A3DD; /* jne: not equal / not zero */

loc_0038A3D6: ;
    eax = MEM32(0x873364);
    goto loc_0038A3E7;

loc_0038A3DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A3E7; /* jne: not equal / not zero */

loc_0038A3E2: ;
    eax = MEM32(0x873368);

loc_0038A3E7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0038A3F0u); RECOMP_ABI_CALL(0x0038FBA0u, sub_0038FBA0); /* call 0x0038FBA0 */

loc_0038A3F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038A3F3: ;
    eax = MEM32(esi + 0x1358);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A42A; /* je: equal / zero */

loc_0038A3FD: ;
    edx = MEM32(esi + 0x1C);
    edx = edx & 0xFFFFFFFDu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esi + 0x1C) = edx;
    esi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0038A414; /* jne: not equal / not zero */

loc_0038A40D: ;
    eax = MEM32(0x873364);
    goto loc_0038A41E;

loc_0038A414: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A41E; /* jne: not equal / not zero */

loc_0038A419: ;
    eax = MEM32(0x873368);

loc_0038A41E: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0038A427u); RECOMP_ABI_CALL(0x0038FBA0u, sub_0038FBA0); /* call 0x0038FBA0 */

loc_0038A427: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038A42A: ;
    PUSH32(esp, 0);
    ecx = 4;
    eax = 0x945478;
    PUSH32(esp, 0x0038A43Bu); RECOMP_ABI_CALL(0x000C1FC0u, sub_000C1FC0); /* call 0x000C1FC0 */

loc_0038A43B: ;
    ecx = MEM32(0x945408);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0038A44Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038A447u); } /* indirect call */
    }

loc_0038A44A: ;
    ecx = MEM32(0x945408);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0038A459u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038A456u); } /* indirect call */
    }

loc_0038A459: ;
    SET_LO8(eax, MEM8(0x91ED80));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(0x955DB8);
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0038A4B6; /* je: equal / zero */

loc_0038A469: ;
    _fa = (uint32_t)(MEM8(0x91ED81)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91ED81), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A4B6; /* je: equal / zero */

loc_0038A472: ;
    SET_LO8(eax, MEM8(0x59A52C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A4B6; /* je: equal / zero */

loc_0038A47B: ;
    eax = MEM32(0x91ED74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A48F; /* je: equal / zero */

loc_0038A484: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0038A48Au); RECOMP_ABI_CALL(0x0043BDC0u, sub_0043BDC0); /* call 0x0043BDC0 */

loc_0038A48A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_0038A48F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A4B6; /* je: equal / zero */

loc_0038A493: ;
    eax = MEM32(0x59A4F4);
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0038A4ABu); RECOMP_ABI_CALL(0x0043B450u, sub_0043B450); /* call 0x0043B450 */

loc_0038A4AB: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0038A4B3u); RECOMP_ABI_CALL(0x000328C0u, sub_000328C0); /* call 0x000328C0 */

loc_0038A4B3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038A4B6: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    MEM32(0x91F110) = ecx;
    ecx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(0x91F104) = edx;
    MEM32(0x91F108) = eax;
    MEM32(0x91F10C) = ecx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A4F0
 * Original: 0x0038A4F0 - 0x0038A52A (58 bytes, 13 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A4F0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0038A4F0: ;
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx + 4);
    eax = MEM32(eax + 0x48);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x518)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038A525; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0038A509: ;
    xmm0 = XMM_SCALAR(MEMF(0x91F09C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x91F120); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x958); /* divss */

loc_0038A525: ;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A530
 * Original: 0x0038A530 - 0x0038A986 (1110 bytes, 281 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A530(void)
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

loc_0038A530: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x91F110);
    ecx = MEM32(0x91F10C);
    edx = MEM32(0x91F104);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x91F108);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(ebp + 0x18);
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x48);
    MEM32(esp + 8) = edx;
    edx = MEM32(0x5ABD28);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x91EDAC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x91EDAC) (32-bit) */
    MEM32(0x91F110) = ebp;
    MEM32(0x91F10C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0038A66F; /* je: equal / zero */

loc_0038A590: ;
    PUSH32(esp, 0xE00027F);
    eax = 0x842580;
    PUSH32(esp, 0x0038A59Fu); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038A59F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A5AE; /* jne: not equal / not zero */

loc_0038A5A7: ;
    ecx = 0xE00027F;
    goto loc_0038A5B5;

loc_0038A5AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0038A5D2; /* je: equal / zero */

loc_0038A5B5: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0038A5CDu); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038A5CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0038A5D7;

loc_0038A5D2: ;
    eax = 0xE00027F;

loc_0038A5D7: ;
    MEM32(0x955DA4) = eax;
    PUSH32(esp, 0x320031FA);
    eax = 0x842580;
    PUSH32(esp, 0x0038A5EBu); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038A5EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A5FA; /* jne: not equal / not zero */

loc_0038A5F3: ;
    ecx = 0x320031FA;
    goto loc_0038A601;

loc_0038A5FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0038A61E; /* je: equal / zero */

loc_0038A601: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0038A619u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038A619: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0038A623;

loc_0038A61E: ;
    eax = 0x320031FA;

loc_0038A623: ;
    MEM32(0x955DAC) = eax;
    _fa = (uint32_t)(MEM8(0x91ED80)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91ED80), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A65B; /* jne: not equal / not zero */

loc_0038A631: ;
    SET_LO8(eax, MEM8(0x91ED81));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A65B; /* jne: not equal / not zero */

loc_0038A63A: ;
    eax = MEM32(0x91ED74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A64A; /* je: equal / zero */

loc_0038A643: ;
    eax = 0x40000C;
    goto loc_0038A660;

loc_0038A64A: ;
    PUSH32(esp, 0x40000C);
    PUSH32(esp, 0x0038A654u); RECOMP_ABI_CALL(0x0043BDC0u, sub_0043BDC0); /* call 0x0043BDC0 */

loc_0038A654: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A660; /* jne: not equal / not zero */

loc_0038A65B: ;
    eax = 0xF040000Cu;

loc_0038A660: ;
    MEM32(0x955DA8) = eax;
    eax = MEM32(0x91EDAC);
    MEM32(0x5ABD28) = eax;

loc_0038A66F: ;
    xmm0 = XMM_SCALAR(MEMF(0x58682C)); /* movss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esi + 0x15C0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xC0C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x120C) = ecx;
    edx = MEM32(ebp + 0x18);
    eax = MEM32(edx + 4);
    eax = MEM32(eax + 0x48);
    _fa = (uint32_t)(MEM32(eax + 0x644)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x644), 0x17 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A6B0; /* je: equal / zero */

loc_0038A6A6: ;
    ecx = MEM32(eax + 0x1210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A6BB; /* je: equal / zero */

loc_0038A6B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0038A6B8u); RECOMP_ABI_CALL(0x0038A160u, sub_0038A160); /* call 0x0038A160 */

loc_0038A6B8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038A6BB: ;
    ecx = MEM32(0x955DA4);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + 0x48);
    edx = MEM32(0x955DAC);
    xmm1 = XMM_SCALAR(MEMF(0x59A51C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x59A524)); /* movss */
    MEM32(ecx + 0xA4) = 1;
    eax = MEM32(edx + 0x18);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx + 0x48);
    ecx = MEM32(eax + 0x1B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x586834)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x59A520); /* mulss */
    MEMF(0x59A524) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x59A51C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x586658)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(0x59A520) = xmm2.f[0]; /* movss */
    MEMF(0x59A528) = xmm1.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_0038A7D6; /* jge: greater or equal (signed >=) */

loc_0038A754: ;
    edx = MEM32(edx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A760; /* je: equal / zero */

loc_0038A75B: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x3C)); /* movss */

loc_0038A760: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x84266C); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x586630)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x586854)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0038A787; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038A784: ;
    xmm0 = xmm1; /* movaps */

loc_0038A787: ;
    edx = (uint32_t)(int32_t)SMEM16(0x5A1DE2);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    MEMF(edx + eax + 0x244) = xmm0.f[0]; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(0x5A1DE2);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0x1B0));
    xmm0 = XMM_SCALAR(MEMF(0x586F48)); /* movss */
    MEMF(ecx + eax + 0x1B8) = xmm0.f[0]; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(0x5A1DE2);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 0x1B0));
    MEMF(edx + eax + 0x1F4) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x1B0) = MEM32(eax + 0x1B0) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x1B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0038A7D6: ;
    ecx = MEM32(esi + 0xCE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A7E6; /* je: equal / zero */

loc_0038A7E1: ;
    PUSH32(esp, 0x0038A7E6u); RECOMP_ABI_CALL(0x000E1E70u, sub_000E1E70); /* call 0x000E1E70 */

loc_0038A7E6: ;
    eax = MEM32(0x5BEED4);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x4A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4A4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1A);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038A7F9u); RECOMP_ABI_CALL(0x00394D60u, sub_00394D60); /* call 0x00394D60 */

loc_0038A7F9: ;
    edx = eax;
    eax = MEM32(0x5BEED4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    MEM32(esi + 0xCE4) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0038A819; /* jge: greater or equal (signed >=) */

loc_0038A811: ;
    eax = MEM32(eax + 0x4A8);
    goto loc_0038A82F;

loc_0038A819: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038A829; /* jge: greater or equal (signed >=) */

loc_0038A821: ;
    eax = MEM32(eax + 0x4A4);
    goto loc_0038A82F;

loc_0038A829: ;
    eax = MEM32(eax + 0x4AC);

loc_0038A82F: ;
    PUSH32(esp, edi);
    ecx = 1;
    edi = 0x65F4;
    PUSH32(esp, 0x0038A83Fu); RECOMP_ABI_CALL(0x00395640u, sub_00395640); /* call 0x00395640 */

loc_0038A83F: ;
    edx = MEM32(esi + 0xCE4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    eax = MEM32(0x5BEED4);
    if (CMP_GE(_fas, _fbs)) goto loc_0038A85A; /* jge: greater or equal (signed >=) */

loc_0038A852: ;
    eax = MEM32(eax + 0x4A8);
    goto loc_0038A870;

loc_0038A85A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038A86A; /* jge: greater or equal (signed >=) */

loc_0038A862: ;
    eax = MEM32(eax + 0x4A4);
    goto loc_0038A870;

loc_0038A86A: ;
    eax = MEM32(eax + 0x4AC);

loc_0038A870: ;
    ecx = 1;
    edi = 0x65F5;
    PUSH32(esp, 0x0038A87Fu); RECOMP_ABI_CALL(0x00395640u, sub_00395640); /* call 0x00395640 */

loc_0038A87F: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(eax + 4);
    esi = MEM32(ecx + 0x48);
    eax = MEM32(esi + 0x1400);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A8C5; /* je: equal / zero */

loc_0038A892: ;
    edi = MEM32(esi + 0x670);
    edi = edi | 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esi + 0x670) = edi;
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0038A8AF; /* jne: not equal / not zero */

loc_0038A8A8: ;
    eax = MEM32(0x873364);
    goto loc_0038A8B9;

loc_0038A8AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A8B9; /* jne: not equal / not zero */

loc_0038A8B4: ;
    eax = MEM32(0x873368);

loc_0038A8B9: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0038A8C2u); RECOMP_ABI_CALL(0x0038FBA0u, sub_0038FBA0); /* call 0x0038FBA0 */

loc_0038A8C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038A8C5: ;
    eax = MEM32(esi + 0x1358);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A8FC; /* je: equal / zero */

loc_0038A8CF: ;
    edx = MEM32(esi + 0x1C);
    edx = edx | 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esi + 0x1C) = edx;
    esi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0038A8E6; /* jne: not equal / not zero */

loc_0038A8DF: ;
    eax = MEM32(0x873364);
    goto loc_0038A8F0;

loc_0038A8E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A8F0; /* jne: not equal / not zero */

loc_0038A8EB: ;
    eax = MEM32(0x873368);

loc_0038A8F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0038A8F9u); RECOMP_ABI_CALL(0x0038FBA0u, sub_0038FBA0); /* call 0x0038FBA0 */

loc_0038A8F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038A8FC: ;
    SET_LO8(eax, MEM8(0x91ED80));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(0x955DA8);
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0038A959; /* je: equal / zero */

loc_0038A90C: ;
    _fa = (uint32_t)(MEM8(0x91ED81)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91ED81), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A959; /* je: equal / zero */

loc_0038A915: ;
    SET_LO8(eax, MEM8(0x59A52C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A959; /* je: equal / zero */

loc_0038A91E: ;
    eax = MEM32(0x91ED74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A932; /* je: equal / zero */

loc_0038A927: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0038A92Du); RECOMP_ABI_CALL(0x0043BDC0u, sub_0043BDC0); /* call 0x0043BDC0 */

loc_0038A92D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_0038A932: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A959; /* je: equal / zero */

loc_0038A936: ;
    eax = MEM32(0x59A4F4);
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0038A94Eu); RECOMP_ABI_CALL(0x0043B450u, sub_0043B450); /* call 0x0043B450 */

loc_0038A94E: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0038A956u); RECOMP_ABI_CALL(0x000328C0u, sub_000328C0); /* call 0x000328C0 */

loc_0038A956: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038A959: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(0x91F110) = edx;
    edx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = ecx;
    MEM32(0x91F10C) = edx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A990
 * Original: 0x0038A990 - 0x0038AA8C (252 bytes, 65 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038A990: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x91F104);
    edx = MEM32(0x91F108);
    PUSH32(esp, ebx);
    ebx = MEM32(0x91F110);
    PUSH32(esp, ebp);
    ebp = MEM32(0x91F10C);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0x18);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x91F104) = ecx;
    MEM32(0x91F108) = ecx;
    ecx = MEM32(0x5BEED4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x4A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4A4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1A);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = edx;
    MEM32(0x91F110) = eax;
    MEM32(0x91F10C) = eax;
    PUSH32(esp, 0x0038A9E8u); RECOMP_ABI_CALL(0x00394D60u, sub_00394D60); /* call 0x00394D60 */

loc_0038A9E8: ;
    esi = eax;
    eax = MEM32(0x5BEED4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x400 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038AA02; /* jge: greater or equal (signed >=) */

loc_0038A9FA: ;
    eax = MEM32(eax + 0x4A8);
    goto loc_0038AA18;

loc_0038AA02: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038AA12; /* jge: greater or equal (signed >=) */

loc_0038AA0A: ;
    eax = MEM32(eax + 0x4A4);
    goto loc_0038AA18;

loc_0038AA12: ;
    eax = MEM32(eax + 0x4AC);

loc_0038AA18: ;
    ecx = 5;
    edi = 0x65F4;
    edx = esi;
    PUSH32(esp, 0x0038AA29u); RECOMP_ABI_CALL(0x00395640u, sub_00395640); /* call 0x00395640 */

loc_0038AA29: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x400 (32-bit) */
    eax = MEM32(0x5BEED4);
    if (CMP_GE(_fas, _fbs)) goto loc_0038AA3E; /* jge: greater or equal (signed >=) */

loc_0038AA36: ;
    eax = MEM32(eax + 0x4A8);
    goto loc_0038AA54;

loc_0038AA3E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038AA4E; /* jge: greater or equal (signed >=) */

loc_0038AA46: ;
    eax = MEM32(eax + 0x4A4);
    goto loc_0038AA54;

loc_0038AA4E: ;
    eax = MEM32(eax + 0x4AC);

loc_0038AA54: ;
    ecx = 1;
    edi = 0x65F5;
    edx = esi;
    PUSH32(esp, 0x0038AA65u); RECOMP_ABI_CALL(0x00395640u, sub_00395640); /* call 0x00395640 */

loc_0038AA65: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x91F10C) = ebp;
    POP32(esp, ebp);
    MEM32(0x91F110) = ebx;
    MEM32(0x91F104) = edx;
    MEM32(0x91F108) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AA90
 * Original: 0x0038AA90 - 0x0038AAC8 (56 bytes, 15 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0038AA90: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x586638); /* comiss */
    if ((_fca > _fcb)) goto loc_0038AAA0; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x586638)) */

loc_0038AA99: ;
    MEM32(ecx) = 1;
    esp += 4; return; /* ret */

loc_0038AAA0: ;
    xmm1 = XMM_SCALAR(MEMF(0x91F09C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x91F120); /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038AAC3; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(esp + 4)) */

loc_0038AABB: ;
    eax = 1;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

loc_0038AAC3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0038AAD0
 * Original: 0x0038AAD0 - 0x0038B2E5 (2069 bytes, 461 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AAD0(void)
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

loc_0038AAD0: ;
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x168));
    esp = esp - 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x91F10C);
    edx = MEM32(0x91F104);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x91F110);
    MEM32(esp + 0xD4) = eax;
    eax = MEM32(0x91F108);
    MEM32(esp + 0xD0) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esp + 0xE0) = eax;
    eax = MEM32(ecx + 4);
    ebx = MEM32(eax + 0x48);
    PUSH32(esp, edi);
    edi = MEM32(0x91EDAC);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = eax;
    _fa = (uint32_t)(MEM32(0x5ABD24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5ABD24), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xDC) = edx;
    MEM32(esp + 0xD0) = ebx;
    MEM32(0x91F110) = esi;
    MEM32(0x91F10C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0038AB94; /* je: equal / zero */

loc_0038AB42: ;
    PUSH32(esp, 0x80003B6);
    eax = 0x842580;
    PUSH32(esp, 0x0038AB51u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038AB51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038AB60; /* jne: not equal / not zero */

loc_0038AB59: ;
    ecx = 0x80003B6;
    goto loc_0038AB67;

loc_0038AB60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0038AB84; /* je: equal / zero */

loc_0038AB67: ;
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
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x5F4398)) >> 32) & 1);
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0038AB7Fu); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038AB7F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0038AB89;

loc_0038AB84: ;
    eax = 0x80003B6;

loc_0038AB89: ;
    MEM32(0x955DA0) = eax;
    MEM32(0x5ABD24) = edi;

loc_0038AB94: ;
    eax = MEM32(ebx + 0x420);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0038B2A7; /* je: equal / zero */

loc_0038ABA4: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0038ABB0u); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038ABB0: ;
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x4C);
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(ebx + 0x420);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038ABDD; /* jne: not equal / not zero */

loc_0038ABD6: ;
    eax = MEM32(0x873364);
    goto loc_0038ABE7;

loc_0038ABDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038ABE7; /* jne: not equal / not zero */

loc_0038ABE2: ;
    eax = MEM32(0x873368);

loc_0038ABE7: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0038ABF1u); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038ABF1: ;
    eax = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x50);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = ecx;
    eax = MEM32(ebx + 0x420);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038AC1E; /* jne: not equal / not zero */

loc_0038AC17: ;
    eax = MEM32(0x873364);
    goto loc_0038AC28;

loc_0038AC1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038AC28; /* jne: not equal / not zero */

loc_0038AC23: ;
    eax = MEM32(0x873368);

loc_0038AC28: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0038AC32u); RECOMP_ABI_CALL(0x000E98F0u, sub_000E98F0); /* call 0x000E98F0 */

loc_0038AC32: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x50);
    xmm0 = XMM_SCALAR(MEMF(0x586680)); /* movss */
    MEM32(esp + 0x164) = eax;
    eax = esp + 0x24;
    MEM32(esp + 0x168) = ecx;
    MEM32(esp + 0x16C) = edx;
    ecx = eax;
    edx = eax;
    MEM32(esp + 0x130) = eax;
    MEM32(esp + 0xF8) = ecx;
    MEM32(esp + 0x110) = edx;
    eax = esp + 0x30;
    ecx = esp + 0x84;
    edx = esp + 0x90;
    MEMF(esp + 0x100) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x138) = eax;
    MEM32(esp + 0xEC) = ecx;
    MEM32(esp + 0xF0) = edx;
    eax = esp + 0x14;
    ecx = esp + 0x6C;
    MEMF(esp + 0x104) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x108) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x586C1C)); /* movss */
    edx = esp + 0x3C;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0038ACE0;

    /* nop */
    /* nop */

loc_0038ACE0: ;
    MEM32(esp + 0x140) = ebp;
    MEM32(esp + 0x144) = ebp;
    MEM32(esp + 0x148) = ebp;
    MEM32(esp + 0x14C) = ebp;
    MEM32(esp + 0x150) = ebp;
    MEM32(esp + 0x154) = ebp;
    MEM32(esp + 0x158) = ebp;
    MEM32(esp + 0x15C) = ebp;
    MEM32(esp + 0xCC) = ebp;
    MEM32(esp + 0xF0) = eax;
    MEM32(esp + 0x11C) = ecx;
    MEMF(esp + 0x108) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xF8) = edx;
    /* nop */

loc_0038AD40: ;
    PUSH32(esp, 0x0038AD45u); RECOMP_ABI_CALL(0x0047E911u, sub_0047E911); /* call 0x0047E911 */

loc_0038AD45: ;
    ecx = eax;
    if (3) _cf = (int)(((ecx) >> (32 - (3))) & 1);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x80010003u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((0xE) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((0xE) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xE) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    if (0x1F) _cf = (int)(((eax) >> ((0x1F) - 1)) & 1);
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038AD67; /* jne: not equal / not zero */

loc_0038AD62: ;
    eax = 7;

loc_0038AD67: ;
    _fa = (uint32_t)(MEM32(esp + eax * 4 + 0x140)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4 + 0x140), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0038AD80; /* je: equal / zero */

loc_0038AD70: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) eax = ebp; /* cmovg */
    _fa = (uint32_t)(MEM32(esp + eax * 4 + 0x140)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4 + 0x140), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038AD70; /* jne: not equal / not zero */

loc_0038AD80: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5869E4); /* mulss */
    PUSH32(esp, ecx);
    edx = esp + 0xA0;
    MEM32(esp + eax * 4 + 0x148) = 1;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x16C;
    PUSH32(esp, 0x0038ADDCu); RECOMP_ABI_CALL(0x000EBE00u, sub_000EBE00); /* call 0x000EBE00 */

loc_0038ADDC: ;
    eax = MEM32(esp + 0x80);
    ecx = MEM32(esp + 0x84);
    edx = MEM32(esp + 0x88);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x20;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x0038AE0Du); RECOMP_ABI_CALL(0x0048929Fu, sub_0048929F); /* call 0x0048929F */

loc_0038AE0D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xFC)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    edx = MEM32(esp + 0x12C);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    eax = MEM32(esp + 0xF4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    ecx = MEM32(esp + 0x134);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10C);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    eax = MEM32(esp + 0xE8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    edx = MEM32(esp + 0x80);
    eax = MEM32(esp + 0x84);
    ecx = MEM32(esp + 0x88);
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x58663C)); /* movss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x8C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0xEC);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    eax = MEM32(esp + 0x11C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    edx = MEM32(esp + 0x68);
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(esp + 0x70);
    ebx = MEM32(0x5BEED4);
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esp + 0x100);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x104);
    MEM32(esp + 0x64) = ecx;
    ecx = MEM32(esp + 0x108);
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = ecx;
    edx = MEM32(esp + 0xF8);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0xE0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xE0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0038AFF1; /* jnp: not parity */

loc_0038AF6A: ;
    PUSH32(esp, 0xBF800000u);
    xmm0 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    PUSH32(esp, 0xBF800000u);
    edx = MEM32(esp + 0xE8);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    PUSH32(esp, ebp);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, 3);
    MEMF(esp + 0x140) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x144;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    MEMF(esp + 0x14C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, esi);
    MEMF(esp + 0x158) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0038AFE6u); RECOMP_ABI_CALL(0x000AEE60u, sub_000AEE60); /* call 0x000AEE60 */

loc_0038AFE6: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x40)) >> 32) & 1);
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038B1CE; /* jne: not equal / not zero */

loc_0038AFF1: ;
    edx = esp + 0x10;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edi = esp + 0x174;
    PUSH32(esp, 0x0038B004u); RECOMP_ABI_CALL(0x002319E0u, sub_002319E0); /* call 0x002319E0 */

loc_0038B004: ;
    eax = MEM32(esp + 0x174);
    ecx = MEM32(esp + 0x178);
    edx = MEM32(esp + 0x17C);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x1C;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x140;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x0038B03Eu); RECOMP_ABI_CALL(0x00208AE0u, sub_00208AE0); /* call 0x00208AE0 */

loc_0038B03E: ;
    eax = MEM32(esp + 0x144);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0038B09A; /* je: equal / zero */

loc_0038B04C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x91F10C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x91F10C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0038B09A; /* je: equal / zero */

loc_0038B054: ;
    xmm0 = XMM_SCALAR(MEMF(0x586A00)); /* movss */
    MEMF(esp + 0x120) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x120);
    MEMF(esp + 0x124) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x124);
    MEMF(esp + 0x128) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x128);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    goto loc_0038B0A2;

loc_0038B09A: ;
    xmm0 = XMM_SCALAR(MEMF(0x586A00)); /* movss */

loc_0038B0A2: ;
    eax = esp + 0xA4;
    ecx = esp + 0x10;
    edx = esp + 0x44;
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x138) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x13C) = edx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x138);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x13C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    ecx = MEM32(esp + 0x44);
    eax = 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0038B128; /* jne: not equal / not zero */

loc_0038B118: ;
    _fa = (uint32_t)(MEM32(esp + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x48), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0038B128; /* jne: not equal / not zero */

loc_0038B11E: ;
    _fa = (uint32_t)(MEM32(esp + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x4C), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0038B1CE; /* je: equal / zero */

loc_0038B128: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0038B13Bu); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_0038B13B: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(0x5865C4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0038B1CE; /* jbe: below or equal (unsigned <=) */

loc_0038B15A: ;
    edi = esp + 0x10;
    PUSH32(esp, 0x0038B163u); RECOMP_ABI_CALL(0x000E9370u, sub_000E9370); /* call 0x000E9370 */

loc_0038B163: ;
    eax = MEM32(esp + 0xD0);
    ecx = MEM32(eax + 0x420);
    ebx = MEM32(0x91F10C);
    eax = MEM32(0x955DA0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    edx = esp + 0xD0;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0038B18Cu); RECOMP_ABI_CALL(0x001D01E0u, sub_001D01E0); /* call 0x001D01E0 */

loc_0038B18C: ;
    eax = MEM32(esp + 0xD8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038B1C5; /* jne: not equal / not zero */

loc_0038B19A: ;
    edi = esp + 0x50;
    PUSH32(esp, 0x0038B1A3u); RECOMP_ABI_CALL(0x000E9370u, sub_000E9370); /* call 0x000E9370 */

loc_0038B1A3: ;
    _fa = (uint32_t)(MEM32(esp + 0x17C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x17C), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0038B1E6; /* je: equal / zero */

loc_0038B1AC: ;
    eax = edi;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0038B1B9u); RECOMP_ABI_CALL(0x0004E280u, sub_0004E280); /* call 0x0004E280 */

loc_0038B1B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x586658); /* comiss */
    if ((_fca > _fcb)) goto loc_0038B1E6; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x586658)) */

loc_0038B1C5: ;
    edi = esp + 0x50;
    PUSH32(esp, 0x0038B1CEu); RECOMP_ABI_CALL(0x000E9370u, sub_000E9370); /* call 0x000E9370 */

loc_0038B1CE: ;
    eax = MEM32(esp + 0xCC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xCC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0038AD40; /* jl: less (signed <) */

loc_0038B1E6: ;
    _fa = (uint32_t)(MEM32(esp + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xCC), 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0038B26A; /* je: equal / zero */

loc_0038B1F0: ;
    edx = esp + 0x10;
    eax = esp + 0x2C;
    ecx = esp + 0xB0;
    MEM32(esp + 0xD0) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0xC8) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0xD0);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0xC8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038B253u); RECOMP_ABI_CALL(0x0048929Fu, sub_0048929F); /* call 0x0048929F */

loc_0038B253: ;
    ecx = esp + 0xBC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x0038B267u); RECOMP_ABI_CALL(0x00388E20u, sub_00388E20); /* call 0x00388E20 */

loc_0038B267: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038B26A: ;
    eax = MEM32(esp + 0xD8);
    ecx = MEM32(esp + 0xDC);
    edx = MEM32(esp + 0xE4);
    MEM32(0x91F110) = eax;
    eax = MEM32(esp + 0xD4);
    MEM32(0x91F104) = ecx;
    MEM32(0x91F108) = edx;
    MEM32(0x91F10C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x168)) >> 32) & 1);
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0038B2A7: ;
    ecx = MEM32(esp + 0xD8);
    edx = MEM32(esp + 0xDC);
    eax = MEM32(esp + 0xE4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x91F110) = ecx;
    ecx = MEM32(esp + 0xCC);
    POP32(esp, ebp);
    MEM32(0x91F104) = edx;
    MEM32(0x91F108) = eax;
    MEM32(0x91F10C) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x168)) >> 32) & 1);
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038B2F0
 * Original: 0x0038B2F0 - 0x0038B36B (123 bytes, 34 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038B2F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 0x18);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x91F104);
    PUSH32(esp, ebp);
    ebp = MEM32(0x91F108);
    PUSH32(esp, esi);
    esi = MEM32(0x91F110);
    PUSH32(esp, edi);
    edi = MEM32(0x91F10C);
    MEM32(0x91F104) = ecx;
    MEM32(0x91F108) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0;
    MEM32(0x91F110) = eax;
    MEM32(0x91F10C) = eax;
    PUSH32(esp, 0x0038B33Eu); RECOMP_ABI_CALL(0x0038BA70u, sub_0038BA70); /* call 0x0038BA70 */

loc_0038B33E: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91F10C) = edi;
    POP32(esp, edi);
    MEM32(0x91F110) = esi;
    POP32(esp, esi);
    MEM32(0x91F108) = ebp;
    POP32(esp, ebp);
    MEM32(0x91F104) = ebx;
    MEM32(eax) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0038B370
 * Original: 0x0038B370 - 0x0038BA62 (1778 bytes, 481 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0038B370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0038B370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x154) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x154;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x91F10C);
    edx = MEM32(0x91F104);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x91F110);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(0x91F108);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(ecx + 4);
    ebx = MEM32(eax + 0x48);
    PUSH32(esp, edi);
    edi = MEM32(0x91EDAC);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = eax;
    _fa = (uint32_t)(MEM32(0x5ABD20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5ABD20), edi (32-bit) */
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(0x91F110) = esi;
    MEM32(0x91F10C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0038B42A; /* je: equal / zero */

loc_0038B3D8: ;
    PUSH32(esp, 0x1E00016C);
    eax = 0x842580;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B3E7u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038B3E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038B3F6; /* jne: not equal / not zero */

loc_0038B3EF: ;
    ecx = 0x1E00016C;
    goto loc_0038B3FD;

loc_0038B3F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0038B41A; /* je: equal / zero */

loc_0038B3FD: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B415u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038B415: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0038B41F;

loc_0038B41A: ;
    eax = 0x1E00016C;

loc_0038B41F: ;
    MEM32(0x955D9C) = eax;
    MEM32(0x5ABD20) = edi;

loc_0038B42A: ;
    eax = MEM32(ebx + 0x420);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + 0x48);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(ecx + 0x48);
    ebx = MEM32(edx + 0x14);
    ecx = MEM32(0x5BEED8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    eax = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0038B474; /* je: equal / zero */

loc_0038B458: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038B464; /* jne: not equal / not zero */

loc_0038B45D: ;
    eax = MEM32(0x873364);
    goto loc_0038B46E;

loc_0038B464: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038B46E; /* jne: not equal / not zero */

loc_0038B469: ;
    eax = MEM32(0x873368);

loc_0038B46E: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 4);

loc_0038B474: ;
    ecx = MEM32(ecx + 0x48);
    edi = MEM32(ecx + 0x84);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B48Cu); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038B48C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038B49B; /* jne: not equal / not zero */

loc_0038B494: ;
    eax = MEM32(0x873364);
    goto loc_0038B4A7;

loc_0038B49B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    eax = MEM32(0x873368);
    if (CMP_EQ(_fa, _fb)) goto loc_0038B4A7; /* je: equal / zero */

loc_0038B4A5: ;
    eax = ebx;

loc_0038B4A7: ;
    ecx = esp + 0xD4;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B4B4u); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038B4B4: ;
    edx = esp + 0xD8;
    eax = esp + 0x9C;
    ecx = esp + 0x6C;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    edx = MEM32(esp + 0x68);
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(esp + 0x70);
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x7C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0038B520; /* jne: not equal / not zero */

loc_0038B519: ;
    eax = MEM32(0x873364);
    goto loc_0038B52C;

loc_0038B520: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    eax = MEM32(0x873368);
    if (CMP_EQ(_fa, _fb)) goto loc_0038B52C; /* je: equal / zero */

loc_0038B52A: ;
    eax = ebx;

loc_0038B52C: ;
    ecx = MEM32(eax + 0xC);
    eax = esp + 0x110;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B53Bu); RECOMP_ABI_CALL(0x000DE390u, sub_000DE390); /* call 0x000DE390 */

loc_0038B53B: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x78;
    ecx = esp + 0x114;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B550u); RECOMP_ABI_CALL(0x000DDE80u, sub_000DDE80); /* call 0x000DDE80 */

loc_0038B550: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x78) = ecx;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x78); /* comiss */
    MEM32(esp + 0x74) = eax;
    MEM32(esp + 0x7C) = edx;
    if ((_fca > _fcb)) goto loc_0038BA0F; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x78)) */

loc_0038B579: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038B587; /* jne: not equal / not zero */

loc_0038B57D: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038B592; /* je: equal / zero */

loc_0038B585: ;
    goto loc_0038B5B1;

loc_0038B587: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038B5A5; /* jne: not equal / not zero */

loc_0038B58C: ;
    _fa = (uint32_t)(MEM32(esp + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x48), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038B5A5; /* jne: not equal / not zero */

loc_0038B592: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x40000000;
    edi = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B5A0u); RECOMP_ABI_CALL(0x0038ECF0u, sub_0038ECF0); /* call 0x0038ECF0 */

loc_0038B5A0: ;
    goto loc_0038BA35;

loc_0038B5A5: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038B71D; /* je: equal / zero */

loc_0038B5B1: ;
    PUSH32(esp, 0x33);
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B5BAu); RECOMP_ABI_CALL(0x0005A4A0u, sub_0005A4A0); /* call 0x0005A4A0 */

loc_0038B5BA: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038B5CB; /* jne: not equal / not zero */

loc_0038B5C4: ;
    eax = MEM32(0x873364);
    goto loc_0038B5D7;

loc_0038B5CB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    eax = MEM32(0x873368);
    if (CMP_EQ(_fa, _fb)) goto loc_0038B5D7; /* je: equal / zero */

loc_0038B5D5: ;
    eax = edi;

loc_0038B5D7: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B5E4u); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038B5E4: ;
    edx = esp + 0xCC;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B5F6u); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038B5F6: ;
    eax = esp + 0xCC;
    ecx = esp + 0xB4;
    edx = esp + 0x54;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    edx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x54);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0038B66B; /* jne: not equal / not zero */

loc_0038B664: ;
    eax = MEM32(0x873364);
    goto loc_0038B677;

loc_0038B66B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    eax = MEM32(0x873368);
    if (CMP_EQ(_fa, _fb)) goto loc_0038B677; /* je: equal / zero */

loc_0038B675: ;
    eax = edi;

loc_0038B677: ;
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B684u); RECOMP_ABI_CALL(0x000E98F0u, sub_000E98F0); /* call 0x000E98F0 */

loc_0038B684: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x18;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    edi = esp + 0x34;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B6B9u); RECOMP_ABI_CALL(0x00058870u, sub_00058870); /* call 0x00058870 */

loc_0038B6B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x5869E8); /* comiss */
    eax = ebx;
    if ((_fca > _fcb)) goto loc_0038B6F7; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x5869E8)) */

loc_0038B6C7: ;
    PUSH32(esp, 0x43);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B6CEu); RECOMP_ABI_CALL(0x0005A4A0u, sub_0005A4A0); /* call 0x0005A4A0 */

loc_0038B6CE: ;
    edi = eax;
    eax = MEM32(esp + 0x30);
    MEM32(eax + 0x2F0) = 0x3A4;
    MEM32(eax + 0x380) = 0x3A8;
    MEM32(eax + 0x418) = 0x3AC;
    goto loc_0038B88B;

loc_0038B6F7: ;
    PUSH32(esp, 0x42);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B6FEu); RECOMP_ABI_CALL(0x0005A4A0u, sub_0005A4A0); /* call 0x0005A4A0 */

loc_0038B6FE: ;
    edi = eax;
    eax = MEM32(esp + 0x30);
    MEM32(eax + 0x380) = 0x3A8;
    MEM32(eax + 0x418) = 0x3AC;
    goto loc_0038B881;

loc_0038B71D: ;
    PUSH32(esp, 0x32);
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B726u); RECOMP_ABI_CALL(0x0005A4A0u, sub_0005A4A0); /* call 0x0005A4A0 */

loc_0038B726: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038B737; /* jne: not equal / not zero */

loc_0038B730: ;
    eax = MEM32(0x873364);
    goto loc_0038B743;

loc_0038B737: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    eax = MEM32(0x873368);
    if (CMP_EQ(_fa, _fb)) goto loc_0038B743; /* je: equal / zero */

loc_0038B741: ;
    eax = edi;

loc_0038B743: ;
    ecx = esp + 0xBC;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B750u); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038B750: ;
    edx = esp + 0x90;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B762u); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038B762: ;
    eax = esp + 0x90;
    ecx = esp + 0xC0;
    edx = esp + 0x60;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    edx = MEM32(esp + 0x64);
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x60);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0038B7D7; /* jne: not equal / not zero */

loc_0038B7D0: ;
    eax = MEM32(0x873364);
    goto loc_0038B7E3;

loc_0038B7D7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    eax = MEM32(0x873368);
    if (CMP_EQ(_fa, _fb)) goto loc_0038B7E3; /* je: equal / zero */

loc_0038B7E1: ;
    eax = edi;

loc_0038B7E3: ;
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B7F0u); RECOMP_ABI_CALL(0x000E98F0u, sub_000E98F0); /* call 0x000E98F0 */

loc_0038B7F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x18;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x84;
    edi = esp + 0x34;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B825u); RECOMP_ABI_CALL(0x00058870u, sub_00058870); /* call 0x00058870 */

loc_0038B825: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x5869E4); /* comiss */
    eax = ebx;
    if ((_fca > _fcb)) goto loc_0038B860; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x5869E4)) */

loc_0038B833: ;
    PUSH32(esp, 0x3E);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B83Au); RECOMP_ABI_CALL(0x0005A4A0u, sub_0005A4A0); /* call 0x0005A4A0 */

loc_0038B83A: ;
    edi = eax;
    eax = MEM32(esp + 0x30);
    MEM32(eax + 0x2F0) = 0x3A4;
    MEM32(eax + 0x380) = 0x3A7;
    MEM32(eax + 0x418) = 0x3AB;
    goto loc_0038B88B;

loc_0038B860: ;
    PUSH32(esp, 0x3D);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B867u); RECOMP_ABI_CALL(0x0005A4A0u, sub_0005A4A0); /* call 0x0005A4A0 */

loc_0038B867: ;
    edi = eax;
    eax = MEM32(esp + 0x30);
    MEM32(eax + 0x380) = 0x3A7;
    MEM32(eax + 0x418) = 0x3AB;

loc_0038B881: ;
    MEM32(eax + 0x2F0) = 0x3A3;

loc_0038B88B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B89Du); RECOMP_ABI_CALL(0x00208130u, sub_00208130); /* call 0x00208130 */

loc_0038B89D: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B8A9u); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038B8A9: ;
    ebx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    edx = ebx + 0x438;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0038B8D6; /* jne: not equal / not zero */

loc_0038B8CF: ;
    eax = MEM32(0x873364);
    goto loc_0038B8E2;

loc_0038B8D6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    eax = MEM32(0x873368);
    if (CMP_EQ(_fa, _fb)) goto loc_0038B8E2; /* je: equal / zero */

loc_0038B8E0: ;
    eax = edi;

loc_0038B8E2: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B8ECu); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038B8EC: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = ebx + 0x848;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(edx + 4) = ecx;
    ecx = esp + 0x18;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = eax;
    PUSH32(esp, ecx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B915u); RECOMP_ABI_CALL(0x000E98F0u, sub_000E98F0); /* call 0x000E98F0 */

loc_0038B915: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = ebx + 0x7B4;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0038B93E; /* jne: not equal / not zero */

loc_0038B937: ;
    eax = MEM32(0x873364);
    goto loc_0038B94A;

loc_0038B93E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    eax = MEM32(0x873368);
    if (CMP_EQ(_fa, _fb)) goto loc_0038B94A; /* je: equal / zero */

loc_0038B948: ;
    eax = edi;

loc_0038B94A: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B954u); RECOMP_ABI_CALL(0x000E98F0u, sub_000E98F0); /* call 0x000E98F0 */

loc_0038B954: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x3C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x3C4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x39F;
    MEM32(ebx + 8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B97Bu); RECOMP_ABI_CALL(0x00383DC0u, sub_00383DC0); /* call 0x00383DC0 */

loc_0038B97B: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038B993; /* je: equal / zero */

loc_0038B982: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038B993; /* je: equal / zero */

loc_0038B988: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038B993; /* je: equal / zero */

loc_0038B98F: ;
    MEM8(eax + 0x10) = MEM8(eax + 0x10) & 0xEC;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0038B993: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038B9B2; /* je: equal / zero */

loc_0038B99A: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038B9B2; /* je: equal / zero */

loc_0038B9A0: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038B9B2; /* je: equal / zero */

loc_0038B9A7: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0038B9B2; /* je: equal / zero */

loc_0038B9AE: ;
    MEM8(eax + 1) = 0;

loc_0038B9B2: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, 0xAF1);
    eax = esi;
    MEM32(ecx + 0x644) = 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B9D1u); RECOMP_ABI_CALL(0x00383600u, sub_00383600); /* call 0x00383600 */

loc_0038B9D1: ;
    edx = MEM32(0x955D9C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038B9E1u); RECOMP_ABI_CALL(0x00383EF0u, sub_00383EF0); /* call 0x00383EF0 */

loc_0038B9E1: ;
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x4C);
    MEM32(0x91F110) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = ecx;
    MEM32(0x91F10C) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0038BA0F: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038BA35; /* je: equal / zero */

loc_0038BA16: ;
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038BA35; /* je: equal / zero */

loc_0038BA1D: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    eax = eax | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038BA2Bu); RECOMP_ABI_CALL(0x000A3220u, sub_000A3220); /* call 0x000A3220 */

loc_0038BA2B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038BA35u); RECOMP_ABI_CALL(0x000A3EC0u, sub_000A3EC0); /* call 0x000A3EC0 */

loc_0038BA35: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x4C);
    POP32(esp, edi);
    MEM32(0x91F110) = eax;
    eax = MEM32(esp + 0x40);
    POP32(esp, esi);
    MEM32(0x91F104) = ecx;
    MEM32(0x91F108) = edx;
    MEM32(0x91F10C) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0038BA70
 * Original: 0x0038BA70 - 0x0038BB62 (242 bytes, 66 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038BA70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x91F104);
    edx = MEM32(0x91F108);
    PUSH32(esp, ebx);
    ebx = MEM32(0x91F110);
    PUSH32(esp, ebp);
    ebp = MEM32(0x91F10C);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x48);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = eax;
    eax = MEM32(edi + 0x420);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(0x91F110) = esi;
    MEM32(0x91F10C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0038BB38; /* je: equal / zero */

loc_0038BAC2: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038BAD8; /* je: equal / zero */

loc_0038BACA: ;
    edx = 0x3D7;
    PUSH32(esp, 0x0038BAD4u); RECOMP_ABI_CALL(0x00383DC0u, sub_00383DC0); /* call 0x00383DC0 */

loc_0038BAD4: ;
    PUSH32(esp, 0x48);
    goto loc_0038BAE4;

loc_0038BAD8: ;
    edx = 0x3D2;
    PUSH32(esp, 0x0038BAE2u); RECOMP_ABI_CALL(0x00383DC0u, sub_00383DC0); /* call 0x00383DC0 */

loc_0038BAE2: ;
    PUSH32(esp, 0x47);

loc_0038BAE4: ;
    eax = MEM32(edi + 0x420);
    PUSH32(esp, 0x0038BAEFu); RECOMP_ABI_CALL(0x0005A4A0u, sub_0005A4A0); /* call 0x0005A4A0 */

loc_0038BAEF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x150) = eax;
    PUSH32(esp, 0xAF7);
    eax = esi;
    PUSH32(esp, 0x0038BB04u); RECOMP_ABI_CALL(0x00383600u, sub_00383600); /* call 0x00383600 */

loc_0038BB04: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 1;
    MEM32(0x91F104) = edx;
    MEM32(0x91F108) = eax;
    MEM32(0x91F110) = ebx;
    MEM32(0x91F10C) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0038BB38: ;
    eax = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x91F10C) = ebp;
    POP32(esp, ebp);
    MEM32(0x91F110) = ebx;
    MEM32(eax) = 0;
    MEM32(0x91F104) = ecx;
    MEM32(0x91F108) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0038BB70
 * Original: 0x0038BB70 - 0x0038C1C5 (1621 bytes, 402 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BB70(void)
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

loc_0038BB70: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x91F10C);
    ecx = MEM32(0x91F104);
    edx = MEM32(0x91F108);
    PUSH32(esp, ebx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(0x91F110);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x48);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = eax;
    ebx = 1;
    PUSH32(esp, ebx);
    eax = esi;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    MEM32(0x91F110) = esi;
    MEM32(0x91F10C) = esi;
    PUSH32(esp, 0x0038BBC8u); RECOMP_ABI_CALL(0x0038F980u, sub_0038F980); /* call 0x0038F980 */

loc_0038BBC8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038C198; /* je: equal / zero */

loc_0038BBD3: ;
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x0038BBDFu); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038BBDF: ;
    edx = edi + 0x264;
    eax = esp + 0x78;
    ecx = esp + 0x6C;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    edx = MEM32(esp + 0x68);
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(esp + 0x70);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(0x91F10C);
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038BC58; /* je: equal / zero */

loc_0038BC51: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_0038BC60;

loc_0038BC58: ;
    xmm0 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */

loc_0038BC60: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x84266C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x586684); /* mulss */
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0038BC97u); RECOMP_ABI_CALL(0x000DE700u, sub_000DE700); /* call 0x000DE700 */

loc_0038BC97: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038BCF2; /* jne: not equal / not zero */

loc_0038BC9E: ;
    edx = esp + 0x2C;
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038BCF2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x18)) */

loc_0038BCE0: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0038BCEFu); RECOMP_ABI_CALL(0x000EBC00u, sub_000EBC00); /* call 0x000EBC00 */

loc_0038BCEF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038BCF2: ;
    _fb = (uint32_t)(0x6BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x6BC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x2C;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    MEM32(esp + 0x1C) = edi;
    edx = MEM32(esp + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038BD80; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0038BD6F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0038BD75u); RECOMP_ABI_CALL(0x00048B20u, sub_00048B20); /* call 0x00048B20 */

loc_0038BD75: ;
    xmm3 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038BD80: ;
    eax = esp + 0x2C;
    MEM32(esp + 0x1C) = eax;
    edx = MEM32(esp + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038BE73; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_0038BDC6: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x91F10C);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038BDEF; /* je: equal / zero */

loc_0038BDE8: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_0038BDF2;

loc_0038BDEF: ;
    xmm0 = xmm3; /* movaps */

loc_0038BDF2: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x84266C); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038BE04; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0038BDFF: ;
    xmm0 = xmm3; /* movaps */
    goto loc_0038BE0C;

loc_0038BE04: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038BE0C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0038BE09: ;
    xmm0 = xmm1; /* movaps */

loc_0038BE0C: ;
    edx = esp + 0x5C;
    eax = esp + 0x50;
    MEM32(esp + 0x10) = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm1, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm2, edx + 4); /* movhps */
    xmm2 = XMM_SUB(xmm2, xmm1); /* subps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    edx = MEM32(esp + 0x50);
    ecx = edi;
    MEM32(ecx) = edx;
    eax = MEM32(esp + 0x54);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esp + 0x58);
    MEM32(ecx + 8) = edx;

loc_0038BE73: ;
    eax = esp + 0x80;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0038BE82u); RECOMP_ABI_CALL(0x000E98F0u, sub_000E98F0); /* call 0x000E98F0 */

loc_0038BE82: ;
    ecx = MEM32(esp + 0x84);
    eax = MEM32(esp + 0x8C);
    edx = MEM32(esp + 0x88);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x3C) = ecx;
    ecx = esp + 0x3C;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = edx;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0038BEB9u); RECOMP_ABI_CALL(0x00048B20u, sub_00048B20); /* call 0x00048B20 */

loc_0038BEB9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x84;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0038BEF3u); RECOMP_ABI_CALL(0x00058870u, sub_00058870); /* call 0x00058870 */

loc_0038BEF3: ;
    xmm3 = xmm0; /* movaps */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x18) = edi;
    edx = MEM32(esp + 0x18);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    if ((_fca > _fcb)) goto loc_0038BFEF; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_0038BF46: ;
    _fca = xmm3.f[0]; _fcb = MEMF(0x5869E0); /* comiss */
    if ((_fca > _fcb)) goto loc_0038BF9E; /* ja: above (unsigned >) (xmm3.f[0] vs MEMF(0x5869E0)) */

loc_0038BF4F: ;
    MEM32(esp + 0x20) = ebx;
    ebx = 4;
    PUSH32(esp, 0x0038BF5Du); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_0038BF5D: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x5869E0)); /* fdiv dword ptr [0x5869e0] */
    fp_top() = RECOMP_FP_PC(MEMF(0x5865C4) - fp_top()); /* fsubr dword ptr [0x5865c4] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0038BF89u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_0038BF89: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    goto loc_0038C0A2;

loc_0038BF9E: ;
    MEM32(esp + 0x20) = 4;
    ebx = 2;
    PUSH32(esp, 0x0038BFB0u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_0038BFB0: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x5869E0)); /* fsub dword ptr [0x5869e0] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x5869E0)); /* fdiv dword ptr [0x5869e0] */
    fp_top() = RECOMP_FP_PC(MEMF(0x5865C4) - fp_top()); /* fsubr dword ptr [0x5865c4] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0038BFE2u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_0038BFE2: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    goto loc_0038C094;

loc_0038BFEF: ;
    xmm0 = XMM_SCALAR(MEMF(0x586BB0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0038C048; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_0038BFFC: ;
    MEM32(esp + 0x20) = ebx;
    ebx = 3;
    PUSH32(esp, 0x0038C00Au); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_0038C00A: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x5869E0)); /* fdiv dword ptr [0x5869e0] */
    fp_top() = RECOMP_FP_PC(MEMF(0x5865C4) - fp_top()); /* fsubr dword ptr [0x5865c4] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0038C036u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_0038C036: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    goto loc_0038C0A2;

loc_0038C048: ;
    MEM32(esp + 0x20) = 3;
    ebx = 2;
    PUSH32(esp, 0x0038C05Au); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_0038C05A: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x5869E0)); /* fsub dword ptr [0x5869e0] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x5869E0)); /* fdiv dword ptr [0x5869e0] */
    fp_top() = RECOMP_FP_PC(MEMF(0x5865C4) - fp_top()); /* fsubr dword ptr [0x5865c4] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0038C08Cu); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_0038C08C: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_0038C094: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x5869E0)); /* fsub dword ptr [0x5869e0] */

loc_0038C0A2: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x5869E0)); /* fdiv dword ptr [0x5869e0] */
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0038C0BFu); RECOMP_ABI_CALL(0x00061690u, sub_00061690); /* call 0x00061690 */

loc_0038C0BF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0038C0E6; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0038C0D9: ;
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038C0EC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038C0E6: ;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_0038C0EC: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(esp + 0x1C));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0038C105u); RECOMP_ABI_CALL(0x00061840u, sub_00061840); /* call 0x00061840 */

loc_0038C105: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0038C12C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0038C11F: ;
    xmm1 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038C132; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038C12C: ;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_0038C132: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x18);
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0x0038C149u); RECOMP_ABI_CALL(0x00061840u, sub_00061840); /* call 0x00061840 */

loc_0038C149: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xC;
    MEM16(eax + 0xC) = MEM16(eax + 0xC) | LO16(ecx);
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx + 4);
    MEM16(eax + 0x4C) = MEM16(eax + 0x4C) | LO16(ecx);
    _fa = (uint32_t)(MEM16(eax + 0x4C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax);
    eax = MEM32(edx + 0x18);
    eax = MEM32(eax + 4);
    MEM16(eax + 0x6C) = MEM16(eax + 0x6C) | LO16(ecx);
    _fa = (uint32_t)(MEM16(eax + 0x6C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx);
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0xC) = MEM16(eax + 0xC) | LO16(ecx);
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0038C198: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    POP32(esp, edi);
    MEM32(0x91F110) = ebp;
    POP32(esp, ebp);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = ecx;
    MEM32(0x91F10C) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038C1D0
 * Original: 0x0038C1D0 - 0x0038C476 (678 bytes, 184 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038C1D0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x91F104);
    edx = MEM32(0x91F108);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x91EDAC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x91F10C);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    ebx = MEM32(eax + 0x48);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = eax;
    _fa = (uint32_t)(MEM32(0x5ABD1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5ABD1C), ebp (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x91F110);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(0x91F110) = esi;
    MEM32(0x91F10C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0038C27F; /* je: equal / zero */

loc_0038C22D: ;
    PUSH32(esp, 0x1E0001EB);
    eax = 0x842580;
    PUSH32(esp, 0x0038C23Cu); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038C23C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038C24B; /* jne: not equal / not zero */

loc_0038C244: ;
    ecx = 0x1E0001EB;
    goto loc_0038C252;

loc_0038C24B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0038C26F; /* je: equal / zero */

loc_0038C252: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0038C26Au); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038C26A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0038C274;

loc_0038C26F: ;
    eax = 0x1E0001EB;

loc_0038C274: ;
    MEM32(0x955D98) = eax;
    MEM32(0x5ABD1C) = ebp;

loc_0038C27F: ;
    eax = MEM32(ebx + 0x420);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038C445; /* je: equal / zero */

loc_0038C28F: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038C2EA; /* je: equal / zero */

loc_0038C297: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038C2C3; /* je: equal / zero */

loc_0038C29C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038C312; /* jne: not equal / not zero */

loc_0038C2A1: ;
    _fa = (uint32_t)(MEM32(ebx + 0xE8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xE8), 0x3D2 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0038C2BC; /* je: equal / zero */

loc_0038C2B0: ;
    PUSH32(esp, 0x3D6);
    PUSH32(esp, 0x1E5);
    goto loc_0038C30A;

loc_0038C2BC: ;
    PUSH32(esp, 0x3D1);
    goto loc_0038C305;

loc_0038C2C3: ;
    _fa = (uint32_t)(MEM32(ebx + 0xE8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xE8), 0x3D2 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0038C2DE; /* je: equal / zero */

loc_0038C2D2: ;
    PUSH32(esp, 0x3D5);
    PUSH32(esp, 0x1E5);
    goto loc_0038C30A;

loc_0038C2DE: ;
    PUSH32(esp, 0x3D0);
    PUSH32(esp, 0x1E5);
    goto loc_0038C30A;

loc_0038C2EA: ;
    _fa = (uint32_t)(MEM32(ebx + 0xE8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xE8), 0x3D2 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0038C300; /* je: equal / zero */

loc_0038C2F9: ;
    PUSH32(esp, 0x3D4);
    goto loc_0038C305;

loc_0038C300: ;
    PUSH32(esp, 0x3CF);

loc_0038C305: ;
    PUSH32(esp, 0x1E8);

loc_0038C30A: ;
    PUSH32(esp, 0x0038C30Fu); RECOMP_ABI_CALL(0x00384010u, sub_00384010); /* call 0x00384010 */

loc_0038C30F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038C312: ;
    eax = MEM32(ebx + 0x420);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0x48);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1A8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 0x24;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5865C4)); /* movss */
    PUSH32(esp, edx);
    edi = esi;
    MEM32(esp + 0x40) = eax;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0038C368u); RECOMP_ABI_CALL(0x000E9AC0u, sub_000E9AC0); /* call 0x000E9AC0 */

loc_0038C368: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038C383; /* je: equal / zero */

loc_0038C372: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038C383; /* je: equal / zero */

loc_0038C378: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038C383; /* je: equal / zero */

loc_0038C37F: ;
    MEM8(eax + 0x10) = MEM8(eax + 0x10) | 0x13;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0038C383: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx + 0x48);
    eax = esp + 0x30;
    MEM32(edx + 0x420) = ebp;
    PUSH32(esp, eax);
    eax = esi;
    MEM32(ebx + 0x80) = ebp;
    MEM32(ebx + 0x150) = ebp;
    PUSH32(esp, 0x0038C3AAu); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038C3AA: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    ecx = ebx + 0x8DC;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    eax = MEM32(ebx + 0x8E4);
    MEM32(ebx + 0x204) = eax;
    MEM32(ebx + 0x4CC) = 1;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x644) = 0x1D;
    PUSH32(esp, 0xB55);
    eax = esi;
    PUSH32(esp, 0x0038C3FCu); RECOMP_ABI_CALL(0x00383600u, sub_00383600); /* call 0x00383600 */

loc_0038C3FC: ;
    edx = MEM32(0x955D98);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0038C40Cu); RECOMP_ABI_CALL(0x00383EF0u, sub_00383EF0); /* call 0x00383EF0 */

loc_0038C40C: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x14);
    MEM32(ecx) = 1;
    ecx = MEM32(esp + 0x18);
    MEM32(0x91F110) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(0x91F104) = eax;
    MEM32(0x91F108) = ecx;
    MEM32(0x91F10C) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0038C445: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEM32(0x91F110) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    eax = MEM32(esp + 0x14);
    POP32(esp, ebp);
    MEM32(0x91F104) = ecx;
    MEM32(0x91F108) = edx;
    MEM32(0x91F10C) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0038C437
 * Original: 0x0038C437 - 0x0038C476 (63 bytes, 22 insns)
 * Folder: scripts (between: 0x00385FC0 and 0x0038C480)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C437(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038C437: ;
    MEM32(0x91F10C) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0038C480
 * Original: 0x0038C480 - 0x0038CB70 (1776 bytes, 454 insns)
 * Folder: scripts (table: AI table at 0x0059FD30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0038C480(void)
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

loc_0038C480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x140));
    esp = esp - 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x91F104);
    ecx = MEM32(0x91EDAC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x48);
    eax = MEM32(0x91F0FC);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0038C54F; /* je: equal / zero */

loc_0038C4B4: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0x8000399);
    eax = 0x842580;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C4C6u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038C4C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038C4D5; /* jne: not equal / not zero */

loc_0038C4CE: ;
    ecx = 0x8000399;
    goto loc_0038C4DC;

loc_0038C4D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0038C4F9; /* je: equal / zero */

loc_0038C4DC: ;
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
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x5F4398)) >> 32) & 1);
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C4F4u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038C4F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0038C4FE;

loc_0038C4F9: ;
    eax = 0x8000399;

loc_0038C4FE: ;
    MEM32(0x955D94) = eax;
    PUSH32(esp, 0x57CC71E);
    eax = 0x842580;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C512u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038C512: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038C521; /* jne: not equal / not zero */

loc_0038C51A: ;
    ecx = 0x57CC71E;
    goto loc_0038C528;

loc_0038C521: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0038C545; /* je: equal / zero */

loc_0038C528: ;
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
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x5F4398)) >> 32) & 1);
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C540u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_0038C540: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0038C54A;

loc_0038C545: ;
    eax = 0x57CC71E;

loc_0038C54A: ;
    MEM32(0x955D90) = eax;

loc_0038C54F: ;
    eax = MEM32(0x91F10C);
    ecx = esp + 0xCC;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C561u); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038C561: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xCC;
    eax = ebp + 0x264;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C578u); RECOMP_ABI_CALL(0x000DE700u, sub_000DE700); /* call 0x000DE700 */

loc_0038C578: ;
    ebx = MEM32(0x91F10C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0038C62F; /* jne: not equal / not zero */

loc_0038C589: ;
    ecx = esp + 0x10;
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C594u); RECOMP_ABI_CALL(0x00234ED0u, sub_00234ED0); /* call 0x00234ED0 */

loc_0038C594: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0038C62F; /* je: equal / zero */

loc_0038C59E: ;
    eax = esp + 0x138;
    PUSH32(esp, eax);
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C5ADu); RECOMP_ABI_CALL(0x0038EC60u, sub_0038EC60); /* call 0x0038EC60 */

loc_0038C5AD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    edx = esp + 0x13C;
    PUSH32(esp, edx);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C5E0u); RECOMP_ABI_CALL(0x000DE700u, sub_000DE700); /* call 0x000DE700 */

loc_0038C5E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0038C62F; /* jne: not equal / not zero */

loc_0038C5E7: ;
    esi = MEM32(0x5BEED4);
    ecx = 0x80;
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C5F9u); RECOMP_ABI_CALL(0x0009E2A0u, sub_0009E2A0); /* call 0x0009E2A0 */

loc_0038C5F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0038C62F; /* je: equal / zero */

loc_0038C5FD: ;
    ecx = 0x80;
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C609u); RECOMP_ABI_CALL(0x0009E2A0u, sub_0009E2A0); /* call 0x0009E2A0 */

loc_0038C609: ;
    edx = MEM32(ebx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0038C61E; /* je: equal / zero */

loc_0038C615: ;
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 4);

loc_0038C61E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0038C62F; /* je: equal / zero */

loc_0038C622: ;
    _fa = (uint32_t)(MEM32(ebp + 0x644)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x644), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0038C8E5; /* je: equal / zero */

loc_0038C62F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x644)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x644), 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038CB58; /* jne: not equal / not zero */

loc_0038C63C: ;
    eax = MEM32(0x91F108);
    edx = MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x955D90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x955D90) (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(0x91F104);
    MEM32(0x91F108) = ecx;
    MEM32(0x91F110) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0038CB58; /* jne: not equal / not zero */

loc_0038C662: ;
    _fa = (uint32_t)(MEM32(ebp + 0x680)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x680), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038C8CC; /* jne: not equal / not zero */

loc_0038C66F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x3F000000);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x586834)); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    esi = ebx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C6A2u); RECOMP_ABI_CALL(0x000A1700u, sub_000A1700); /* call 0x000A1700 */

loc_0038C6A2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0038C6E6; /* je: equal / zero */

loc_0038C6A9: ;
    eax = esp + 0xF0;
    PUSH32(esp, eax);
    eax = MEM32(0x91F10C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C6BBu); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038C6BB: ;
    edx = MEM32(0x5BEED4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x100100);
    PUSH32(esp, 1);
    ecx = esp + 0xF8;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x318) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x318)) >> 32) & 1);
    edx = edx + 0x318;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C6DFu); RECOMP_ABI_CALL(0x000B2370u, sub_000B2370); /* call 0x000B2370 */

loc_0038C6DF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038C6FD; /* jne: not equal / not zero */

loc_0038C6E6: ;
    eax = MEM32(0x91F10C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C6F0u); RECOMP_ABI_CALL(0x00240B20u, sub_00240B20); /* call 0x00240B20 */

loc_0038C6F0: ;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0038C6FD: ;
    ebx = MEM32(0x5BEED4);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x318) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x318)) >> 32) & 1);
    ebx = ebx + 0x318;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C714u); RECOMP_ABI_CALL(0x000B2440u, sub_000B2440); /* call 0x000B2440 */

loc_0038C714: ;
    ecx = MEM32(esp + 0x48);
    ebx = MEM32(0x5BEED4);
    edx = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x50);
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x318) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x318)) >> 32) & 1);
    ebx = ebx + 0x318;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C747u); RECOMP_ABI_CALL(0x000B2440u, sub_000B2440); /* call 0x000B2440 */

loc_0038C747: ;
    edx = MEM32(esp + 0xC0);
    eax = MEM32(esp + 0xC4);
    ecx = MEM32(esp + 0xC8);
    MEM32(esp + 0xB4) = edx;
    edx = esp + 0x24;
    MEM32(esp + 0xB8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xB8;
    MEM32(esp + 0xC0) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x128;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C78Bu); RECOMP_ABI_CALL(0x00048BD0u, sub_00048BD0); /* call 0x00048BD0 */

loc_0038C78B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40000000);
    edx = esp + 0x124;
    PUSH32(esp, edx);
    eax = esp + 0x110;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C7A8u); RECOMP_ABI_CALL(0x0004E2F0u, sub_0004E2F0); /* call 0x0004E2F0 */

loc_0038C7A8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x108;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C7C2u); RECOMP_ABI_CALL(0x00043DC0u, sub_00043DC0); /* call 0x00043DC0 */

loc_0038C7C2: ;
    eax = MEM32(esp + 0x80);
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x7C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xA4) = eax;
    PUSH32(esp, esi);
    edi = esp + 0xDC;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xA0) = ecx;
    MEM32(esp + 0xA4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C7F8u); RECOMP_ABI_CALL(0x0038E710u, sub_0038E710); /* call 0x0038E710 */

loc_0038C7F8: ;
    xmm0 = XMM_SCALAR(MEMF(0x58667C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, ecx);
    edx = esp + 0xE8;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C813u); RECOMP_ABI_CALL(0x0004E210u, sub_0004E210); /* call 0x0004E210 */

loc_0038C813: ;
    eax = esp + 0xEC;
    PUSH32(esp, eax);
    ecx = esp + 0xA8;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C830u); RECOMP_ABI_CALL(0x00043DC0u, sub_00043DC0); /* call 0x00043DC0 */

loc_0038C830: ;
    eax = MEM32(esp + 0x98);
    ecx = MEM32(esp + 0x9C);
    edx = MEM32(esp + 0xA0);
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0x110;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(0x91F10C);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C866u); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038C866: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x108)); /* movss */
    eax = MEM32(ebp + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C880u); RECOMP_ABI_CALL(0x001268D0u, sub_001268D0); /* call 0x001268D0 */

loc_0038C880: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C887u); RECOMP_ABI_CALL(0x000E9F20u, sub_000E9F20); /* call 0x000E9F20 */

loc_0038C887: ;
    esi = MEM32(0x91F10C);
    edi = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C896u); RECOMP_ABI_CALL(0x000E9370u, sub_000E9370); /* call 0x000E9370 */

loc_0038C896: ;
    eax = MEM32(0x91F10C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C8A0u); RECOMP_ABI_CALL(0x001268D0u, sub_001268D0); /* call 0x001268D0 */

loc_0038C8A0: ;
    esi = eax;
    eax = MEM32(ebp + 0x38);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C8AAu); RECOMP_ABI_CALL(0x001268D0u, sub_001268D0); /* call 0x001268D0 */

loc_0038C8AA: ;
    ecx = eax;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C8B3u); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_0038C8B3: ;
    ecx = MEM32(0x91F100);
    MEM32(ecx) = 0xFFFFFFFFu;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0038C8CC: ;
    edx = MEM32(0x91F100);
    MEM32(edx) = 0xFFFFFFFFu;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0038C8E5: ;
    ecx = ebx;
    MEM32(esp + 0x14) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C8F0u); RECOMP_ABI_CALL(0x000E9E30u, sub_000E9E30); /* call 0x000E9E30 */

loc_0038C8F0: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x7C4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x586BE4); /* ucomiss */
    edi = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0038CB58; /* jnp: not parity */

loc_0038C90B: ;
    ecx = esp + 0x114;
    PUSH32(esp, ecx);
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C91Au); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038C91A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + 0x264;
    PUSH32(esp, eax);
    edx = esp + 0x118;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C936u); RECOMP_ABI_CALL(0x00048BD0u, sub_00048BD0); /* call 0x00048BD0 */

loc_0038C936: ;
    esi = MEM32(0x91F10C);
    ecx = esp + 0x60;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C949u); RECOMP_ABI_CALL(0x000E9CC0u, sub_000E9CC0); /* call 0x000E9CC0 */

loc_0038C949: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x6C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x68); /* mulss */
    edx = MEM32(0x955D94);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x64); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, edx);
    eax = edi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C98Cu); RECOMP_ABI_CALL(0x001268D0u, sub_001268D0); /* call 0x001268D0 */

loc_0038C98C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C991u); RECOMP_ABI_CALL(0x0038CDB0u, sub_0038CDB0); /* call 0x0038CDB0 */

loc_0038C991: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0038C9CF; /* jne: not equal / not zero */

loc_0038C998: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C9A7u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_0038C9A7: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x586760)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0038CB58; /* jbe: below or equal (unsigned <=) */

loc_0038C9CA: ;
    goto loc_0038CB3A;

loc_0038C9CF: ;
    eax = ebp + 0x6AC;
    PUSH32(esp, eax);
    ecx = ebp + 0x4F0;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038C9E2u); RECOMP_ABI_CALL(0x000DE700u, sub_000DE700); /* call 0x000DE700 */

loc_0038C9E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0038C9F2; /* je: equal / zero */

loc_0038C9EE: ;
    esi = MEM32(esp + 0x14);

loc_0038C9F2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x586638); /* comiss */
    if ((_fca > _fcb)) goto loc_0038CA95; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x586638)) */

loc_0038CA05: ;
    eax = MEM32(ebp + 0xCEC);
    edx = esp + 0x12C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038CA18u); RECOMP_ABI_CALL(0x001268D0u, sub_001268D0); /* call 0x001268D0 */

loc_0038CA18: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038CA1Du); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038CA1D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x12C;
    PUSH32(esp, eax);
    ecx = ebp + 0x224;
    PUSH32(esp, ecx);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038CA3Cu); RECOMP_ABI_CALL(0x00048BD0u, sub_00048BD0); /* call 0x00048BD0 */

loc_0038CA3C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + 0x344;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038CA50u); RECOMP_ABI_CALL(0x0048929Fu, sub_0048929F); /* call 0x0048929F */

loc_0038CA50: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x98)); /* fmul dword ptr [esp + 0x98] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x9C)); /* fmul dword ptr [esp + 0x9c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x98)); /* fmul dword ptr [esp + 0x98] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038CA88u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_0038CA88: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    goto loc_0038CB20;

loc_0038CA95: ;
    eax = MEM32(ebp + 0x1438);
    edx = esp + 0x144;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038CAA8u); RECOMP_ABI_CALL(0x001268D0u, sub_001268D0); /* call 0x001268D0 */

loc_0038CAA8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038CAADu); RECOMP_ABI_CALL(0x000E91F0u, sub_000E91F0); /* call 0x000E91F0 */

loc_0038CAAD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x144;
    PUSH32(esp, eax);
    ecx = ebp + 0x28C;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038CAC9u); RECOMP_ABI_CALL(0x00048BD0u, sub_00048BD0); /* call 0x00048BD0 */

loc_0038CAC9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + 0x298;
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038CAE0u); RECOMP_ABI_CALL(0x0048929Fu, sub_0048929F); /* call 0x0048929F */

loc_0038CAE0: ;
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0xB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038CB18u); RECOMP_ABI_CALL(0x00480326u, sub_00480326); /* call 0x00480326 */

loc_0038CB18: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */

loc_0038CB20: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x586630); /* comiss */
    if ((_fca > _fcb)) goto loc_0038CB3A; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x586630)) */

loc_0038CB36: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0038CB58; /* je: equal / zero */

loc_0038CB3A: ;
    edx = MEM32(0x91F10C);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, edx);
    MEM32(ebp + 0x132C) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038CB55u); RECOMP_ABI_CALL(0x00203530u, sub_00203530); /* call 0x00203530 */

loc_0038CB55: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038CB58: ;
    eax = MEM32(0x91F100);
    POP32(esp, edi);
    MEM32(eax) = 0xFFFFFFFFu;
    eax = 0x3E8;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0038CB70
 * Original: 0x0038CB70 - 0x0038CBA0 (48 bytes, 20 insns)
 * Folder: scripts (table: AI table at 0x0059FD30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038CB70(void)
{

loc_0038CB70: ;
    eax = MEM32(0x91F104);
    eax = MEM32(eax + 0x48);
    MEM32(eax + 0xEC) = 1;
    MEM32(eax + 0x13E8) = 0;
    eax = 0x3E8;
    esp += 4; return; /* ret */

}
