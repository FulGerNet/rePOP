/**
 * PoP SoT xbox-demo - Recompiled code chunk 14
 * Functions: 250 (0x000DCFD0 - 0x000E4000)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000DCFD0
 * Original: 0x000DCFD0 - 0x000DD1F6 (550 bytes, 185 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DCFD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_000DD149; /* jle: less or equal (signed <=) */

loc_000DCFF7: ;
    goto loc_000DD000;

    /* nop */

loc_000DD000: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD156; /* je: equal / zero */

loc_000DD00C: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000DD17C; /* jae: above or equal (unsigned >=) */

loc_000DD018: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DD198; /* jb: below (unsigned <) */

loc_000DD022: ;
    eax = MEM32(ecx + eax * 4);
    MEM32(esp + 0x10) = eax;
    ebx = esp + 0x10;
    eax = edi;
    PUSH32(esp, 0x000DD034u); RECOMP_ABI_CALL(0x000DD240u, sub_000DD240); /* call 0x000DD240 */

loc_000DD034: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(esp + 0x10);
    esi = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DD05A; /* jle: less or equal (signed <=) */

loc_000DD043: ;
    esi = MEM32(edi + 8);

loc_000DD046: ;
    MEM32(esp + 0x14) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000DD1B4; /* jae: above or equal (unsigned >=) */

loc_000DD056: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DD046; /* jg: greater (signed >) */

loc_000DD05A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD079; /* je: equal / zero */

loc_000DD05E: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD079; /* je: equal / zero */

loc_000DD06A: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, 0x000DD072u); RECOMP_ABI_CALL(0x000DD2D0u, sub_000DD2D0); /* call 0x000DD2D0 */

loc_000DD072: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    goto loc_000DD07C;

loc_000DD079: ;
    ebx = MEM32(eax + 4);

loc_000DD07C: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000DD0EC; /* je: equal / zero */

loc_000DD083: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000DD0CC; /* je: equal / zero */

loc_000DD086: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000DD1D5; /* jne: not equal / not zero */

loc_000DD08D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DD099; /* jl: less (signed <) */

loc_000DD091: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DD0B0; /* jle: less or equal (signed <=) */

loc_000DD099: ;
    PUSH32(esp, 0x32BF84);
    eax = 0x27C;
    ecx = 0x32BCB8;
    PUSH32(esp, 0x000DD0ADu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DD0AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DD0B0: ;
    eax = MEM32(esp + 0x2C);
    MEM8(eax + 0x14) = LO8(ebx);
    ecx = 1;
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 0x24);
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(ebp + 8) = LO8(ebx);
    MEM32(ebp + 0x24) = eax;
    goto loc_000DD12E;

loc_000DD0CC: ;
    eax = MEM32(esp + 0x2C);
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 4) = 1;
    ecx = MEM32(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DD0E4u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000DD0E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    goto loc_000DD12E;

loc_000DD0EC: ;
    esi = 0xFFA00000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DD0F9; /* jl: less (signed <) */

loc_000DD0F5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DD110; /* jle: less or equal (signed <=) */

loc_000DD0F9: ;
    PUSH32(esp, 0x32BF84);
    eax = 0x26F;
    ecx = 0x32BCF0;
    PUSH32(esp, 0x000DD10Du); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DD10D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DD110: ;
    eax = MEM32(esp + 0x2C);
    MEM32(eax + 0xC) = ebx;
    MEM32(eax) = 1;
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_000DD12E; /* jge: greater or equal (signed >=) */

loc_000DD12B: ;
    MEM32(ebp + 4) = esi;

loc_000DD12E: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x20);
    ecx = MEM32(edx + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000DD000; /* jl: less (signed <) */

loc_000DD149: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DD156: ;
    PUSH32(esp, 0x244);
    PUSH32(esp, 0x324878);
    edx = 0x32BDE0;
    ecx = 0x32BF84;
    PUSH32(esp, 0x000DD16Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DD16F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DD17C: ;
    PUSH32(esp, 0x32BD90);
    edx = 0x1C;
    PUSH32(esp, 0x000DD18Bu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000DD18B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DD198: ;
    PUSH32(esp, 0x32BD48);
    edx = 0x1D;
    PUSH32(esp, 0x000DD1A7u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000DD1A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DD1B4: ;
    PUSH32(esp, 0x32BF84);
    eax = 0x260;
    ecx = 0x324878;
    PUSH32(esp, 0x000DD1C8u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DD1C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DD1D5: ;
    PUSH32(esp, 0x32BF84);
    eax = 0x283;
    ecx = 0x324878;
    PUSH32(esp, 0x000DD1E9u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DD1E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DD200
 * Original: 0x000DD200 - 0x000DD238 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000DD200: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DD232; /* je: equal / zero */

loc_000DD209: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD232; /* je: equal / zero */

loc_000DD20D: ;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(edx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esp + 8);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD237; /* je: equal / zero */

loc_000DD228: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

loc_000DD232: ;
    eax = 1;

loc_000DD237: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD240
 * Original: 0x000DD240 - 0x000DD2C4 (132 bytes, 45 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD240: ;
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD25E; /* jne: not equal / not zero */

loc_000DD247: ;
    PUSH32(esp, 0x32BF84);
    eax = 0x2C2;
    ecx = 0x32BCA0;
    PUSH32(esp, 0x000DD25Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DD25B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DD25E: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000DD2C2; /* jbe: below or equal (unsigned <=) */

loc_000DD265: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000DD281; /* jae: above or equal (unsigned >=) */

loc_000DD26A: ;
    PUSH32(esp, 0x32BF84);
    eax = 0x2C7;
    ecx = 0x32BC80;
    PUSH32(esp, 0x000DD27Eu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DD27E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DD281: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x10);
    ecx = MEM32(esi);
    edi = esi + eax * 8 + -8;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000DD2AA; /* jge: greater or equal (signed >=) */

loc_000DD294: ;
    eax = 0x32BB40;
    edx = 0x1C;
    PUSH32(esp, 0x000DD2A3u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000DD2A3: ;
    ecx = MEM32(esi);
    POP32(esp, esi);
    MEM32(ebx) = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000DD2AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DD2C1; /* jle: less or equal (signed <=) */

loc_000DD2AE: ;
    eax = 0x32BA00;
    edx = 0x1C;
    PUSH32(esp, 0x000DD2BDu); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000DD2BD: ;
    edx = MEM32(edi);
    MEM32(ebx) = edx;

loc_000DD2C1: ;
    POP32(esp, esi);

loc_000DD2C2: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD2D0
 * Original: 0x000DD2D0 - 0x000DD363 (147 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD2D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000DD31D; /* jl: less (signed <) */

loc_000DD2DD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DD31D; /* jg: greater (signed >) */

loc_000DD2E2: ;
    esi = MEM32(eax);
    edx = MEM32(edi);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DD2F7u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000DD2F7: ;
    ecx = MEM32(edi);
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DD305u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000DD305: ;
    edi = MEM32(edi + 4);
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000DD314u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000DD314: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DD31D: ;
    esi = MEM32(eax);
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(edi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DD333u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000DD333: ;
    esi = eax;
    eax = MEM32(edi);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DD341u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000DD341: ;
    ecx = MEM32(edi + 4);
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000DD355u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000DD355: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD370
 * Original: 0x000DD370 - 0x000DD403 (147 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD370(void)
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

loc_000DD370: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DD382; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000DD379: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    goto loc_000DD385;

loc_000DD382: ;
    xmm1 = xmm2; /* movaps */

loc_000DD385: ;
    xmm3 = XMM_SCALAR(MEMF(0x33F6C4)); /* movss */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    ecx = 0x5A;
    if ((_fca >= _fcb)) goto loc_000DD3E9; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm1.f[0]) */

loc_000DD3A2: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x33F994); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DD3B2; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(0x33F994)) */

loc_000DD3AB: ;
    eax = 0x5A;
    goto loc_000DD3E9;

loc_000DD3B2: ;
    PUSH32(esp, edi);

loc_000DD3B3: ;
    edi = eax;
    eax = ecx + esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fca = xmm1.f[0]; _fcb = MEMF(eax * 8 + 0x33F6C4); /* comiss */
    if ((_fca > _fcb)) esi = eax; /* cmova */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) ecx = eax; /* cmovbe */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD3B3; /* jne: not equal / not zero */

loc_000DD3CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000DD3E9; /* jne: not equal / not zero */

loc_000DD3D4: ;
    fp_push(MEMD(0x333820)); /* fld double */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DD3E9; /* jbe: below or equal (unsigned <=) */

loc_000DD3E4: ;
    eax = 1;

loc_000DD3E9: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax * 8 + 0x33F6C0); /* subss */
    POP32(esp, esi);
    if ((_fca > _fcb)) goto loc_000DD401; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_000DD3F8: ;
    xmm0 = XMM_SCALAR(MEMF(eax * 8 + 0x33F6C0)); /* movss */

loc_000DD401: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DD410
 * Original: 0x000DD410 - 0x000DD44D (61 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD410: ;
    PUSH32(esp, 0x000DD415u); RECOMP_ABI_CALL(0x000DA220u, sub_000DA220); /* call 0x000DA220 */

loc_000DD415: ;
    ecx = 0x1000;
    edx = 1;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x32C028;
    MEM32(eax + 0x24) = 0x10000;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD450
 * Original: 0x000DD450 - 0x000DD46C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD450: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000DD458u); RECOMP_ABI_CALL(0x000DD470u, sub_000DD470); /* call 0x000DD470 */

loc_000DD458: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000DD468; /* je: equal / zero */

loc_000DD461: ;
    PUSH32(esp, 0x000DD466u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000DD466: ;
    eax = esi;

loc_000DD468: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD470
 * Original: 0x000DD470 - 0x000DD47B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DD470: ;
    MEM32(ecx) = 0x32C028;
    g_seh_ebp = ebp; sub_000DA260(); return; /* tail jmp 0x000DA260 */

}

/**
 * sub_000DD480
 * Original: 0x000DD480 - 0x000DD4B4 (52 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD480: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DD489u); RECOMP_ABI_CALL(0x000E0A90u, sub_000E0A90); /* call 0x000E0A90 */

loc_000DD489: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD4AB; /* jne: not equal / not zero */

loc_000DD490: ;
    esi = MEM32(esi);
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000DD49Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD49Bu); } /* indirect call */
    }

loc_000DD49E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD4B0; /* jne: not equal / not zero */

loc_000DD4A2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000DD4ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD4A8u); } /* indirect call */
    }

loc_000DD4AB: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DD4B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD4C0
 * Original: 0x000DD4C0 - 0x000DD4FE (62 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD4C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000DD4CEu); RECOMP_ABI_CALL(0x000DA290u, sub_000DA290); /* call 0x000DA290 */

loc_000DD4CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD4F9; /* je: equal / zero */

loc_000DD4D2: ;
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD4EE; /* jne: not equal / not zero */

loc_000DD4D9: ;
    ecx = ZX16(MEM16(edi + 6));
    MEM32(esi + 0x28) = ecx;
    edx = ZX16(MEM16(edi + 6));
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    MEM32(esi + 0x40) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000DD4EE: ;
    edx = ZX16(MEM16(edi + 6));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x40) = edx;

loc_000DD4F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD500
 * Original: 0x000DD500 - 0x000DD53F (63 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD500: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000DD513u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD510u); } /* indirect call */
    }

loc_000DD513: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD52E; /* je: equal / zero */

loc_000DD517: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000DD522u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD520u); } /* indirect call */
    }

loc_000DD522: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD535; /* jne: not equal / not zero */

loc_000DD527: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000DD52Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD52Cu); } /* indirect call */
    }

loc_000DD52E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000DD535: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000DD540
 * Original: 0x000DD540 - 0x000DD567 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DD540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD540: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD562; /* je: equal / zero */

loc_000DD547: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD562; /* jne: not equal / not zero */

loc_000DD54F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x34) = 0;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000DD562: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD570
 * Original: 0x000DD570 - 0x000DD581 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DD570: ;
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD57E; /* je: equal / zero */

loc_000DD577: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

loc_000DD57E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD590
 * Original: 0x000DD590 - 0x000DD5A4 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DD590: ;
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD59E; /* je: equal / zero */

loc_000DD597: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

loc_000DD59E: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD5B0
 * Original: 0x000DD5B0 - 0x000DD5DF (47 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000DD5B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DD5BD; /* jne: not equal / not zero */

loc_000DD5B8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000DD5BD: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000DD5B8; /* jne: not equal / not zero */

loc_000DD5C4: ;
    SET_LO16(edx, MEM16(eax + 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x14)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x14) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000DD5B8; /* jne: not equal / not zero */

loc_000DD5CE: ;
    SET_LO16(eax, MEM16(eax + 6));
    _fb = (uint32_t)(MEM16(ecx + 0x16)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO16(eax)) < (uint32_t)(MEM16(ecx + 0x16)));
    SET_LO16(eax, LO16(eax) - MEM16(ecx + 0x16));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _cf = (int)((LO16(eax)) != 0);
    SET_LO16(eax, (uint32_t)(-(int32_t)LO16(eax)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD5E0
 * Original: 0x000DD5E0 - 0x000DD62E (78 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD5E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD623; /* jne: not equal / not zero */

loc_000DD5E9: ;
    eax = MEM32(ecx + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x1C));
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD614; /* je: equal / zero */

loc_000DD5FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD614; /* je: equal / zero */

loc_000DD601: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFF (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DD614; /* je: equal / zero */

loc_000DD608: ;
    MEM32(ecx + 0x30) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000DD614: ;
    MEM32(ecx + 0x30) = 1;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000DD623: ;
    MEM32(ecx + 0x30) = eax;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD630
 * Original: 0x000DD630 - 0x000DD63A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD630(void)
{

loc_000DD630: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x44) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD640
 * Original: 0x000DD640 - 0x000DD6E6 (166 bytes, 40 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD640(void)
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

loc_000DD640: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333830); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x33386C); /* comiss */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_000DD66D; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x33386C)) */

loc_000DD660: ;
    xmm1 = XMM_SCALAR(MEMF(0x333940)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DD68D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DD66D: ;
    PUSH32(esp, 0x32C0F8);
    edx = 0x1C;
    PUSH32(esp, 0x000DD67Cu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000DD67C: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_000DD68D: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3338B8)); /* fmul dword ptr [0x3338b8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x333938)); /* fadd qword ptr [0x333938] */
    PUSH32(esp, 0x000DD6A2u); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_000DD6A2: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x000DD6AFu); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000DD6AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000DD6D0; /* jne: not equal / not zero */

loc_000DD6B9: ;
    PUSH32(esp, 0x32C0B0);
    eax = 0xE4;
    ecx = 0x32C094;
    PUSH32(esp, 0x000DD6CDu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DD6CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DD6D0: ;
    edx = MEM32(esi + 0x1C);
    edx = edx ^ 0x1000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_000DD6E2; /* je: equal / zero */

loc_000DD6DB: ;
    MEM32(esi + 0x30) = 0;

loc_000DD6E2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DD6F0
 * Original: 0x000DD6F0 - 0x000DD7CE (222 bytes, 75 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD6F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD707; /* je: equal / zero */

loc_000DD6FD: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000DD707: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ecx = esp + 8;
    eax = esi;
    PUSH32(esp, 0x000DD717u); RECOMP_ABI_CALL(0x000DA300u, sub_000DA300); /* call 0x000DA300 */

loc_000DD717: ;
    eax = MEM32(edi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000DD723u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD720u); } /* indirect call */
    }

loc_000DD723: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD732; /* jne: not equal / not zero */

loc_000DD727: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000DD732: ;
    eax = MEM32(edi + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(edi + 0x34) = esi;
    esi = MEM32(edi + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM32(edi + 0xC) = eax;
    PUSH32(esp, 0x000DD749u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000DD749: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000DD76A; /* jne: not equal / not zero */

loc_000DD753: ;
    PUSH32(esp, 0x32C0B0);
    eax = 0xFD;
    ecx = 0x32C084;
    PUSH32(esp, 0x000DD767u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DD767: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DD76A: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD792; /* je: equal / zero */

loc_000DD774: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD792; /* je: equal / zero */

loc_000DD77B: ;
    ecx = eax;
    ecx = ecx & 0xFFFF0000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000DD792; /* je: equal / zero */

loc_000DD789: ;
    MEM32(edi + 0x30) = 0;
    goto loc_000DD799;

loc_000DD792: ;
    MEM32(edi + 0x30) = 1;

loc_000DD799: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DD7A3u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000DD7A3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000DD7C4; /* jne: not equal / not zero */

loc_000DD7AD: ;
    PUSH32(esp, 0x32C0B0);
    eax = 0x105;
    ecx = 0x32C094;
    PUSH32(esp, 0x000DD7C1u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DD7C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DD7C4: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD7D0
 * Original: 0x000DD7D0 - 0x000DD83A (106 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD7D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD7D8; /* jne: not equal / not zero */

loc_000DD7D4: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000DD7D8: ;
    PUSH32(esp, edi);
    eax = 0xB4;
    PUSH32(esp, 0x000DD7E3u); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000DD7E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD81D; /* je: equal / zero */

loc_000DD7E7: ;
    edx = eax;
    PUSH32(esp, 0x000DD7EEu); RECOMP_ABI_CALL(0x000DD860u, sub_000DD860); /* call 0x000DD860 */

loc_000DD7EE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD81D; /* je: equal / zero */

loc_000DD7F4: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi);
    MEM32(edi + 0x40) = eax;
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(edi + 0x3C) = esi;
    MEM32(edi + 4) = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000DD80Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD80Au); } /* indirect call */
    }

loc_000DD80D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD822; /* jne: not equal / not zero */

loc_000DD811: ;
    eax = edi;
    PUSH32(esp, 0x000DD818u); RECOMP_ABI_CALL(0x000DD8D0u, sub_000DD8D0); /* call 0x000DD8D0 */

loc_000DD818: ;
    PUSH32(esp, 0x000DD81Du); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000DD81D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000DD822: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DD82Cu); RECOMP_ABI_CALL(0x000DDDE0u, sub_000DDDE0); /* call 0x000DDDE0 */

loc_000DD82C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD811; /* je: equal / zero */

loc_000DD830: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD840
 * Original: 0x000DD840 - 0x000DD860 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD840: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD85E; /* je: equal / zero */

loc_000DD847: ;
    PUSH32(esp, 0x000DD84Cu); RECOMP_ABI_CALL(0x000DDEB0u, sub_000DDEB0); /* call 0x000DDEB0 */

loc_000DD84C: ;
    eax = edi;
    PUSH32(esp, 0x000DD853u); RECOMP_ABI_CALL(0x000DD8D0u, sub_000DD8D0); /* call 0x000DD8D0 */

loc_000DD853: ;
    PUSH32(esp, 0x000DD858u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000DD858: ;
    MEM32(esi) = 0;

loc_000DD85E: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD860
 * Original: 0x000DD860 - 0x000DD8C2 (98 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD860: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = edx;
    PUSH32(esp, 0x000DD86Au); RECOMP_ABI_CALL(0x000E1F40u, sub_000E1F40); /* call 0x000E1F40 */

loc_000DD86A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx + 0x5C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    MEM32(edx + 0x50) = esi;
    MEM32(edx + 0x2C) = esi;
    MEM32(edx + 0x34) = esi;
    MEM32(edx + 0x38) = esi;
    MEM32(edx + 0x40) = esi;
    MEM32(edx + 0x3C) = esi;
    MEM32(edx + 0x44) = esi;
    MEM32(edx + 0x48) = esi;
    MEM32(edx + 0x4C) = esi;
    MEM32(edx + 4) = esi;
    ecx = 0x16;
    MEM32(edx) = 0x32C120;
    MEM32(edx + 0x30) = 0xFFFFFFFFu;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(edx + 0x60) = esi;
    POP32(esp, esi);
    MEM32(ebx) = 0x10000;
    MEM8(edx + 0x64) = 0x40;
    MEM32(edx + 0x80) = 1;
    eax = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD8D0
 * Original: 0x000DD8D0 - 0x000DD8D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD8D0(void)
{

loc_000DD8D0: ;
    MEM32(eax) = 0x32C120;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD8E0
 * Original: 0x000DD8E0 - 0x000DD912 (50 bytes, 18 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD8E0: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000DD90E; /* je: equal / zero */

loc_000DD8E6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000DD90A; /* je: equal / zero */

loc_000DD8EB: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000DD907; /* je: equal / zero */

loc_000DD8F0: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0x7A;
    ecx = 0x324878;
    PUSH32(esp, 0x000DD904u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DD904: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DD907: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000DD90A: ;
    eax = ecx + 0x24;
    esp += 4; return; /* ret */

loc_000DD90E: ;
    eax = ecx + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD920
 * Original: 0x000DD920 - 0x000DDA3C (284 bytes, 105 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD920: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD94C; /* jne: not equal / not zero */

loc_000DD92F: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0x85;
    ecx = 0x32C2E0;
    PUSH32(esp, 0x000DD943u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DD943: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DD94C: ;
    _fa = (uint32_t)(MEM32(edi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x40), ebx (32-bit) */
    ecx = MEM32(edi + 0x2C);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DD9F7; /* je: equal / zero */

loc_000DD959: ;
    edx = MEM32(edi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000DD962u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD95Fu); } /* indirect call */
    }

loc_000DD962: ;
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x38), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD9A2; /* je: equal / zero */

loc_000DD967: ;
    _fa = (uint32_t)(MEM32(edi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x4C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD986; /* je: equal / zero */

loc_000DD96C: ;
    ecx = MEM32(edi + 0x34);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000DD979u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD976u); } /* indirect call */
    }

loc_000DD979: ;
    ecx = MEM32(edi + 0x38);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000DD986u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD983u); } /* indirect call */
    }

loc_000DD986: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(edi + 0x38);
    edx = MEM32(eax + 0x68);
    esi = edi + 0x34;
    MEM32(ecx + 0x68) = edx;
    PUSH32(esp, 0x000DD99Au); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000DD99A: ;
    eax = MEM32(edi + 0x38);
    MEM32(esi) = eax;
    MEM32(edi + 0x38) = ebx;

loc_000DD9A2: ;
    eax = MEM32(edi + 0x40);
    ecx = MEM32(edi + 0x44);
    edx = MEM32(edi + 0x34);
    MEM32(edi + 0x40) = ecx;
    ecx = eax;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 4) = eax;
    MEM32(edi + 0x44) = ebx;
    esi = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DD9C1u); RECOMP_ABI_CALL(0x000DD8E0u, sub_000DD8E0); /* call 0x000DD8E0 */

loc_000DD9C1: ;
    ecx = MEM32(edi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x44); PUSH32(esp, 0x000DD9C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD9C5u); } /* indirect call */
    }

loc_000DD9C8: ;
    ecx = MEM32(edi + 0x2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000DD9D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD9CDu); } /* indirect call */
    }

loc_000DD9D0: ;
    ecx = MEM32(edi + 0x34);
    edx = MEM32(edi + 0x2C);
    eax = MEM32(ecx);
    esi = MEM32(edx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000DD9DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD9DAu); } /* indirect call */
    }

loc_000DD9DD: ;
    ecx = MEM32(edi + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi); PUSH32(esp, 0x000DD9E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD9E1u); } /* indirect call */
    }

loc_000DD9E3: ;
    MEM32(edi + 0x30) = eax;
    eax = edi;
    PUSH32(esp, 0x000DD9EDu); RECOMP_ABI_CALL(0x000DE090u, sub_000DE090); /* call 0x000DE090 */

loc_000DD9ED: ;
    POP32(esp, esi);
    MEM32(edi + 0x48) = ebx;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DD9F7: ;
    eax = MEM32(edi + 0x30);
    MEM32(edi + 0x44) = ebx;
    MEM32(edi + 0x40) = ebx;
    MEM32(edi + 0x3C) = ebx;
    MEM32(edi + 4) = ebx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000DDA0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DDA09u); } /* indirect call */
    }

loc_000DDA0C: ;
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x38), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDA28; /* je: equal / zero */

loc_000DDA11: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0xC2;
    ecx = 0x32C2B8;
    PUSH32(esp, 0x000DDA25u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DDA25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DDA28: ;
    esi = edi + 0x34;
    PUSH32(esp, 0x000DDA30u); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000DDA30: ;
    MEM32(esi) = ebx;
    POP32(esp, esi);
    MEM32(edi + 0x48) = ebx;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DDA40
 * Original: 0x000DDA40 - 0x000DDABC (124 bytes, 48 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DDA40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDAB9; /* je: equal / zero */

loc_000DDA4C: ;
    _fa = (uint32_t)(MEM32(edi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x4C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDA68; /* jne: not equal / not zero */

loc_000DDA51: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0xD2;
    ecx = 0x32C2A0;
    PUSH32(esp, 0x000DDA65u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DDA65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DDA68: ;
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(edi + 0x30);
    PUSH32(esp, esi);
    MEM32(edi + 0x4C) = ebx;
    MEM32(edi + 0x48) = ebx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000DDA7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DDA78u); } /* indirect call */
    }

loc_000DDA7B: ;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = edi + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDA8C; /* je: equal / zero */

loc_000DDA85: ;
    PUSH32(esp, 0x000DDA8Au); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000DDA8A: ;
    MEM32(esi) = ebx;

loc_000DDA8C: ;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = edi + 0x38;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDA9D; /* je: equal / zero */

loc_000DDA96: ;
    PUSH32(esp, 0x000DDA9Bu); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000DDA9B: ;
    MEM32(esi) = ebx;

loc_000DDA9D: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edi + 0x3C) = ebx;
    MEM32(edi + 0x40) = ebx;
    MEM32(edi + 0x44) = ebx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DDAB9; /* je: equal / zero */

loc_000DDAAE: ;
    ecx = MEM32(edi + 0x58);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_000DDAB9: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DDAC0
 * Original: 0x000DDAC0 - 0x000DDBB9 (249 bytes, 81 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DDAC0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDAE1; /* jne: not equal / not zero */

loc_000DDAC9: ;
    POP32(esp, edi);
    MEM32(esp + 4) = 0x32C2F0;
    eax = 0xF1;
    ecx = 0x32C2E0;
    g_seh_ebp = ebp; sub_000ED1A0(); return; /* tail jmp 0x000ED1A0 */

loc_000DDAE1: ;
    ecx = MEM32(edi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DDB92; /* je: equal / zero */

loc_000DDAED: ;
    eax = MEM32(edi + 0x3C);
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDB60; /* je: equal / zero */

loc_000DDAF8: ;
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDB60; /* jne: not equal / not zero */

loc_000DDAFF: ;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x38;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDB20; /* je: equal / zero */

loc_000DDB09: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0xF9;
    ecx = 0x32C2B8;
    PUSH32(esp, 0x000DDB1Du); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DDB1D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DDB20: ;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ebx = edi + 0x5C;
    ebp = edi + 8;
    PUSH32(esp, 0x000DDB31u); RECOMP_ABI_CALL(0x000DD8E0u, sub_000DD8E0); /* call 0x000DD8E0 */

loc_000DDB31: ;
    ecx = ebx;
    edx = ebp;
    ebx = eax;
    PUSH32(esp, 0x000DDB3Cu); RECOMP_ABI_CALL(0x000E04C0u, sub_000E04C0); /* call 0x000E04C0 */

loc_000DDB3C: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000DDB92; /* jne: not equal / not zero */

loc_000DDB47: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0xFB;
    ecx = 0x32C278;
    PUSH32(esp, 0x000DDB5Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DDB5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000DDB92;

loc_000DDB60: ;
    eax = MEM32(edi + 0x34);
    esi = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DDB6Bu); RECOMP_ABI_CALL(0x000DD8E0u, sub_000DD8E0); /* call 0x000DD8E0 */

loc_000DDB6B: ;
    ecx = MEM32(edi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x40); PUSH32(esp, 0x000DDB72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DDB6Fu); } /* indirect call */
    }

loc_000DDB72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDB92; /* jne: not equal / not zero */

loc_000DDB76: ;
    PUSH32(esp, 0x103);
    PUSH32(esp, 0x32C25C);
    edx = 0x32C264;
    ecx = 0x32C2F0;
    PUSH32(esp, 0x000DDB8Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DDB8F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DDB92: ;
    ecx = MEM32(0x64D824);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDBB3; /* je: equal / zero */

loc_000DDBA1: ;
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDBB3; /* jne: not equal / not zero */

loc_000DDBA8: ;
    eax = MEM32(edi + 0x28);
    MEM32(edi + 0x48) = esi;
    PUSH32(esp, 0x000DDBB3u); RECOMP_ABI_CALL(0x000D9110u, sub_000D9110); /* call 0x000D9110 */

loc_000DDBB3: ;
    MEM32(edi + 0x48) = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DDBC0
 * Original: 0x000DDBC0 - 0x000DDBF2 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DDBC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDBDF; /* jne: not equal / not zero */

loc_000DDBC8: ;
    MEM32(esp + 4) = 0x32C2F0;
    eax = 0x116;
    ecx = 0x32C2E0;
    g_seh_ebp = ebp; sub_000ED1A0(); return; /* tail jmp 0x000ED1A0 */

loc_000DDBDF: ;
    ecx = MEM32(0x64D820);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDBF1; /* je: equal / zero */

loc_000DDBE9: ;
    eax = MEM32(eax + 0x28);
    g_seh_ebp = ebp; sub_000D9110(); return; /* tail jmp 0x000D9110 */

loc_000DDBF1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DDC00
 * Original: 0x000DDC00 - 0x000DDC04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDC00(void)
{

loc_000DDC00: ;
    MEM32(eax + 0x28) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000DDC10
 * Original: 0x000DDC10 - 0x000DDC16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDC10(void)
{

loc_000DDC10: ;
    MEM32(0x64D820) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000DDC20
 * Original: 0x000DDC20 - 0x000DDC26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDC20(void)
{

loc_000DDC20: ;
    MEM32(0x64D824) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000DDC30
 * Original: 0x000DDC30 - 0x000DDDDC (428 bytes, 143 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DDC30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(edi + 0x3C);
    if (CMP_EQ(_fa, _fb)) goto loc_000DDD22; /* je: equal / zero */

loc_000DDC48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDC63; /* jne: not equal / not zero */

loc_000DDC4C: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0x137;
    ecx = 0x32C250;
    PUSH32(esp, 0x000DDC60u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DDC60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DDC63: ;
    eax = MEM32(edi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDC79; /* je: equal / zero */

loc_000DDC6A: ;
    MEM32(edi + 0x44) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000DDC79: ;
    eax = MEM32(edi + 0x3C);
    MEM32(edi + 0x40) = ebp;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDCDE; /* je: equal / zero */

loc_000DDC87: ;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x38;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDCA8; /* je: equal / zero */

loc_000DDC91: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0x141;
    ecx = 0x32C234;
    PUSH32(esp, 0x000DDCA5u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DDCA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DDCA8: ;
    ecx = MEM32(edi + 0x40);
    ebx = edi + 0x5C;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DDCB7u); RECOMP_ABI_CALL(0x000DD8E0u, sub_000DD8E0); /* call 0x000DD8E0 */

loc_000DDCB7: ;
    ecx = ebx;
    edx = edi;
    ebx = eax;
    PUSH32(esp, 0x000DDCC2u); RECOMP_ABI_CALL(0x000E04C0u, sub_000E04C0); /* call 0x000E04C0 */

loc_000DDCC2: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDDD0; /* jne: not equal / not zero */

loc_000DDCCF: ;
    eax = 0x143;
    ecx = 0x32C218;
    goto loc_000DDDC3;

loc_000DDCDE: ;
    edx = MEM32(edi + 0x34);
    esi = MEM32(edx);
    PUSH32(esp, ebp);
    ecx = ebp;
    PUSH32(esp, 0x000DDCEBu); RECOMP_ABI_CALL(0x000DD8E0u, sub_000DD8E0); /* call 0x000DD8E0 */

loc_000DDCEB: ;
    ecx = MEM32(edi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x40); PUSH32(esp, 0x000DDCF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DDCEFu); } /* indirect call */
    }

loc_000DDCF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDDD0; /* jne: not equal / not zero */

loc_000DDCFA: ;
    PUSH32(esp, 0x14B);
    PUSH32(esp, 0x32C25C);
    edx = 0x32C264;
    ecx = 0x32C2F0;
    PUSH32(esp, 0x000DDD13u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DDD13: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000DDD22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDD43; /* je: equal / zero */

loc_000DDD26: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x40) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDDD0; /* je: equal / zero */

loc_000DDD34: ;
    eax = 0x155;
    ecx = 0x32C204;
    goto loc_000DDDC3;

loc_000DDD43: ;
    PUSH32(esp, ebp);
    ecx = ebp;
    esi = edi + 0x5C;
    ebx = edi + 8;
    PUSH32(esp, 0x000DDD51u); RECOMP_ABI_CALL(0x000DD8E0u, sub_000DD8E0); /* call 0x000DD8E0 */

loc_000DDD51: ;
    ecx = esi;
    edx = ebx;
    ebx = eax;
    esi = edi + 0x34;
    PUSH32(esp, 0x000DDD5Fu); RECOMP_ABI_CALL(0x000E04C0u, sub_000E04C0); /* call 0x000E04C0 */

loc_000DDD5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDD85; /* jne: not equal / not zero */

loc_000DDD66: ;
    ecx = MEM32(esi);
    eax = MEM32(edi + 0x2C);
    edx = MEM32(ecx);
    ebx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000DDD72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DDD6Fu); } /* indirect call */
    }

loc_000DDD72: ;
    ecx = MEM32(edi + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x000DDD78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DDD76u); } /* indirect call */
    }

loc_000DDD78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(edi + 0x30) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000DDD8E; /* jne: not equal / not zero */

loc_000DDD80: ;
    PUSH32(esp, 0x000DDD85u); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000DDD85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000DDD8E: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x3C) = ebp;
    MEM32(edi + 4) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDDB2; /* je: equal / zero */

loc_000DDD9B: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0x164;
    ecx = 0x32C204;
    PUSH32(esp, 0x000DDDAFu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DDDAF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DDDB2: ;
    eax = MEM32(edi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDDD0; /* je: equal / zero */

loc_000DDDB9: ;
    eax = 0x165;
    ecx = 0x32C1F0;

loc_000DDDC3: ;
    PUSH32(esp, 0x32C2F0);
    PUSH32(esp, 0x000DDDCDu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DDDCD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DDDD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DDDE0
 * Original: 0x000DDDE0 - 0x000DDEA2 (194 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DDDE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = edi + 8;
    ebp = edi + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000DDDF0u); RECOMP_ABI_CALL(0x000E2000u, sub_000E2000); /* call 0x000E2000 */

loc_000DDDF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDE67; /* jne: not equal / not zero */

loc_000DDDF7: ;
    eax = MEM32(ebp);
    edx = edi;
    ecx = 0xDDAC0;
    PUSH32(esp, 0x000DDE06u); RECOMP_ABI_CALL(0x000E21D0u, sub_000E21D0); /* call 0x000E21D0 */

loc_000DDE06: ;
    eax = MEM32(ebp);
    ecx = 0xDD920;
    PUSH32(esp, 0x000DDE13u); RECOMP_ABI_CALL(0x000E21B0u, sub_000E21B0); /* call 0x000E21B0 */

loc_000DDE13: ;
    eax = MEM32(ebp);
    ecx = 0xDDA40;
    PUSH32(esp, 0x000DDE20u); RECOMP_ABI_CALL(0x000E21C0u, sub_000E21C0); /* call 0x000E21C0 */

loc_000DDE20: ;
    eax = MEM32(ebp);
    ecx = 0xDDBC0;
    PUSH32(esp, 0x000DDE2Du); RECOMP_ABI_CALL(0x000E21E0u, sub_000E21E0); /* call 0x000E21E0 */

loc_000DDE2D: ;
    ecx = MEM32(edi + 0x3C);
    PUSH32(esp, ecx);
    esi = edi + 0x34;
    PUSH32(esp, 0x000DDE39u); RECOMP_ABI_CALL(0x000DD8E0u, sub_000DD8E0); /* call 0x000DD8E0 */

loc_000DDE39: ;
    ecx = MEM32(esp + 0x14);
    edx = ebx;
    ebx = eax;
    PUSH32(esp, 0x000DDE46u); RECOMP_ABI_CALL(0x000E04C0u, sub_000E04C0); /* call 0x000E04C0 */

loc_000DDE46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDE67; /* jne: not equal / not zero */

loc_000DDE4D: ;
    ecx = MEM32(esi);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    ebx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000DDE59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DDE56u); } /* indirect call */
    }

loc_000DDE59: ;
    ecx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x000DDE5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DDE5Du); } /* indirect call */
    }

loc_000DDE5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(edi + 0x30) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000DDE8B; /* jne: not equal / not zero */

loc_000DDE67: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDE74; /* je: equal / zero */

loc_000DDE6D: ;
    esi = ebp;
    PUSH32(esp, 0x000DDE74u); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000DDE74: ;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDE83; /* je: equal / zero */

loc_000DDE7E: ;
    PUSH32(esp, 0x000DDE83u); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000DDE83: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000DDE8B: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000DDE97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DDE94u); } /* indirect call */
    }

loc_000DDE97: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DDEB0
 * Original: 0x000DDEB0 - 0x000DDEE0 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DDEB0: ;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = edi + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDEC0; /* je: equal / zero */

loc_000DDEBB: ;
    PUSH32(esp, 0x000DDEC0u); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000DDEC0: ;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x38;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDECF; /* je: equal / zero */

loc_000DDECA: ;
    PUSH32(esp, 0x000DDECFu); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000DDECF: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x2C;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDEDE; /* je: equal / zero */

loc_000DDED9: ;
    PUSH32(esp, 0x000DDEDEu); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000DDEDE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DDEC8
 * Original: 0x000DDEC8 - 0x000DDEE0 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDEC8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DDEC8: ;
    if (_flags /* je: equal / zero */) goto loc_000DDECF;

loc_000DDECA: ;
    PUSH32(esp, 0x000DDECFu); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000DDECF: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x2C;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDEDE; /* je: equal / zero */

loc_000DDED9: ;
    PUSH32(esp, 0x000DDEDEu); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000DDEDE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DDED2
 * Original: 0x000DDED2 - 0x000DDEE0 (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDED2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DDED2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x2C;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDEDE; /* je: equal / zero */

loc_000DDED9: ;
    PUSH32(esp, 0x000DDEDEu); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000DDEDE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DDEE0
 * Original: 0x000DDEE0 - 0x000DDF0A (42 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DDEE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDF01; /* jne: not equal / not zero */

loc_000DDEEA: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0x19A;
    ecx = 0x32C1E0;
    PUSH32(esp, 0x000DDEFEu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DDEFE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DDF01: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_000DDF10
 * Original: 0x000DDF10 - 0x000DDF3A (42 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DDF10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDF31; /* jne: not equal / not zero */

loc_000DDF1A: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0x1A1;
    ecx = 0x32C1D0;
    PUSH32(esp, 0x000DDF2Eu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DDF2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DDF31: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_000DDF40
 * Original: 0x000DDF40 - 0x000DDF65 (37 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DDF40: ;
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDF4E; /* je: equal / zero */

loc_000DDF47: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

loc_000DDF4E: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0;
    MEM32(ecx) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000DDF70
 * Original: 0x000DDF70 - 0x000DDFF9 (137 bytes, 47 insns)
 * Category: game_vehicle
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DDF70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFA00000u (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDF99; /* je: equal / zero */

loc_000DDF82: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0x1B5;
    ecx = 0x32C1B0;
    PUSH32(esp, 0x000DDF96u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DDF96: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DDF99: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDFB7; /* jne: not equal / not zero */

loc_000DDFA0: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0x1B6;
    ecx = 0x32C1E0;
    PUSH32(esp, 0x000DDFB4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DDFB4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DDFB7: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    MEM32(esi + 0x58) = ecx;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x4C) = 1;
    MEM32(esi + 0x54) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDFE7; /* je: equal / zero */

loc_000DDFDB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000DDFE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DDFE4u); } /* indirect call */
    }

loc_000DDFE7: ;
    esi = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0x000DDFF2u); RECOMP_ABI_CALL(0x000E21F0u, sub_000E21F0); /* call 0x000E21F0 */

loc_000DDFF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000DE000
 * Original: 0x000DE000 - 0x000DE018 (24 bytes, 6 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE000(void)
{

loc_000DE000: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0x1C6;
    ecx = 0x324878;
    PUSH32(esp, 0x000DE014u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DE014: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DE020
 * Original: 0x000DE020 - 0x000DE03F (31 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DE020: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE031; /* je: equal / zero */

loc_000DE02A: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000DE031u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE02Eu); } /* indirect call */
    }

loc_000DE031: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DE03E; /* je: equal / zero */

loc_000DE039: ;
    g_seh_ebp = ebp; sub_000DA270(); return; /* tail jmp 0x000DA270 */

loc_000DE03E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DE040
 * Original: 0x000DE040 - 0x000DE05F (31 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DE040: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE051; /* je: equal / zero */

loc_000DE04A: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000DE051u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE04Eu); } /* indirect call */
    }

loc_000DE051: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DE05E; /* je: equal / zero */

loc_000DE059: ;
    g_seh_ebp = ebp; sub_000DA280(); return; /* tail jmp 0x000DA280 */

loc_000DE05E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DE060
 * Original: 0x000DE060 - 0x000DE081 (33 bytes, 10 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DE060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE060: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE080; /* jne: not equal / not zero */

loc_000DE067: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0x1E0;
    ecx = 0x324878;
    PUSH32(esp, 0x000DE07Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DE07B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000DE080: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DE090
 * Original: 0x000DE090 - 0x000DE0A1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE090: ;
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE0A0; /* je: equal / zero */

loc_000DE097: ;
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000DE0A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE09Du); } /* indirect call */
    }

loc_000DE0A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DE0B0
 * Original: 0x000DE0B0 - 0x000DE0F3 (67 bytes, 23 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE0B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000DE0D8; /* jne: not equal / not zero */

loc_000DE0BC: ;
    PUSH32(esp, 0x1EE);
    PUSH32(esp, 0x32C160);
    edx = 0x32C174;
    ecx = 0x32C2F0;
    PUSH32(esp, 0x000DE0D5u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE0D5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE0D8: ;
    PUSH32(esp, 0x58);
    eax = esi + 0x5C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DE0E4u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000DE0E4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x000DE0EEu); RECOMP_ABI_CALL(0x000DE090u, sub_000DE090); /* call 0x000DE090 */

loc_000DE0EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DE0E4
 * Original: 0x000DE0E4 - 0x000DE0F3 (15 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE0E4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE0E4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x000DE0EEu); RECOMP_ABI_CALL(0x000DE090u, sub_000DE090); /* call 0x000DE090 */

loc_000DE0EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DE100
 * Original: 0x000DE100 - 0x000DE14F (79 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DE100: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_000DE12D; /* je: equal / zero */

loc_000DE119: ;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x000DE12Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE12Au); } /* indirect call */
    }

loc_000DE12D: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE148; /* je: equal / zero */

loc_000DE134: ;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x000DE148u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE145u); } /* indirect call */
    }

loc_000DE148: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000DE150
 * Original: 0x000DE150 - 0x000DE19F (79 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DE150: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_000DE17D; /* je: equal / zero */

loc_000DE169: ;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000DE17Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE17Au); } /* indirect call */
    }

loc_000DE17D: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE198; /* je: equal / zero */

loc_000DE184: ;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000DE198u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE195u); } /* indirect call */
    }

loc_000DE198: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000DE1A0
 * Original: 0x000DE1A0 - 0x000DE1B8 (24 bytes, 6 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE1A0(void)
{

loc_000DE1A0: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0x205;
    ecx = 0x324878;
    PUSH32(esp, 0x000DE1B4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DE1B4: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DE1C0
 * Original: 0x000DE1C0 - 0x000DE1D8 (24 bytes, 6 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE1C0(void)
{

loc_000DE1C0: ;
    PUSH32(esp, 0x32C2F0);
    eax = 0x20B;
    ecx = 0x324878;
    PUSH32(esp, 0x000DE1D4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DE1D4: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DE1E0
 * Original: 0x000DE1E0 - 0x000DE1FD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE1E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE1E0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000DE200
 * Original: 0x000DE200 - 0x000DE214 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE200: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE213; /* je: equal / zero */

loc_000DE207: ;
    PUSH32(esp, 0x000DE20Cu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000DE20C: ;
    MEM32(esi + 0x1C) = 0;

loc_000DE213: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DE220
 * Original: 0x000DE220 - 0x000DE239 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE220(void)
{

loc_000DE220: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edi = 1;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x000DE236u); RECOMP_ABI_CALL(0x000DE240u, sub_000DE240); /* call 0x000DE240 */

loc_000DE236: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE240
 * Original: 0x000DE240 - 0x000DE391 (337 bytes, 98 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DE240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE240: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE25E; /* je: equal / zero */

loc_000DE245: ;
    PUSH32(esp, 0x6E);
    PUSH32(esp, 0x32C998);
    edx = 0x32C9E0;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE25Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE25B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE25E: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE27F; /* jne: not equal / not zero */

loc_000DE266: ;
    PUSH32(esp, 0x6F);
    PUSH32(esp, 0x32C95C);
    edx = 0x32C96C;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE27Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE27C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE27F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE29E; /* jne: not equal / not zero */

loc_000DE283: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x32C8FC);
    edx = 0x32C918;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE299u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE299: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000DE2A3;

loc_000DE29E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE2C8; /* je: equal / zero */

loc_000DE2A3: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE2AF; /* je: equal / zero */

loc_000DE2AA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000DE2C8; /* jae: above or equal (unsigned >=) */

loc_000DE2AF: ;
    PUSH32(esp, 0x71);
    PUSH32(esp, 0x32C830);
    edx = 0x32C890;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE2C5u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE2C5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE2C8: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE373; /* je: equal / zero */

loc_000DE2D1: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE373; /* je: equal / zero */

loc_000DE2DC: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE373; /* je: equal / zero */

loc_000DE2E7: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE373; /* je: equal / zero */

loc_000DE2F2: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE373; /* je: equal / zero */

loc_000DE2F9: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE373; /* je: equal / zero */

loc_000DE300: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE373; /* je: equal / zero */

loc_000DE307: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE321; /* je: equal / zero */

loc_000DE30E: ;
    PUSH32(esp, 0x000DE313u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000DE313: ;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 0x20) = 0;

loc_000DE321: ;
    eax = edi * 8;
    PUSH32(esp, 0x000DE32Du); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000DE32D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000DE340; /* jne: not equal / not zero */

loc_000DE334: ;
    PUSH32(esp, 0x8F);
    edx = 0x32C7D0;
    goto loc_000DE37A;

loc_000DE340: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000DE358; /* jbe: below or equal (unsigned <=) */

loc_000DE346: ;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + eax * 4);
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx + eax * 8) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DE346; /* jb: below (unsigned <) */

loc_000DE358: ;
    eax = MEM32(esp + 4);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x20) = edi;
    MEM32(esi) = 1;
    MEM32(esi + 0x18) = ebx;
    eax = 1;
    esp += 12; return; /* ret 8 */

loc_000DE373: ;
    PUSH32(esp, 0x7F);
    edx = 0x32C804;

loc_000DE37A: ;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x324878);
    PUSH32(esp, 0x000DE389u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE389: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000DE3A0
 * Original: 0x000DE3A0 - 0x000DE4D8 (312 bytes, 88 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DE3A0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_000DE3C6; /* jne: not equal / not zero */

loc_000DE3AA: ;
    PUSH32(esp, 0xBD);
    PUSH32(esp, 0x32C780);
    edx = 0x32C790;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE3C3u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE3C3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE3C6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE3E6; /* jne: not equal / not zero */

loc_000DE3CA: ;
    PUSH32(esp, 0xBE);
    PUSH32(esp, 0x32C95C);
    edx = 0x32C748;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE3E3u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE3E3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE3E6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE408; /* jne: not equal / not zero */

loc_000DE3EA: ;
    PUSH32(esp, 0xBF);
    PUSH32(esp, 0x32C8FC);
    edx = 0x32C6F8;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE403u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE403: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000DE40D;

loc_000DE408: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE438; /* je: equal / zero */

loc_000DE40D: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE41C; /* je: equal / zero */

loc_000DE417: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000DE438; /* jae: above or equal (unsigned >=) */

loc_000DE41C: ;
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x32C610);
    edx = 0x32C678;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE435u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE435: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE438: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DE461; /* jle: less or equal (signed <=) */

loc_000DE43F: ;
    PUSH32(esp, 0xC4);
    PUSH32(esp, 0x324878);
    edx = 0x32C5C0;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE458u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE458: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000DE461: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE47B; /* je: equal / zero */

loc_000DE468: ;
    PUSH32(esp, 0x000DE46Du); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000DE46D: ;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 0x20) = 0;

loc_000DE47B: ;
    eax = edi * 8;
    PUSH32(esp, 0x000DE487u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000DE487: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000DE4B0; /* jne: not equal / not zero */

loc_000DE48E: ;
    PUSH32(esp, 0xD4);
    PUSH32(esp, 0x324878);
    edx = 0x32C7D0;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE4A7u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE4A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000DE4B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000DE4C5; /* jbe: below or equal (unsigned <=) */

loc_000DE4B6: ;
    edx = MEM32(ebp + eax * 4);
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx + eax * 8) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DE4B6; /* jb: below (unsigned <) */

loc_000DE4C5: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x20) = edi;
    eax = 1;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000DE4E0
 * Original: 0x000DE4E0 - 0x000DE684 (420 bytes, 136 insns)
 * Category: game_vehicle
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DE4E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE50C; /* jne: not equal / not zero */

loc_000DE4F0: ;
    PUSH32(esp, 0xF6);
    PUSH32(esp, 0x32C780);
    edx = 0x32C59C;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE509u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE509: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE50C: ;
    eax = 0x88;
    PUSH32(esp, 0x000DE516u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000DE516: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE541; /* jne: not equal / not zero */

loc_000DE51C: ;
    PUSH32(esp, 0xFE);
    PUSH32(esp, 0x324878);
    edx = 0x32C56C;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE535u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE535: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_000DE541: ;
    MEM32(ebx + 0x80) = esi;
    MEM32(ebx + 0x84) = esi;
    MEM32(ebx + 0x7C) = esi;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ebp + 4;
    MEM32(ebx + 0x80) = eax;
    MEM32(ebx + 0x84) = edi;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE56B; /* jne: not equal / not zero */

loc_000DE567: ;
    MEM32(edi) = ebx;
    goto loc_000DE571;

loc_000DE56B: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0x7C) = ebx;

loc_000DE571: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, edx);
    MEM32(ebx + 4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000DE58Cu); RECOMP_ABI_CALL(0x000DB0E0u, sub_000DB0E0); /* call 0x000DB0E0 */

loc_000DE58C: ;
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    PUSH32(esp, 0x000DE59Au); RECOMP_ABI_CALL(0x000D7D80u, sub_000D7D80); /* call 0x000D7D80 */

loc_000DE59A: ;
    MEM32(ebx + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x10000000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DE5C9; /* jl: less (signed <) */

loc_000DE5A6: ;
    eax = MEM32(edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE5C2; /* je: equal / zero */

loc_000DE5AE: ;
    edx = 0xF8000000u;

loc_000DE5B3: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_000DE5BB; /* jns: not sign (positive) */

loc_000DE5B8: ;
    MEM32(eax + 0x10) = ecx;

loc_000DE5BB: ;
    eax = MEM32(eax + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE5B3; /* jne: not equal / not zero */

loc_000DE5C2: ;
    MEM32(ebp + 0x10) = 0x8000000;

loc_000DE5C9: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x1C);
    MEM32(ebx + 0x10) = eax;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0x18);
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 0x14) = edx;
    edi = ebx + 0x18;
    ecx = 0x16;
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
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x74) = esi;
    MEM32(ebx + 0x78) = esi;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE604; /* jne: not equal / not zero */

loc_000DE600: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000DE60E;

loc_000DE604: ;
    ecx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000DE60Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000DE609u); } /* indirect call */
    }

loc_000DE60B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE60E: ;
    MEM32(ebx + 0x70) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DE632; /* jb: below (unsigned <) */

loc_000DE616: ;
    PUSH32(esp, 0x11C);
    PUSH32(esp, 0x32C514);
    edx = 0x32C540;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE62Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE62F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE632: ;
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0x000DE63Au); RECOMP_ABI_CALL(0x000DEB70u, sub_000DEB70); /* call 0x000DEB70 */

loc_000DE63A: ;
    edi = ebp;
    PUSH32(esp, 0x000DE641u); RECOMP_ABI_CALL(0x000DED60u, sub_000DED60); /* call 0x000DED60 */

loc_000DE641: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE663; /* jne: not equal / not zero */

loc_000DE647: ;
    edx = MEM32(ebx + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DE650u); RECOMP_ABI_CALL(0x000DB080u, sub_000DB080); /* call 0x000DB080 */

loc_000DE650: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE663; /* jne: not equal / not zero */

loc_000DE657: ;
    _fa = (uint32_t)(MEM32(ebx + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x78), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE673; /* jne: not equal / not zero */

loc_000DE65C: ;
    MEM32(ebx + 0x78) = 1;

loc_000DE663: ;
    edi = ebp;
    PUSH32(esp, 0x000DE66Au); RECOMP_ABI_CALL(0x000DE940u, sub_000DE940); /* call 0x000DE940 */

loc_000DE66A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_000DE673: ;
    esi = ebx;
    PUSH32(esp, 0x000DE67Au); RECOMP_ABI_CALL(0x000DEA30u, sub_000DEA30); /* call 0x000DEA30 */

loc_000DE67A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000DE690
 * Original: 0x000DE690 - 0x000DE775 (229 bytes, 79 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DE690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE690: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE6BB; /* jne: not equal / not zero */

loc_000DE69F: ;
    PUSH32(esp, 0x14D);
    PUSH32(esp, 0x32C780);
    edx = 0x32C59C;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE6B8u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE6B8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE6BB: ;
    eax = MEM32(ebx + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE6ED; /* je: equal / zero */

loc_000DE6C2: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE6DF; /* je: equal / zero */

loc_000DE6C8: ;
    PUSH32(esp, 0x32C9A8);
    eax = 0x153;
    ecx = 0x32C4F0;
    PUSH32(esp, 0x000DE6DCu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DE6DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE6DF: ;
    esi = ebx;
    PUSH32(esp, 0x000DE6E6u); RECOMP_ABI_CALL(0x000DEA30u, sub_000DEA30); /* call 0x000DEA30 */

loc_000DE6E6: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000DE6ED: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000DE723; /* jne: not equal / not zero */

loc_000DE6F6: ;
    edi = ebx + 0x18;
    ecx = 0x16;
    esi = ebp;
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
    esi = ebp;
    PUSH32(esp, 0x000DE709u); RECOMP_ABI_CALL(0x000D7D80u, sub_000D7D80); /* call 0x000D7D80 */

loc_000DE709: ;
    MEM32(ebx + 8) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0x000DE718u); RECOMP_ABI_CALL(0x000DEB70u, sub_000DEB70); /* call 0x000DEB70 */

loc_000DE718: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000DE723: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x000DE72Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000DE728u); } /* indirect call */
    }

loc_000DE72B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE748; /* jne: not equal / not zero */

loc_000DE732: ;
    esi = ebx;
    MEM32(ebx + 4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000DE740u); RECOMP_ABI_CALL(0x000DEA30u, sub_000DEA30); /* call 0x000DEA30 */

loc_000DE740: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000DE748: ;
    edi = ebx + 0x18;
    ecx = 0x16;
    esi = ebp;
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
    esi = ebp;
    PUSH32(esp, 0x000DE75Bu); RECOMP_ABI_CALL(0x000D7D80u, sub_000D7D80); /* call 0x000D7D80 */

loc_000DE75B: ;
    edx = MEM32(esp + 0x10);
    MEM32(ebx + 8) = eax;
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0x000DE76Au); RECOMP_ABI_CALL(0x000DEB70u, sub_000DEB70); /* call 0x000DEB70 */

loc_000DE76A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000DE780
 * Original: 0x000DE780 - 0x000DE7FE (126 bytes, 41 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE780: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE7A4; /* jne: not equal / not zero */

loc_000DE788: ;
    PUSH32(esp, 0x187);
    PUSH32(esp, 0x32C780);
    edx = 0x32C59C;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE7A1u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE7A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE7A4: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE7D1; /* je: equal / zero */

loc_000DE7AB: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE7C8; /* je: equal / zero */

loc_000DE7B1: ;
    PUSH32(esp, 0x32C9A8);
    eax = 0x18D;
    ecx = 0x32C4F0;
    PUSH32(esp, 0x000DE7C5u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DE7C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE7C8: ;
    PUSH32(esp, 0x000DE7CDu); RECOMP_ABI_CALL(0x000DEA30u, sub_000DEA30); /* call 0x000DEA30 */

loc_000DE7CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DE7D1: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE7F7; /* je: equal / zero */

loc_000DE7D9: ;
    ecx = MEM32(edi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x000DE7E0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000DE7DDu); } /* indirect call */
    }

loc_000DE7E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE7F7; /* jne: not equal / not zero */

loc_000DE7E7: ;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000DE7F3u); RECOMP_ABI_CALL(0x000DEA30u, sub_000DEA30); /* call 0x000DEA30 */

loc_000DE7F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DE7F7: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE800
 * Original: 0x000DE800 - 0x000DE840 (64 bytes, 21 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE800: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE827; /* jne: not equal / not zero */

loc_000DE80B: ;
    PUSH32(esp, 0x1B6);
    PUSH32(esp, 0x32C780);
    edx = 0x32C59C;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE824u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE824: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE827: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE833; /* je: equal / zero */

loc_000DE82D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DE833u); RECOMP_ABI_CALL(0x000DEB30u, sub_000DEB30); /* call 0x000DEB30 */

loc_000DE833: ;
    PUSH32(esp, 0x000DE838u); RECOMP_ABI_CALL(0x000DEA30u, sub_000DEA30); /* call 0x000DEA30 */

loc_000DE838: ;
    PUSH32(esp, 0x000DE83Du); RECOMP_ABI_CALL(0x000DE940u, sub_000DE940); /* call 0x000DE940 */

loc_000DE83D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE840
 * Original: 0x000DE840 - 0x000DE879 (57 bytes, 17 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE840: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE861; /* jne: not equal / not zero */

loc_000DE845: ;
    PUSH32(esp, 0x1D1);
    PUSH32(esp, 0x32C780);
    edx = 0x32C59C;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE85Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE85E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE861: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x74) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000DE878; /* je: equal / zero */

loc_000DE870: ;
    ecx = MEM32(edi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x000DE877u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE874u); } /* indirect call */
    }

loc_000DE877: ;
    POP32(esp, ecx);

loc_000DE878: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DE880
 * Original: 0x000DE880 - 0x000DE8B9 (57 bytes, 17 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE880: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE8A1; /* jne: not equal / not zero */

loc_000DE885: ;
    PUSH32(esp, 0x1E9);
    PUSH32(esp, 0x32C780);
    edx = 0x32C59C;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE89Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE89E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE8A1: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x74) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000DE8B8; /* je: equal / zero */

loc_000DE8B0: ;
    ecx = MEM32(edi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x000DE8B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE8B4u); } /* indirect call */
    }

loc_000DE8B7: ;
    POP32(esp, ecx);

loc_000DE8B8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DE8C0
 * Original: 0x000DE8C0 - 0x000DE902 (66 bytes, 19 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE8C0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE8E1; /* jne: not equal / not zero */

loc_000DE8C5: ;
    PUSH32(esp, 0x201);
    PUSH32(esp, 0x32C780);
    edx = 0x32C59C;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE8DEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE8DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE8E1: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE8FA; /* je: equal / zero */

loc_000DE8ED: ;
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x000DE8F4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000DE8F1u); } /* indirect call */
    }

loc_000DE8F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000DE8FA: ;
    eax = 0xFFFF0000u;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DE910
 * Original: 0x000DE910 - 0x000DE940 (48 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE910: ;
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE934; /* jne: not equal / not zero */

loc_000DE918: ;
    PUSH32(esp, 0x218);
    PUSH32(esp, 0x32C780);
    edx = 0x32C59C;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE931u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE931: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE934: ;
    PUSH32(esp, 0x000DE939u); RECOMP_ABI_CALL(0x000DED60u, sub_000DED60); /* call 0x000DED60 */

loc_000DE939: ;
    PUSH32(esp, 0x000DE93Eu); RECOMP_ABI_CALL(0x000DE940u, sub_000DE940); /* call 0x000DE940 */

loc_000DE93E: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE940
 * Original: 0x000DE940 - 0x000DEA2A (234 bytes, 79 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DE940: ;
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_000DE95F; /* jbe: below or equal (unsigned <=) */

loc_000DE950: ;
    ecx = MEM32(edi + 0x1C);
    MEM32(ecx + eax * 8 + 4) = ebx;
    ecx = MEM32(edi + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DE950; /* jb: below (unsigned <) */

loc_000DE95F: ;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE9A9; /* je: equal / zero */

loc_000DE966: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DE987; /* jl: less (signed <) */

loc_000DE96B: ;
    PUSH32(esp, 0x260);
    PUSH32(esp, 0x32C488);
    edx = 0x32C4D0;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE984u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE984: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE987: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE9A1; /* je: equal / zero */

loc_000DE98D: ;
    edx = MEM32(esi + 0x70);
    ecx = MEM32(edi + 0x1C);
    eax = MEM32(esi);
    ecx = ecx + edx * 8 + 4;
    edx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;

loc_000DE9A1: ;
    esi = MEM32(esi + 0x7C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE966; /* jne: not equal / not zero */

loc_000DE9A9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE9CA; /* je: equal / zero */

loc_000DE9AE: ;
    PUSH32(esp, 0x269);
    PUSH32(esp, 0x32C440);
    edx = 0x32C4D0;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE9C7u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE9C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE9CA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 0x14) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000DE9EB; /* jbe: below or equal (unsigned <=) */

loc_000DE9CF: ;
    PUSH32(esp, 0x26A);
    PUSH32(esp, 0x32C414);
    edx = 0x32C4D0;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DE9E8u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DE9E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE9EB: ;
    eax = MEM32(edi + 0x20);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000DEA26; /* jbe: below or equal (unsigned <=) */

loc_000DE9F4: ;
    edx = MEM32(edi + 0x1C);
    ecx = MEM32(edx + esi * 8 + 4);
    eax = edx + esi * 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000DEA1E; /* jbe: below or equal (unsigned <=) */

loc_000DEA02: ;
    PUSH32(esp, 0x26F);
    PUSH32(esp, 0x32C390);
    edx = 0x32C3E4;
    ecx = 0x32C9A8;
    PUSH32(esp, 0x000DEA1Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DEA1B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DEA1E: ;
    eax = MEM32(edi + 0x20);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DE9F4; /* jb: below (unsigned <) */

loc_000DEA26: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DEA30
 * Original: 0x000DEA30 - 0x000DEAB8 (136 bytes, 37 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DEA30: ;
    eax = MEM32(esi + 0x7C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEA45; /* je: equal / zero */

loc_000DEA39: ;
    edx = MEM32(esi + 0x80);
    MEM32(eax + 0x80) = edx;

loc_000DEA45: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEA55; /* je: equal / zero */

loc_000DEA4F: ;
    edx = MEM32(esi + 0x7C);
    MEM32(eax + 0x7C) = edx;

loc_000DEA55: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEA85; /* je: equal / zero */

loc_000DEA5F: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEA71; /* jne: not equal / not zero */

loc_000DEA6C: ;
    edx = MEM32(esi + 0x7C);
    MEM32(eax) = edx;

loc_000DEA71: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEA85; /* jne: not equal / not zero */

loc_000DEA7C: ;
    edx = MEM32(esi + 0x80);
    MEM32(eax + 4) = edx;

loc_000DEA85: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x7C) = ecx;
    MEM32(esi + 0x80) = ecx;
    MEM32(esi + 0x84) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000DEAB1; /* je: equal / zero */

loc_000DEA9A: ;
    PUSH32(esp, 0x32C9A8);
    eax = 0x284;
    ecx = 0x32C4F0;
    PUSH32(esp, 0x000DEAAEu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DEAAE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DEAB1: ;
    eax = esi;
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

}

/**
 * sub_000DEAC0
 * Original: 0x000DEAC0 - 0x000DEB25 (101 bytes, 30 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DEAC0: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEADE; /* je: equal / zero */

loc_000DEAC7: ;
    PUSH32(esp, 0x32C9A8);
    eax = 0x297;
    ecx = 0x32C380;
    PUSH32(esp, 0x000DEADBu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DEADB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DEADE: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEAFB; /* je: equal / zero */

loc_000DEAE4: ;
    PUSH32(esp, 0x32C9A8);
    eax = 0x298;
    ecx = 0x32C35C;
    PUSH32(esp, 0x000DEAF8u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DEAF8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DEAFB: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx); PUSH32(esp, 0x000DEB10u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000DEB0Eu); } /* indirect call */
    }

loc_000DEB10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000DEB22; /* jne: not equal / not zero */

loc_000DEB1B: ;
    MEM32(esi + 0x78) = 1;

loc_000DEB22: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DEB30
 * Original: 0x000DEB30 - 0x000DEB68 (56 bytes, 15 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DEB30: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEB4D; /* jne: not equal / not zero */

loc_000DEB36: ;
    PUSH32(esp, 0x32C9A8);
    eax = 0x2B1;
    ecx = 0x32C338;
    PUSH32(esp, 0x000DEB4Au); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DEB4A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DEB4D: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esi + 4);
    ecx = MEM32(eax + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x000DEB5Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000DEB58u); } /* indirect call */
    }

loc_000DEB5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DEB70
 * Original: 0x000DEB70 - 0x000DED54 (484 bytes, 152 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DEB70: ;
    ecx = MEM32(eax + 0x7C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DEB89; /* je: equal / zero */

loc_000DEB7D: ;
    edx = MEM32(eax + 0x80);
    MEM32(ecx + 0x80) = edx;

loc_000DEB89: ;
    ecx = MEM32(eax + 0x80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEB99; /* je: equal / zero */

loc_000DEB93: ;
    edx = MEM32(eax + 0x7C);
    MEM32(ecx + 0x7C) = edx;

loc_000DEB99: ;
    ecx = MEM32(eax + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEBC9; /* je: equal / zero */

loc_000DEBA3: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x84);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEBB5; /* jne: not equal / not zero */

loc_000DEBB0: ;
    edx = MEM32(eax + 0x7C);
    MEM32(ecx) = edx;

loc_000DEBB5: ;
    ecx = MEM32(eax + 0x84);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEBC9; /* jne: not equal / not zero */

loc_000DEBC0: ;
    edx = MEM32(eax + 0x80);
    MEM32(ecx + 4) = edx;

loc_000DEBC9: ;
    esi = MEM32(esp + 0x14);
    ebx = esi + 4;
    MEM32(eax + 0x7C) = ebp;
    MEM32(eax + 0x80) = ebp;
    MEM32(eax + 0x84) = ebp;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEC56; /* je: equal / zero */

loc_000DEBE5: ;
    edx = MEM32(eax + 0xC);

loc_000DEBE8: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DEBF6; /* jle: less or equal (signed <=) */

loc_000DEBED: ;
    ecx = MEM32(ecx + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEBE8; /* jne: not equal / not zero */

loc_000DEBF4: ;
    goto loc_000DEC56;

loc_000DEBF6: ;
    if (CMP_NE(_fa, _fb)) goto loc_000DECD2; /* jne: not equal / not zero */

loc_000DEBFC: ;
    edi = MEM32(eax + 8);
    /* nop */

loc_000DEC00: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DEC13; /* jle: less or equal (signed <=) */

loc_000DEC05: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEC13; /* jne: not equal / not zero */

loc_000DEC0A: ;
    ecx = MEM32(ecx + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEC00; /* jne: not equal / not zero */

loc_000DEC11: ;
    goto loc_000DEC56;

loc_000DEC13: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DECD2; /* jne: not equal / not zero */

loc_000DEC1C: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DECD2; /* jne: not equal / not zero */

loc_000DEC25: ;
    esi = MEM32(eax + 0x10);
    goto loc_000DEC30;

    /* nop */

loc_000DEC30: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DECD2; /* jle: less or equal (signed <=) */

loc_000DEC39: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DECD2; /* jne: not equal / not zero */

loc_000DEC42: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DECD2; /* jne: not equal / not zero */

loc_000DEC4B: ;
    ecx = MEM32(ecx + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEC30; /* jne: not equal / not zero */

loc_000DEC52: ;
    esi = MEM32(esp + 0x14);

loc_000DEC56: ;
    ecx = MEM32(eax + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEC86; /* je: equal / zero */

loc_000DEC60: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x84);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEC72; /* jne: not equal / not zero */

loc_000DEC6D: ;
    edx = MEM32(eax + 0x7C);
    MEM32(ecx) = edx;

loc_000DEC72: ;
    ecx = MEM32(eax + 0x84);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEC86; /* jne: not equal / not zero */

loc_000DEC7D: ;
    edx = MEM32(eax + 0x80);
    MEM32(ecx + 4) = edx;

loc_000DEC86: ;
    MEM32(eax + 0x80) = ebp;
    MEM32(eax + 0x84) = ebp;
    MEM32(eax + 0x7C) = ebp;
    ecx = MEM32(esi + 8);
    MEM32(eax + 0x80) = ecx;
    MEM32(eax + 0x84) = ebx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DECBB; /* jne: not equal / not zero */

loc_000DECA8: ;
    MEM32(ebx) = eax;
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0xC);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000DECBB: ;
    edx = MEM32(esi + 8);
    MEM32(edx + 0x7C) = eax;
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0xC);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000DECD2: ;
    edx = MEM32(eax + 0x84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    esi = MEM32(ecx + 0x80);
    if (CMP_EQ(_fa, _fb)) goto loc_000DED08; /* je: equal / zero */

loc_000DECE2: ;
    MEM32(edx + 8) = MEM32(edx + 8) - 1;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(eax + 0x84);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DECF4; /* jne: not equal / not zero */

loc_000DECEF: ;
    edi = MEM32(eax + 0x7C);
    MEM32(edx) = edi;

loc_000DECF4: ;
    edx = MEM32(eax + 0x84);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DED08; /* jne: not equal / not zero */

loc_000DECFF: ;
    edi = MEM32(eax + 0x80);
    MEM32(edx + 4) = edi;

loc_000DED08: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(eax + 0x84) = ebp;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x80) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000DED2C; /* je: equal / zero */

loc_000DED1B: ;
    edx = MEM32(esi + 0x84);
    MEM32(esi + 0x7C) = eax;
    MEM32(eax + 0x84) = edx;
    goto loc_000DED34;

loc_000DED2C: ;
    edx = MEM32(ecx + 0x84);
    MEM32(edx) = eax;

loc_000DED34: ;
    MEM32(ecx + 0x80) = eax;
    ecx = MEM32(ecx + 0x84);
    POP32(esp, edi);
    MEM32(eax + 0x84) = ecx;
    eax = MEM32(ecx + 8);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(ecx + 8) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DED60
 * Original: 0x000DED60 - 0x000DEE89 (297 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DED60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DED60: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_000DED82; /* jbe: below or equal (unsigned <=) */

loc_000DED73: ;
    ecx = MEM32(edi + 0x1C);
    MEM32(ecx + eax * 8 + 4) = ebp;
    ecx = MEM32(edi + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DED73; /* jb: below (unsigned <) */

loc_000DED82: ;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEE02; /* je: equal / zero */

loc_000DED89: ;
    /* nop */

loc_000DED90: ;
    _fa = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x78), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEDF9; /* jne: not equal / not zero */

loc_000DED95: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x14);
    ebx = ecx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000DEDD6; /* ja: above (unsigned >) */

loc_000DEDA5: ;
    eax = MEM32(esi + 0x70);
    edx = MEM32(edi + 0x1C);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = MEM32(edx + eax + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edx) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000DEDD6; /* ja: above (unsigned >) */

loc_000DEDBA: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFD00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0xFFD00000u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DEDD6; /* jle: less or equal (signed <=) */

loc_000DEDC3: ;
    edx = MEM32(edi + 0x1C);
    eax = eax + edx + 4;
    edx = MEM32(eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = ebx;
    MEM32(eax) = edx;
    goto loc_000DEDF9;

loc_000DEDD6: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEDF9; /* je: equal / zero */

loc_000DEDDC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DEDE2u); RECOMP_ABI_CALL(0x000DEB30u, sub_000DEB30); /* call 0x000DEB30 */

loc_000DEDE2: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DEDEBu); RECOMP_ABI_CALL(0x000DB080u, sub_000DB080); /* call 0x000DB080 */

loc_000DEDEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEDF9; /* jne: not equal / not zero */

loc_000DEDF2: ;
    MEM32(esi + 0x78) = 1;

loc_000DEDF9: ;
    esi = MEM32(esi + 0x7C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DED90; /* jne: not equal / not zero */

loc_000DEE02: ;
    ecx = MEM32(edi + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000DEE1F; /* jbe: below or equal (unsigned <=) */

loc_000DEE0D: ;
    /* nop */

loc_000DEE10: ;
    ecx = MEM32(edi + 0x1C);
    MEM32(ecx + eax * 8 + 4) = ebp;
    ecx = MEM32(edi + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DEE10; /* jb: below (unsigned <) */

loc_000DEE1F: ;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEE84; /* je: equal / zero */

loc_000DEE26: ;
    _fa = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x78), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEE7D; /* jne: not equal / not zero */

loc_000DEE2B: ;
    ecx = MEM32(esi);
    eax = MEM32(edi + 0x14);
    edx = ecx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000DEE84; /* ja: above (unsigned >) */

loc_000DEE37: ;
    edx = MEM32(edi + 0x1C);
    eax = MEM32(esi + 0x70);
    eax = edx + eax * 8;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000DEE7D; /* ja: above (unsigned >) */

loc_000DEE49: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFD00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0xFFD00000u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DEE7D; /* jle: less or equal (signed <=) */

loc_000DEE52: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEE69; /* jne: not equal / not zero */

loc_000DEE58: ;
    _fa = (uint32_t)(MEM32(esi + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x74), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEE63; /* jne: not equal / not zero */

loc_000DEE5D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DEE63u); RECOMP_ABI_CALL(0x000DEAC0u, sub_000DEAC0); /* call 0x000DEAC0 */

loc_000DEE63: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEE7D; /* je: equal / zero */

loc_000DEE69: ;
    edx = MEM32(edi + 0x1C);
    ecx = MEM32(esi + 0x70);
    eax = MEM32(esi);
    ecx = edx + ecx * 8 + 4;
    edx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;

loc_000DEE7D: ;
    esi = MEM32(esi + 0x7C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEE26; /* jne: not equal / not zero */

loc_000DEE84: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DEE90
 * Original: 0x000DEE90 - 0x000DEEA8 (24 bytes, 6 insns)
 * Category: game_vehicle
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEE90(void)
{

loc_000DEE90: ;
    PUSH32(esp, 0x32CA20);
    eax = 0x3D;
    ecx = 0x324878;
    PUSH32(esp, 0x000DEEA4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DEEA4: ;
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000DEEB0
 * Original: 0x000DEEB0 - 0x000DEEC8 (24 bytes, 6 insns)
 * Category: game_vehicle
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEEB0(void)
{

loc_000DEEB0: ;
    PUSH32(esp, 0x32CA20);
    eax = 0x3E;
    ecx = 0x324878;
    PUSH32(esp, 0x000DEEC4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DEEC4: ;
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000DEED0
 * Original: 0x000DEED0 - 0x000DEF21 (81 bytes, 26 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DEED0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEF1F; /* je: equal / zero */

loc_000DEED9: ;
    ecx = MEM32(esi + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEF1F; /* je: equal / zero */

loc_000DEEE3: ;
    eax = MEM32(esi + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEF1F; /* jne: not equal / not zero */

loc_000DEEED: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x64;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000DEEF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DEEF5u); } /* indirect call */
    }

loc_000DEEF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEF15; /* jne: not equal / not zero */

loc_000DEEFC: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x32C25C);
    edx = 0x32C264;
    ecx = 0x32CBD0;
    PUSH32(esp, 0x000DEF12u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DEF12: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DEF15: ;
    MEM32(esi + 0xB4) = 1;

loc_000DEF1F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DEF30
 * Original: 0x000DEF30 - 0x000DEFAD (125 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DEF30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEF97; /* je: equal / zero */

loc_000DEF39: ;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEF97; /* je: equal / zero */

loc_000DEF43: ;
    ecx = MEM32(esi + 0xA4);
    edx = MEM32(esi + 0xA8);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000DEF56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DEF53u); } /* indirect call */
    }

loc_000DEF56: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 0xA0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esi + 0x64;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x000DEF69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DEF66u); } /* indirect call */
    }

loc_000DEF69: ;
    ecx = MEM32(esi + 0xA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000DEF74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DEF71u); } /* indirect call */
    }

loc_000DEF74: ;
    ecx = MEM32(esi + 0xA0);
    edx = MEM32(esi + 0xA4);
    eax = MEM32(ecx);
    ebx = MEM32(edx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000DEF87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DEF84u); } /* indirect call */
    }

loc_000DEF87: ;
    ecx = MEM32(esi + 0xA4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x000DEF90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DEF8Eu); } /* indirect call */
    }

loc_000DEF90: ;
    MEM32(esi + 0xA8) = eax;
    POP32(esp, ebx);

loc_000DEF97: ;
    MEM32(esi + 0xB4) = 0;
    MEM32(esi + 0xAC) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DEFB0
 * Original: 0x000DEFB0 - 0x000DEFC7 (23 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DEFB0: ;
    MEM32(esp + 4) = 0x32CBD0;
    eax = 0x3F;
    ecx = 0x324878;
    g_seh_ebp = ebp; sub_000ED1A0(); return; /* tail jmp 0x000ED1A0 */

}

/**
 * sub_000DEFD0
 * Original: 0x000DEFD0 - 0x000DF087 (183 bytes, 64 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DEFD0: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DEFFA; /* je: equal / zero */

loc_000DEFDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEFFA; /* je: equal / zero */

loc_000DEFE3: ;
    PUSH32(esp, 0x32CBD0);
    eax = 0x45;
    ecx = 0x32CB90;
    PUSH32(esp, 0x000DEFF7u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DEFF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DEFFA: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = 0xF;
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
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 1 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000DF066; /* jne: not equal / not zero */

loc_000DF00F: ;
    ecx = ebx;
    PUSH32(esp, 0x000DF016u); RECOMP_ABI_CALL(0x000D5CD0u, sub_000D5CD0); /* call 0x000D5CD0 */

loc_000DF016: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF031; /* jne: not equal / not zero */

loc_000DF01A: ;
    PUSH32(esp, 0x32CBD0);
    eax = 0x4B;
    ecx = 0x32CB6C;
    PUSH32(esp, 0x000DF02Eu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DF02E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF031: ;
    eax = MEM32(ebx + 0x68);
    _fb = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x34) = eax;
    ecx = MEM32(ebx + 0x6C);
    _fb = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebx + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x38) = ecx;
    eax = MEM32(ebx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF058; /* je: equal / zero */

loc_000DF04A: ;
    eax = MEM32(ebp + 0x2C);
    edx = MEM32(ebx + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebp + 0x2C) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000DF058: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ebx + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebp + 4) = ecx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000DF066: ;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF084; /* jne: not equal / not zero */

loc_000DF06D: ;
    PUSH32(esp, 0x32CBD0);
    eax = 0x5B;
    ecx = 0x32CB4C;
    PUSH32(esp, 0x000DF081u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DF081: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF084: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF090
 * Original: 0x000DF090 - 0x000DF12A (154 bytes, 50 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF090: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_000DF0B9; /* je: equal / zero */

loc_000DF09D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF0B9; /* je: equal / zero */

loc_000DF0A2: ;
    PUSH32(esp, 0x32CBD0);
    eax = 0x62;
    ecx = 0x32CB90;
    PUSH32(esp, 0x000DF0B6u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DF0B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF0B9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = 0xF;
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
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 1 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000DF100; /* jne: not equal / not zero */

loc_000DF0D2: ;
    PUSH32(esp, 0x000DF0D7u); RECOMP_ABI_CALL(0x000D5CD0u, sub_000D5CD0); /* call 0x000D5CD0 */

loc_000DF0D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF0F2; /* jne: not equal / not zero */

loc_000DF0DB: ;
    PUSH32(esp, 0x32CBD0);
    eax = 0x68;
    ecx = 0x32CB6C;
    PUSH32(esp, 0x000DF0EFu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DF0EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF0F2: ;
    eax = MEM32(ebx + 0x24);
    MEM32(ebp + 0x34) = eax;
    ecx = MEM32(ebx + 0x28);
    MEM32(ebp + 0x38) = ecx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000DF100: ;
    PUSH32(esp, 0x000DF105u); RECOMP_ABI_CALL(0x000D5CD0u, sub_000D5CD0); /* call 0x000D5CD0 */

loc_000DF105: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF120; /* jne: not equal / not zero */

loc_000DF109: ;
    PUSH32(esp, 0x32CBD0);
    eax = 0x6F;
    ecx = 0x32CB6C;
    PUSH32(esp, 0x000DF11Du); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DF11D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF120: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x34) = eax;
    MEM32(ebp + 0x38) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF130
 * Original: 0x000DF130 - 0x000DF14B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DF130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF130: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF148; /* jne: not equal / not zero */

loc_000DF136: ;
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DF143u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000DF143: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DF148: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DF150
 * Original: 0x000DF150 - 0x000DF1E1 (145 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF150: ;
    PUSH32(esp, ebx);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF15C; /* jne: not equal / not zero */

loc_000DF157: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DF15C: ;
    PUSH32(esp, edi);
    eax = 0x110;
    PUSH32(esp, 0x000DF167u); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000DF167: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF194; /* je: equal / zero */

loc_000DF16B: ;
    edx = eax;
    PUSH32(esp, 0x000DF172u); RECOMP_ABI_CALL(0x000DF220u, sub_000DF220); /* call 0x000DF220 */

loc_000DF172: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF194; /* je: equal / zero */

loc_000DF178: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000DF184u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DF181u); } /* indirect call */
    }

loc_000DF184: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF19A; /* jne: not equal / not zero */

loc_000DF188: ;
    eax = edi;
    PUSH32(esp, 0x000DF18Fu); RECOMP_ABI_CALL(0x000DF2A0u, sub_000DF2A0); /* call 0x000DF2A0 */

loc_000DF18F: ;
    PUSH32(esp, 0x000DF194u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000DF194: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DF19A: ;
    edx = edi + 0x64;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DF1A4u); RECOMP_ABI_CALL(0x000DEFD0u, sub_000DEFD0); /* call 0x000DEFD0 */

loc_000DF1A4: ;
    eax = edi + 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DF1AEu); RECOMP_ABI_CALL(0x000DF090u, sub_000DF090); /* call 0x000DF090 */

loc_000DF1AE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    PUSH32(esp, 0x000DF1B8u); RECOMP_ABI_CALL(0x000DF130u, sub_000DF130); /* call 0x000DF130 */

loc_000DF1B8: ;
    MEM32(edi + 0xB0) = eax;
    MEM32(edi + 4) = ebx;
    PUSH32(esp, 0x000DF1C6u); RECOMP_ABI_CALL(0x000DF330u, sub_000DF330); /* call 0x000DF330 */

loc_000DF1C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF188; /* je: equal / zero */

loc_000DF1CA: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000DF1D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DF1D3u); } /* indirect call */
    }

loc_000DF1D6: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edi;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF1F0
 * Original: 0x000DF1F0 - 0x000DF214 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF1F0: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF212; /* je: equal / zero */

loc_000DF1F7: ;
    PUSH32(esp, 0x000DF1FCu); RECOMP_ABI_CALL(0x000DF400u, sub_000DF400); /* call 0x000DF400 */

loc_000DF1FC: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF20C; /* je: equal / zero */

loc_000DF202: ;
    PUSH32(esp, 0x000DF207u); RECOMP_ABI_CALL(0x000DF2A0u, sub_000DF2A0); /* call 0x000DF2A0 */

loc_000DF207: ;
    PUSH32(esp, 0x000DF20Cu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000DF20C: ;
    MEM32(esi) = 0;

loc_000DF212: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF220
 * Original: 0x000DF220 - 0x000DF291 (113 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF220: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = edx;
    PUSH32(esp, 0x000DF22Au); RECOMP_ABI_CALL(0x000E1F40u, sub_000E1F40); /* call 0x000E1F40 */

loc_000DF22A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx + 0xB8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    MEM32(edx + 0xAC) = esi;
    MEM32(edx + 0xB0) = esi;
    MEM32(edx + 0xA4) = esi;
    MEM32(edx + 0xB4) = esi;
    MEM32(edx + 0xA0) = esi;
    MEM32(edx + 4) = esi;
    ecx = 0x16;
    MEM32(edx) = 0x32CA68;
    MEM32(edx + 0xA8) = 0xFFFFFFFFu;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(edx + 0xBC) = esi;
    POP32(esp, esi);
    MEM32(ebx) = 0x10000;
    MEM8(edx + 0xC0) = 0x40;
    MEM32(edx + 0xDC) = 1;
    eax = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF2A0
 * Original: 0x000DF2A0 - 0x000DF2A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF2A0(void)
{

loc_000DF2A0: ;
    MEM32(eax) = 0x32CA68;
    esp += 4; return; /* ret */

}

/**
 * sub_000DF2B0
 * Original: 0x000DF2B0 - 0x000DF328 (120 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF2B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000DF2D9; /* jne: not equal / not zero */

loc_000DF2BD: ;
    PUSH32(esp, 0xD3);
    PUSH32(esp, 0x32C160);
    edx = 0x32CB0C;
    ecx = 0x32CBD0;
    PUSH32(esp, 0x000DF2D6u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DF2D6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF2D9: ;
    PUSH32(esp, 0x58);
    esi = edi + 0xB8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DF2E8u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000DF2E8: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF312; /* je: equal / zero */

loc_000DF2F5: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x10000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DF312; /* jle: less or equal (signed <=) */

loc_000DF2FD: ;
    eax = 0x32CAA8;
    edx = 0x1C;
    PUSH32(esp, 0x000DF30Cu); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000DF30C: ;
    MEM32(esi) = 0x10000;

loc_000DF312: ;
    ecx = MEM32(edi + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF322; /* je: equal / zero */

loc_000DF31C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000DF322u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DF31Fu); } /* indirect call */
    }

loc_000DF322: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DF330
 * Original: 0x000DF330 - 0x000DF3FC (204 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF330: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edi + 8;
    ebp = edi + 0xA4;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000DF343u); RECOMP_ABI_CALL(0x000E2000u, sub_000E2000); /* call 0x000E2000 */

loc_000DF343: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF350; /* je: equal / zero */

loc_000DF34A: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000DF350: ;
    eax = MEM32(ebp);
    PUSH32(esp, ebx);
    edx = edi;
    ecx = 0xDEED0;
    PUSH32(esp, 0x000DF360u); RECOMP_ABI_CALL(0x000E21D0u, sub_000E21D0); /* call 0x000E21D0 */

loc_000DF360: ;
    eax = MEM32(ebp);
    ecx = 0xDEF30;
    PUSH32(esp, 0x000DF36Du); RECOMP_ABI_CALL(0x000E21B0u, sub_000E21B0); /* call 0x000E21B0 */

loc_000DF36D: ;
    eax = MEM32(ebp);
    ecx = 0xDEFB0;
    PUSH32(esp, 0x000DF37Au); RECOMP_ABI_CALL(0x000E21C0u, sub_000E21C0); /* call 0x000E21C0 */

loc_000DF37A: ;
    eax = MEM32(edi + 0x5C);
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = edi + 0xA0;
    PUSH32(esp, edx);
    edx = esi;
    ecx = edi + 0xB8;
    esi = eax;
    MEM32(esp + 0x10) = eax;
    ebx = edi + 0x28;
    if (CMP_A(_fa, _fb)) goto loc_000DF39F; /* ja: above (unsigned >) */

loc_000DF39C: ;
    ebx = edi + 0x64;

loc_000DF39F: ;
    PUSH32(esp, 0x000DF3A4u); RECOMP_ABI_CALL(0x000E04C0u, sub_000E04C0); /* call 0x000E04C0 */

loc_000DF3A4: ;
    ebx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF3CC; /* jne: not equal / not zero */

loc_000DF3AF: ;
    ecx = MEM32(ebx);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    esi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000DF3BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DF3B8u); } /* indirect call */
    }

loc_000DF3BB: ;
    ecx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi); PUSH32(esp, 0x000DF3C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DF3BFu); } /* indirect call */
    }

loc_000DF3C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(edi + 0xA8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000DF3EC; /* jne: not equal / not zero */

loc_000DF3CC: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF3D9; /* je: equal / zero */

loc_000DF3D2: ;
    esi = ebp;
    PUSH32(esp, 0x000DF3D9u); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000DF3D9: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF3E5; /* je: equal / zero */

loc_000DF3DE: ;
    esi = ebx;
    PUSH32(esp, 0x000DF3E5u); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000DF3E5: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000DF3EC: ;
    ecx = MEM32(ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    MEM32(ecx + 0x1C) = eax;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF400
 * Original: 0x000DF400 - 0x000DF439 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF400: ;
    eax = MEM32(edi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = edi + 0xA0;
    if (CMP_EQ(_fa, _fb)) goto loc_000DF41C; /* je: equal / zero */

loc_000DF411: ;
    PUSH32(esp, 0x000DF416u); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000DF416: ;
    MEM32(esi) = 0;

loc_000DF41C: ;
    eax = MEM32(edi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0xA4;
    if (CMP_EQ(_fa, _fb)) goto loc_000DF437; /* je: equal / zero */

loc_000DF42C: ;
    PUSH32(esp, 0x000DF431u); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000DF431: ;
    MEM32(esi) = 0;

loc_000DF437: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF440
 * Original: 0x000DF440 - 0x000DF463 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF440: ;
    edx = ecx;
    eax = MEM32(edx + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF451; /* je: equal / zero */

loc_000DF44C: ;
    PUSH32(esp, 0x000DF451u); RECOMP_ABI_CALL(0x000DA270u, sub_000DA270); /* call 0x000DA270 */

loc_000DF451: ;
    eax = MEM32(edx + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF462; /* je: equal / zero */

loc_000DF45B: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

loc_000DF462: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DF470
 * Original: 0x000DF470 - 0x000DF495 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF470: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF484; /* je: equal / zero */

loc_000DF47D: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000DF484u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DF481u); } /* indirect call */
    }

loc_000DF484: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DF494; /* je: equal / zero */

loc_000DF48F: ;
    g_seh_ebp = ebp; sub_000DA280(); return; /* tail jmp 0x000DA280 */

loc_000DF494: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DF4A0
 * Original: 0x000DF4A0 - 0x000DF4DE (62 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF4A0: ;
    eax = ecx;
    ecx = MEM32(eax + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF4CE; /* je: equal / zero */

loc_000DF4AC: ;
    ecx = MEM32(eax + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF4D1; /* je: equal / zero */

loc_000DF4B6: ;
    ecx = MEM32(eax + 0xA0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(MEM32(eax + 0xB0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(eax + 0xB0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000DF4CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DF4CAu); } /* indirect call */
    }

loc_000DF4CD: ;
    POP32(esp, esi);

loc_000DF4CE: ;
    esp += 8; return; /* ret 4 */

loc_000DF4D1: ;
    eax = MEM32(eax + 0xA0);
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_000DF4E0
 * Original: 0x000DF4E0 - 0x000DF4F8 (24 bytes, 6 insns)
 * Category: game_vehicle
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF4E0(void)
{

loc_000DF4E0: ;
    PUSH32(esp, 0x32CBD0);
    eax = 0x13D;
    ecx = 0x324878;
    PUSH32(esp, 0x000DF4F4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DF4F4: ;
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000DF500
 * Original: 0x000DF500 - 0x000DF518 (24 bytes, 6 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF500(void)
{

loc_000DF500: ;
    PUSH32(esp, 0x32CBD0);
    eax = 0x142;
    ecx = 0x324878;
    PUSH32(esp, 0x000DF514u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DF514: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DF520
 * Original: 0x000DF520 - 0x000DF55F (63 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF520: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF534; /* jne: not equal / not zero */

loc_000DF52D: ;
    eax = 0xFFFF0000u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DF534: ;
    ecx = MEM32(esi + 0xA0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000DF53Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DF53Cu); } /* indirect call */
    }

loc_000DF53F: ;
    ecx = MEM32(esi + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF55D; /* je: equal / zero */

loc_000DF549: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF0000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF55D; /* je: equal / zero */

loc_000DF550: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFE0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFE0000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF55D; /* je: equal / zero */

loc_000DF557: ;
    _fb = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF55D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF560
 * Original: 0x000DF560 - 0x000DF56B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF560: ;
    ecx = MEM32(ecx + 0xA0);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_000DF570
 * Original: 0x000DF570 - 0x000DF577 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF570(void)
{

loc_000DF570: ;
    eax = MEM32(ecx + 0xA4);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF580
 * Original: 0x000DF580 - 0x000DF58B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF580: ;
    ecx = MEM32(ecx + 0xA4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x30)); return; /* indirect tail jmp */

}

/**
 * sub_000DF590
 * Original: 0x000DF590 - 0x000DF5A7 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF590: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF5A4; /* jne: not equal / not zero */

loc_000DF599: ;
    ecx = MEM32(ecx + 0xA0);
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x30)); return; /* indirect tail jmp */

loc_000DF5A4: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000DF5B0
 * Original: 0x000DF5B0 - 0x000DF5C7 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF5B0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF5C4; /* jne: not equal / not zero */

loc_000DF5B9: ;
    ecx = MEM32(ecx + 0xA0);
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x34)); return; /* indirect tail jmp */

loc_000DF5C4: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000DF5D0
 * Original: 0x000DF5D0 - 0x000DF5E8 (24 bytes, 6 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF5D0(void)
{

loc_000DF5D0: ;
    PUSH32(esp, 0x32CBD0);
    eax = 0x173;
    ecx = 0x324878;
    PUSH32(esp, 0x000DF5E4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DF5E4: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DF5F0
 * Original: 0x000DF5F0 - 0x000DF608 (24 bytes, 6 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF5F0(void)
{

loc_000DF5F0: ;
    PUSH32(esp, 0x32CBD0);
    eax = 0x179;
    ecx = 0x324878;
    PUSH32(esp, 0x000DF604u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DF604: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DF610
 * Original: 0x000DF610 - 0x000DF616 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF610: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DF620
 * Original: 0x000DF620 - 0x000DF625 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DF620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF620: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000DF630
 * Original: 0x000DF630 - 0x000DF645 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000DF630: ;
    PUSH32(esp, 0x000DF635u); RECOMP_ABI_CALL(0x000E3000u, sub_000E3000); /* call 0x000E3000 */

loc_000DF635: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF644; /* je: equal / zero */

loc_000DF639: ;
    PUSH32(esp, 0x000DF63Eu); RECOMP_ABI_CALL(0x000E3290u, sub_000E3290); /* call 0x000E3290 */

loc_000DF63E: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000DF644: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DF650
 * Original: 0x000DF650 - 0x000DF655 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF650: ;
    g_seh_ebp = ebp; sub_000E32D0(); return; /* tail jmp 0x000E32D0 */

}

/**
 * sub_000DF660
 * Original: 0x000DF660 - 0x000DF681 (33 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF660: ;
    PUSH32(esp, edi);
    edi = edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF675; /* je: equal / zero */

loc_000DF668: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DF670u); RECOMP_ABI_CALL(0x000E32E0u, sub_000E32E0); /* call 0x000E32E0 */

loc_000DF670: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000DF675: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DF67Cu); RECOMP_ABI_CALL(0x000E3010u, sub_000E3010); /* call 0x000E3010 */

loc_000DF67C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF690
 * Original: 0x000DF690 - 0x000DF6B8 (40 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF690: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF6B0; /* jne: not equal / not zero */

loc_000DF699: ;
    PUSH32(esp, 0x32CC80);
    eax = 0x29;
    ecx = 0x32CC64;
    PUSH32(esp, 0x000DF6ADu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DF6AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF6B0: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x000DF6B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DF6B3u); } /* indirect call */
    }

loc_000DF6B6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF6C0
 * Original: 0x000DF6C0 - 0x000DF6D3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF6C0(void)
{

loc_000DF6C0: ;
    PUSH32(esp, 0x000DF6C5u); RECOMP_ABI_CALL(0x000DA220u, sub_000DA220); /* call 0x000DA220 */

loc_000DF6C5: ;
    MEM32(eax) = 0x32CC18;
    MEM32(eax + 0x1C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000DF6E0
 * Original: 0x000DF6E0 - 0x000DF6FC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF6E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000DF6E8u); RECOMP_ABI_CALL(0x000DF700u, sub_000DF700); /* call 0x000DF700 */

loc_000DF6E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000DF6F8; /* je: equal / zero */

loc_000DF6F1: ;
    PUSH32(esp, 0x000DF6F6u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000DF6F6: ;
    eax = esi;

loc_000DF6F8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DF700
 * Original: 0x000DF700 - 0x000DF70B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF700: ;
    MEM32(ecx) = 0x32CC18;
    g_seh_ebp = ebp; sub_000DA260(); return; /* tail jmp 0x000DA260 */

}

/**
 * sub_000DF710
 * Original: 0x000DF710 - 0x000DF716 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF710(void)
{

loc_000DF710: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000DF720
 * Original: 0x000DF720 - 0x000DF7C3 (163 bytes, 61 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DF720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DF743; /* je: equal / zero */

loc_000DF72A: ;
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x32CF58);
    edx = 0x32CFA4;
    ecx = 0x32CF6C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DF740u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DF740: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF743: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFFFu (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DF772; /* je: equal / zero */

loc_000DF75D: ;
    mm0 = MMX_MEM(edi); /* movq */
    mm1 = MMX_MEM(esi); /* movq */
    mm0 = MMX_PADDSW(mm0, mm1); /* paddsw */
    MMX_STORE(edi, mm0); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000DF75D; /* jne: not equal / not zero */

loc_000DF772: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000DF7B8; /* je: equal / zero */

loc_000DF77A: ;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000DF780: ;
    eax = MEM32(edi);
    ebx = MEM32(esi);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DF7A0; /* jle: less or equal (signed <=) */

loc_000DF799: ;
    eax = 0x7FFF;
    goto loc_000DF7AC;

loc_000DF7A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000DF7AC; /* jge: greater or equal (signed >=) */

loc_000DF7A7: ;
    eax = 0xFFFF8000u;

loc_000DF7AC: ;
    MEM16(edi) = LO16(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000DF780; /* jne: not equal / not zero */

loc_000DF7B8: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000DF7D0
 * Original: 0x000DF7D0 - 0x000DF872 (162 bytes, 59 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DF7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF7D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DF7F6; /* je: equal / zero */

loc_000DF7DA: ;
    PUSH32(esp, 0xAC);
    PUSH32(esp, 0x32CF40);
    edx = 0x32CFA4;
    ecx = 0x32CF6C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DF7F3u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DF7F3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF7F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + -4) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFFFu (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DF849; /* je: equal / zero */

loc_000DF810: ;
    mm1 = MMX_MEM(esi); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm2 = mm1; /* movq */
    mm2 = MMX_PUNPCKLWD(mm2, mm7); /* punpcklwd */
    mm2 = MMX_PSLLD(mm2, 16u); /* pslld */
    mm2 = MMX_PSRAD(mm2, 16u); /* psrad */
    mm1 = MMX_PUNPCKHWD(mm1, mm7); /* punpckhwd */
    mm1 = MMX_PSLLD(mm1, 16u); /* pslld */
    mm1 = MMX_PSRAD(mm1, 16u); /* psrad */
    mm0 = MMX_MEM(edi); /* movq */
    mm0 = MMX_PADDD(mm0, mm2); /* paddd */
    MMX_STORE(edi, mm0); /* movq */
    mm0 = MMX_MEM(edi + 8); /* movq */
    mm0 = MMX_PADDD(mm0, mm1); /* paddd */
    MMX_STORE(edi + 8, mm0); /* movq */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000DF810; /* jne: not equal / not zero */

loc_000DF849: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000DF867; /* je: equal / zero */

loc_000DF851: ;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_000DF853: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ebx = MEM32(edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000DF853; /* jne: not equal / not zero */

loc_000DF867: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000DF880
 * Original: 0x000DF880 - 0x000DF943 (195 bytes, 67 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DF880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DF8AB; /* je: equal / zero */

loc_000DF88F: ;
    PUSH32(esp, 0x11A);
    PUSH32(esp, 0x32CF28);
    edx = 0x32CFA4;
    ecx = 0x32CF6C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DF8A8u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DF8A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF8AB: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + -4) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFFFu (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DF8F5; /* je: equal / zero */

loc_000DF8D7: ;
    mm0 = MMX_MEM(esi); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm1 = MMX_MEM(esi); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PACKSSDW(mm0, mm1); /* packssdw */
    MMX_STORE(edi, mm0); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000DF8D7; /* jne: not equal / not zero */

loc_000DF8EF: ;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -8) = esi;

loc_000DF8F5: ;
    (void)0; /* emms - empty MMX state */
    edx = MEM32(ebp + -4);
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_fa == 0)) goto loc_000DF93C; /* je: equal / zero */

loc_000DF909: ;
    edx = MEM32(ebp + -8);
    eax = MEM32(ebp + -12);
    /* nop */

loc_000DF910: ;
    ecx = MEM32(edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DF924; /* jle: less or equal (signed <=) */

loc_000DF91D: ;
    MEM16(eax) = 0x7FFF;
    goto loc_000DF936;

loc_000DF924: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000DF933; /* jge: greater or equal (signed >=) */

loc_000DF92C: ;
    MEM16(eax) = 0x8000;
    goto loc_000DF936;

loc_000DF933: ;
    MEM16(eax) = LO16(ecx);

loc_000DF936: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000DF910; /* jne: not equal / not zero */

loc_000DF93C: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000DF950
 * Original: 0x000DF950 - 0x000DFA0F (191 bytes, 66 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DF950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000DF97D; /* je: equal / zero */

loc_000DF961: ;
    PUSH32(esp, 0x17B);
    PUSH32(esp, 0x32CF40);
    edx = 0x32CFA4;
    ecx = 0x32CF6C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DF97Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DF97A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF97D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + -4) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFFFu (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DF9DE; /* je: equal / zero */

loc_000DF9A7: ;
    mm7 = MMX_PXOR(mm7, mm7); /* pxor */

loc_000DF9AA: ;
    mm0 = MMX_MEM(esi); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm1 = mm0; /* movq */
    mm1 = MMX_PUNPCKLWD(mm1, mm7); /* punpcklwd */
    mm1 = MMX_PSLLD(mm1, 16u); /* pslld */
    mm1 = MMX_PSRAD(mm1, 16u); /* psrad */
    mm0 = MMX_PUNPCKHWD(mm0, mm7); /* punpckhwd */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm0 = MMX_PSRAD(mm0, 16u); /* psrad */
    MMX_STORE(edi, mm1); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMX_STORE(edi, mm0); /* movq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000DF9AA; /* jne: not equal / not zero */

loc_000DF9D8: ;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -12) = esi;

loc_000DF9DE: ;
    (void)0; /* emms - empty MMX state */
    edx = MEM32(ebp + -4);
    eax = edx * 4;
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebx;
    if ((_fa == 0)) goto loc_000DFA06; /* je: equal / zero */

loc_000DF9F2: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -12);

loc_000DF9F8: ;
    esi = (uint32_t)(int32_t)SMEM16(ecx);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000DF9F8; /* jne: not equal / not zero */

loc_000DFA06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000DFA10
 * Original: 0x000DFA10 - 0x000DFA52 (66 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DFA10: ;
    PUSH32(esp, esi);
    eax = 0x50;
    PUSH32(esp, 0x000DFA1Bu); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000DFA1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFA49; /* je: equal / zero */

loc_000DFA1F: ;
    PUSH32(esp, 0x000DFA24u); RECOMP_ABI_CALL(0x000DFA60u, sub_000DFA60); /* call 0x000DFA60 */

loc_000DFA24: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFA49; /* je: equal / zero */

loc_000DFA2A: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = esi;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000DFA3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DFA39u); } /* indirect call */
    }

loc_000DFA3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFA4E; /* jne: not equal / not zero */

loc_000DFA40: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000DFA49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DFA46u); } /* indirect call */
    }

loc_000DFA49: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DFA4E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DFA60
 * Original: 0x000DFA60 - 0x000DFA8F (47 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DFA60: ;
    PUSH32(esp, 0x000DFA65u); RECOMP_ABI_CALL(0x000DA220u, sub_000DA220); /* call 0x000DA220 */

loc_000DFA65: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x32CCC8;
    MEM32(eax + 0x30) = 1;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x4C) = 0xDFFD0;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    g_seh_ebp = ebp; sub_000DFB50(); return; /* tail jmp 0x000DFB50 */

}

/**
 * sub_000DFA90
 * Original: 0x000DFA90 - 0x000DFAAE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DFA90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    PUSH32(esp, 0x000DFA9Au); RECOMP_ABI_CALL(0x000DFAB0u, sub_000DFAB0); /* call 0x000DFAB0 */

loc_000DFA9A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000DFAAA; /* je: equal / zero */

loc_000DFAA3: ;
    PUSH32(esp, 0x000DFAA8u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000DFAA8: ;
    eax = esi;

loc_000DFAAA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DFAB0
 * Original: 0x000DFAB0 - 0x000DFB50 (160 bytes, 59 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DFAB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi) = 0x32CCC8;
    if (CMP_EQ(_fa, _fb)) goto loc_000DFB26; /* je: equal / zero */

loc_000DFAC3: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);

loc_000DFAC7: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFAD4; /* je: equal / zero */

loc_000DFACE: ;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x18) = edx;

loc_000DFAD4: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFAE1; /* je: equal / zero */

loc_000DFADB: ;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = edx;

loc_000DFAE1: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFB05; /* je: equal / zero */

loc_000DFAE8: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFAF7; /* jne: not equal / not zero */

loc_000DFAF2: ;
    edx = MEM32(eax + 0x14);
    MEM32(ecx) = edx;

loc_000DFAF7: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFB05; /* jne: not equal / not zero */

loc_000DFAFF: ;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 4) = edx;

loc_000DFB05: ;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    PUSH32(esp, 0x000DFB13u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000DFB13: ;
    edx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0xC) = edx;
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000DFB25; /* je: equal / zero */

loc_000DFB20: ;
    edi = MEM32(edi + 0x14);
    goto loc_000DFAC7;

loc_000DFB25: ;
    POP32(esp, edi);

loc_000DFB26: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFB42; /* je: equal / zero */

loc_000DFB2B: ;
    PUSH32(esp, 0x32CEE0);
    eax = 0x47;
    ecx = 0x32CECC;
    PUSH32(esp, 0x000DFB3Fu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DFB3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DFB42: ;
    PUSH32(esp, 0x000DFB47u); RECOMP_ABI_CALL(0x000DFB70u, sub_000DFB70); /* call 0x000DFB70 */

loc_000DFB47: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA260(); return; /* tail jmp 0x000DA260 */

}

/**
 * sub_000DFB50
 * Original: 0x000DFB50 - 0x000DFB65 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFB50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DFB50: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000DFB70
 * Original: 0x000DFB70 - 0x000DFB99 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DFB70: ;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFB85; /* je: equal / zero */

loc_000DFB7A: ;
    PUSH32(esp, 0x000DFB7Fu); RECOMP_ABI_CALL(0x000ED360u, sub_000ED360); /* call 0x000ED360 */

loc_000DFB7F: ;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x44) = edi;

loc_000DFB85: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFB97; /* je: equal / zero */

loc_000DFB8C: ;
    PUSH32(esp, 0x000DFB91u); RECOMP_ABI_CALL(0x000ED360u, sub_000ED360); /* call 0x000ED360 */

loc_000DFB91: ;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x48) = edi;

loc_000DFB97: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DFBA0
 * Original: 0x000DFBA0 - 0x000DFBCF (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000DFBA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DFBAB; /* jne: not equal / not zero */

loc_000DFBA8: ;
    esp += 8; return; /* ret 4 */

loc_000DFBAB: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DFBB7; /* je: equal / zero */

loc_000DFBB2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000DFBB7: ;
    SET_LO16(edx, MEM16(eax + 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x14)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x14) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000DFBB2; /* jne: not equal / not zero */

loc_000DFBC1: ;
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x18)));
    eax = eax - MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DFBD0
 * Original: 0x000DFBD0 - 0x000DFBF5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DFBD0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DFBE0; /* jg: greater (signed >) */

loc_000DFBD8: ;
    MEM32(ecx + 0x4C) = 0xDFFD0;
    esp += 4; return; /* ret */

loc_000DFBE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFBED; /* jne: not equal / not zero */

loc_000DFBE5: ;
    MEM32(ecx + 0x4C) = 0xE00A0;
    esp += 4; return; /* ret */

loc_000DFBED: ;
    MEM32(ecx + 0x4C) = 0xE0240;
    esp += 4; return; /* ret */

}

/**
 * sub_000DFC00
 * Original: 0x000DFC00 - 0x000DFC3E (62 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DFC00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000DFC0Eu); RECOMP_ABI_CALL(0x000DA290u, sub_000DA290); /* call 0x000DA290 */

loc_000DFC0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFC39; /* je: equal / zero */

loc_000DFC12: ;
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFC2E; /* jne: not equal / not zero */

loc_000DFC19: ;
    ecx = ZX16(MEM16(edi + 6));
    MEM32(esi + 0x28) = ecx;
    edx = ZX16(MEM16(edi + 6));
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    MEM32(esi + 0x2C) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000DFC2E: ;
    edx = ZX16(MEM16(edi + 6));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x2C) = edx;

loc_000DFC39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DFC40
 * Original: 0x000DFC40 - 0x000DFCEC (172 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DFC40: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = ecx;
    ecx = esp + 8;
    eax = edi;
    PUSH32(esp, 0x000DFC56u); RECOMP_ABI_CALL(0x000DA300u, sub_000DA300); /* call 0x000DA300 */

loc_000DFC56: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000DFC62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DFC5Fu); } /* indirect call */
    }

loc_000DFC62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFC76; /* je: equal / zero */

loc_000DFC66: ;
    eax = 0x20;
    PUSH32(esp, 0x000DFC70u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000DFC70: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFC81; /* jne: not equal / not zero */

loc_000DFC76: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000DFC81: ;
    ecx = MEM32(esi + 0x30);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = edi;
    edi = MEM32(esp + 8);
    ecx = eax + 8;
    MEM32(ecx) = edi;
    edi = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edi;
    edi = MEM32(esp + 0x10);
    MEM32(ecx + 8) = edi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(esi + 0x20);
    MEM32(eax + 0x18) = ecx;
    ecx = esi + 0x1C;
    MEM32(eax + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFCBD; /* jne: not equal / not zero */

loc_000DFCB9: ;
    MEM32(ecx) = eax;
    goto loc_000DFCC3;

loc_000DFCBD: ;
    edx = MEM32(esi + 0x20);
    MEM32(edx + 0x14) = eax;

loc_000DFCC3: ;
    ecx = MEM32(esi + 0x24);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esi + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x000DFCDBu); RECOMP_ABI_CALL(0x000DFBD0u, sub_000DFBD0); /* call 0x000DFBD0 */

loc_000DFCDB: ;
    eax = MEM32(esi + 0x30);
    ecx = eax + 1;
    POP32(esp, edi);
    MEM32(esi + 0x30) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DFCF0
 * Original: 0x000DFCF0 - 0x000DFD77 (135 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DFCF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = ecx;
    ecx = esp + 8;
    eax = edi;
    PUSH32(esp, 0x000DFD06u); RECOMP_ABI_CALL(0x000DA300u, sub_000DA300); /* call 0x000DA300 */

loc_000DFD06: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000DFD12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DFD0Fu); } /* indirect call */
    }

loc_000DFD12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFD1E; /* jne: not equal / not zero */

loc_000DFD16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000DFD1E: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFD6D; /* je: equal / zero */

loc_000DFD25: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(esp + 0x1C);
    /* nop */

loc_000DFD30: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFD40; /* je: equal / zero */

loc_000DFD35: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000DFD6D; /* je: equal / zero */

loc_000DFD3B: ;
    ecx = MEM32(ecx + 0x14);
    goto loc_000DFD30;

loc_000DFD40: ;
    MEM32(eax) = edi;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x10);
    ecx = esi;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x000DFD60u); RECOMP_ABI_CALL(0x000DFBD0u, sub_000DFBD0); /* call 0x000DFBD0 */

loc_000DFD60: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000DFD6D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000DFD80
 * Original: 0x000DFD80 - 0x000DFE1A (154 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DFD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DFD80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFE14; /* je: equal / zero */

loc_000DFD8E: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(esp + 8);

loc_000DFD95: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFDA5; /* je: equal / zero */

loc_000DFD9A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000DFE14; /* je: equal / zero */

loc_000DFDA0: ;
    ecx = MEM32(ecx + 0x14);
    goto loc_000DFD95;

loc_000DFDA5: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFDB2; /* je: equal / zero */

loc_000DFDAC: ;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x18) = edx;

loc_000DFDB2: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFDBF; /* je: equal / zero */

loc_000DFDB9: ;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = edx;

loc_000DFDBF: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFDE3; /* je: equal / zero */

loc_000DFDC6: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFDD5; /* jne: not equal / not zero */

loc_000DFDD0: ;
    edx = MEM32(eax + 0x14);
    MEM32(ecx) = edx;

loc_000DFDD5: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFDE3; /* jne: not equal / not zero */

loc_000DFDDD: ;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 4) = edx;

loc_000DFDE3: ;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x1C) = 0;
    PUSH32(esp, 0x000DFDFDu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000DFDFD: ;
    eax = MEM32(esi + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x000DFE0Bu); RECOMP_ABI_CALL(0x000DFBD0u, sub_000DFBD0); /* call 0x000DFBD0 */

loc_000DFE0B: ;
    POP32(esp, esi);
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000DFE14: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DFE20
 * Original: 0x000DFE20 - 0x000DFFA7 (391 bytes, 128 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFE20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DFE20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000DFE46; /* jne: not equal / not zero */

loc_000DFE2D: ;
    PUSH32(esp, 0x11A);
    PUSH32(esp, 0x32CEE0);
    PUSH32(esp, 0x32CE90);
    ebx = 0x32CE98;
    PUSH32(esp, 0x000DFE46u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000DFE46: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFE67; /* jne: not equal / not zero */

loc_000DFE4E: ;
    PUSH32(esp, 0x11B);
    PUSH32(esp, 0x32CEE0);
    PUSH32(esp, 0x3267D8);
    ebx = 0x32CE5C;
    PUSH32(esp, 0x000DFE67u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000DFE67: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFEA1; /* jne: not equal / not zero */

loc_000DFE6F: ;
    PUSH32(esp, 0x11C);
    PUSH32(esp, 0x32CEE0);
    PUSH32(esp, 0x32CE08);
    ebx = 0x32CE1C;
    PUSH32(esp, 0x000DFE88u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000DFE88: ;
    PUSH32(esp, 0x11D);
    PUSH32(esp, 0x32CEE0);
    PUSH32(esp, 0x32CE08);
    ebx = 0x32CDC8;
    PUSH32(esp, 0x000DFEA1u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000DFEA1: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(ebp);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000DFEB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DFEB1u); } /* indirect call */
    }

loc_000DFEB4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000DFF86; /* ja: above (unsigned >) */

loc_000DFEBE: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xDFFA8); /* switch: 10 entries, 9 targets */
    if (_jt == 0x000DFEC5u) goto loc_000DFEC5;
    if (_jt == 0x000DFED3u) goto loc_000DFED3;
    if (_jt == 0x000DFEE1u) goto loc_000DFEE1;
    if (_jt == 0x000DFEF8u) goto loc_000DFEF8;
    if (_jt == 0x000DFF16u) goto loc_000DFF16;
    if (_jt == 0x000DFF2Du) goto loc_000DFF2D;
    if (_jt == 0x000DFF3Eu) goto loc_000DFF3E;
    if (_jt == 0x000DFF5Bu) goto loc_000DFF5B;
    if (_jt == 0x000DFF6Cu) goto loc_000DFF6C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000DFEC5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi) = 5;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000DFED3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi) = 0xFFFFFFFFu;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000DFEE1: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFF9F; /* jne: not equal / not zero */

loc_000DFEEA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi) = 6;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000DFEF8: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFF08; /* je: equal / zero */

loc_000DFEFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFF9F; /* jne: not equal / not zero */

loc_000DFF08: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi) = 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000DFF16: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFF9F; /* jne: not equal / not zero */

loc_000DFF1F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi) = 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000DFF2D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi) = 5;
    eax = 1;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000DFF3E: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFF4A; /* je: equal / zero */

loc_000DFF45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFF50; /* jne: not equal / not zero */

loc_000DFF4A: ;
    MEM32(edi) = 4;

loc_000DFF50: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000DFF5B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi) = 0;
    eax = 1;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000DFF6C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFF9F; /* je: equal / zero */

loc_000DFF73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFF9F; /* je: equal / zero */

loc_000DFF78: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000DFF86: ;
    PUSH32(esp, 0x152);
    PUSH32(esp, 0x32CEE0);
    PUSH32(esp, 0x324878);
    ebx = 0x32CD78;
    PUSH32(esp, 0x000DFF9Fu); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000DFF9F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000DFFD0
 * Original: 0x000DFFD0 - 0x000E0092 (194 bytes, 74 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DFFD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000E0010; /* jne: not equal / not zero */

loc_000DFFE3: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax));
    edx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E0003u); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000E0003: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000E0010: ;
    SET_LO16(ecx, MEM16(eax + 0xE));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(esi + 0x16) (16-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000E003D; /* je: equal / zero */

loc_000E001B: ;
    PUSH32(esp, 0x184);
    PUSH32(esp, 0x32CEE0);
    PUSH32(esp, 0x324878);
    ebx = 0x32CD30;
    PUSH32(esp, 0x000E0034u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E0034: ;
    POP32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000E003D: ;
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = esp + 0x1C;
    eax = esi;
    PUSH32(esp, 0x000E0055u); RECOMP_ABI_CALL(0x000DFE20u, sub_000DFE20); /* call 0x000DFE20 */

loc_000E0055: ;
    edx = MEM32(ebp);
    edi = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E007C; /* jae: above or equal (unsigned >=) */

loc_000E0060: ;
    ecx = MEM32(esi + 0x2C);
    esi = MEM32(ebx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E0079u); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000E0079: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E007C: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E000C
 * Original: 0x000E000C - 0x000E0092 (134 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E000C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E000C: ;
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    PUSH32(esp, 0x184);
    PUSH32(esp, 0x32CEE0);
    PUSH32(esp, 0x324878);
    ebx = 0x32CD30;
    PUSH32(esp, 0x000E0034u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E0034: ;
    POP32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000E003D: ;
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = esp + 0x1C;
    eax = esi;
    PUSH32(esp, 0x000E0055u); RECOMP_ABI_CALL(0x000DFE20u, sub_000DFE20); /* call 0x000DFE20 */

loc_000E0055: ;
    edx = MEM32(ebp);
    edi = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E007C; /* jae: above or equal (unsigned >=) */

loc_000E0060: ;
    ecx = MEM32(esi + 0x2C);
    esi = MEM32(ebx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E0079u); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000E0079: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E007C: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E000D
 * Original: 0x000E000D - 0x000E0092 (133 bytes, 53 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E000D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E000D: ;
    esp += 16; return; /* ret 12 */

    PUSH32(esp, 0x184);
    PUSH32(esp, 0x32CEE0);
    PUSH32(esp, 0x324878);
    ebx = 0x32CD30;
    PUSH32(esp, 0x000E0034u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E0034: ;
    POP32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000E003D: ;
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = esp + 0x1C;
    eax = esi;
    PUSH32(esp, 0x000E0055u); RECOMP_ABI_CALL(0x000DFE20u, sub_000DFE20); /* call 0x000DFE20 */

loc_000E0055: ;
    edx = MEM32(ebp);
    edi = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E007C; /* jae: above or equal (unsigned >=) */

loc_000E0060: ;
    ecx = MEM32(esi + 0x2C);
    esi = MEM32(ebx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E0079u); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000E0079: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E007C: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E003D
 * Original: 0x000E003D - 0x000E0092 (85 bytes, 38 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E003D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E003D: ;
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = esp + 0x1C;
    eax = esi;
    PUSH32(esp, 0x000E0055u); RECOMP_ABI_CALL(0x000DFE20u, sub_000DFE20); /* call 0x000DFE20 */

loc_000E0055: ;
    edx = MEM32(ebp);
    edi = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E007C; /* jae: above or equal (unsigned >=) */

loc_000E0060: ;
    ecx = MEM32(esi + 0x2C);
    esi = MEM32(ebx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E0079u); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000E0079: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E007C: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E00A0
 * Original: 0x000E00A0 - 0x000E0234 (404 bytes, 139 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E00A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E00A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 1;
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM32(eax) = 0;
    ebx = MEM32(edi);
    ebp = ecx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + 0x2C));
    _fa = (uint32_t)(MEM32(ebp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x44), ebx (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_000E0118; /* jae: above or equal (unsigned >=) */

loc_000E00D7: ;
    esi = MEM32(ebp + 0x38);
    MEM32(ebp + 0x44) = ebx;
    PUSH32(esp, 0x000E00E2u); RECOMP_ABI_CALL(0x000DF710u, sub_000DF710); /* call 0x000DF710 */

loc_000E00E2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000E0105; /* je: equal / zero */

loc_000E00E7: ;
    eax = ebx;
    PUSH32(esp, 0x000E00EEu); RECOMP_ABI_CALL(0x000ED2F0u, sub_000ED2F0); /* call 0x000ED2F0 */

loc_000E00EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x38) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E0118; /* jne: not equal / not zero */

loc_000E00F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000E0105: ;
    PUSH32(esp, 0x000E010Au); RECOMP_ABI_CALL(0x000ED280u, sub_000ED280); /* call 0x000ED280 */

loc_000E010A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E0227; /* je: equal / zero */

loc_000E0118: ;
    ebx = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = MEM32(edi);
    MEM32(ebp + 0x34) = ecx;
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E01E9; /* je: equal / zero */

loc_000E012A: ;
    /* nop */

loc_000E0130: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E01D2; /* je: equal / zero */

loc_000E0139: ;
    SET_LO16(edx, MEM16(ebx + 0xE));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ebp + 0x16) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E020C; /* jne: not equal / not zero */

loc_000E0147: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    edi = esp + 0x24;
    eax = ebp;
    PUSH32(esp, 0x000E0159u); RECOMP_ABI_CALL(0x000DFE20u, sub_000DFE20); /* call 0x000DFE20 */

loc_000E0159: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E01D2; /* je: equal / zero */

loc_000E0161: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E01D2; /* jne: not equal / not zero */

loc_000E0165: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E01AC; /* je: equal / zero */

loc_000E016D: ;
    esi = MEM32(esp + 0x20);
    ecx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E0197; /* jae: above or equal (unsigned >=) */

loc_000E0177: ;
    eax = MEM32(ebp + 0x2C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E0190u); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000E0190: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E0197: ;
    ecx = MEM32(esp + 0x24);
    eax = ebp + 0x34;
    esi = eax;
    MEM32(ecx) = edx;
    MEM32(esp + 0x14) = 0;
    goto loc_000E01D2;

loc_000E01AC: ;
    eax = MEM32(ebp + 0x2C);
    ecx = MEM32(ebp + 0x38);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E01C4u); RECOMP_ABI_CALL(0x000DF720u, sub_000DF720); /* call 0x000DF720 */

loc_000E01C4: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E01D2; /* jbe: below or equal (unsigned <=) */

loc_000E01D0: ;
    MEM32(eax) = ecx;

loc_000E01D2: ;
    ebx = MEM32(ebx + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0130; /* jne: not equal / not zero */

loc_000E01DD: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E01FE; /* je: equal / zero */

loc_000E01E5: ;
    edi = MEM32(esp + 0x20);

loc_000E01E9: ;
    ecx = MEM32(edi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x2C));
    edx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E01FBu); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000E01FB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E01FE: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000E020C: ;
    PUSH32(esp, 0x1DD);
    PUSH32(esp, 0x32CEE0);
    PUSH32(esp, 0x324878);
    ebx = 0x32CD30;
    esi = ebp;
    PUSH32(esp, 0x000E0227u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E0227: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E0240
 * Original: 0x000E0240 - 0x000E044F (527 bytes, 190 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0240: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 1;
    ebp = ecx;
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x20);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM32(eax) = ecx;
    ebx = MEM32(edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + 0x2C));
    _fa = (uint32_t)(MEM32(ebp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x44), ebx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_000E02B6; /* jae: above or equal (unsigned >=) */

loc_000E0271: ;
    esi = MEM32(ebp + 0x38);
    MEM32(ebp + 0x44) = ebx;
    PUSH32(esp, 0x000E027Cu); RECOMP_ABI_CALL(0x000DF710u, sub_000DF710); /* call 0x000DF710 */

loc_000E027C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000E029F; /* je: equal / zero */

loc_000E0281: ;
    eax = ebx;
    PUSH32(esp, 0x000E0288u); RECOMP_ABI_CALL(0x000ED2F0u, sub_000ED2F0); /* call 0x000ED2F0 */

loc_000E0288: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x38) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E02B2; /* jne: not equal / not zero */

loc_000E0292: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000E029F: ;
    PUSH32(esp, 0x000E02A4u); RECOMP_ABI_CALL(0x000ED280u, sub_000ED280); /* call 0x000ED280 */

loc_000E02A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E0442; /* je: equal / zero */

loc_000E02B2: ;
    ecx = MEM32(esp + 0x10);

loc_000E02B6: ;
    ebx = MEM32(ebp + 0x44);
    eax = MEM32(ebp + 0x48);
    edx = MEM32(edi);
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x34) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_000E030C; /* jae: above or equal (unsigned >=) */

loc_000E02C7: ;
    esi = MEM32(ebp + 0x40);
    MEM32(ebp + 0x48) = ebx;
    PUSH32(esp, 0x000E02D2u); RECOMP_ABI_CALL(0x000DF710u, sub_000DF710); /* call 0x000DF710 */

loc_000E02D2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000E02F5; /* je: equal / zero */

loc_000E02D7: ;
    eax = ebx;
    PUSH32(esp, 0x000E02DEu); RECOMP_ABI_CALL(0x000ED2F0u, sub_000ED2F0); /* call 0x000ED2F0 */

loc_000E02DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x40) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E0308; /* jne: not equal / not zero */

loc_000E02E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000E02F5: ;
    PUSH32(esp, 0x000E02FAu); RECOMP_ABI_CALL(0x000ED280u, sub_000ED280); /* call 0x000ED280 */

loc_000E02FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x40) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E0442; /* je: equal / zero */

loc_000E0308: ;
    ecx = MEM32(esp + 0x10);

loc_000E030C: ;
    esi = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(edi);
    MEM32(ebp + 0x3C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E03DD; /* je: equal / zero */

loc_000E031C: ;
    /* nop */

loc_000E0320: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E03CE; /* je: equal / zero */

loc_000E0329: ;
    SET_LO16(ecx, MEM16(esi + 0xE));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(ebp + 0x16) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0427; /* jne: not equal / not zero */

loc_000E0337: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = ebp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edi = esp + 0x24;
    eax = ebp;
    PUSH32(esp, 0x000E034Cu); RECOMP_ABI_CALL(0x000DFE20u, sub_000DFE20); /* call 0x000DFE20 */

loc_000E034C: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E03CE; /* je: equal / zero */

loc_000E0354: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E03CE; /* jne: not equal / not zero */

loc_000E0358: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(ebp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 0x2C);
    if (CMP_EQ(_fa, _fb)) goto loc_000E03B2; /* je: equal / zero */

loc_000E0366: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E0374u); RECOMP_ABI_CALL(0x000DF950u, sub_000DF950); /* call 0x000DF950 */

loc_000E0374: ;
    eax = MEM32(ebp + 0x3C);
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E03A2; /* jae: above or equal (unsigned >=) */

loc_000E037F: ;
    edx = MEM32(ebp + 0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x40);
    ecx = eax + edx * 2;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E039Bu); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000E039B: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E03A2: ;
    edx = MEM32(esp + 0x24);
    MEM32(edx) = ecx;
    MEM32(esp + 0x14) = 0;
    goto loc_000E03CE;

loc_000E03B2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E03C0u); RECOMP_ABI_CALL(0x000DF7D0u, sub_000DF7D0); /* call 0x000DF7D0 */

loc_000E03C0: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E03CE; /* jbe: below or equal (unsigned <=) */

loc_000E03CC: ;
    MEM32(eax) = ecx;

loc_000E03CE: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0320; /* jne: not equal / not zero */

loc_000E03D9: ;
    edi = MEM32(esp + 0x20);

loc_000E03DD: ;
    eax = MEM32(ebp + 0x2C);
    edx = MEM32(edi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E03F1u); RECOMP_ABI_CALL(0x000DF880u, sub_000DF880); /* call 0x000DF880 */

loc_000E03F1: ;
    eax = MEM32(esp + 0x24);
    eax = MEM32(eax);
    ecx = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E0419; /* jae: above or equal (unsigned >=) */

loc_000E03FD: ;
    ebp = MEM32(ebp + 0x2C);
    edx = MEM32(edi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E0416u); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000E0416: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E0419: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000E0427: ;
    PUSH32(esp, 0x25F);
    PUSH32(esp, 0x32CEE0);
    PUSH32(esp, 0x324878);
    ebx = 0x32CD30;
    esi = ebp;
    PUSH32(esp, 0x000E0442u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E0442: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E0450
 * Original: 0x000E0450 - 0x000E04B5 (101 bytes, 39 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0450: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000E0477; /* jne: not equal / not zero */

loc_000E045C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x293);
    PUSH32(esp, 0x32CEE0);
    PUSH32(esp, 0x32CE08);
    ebx = 0x32CD0C;
    PUSH32(esp, 0x000E0476u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E0476: ;
    POP32(esp, ebx);

loc_000E0477: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E048E; /* jne: not equal / not zero */

loc_000E047E: ;
    MEM32(edi) = 0;

loc_000E0484: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000E048E: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E049B; /* jne: not equal / not zero */

loc_000E0496: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000E049B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0484; /* je: equal / zero */

loc_000E04A0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x000E04B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E04ADu); } /* indirect call */
    }

loc_000E04B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E04C0
 * Original: 0x000E04C0 - 0x000E051C (92 bytes, 42 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E04C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E04C0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E050D; /* je: equal / zero */

loc_000E04CB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E04FE; /* je: equal / zero */

loc_000E04D0: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E04F1; /* je: equal / zero */

loc_000E04D5: ;
    PUSH32(esp, 0x32D030);
    eax = 0x1B;
    ecx = 0x324878;
    PUSH32(esp, 0x000E04E9u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E04E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000E04F1: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E04F9u); RECOMP_ABI_CALL(0x000E3E50u, sub_000E3E50); /* call 0x000E3E50 */

loc_000E04F9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000E04FE: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E0508u); RECOMP_ABI_CALL(0x000E4710u, sub_000E4710); /* call 0x000E4710 */

loc_000E0508: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000E050D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E0517u); RECOMP_ABI_CALL(0x000E4120u, sub_000E4120); /* call 0x000E4120 */

loc_000E0517: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E0520
 * Original: 0x000E0520 - 0x000E0548 (40 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0520: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0540; /* jne: not equal / not zero */

loc_000E0529: ;
    PUSH32(esp, 0x32D030);
    eax = 0x23;
    ecx = 0x32D018;
    PUSH32(esp, 0x000E053Du); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E053D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E0540: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x28); PUSH32(esp, 0x000E0546u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E0543u); } /* indirect call */
    }

loc_000E0546: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E0550
 * Original: 0x000E0550 - 0x000E0567 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0550: ;
    PUSH32(esp, 0x000E0555u); RECOMP_ABI_CALL(0x000E1F40u, sub_000E1F40); /* call 0x000E1F40 */

loc_000E0555: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x32CFD0;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x68) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0570
 * Original: 0x000E0570 - 0x000E0577 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0570(void)
{

loc_000E0570: ;
    MEM32(eax) = 0x32CFD0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0580
 * Original: 0x000E0580 - 0x000E058A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0580(void)
{

loc_000E0580: ;
    eax = esi;
    PUSH32(esp, 0x000E0587u); RECOMP_ABI_CALL(0x000E09C0u, sub_000E09C0); /* call 0x000E09C0 */

loc_000E0587: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0590
 * Original: 0x000E0590 - 0x000E0595 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0590: ;
    g_seh_ebp = ebp; sub_000C7A90(); return; /* tail jmp 0x000C7A90 */

}

/**
 * sub_000E05A0
 * Original: 0x000E05A0 - 0x000E05B0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E05A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E05A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E05AE; /* je: equal / zero */

loc_000E05A9: ;
    PUSH32(esp, 0x000E05AEu); RECOMP_ABI_CALL(0x000E6880u, sub_000E6880); /* call 0x000E6880 */

loc_000E05AE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E05B0
 * Original: 0x000E05B0 - 0x000E05C0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E05B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E05B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E05BE; /* je: equal / zero */

loc_000E05B9: ;
    PUSH32(esp, 0x000E05BEu); RECOMP_ABI_CALL(0x000E5F00u, sub_000E5F00); /* call 0x000E5F00 */

loc_000E05BE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E05C0
 * Original: 0x000E05C0 - 0x000E05F0 (48 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E05C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E05C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E05E6; /* je: equal / zero */

loc_000E05C5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E05E6; /* je: equal / zero */

loc_000E05CF: ;
    /* nop */

loc_000E05D0: ;
    eax = ecx;
    edx = MEM32(eax + 8);
    ecx = MEM32(ecx);
    eax = edx;
    PUSH32(esp, 0x000E05DEu); RECOMP_ABI_CALL(0x000E6AA0u, sub_000E6AA0); /* call 0x000E6AA0 */

loc_000E05DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E05EB; /* je: equal / zero */

loc_000E05E2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E05D0; /* jne: not equal / not zero */

loc_000E05E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000E05EB: ;
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E05F0
 * Original: 0x000E05F0 - 0x000E06C4 (212 bytes, 84 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E05F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E05F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E0600u); RECOMP_ABI_CALL(0x000E05C0u, sub_000E05C0); /* call 0x000E05C0 */

loc_000E0600: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E062E; /* jne: not equal / not zero */

loc_000E0606: ;
    eax = 0x4C;
    PUSH32(esp, 0x000E0610u); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000E0610: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E061E; /* je: equal / zero */

loc_000E0614: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000E061Cu); RECOMP_ABI_CALL(0x000E5E20u, sub_000E5E20); /* call 0x000E5E20 */

loc_000E061C: ;
    goto loc_000E0620;

loc_000E061E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E0620: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E067D; /* je: equal / zero */

loc_000E0626: ;
    PUSH32(esp, eax);
    edi = ebp;
    PUSH32(esp, 0x000E062Eu); RECOMP_ABI_CALL(0x000E09D0u, sub_000E09D0); /* call 0x000E09D0 */

loc_000E062E: ;
    eax = 0x24;
    PUSH32(esp, 0x000E0638u); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000E0638: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E064D; /* je: equal / zero */

loc_000E063C: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E0647u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E0647: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0687; /* jne: not equal / not zero */

loc_000E064D: ;
    eax = ebx;
    PUSH32(esp, 0x000E0654u); RECOMP_ABI_CALL(0x000E6860u, sub_000E6860); /* call 0x000E6860 */

loc_000E0654: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E067D; /* je: equal / zero */

loc_000E0658: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp;
    PUSH32(esp, 0x000E0662u); RECOMP_ABI_CALL(0x000E7200u, sub_000E7200); /* call 0x000E7200 */

loc_000E0662: ;
    edi = eax;
    eax = ebp;
    PUSH32(esp, 0x000E066Bu); RECOMP_ABI_CALL(0x000D9FD0u, sub_000D9FD0); /* call 0x000D9FD0 */

loc_000E066B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E067D; /* je: equal / zero */

loc_000E066F: ;
    esi = ebx;
    PUSH32(esp, 0x000E0676u); RECOMP_ABI_CALL(0x000E5E70u, sub_000E5E70); /* call 0x000E5E70 */

loc_000E0676: ;
    eax = ebx;
    PUSH32(esp, 0x000E067Du); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000E067D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_000E0687: ;
    eax = ebx;
    PUSH32(esp, 0x000E068Eu); RECOMP_ABI_CALL(0x000E5FB0u, sub_000E5FB0); /* call 0x000E5FB0 */

loc_000E068E: ;
    eax = ebx;
    PUSH32(esp, 0x000E0695u); RECOMP_ABI_CALL(0x000E71E0u, sub_000E71E0); /* call 0x000E71E0 */

loc_000E0695: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E06A6; /* je: equal / zero */

loc_000E069A: ;
    eax = ebx;
    PUSH32(esp, 0x000E06A1u); RECOMP_ABI_CALL(0x000E71E0u, sub_000E71E0); /* call 0x000E71E0 */

loc_000E06A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E06BB; /* jne: not equal / not zero */

loc_000E06A6: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E06B6u); RECOMP_ABI_CALL(0x000E6420u, sub_000E6420); /* call 0x000E6420 */

loc_000E06B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E067D; /* je: equal / zero */

loc_000E06BB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000E06D0
 * Original: 0x000E06D0 - 0x000E0763 (147 bytes, 51 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E06D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E06D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000E06F9; /* jne: not equal / not zero */

loc_000E06DD: ;
    PUSH32(esp, 0xEE);
    PUSH32(esp, 0x32D12C);
    edx = 0x32D178;
    ecx = 0x32D13C;
    PUSH32(esp, 0x000E06F6u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E06F6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E06F9: ;
    eax = ebp;
    PUSH32(esp, 0x000E0700u); RECOMP_ABI_CALL(0x000E0880u, sub_000E0880); /* call 0x000E0880 */

loc_000E0700: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0728; /* jne: not equal / not zero */

loc_000E0706: ;
    PUSH32(esp, 0xF3);
    PUSH32(esp, 0x324878);
    edx = 0x32D114;
    ecx = 0x32D13C;
    PUSH32(esp, 0x000E071Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E071F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E0728: ;
    eax = ebx;
    ebx = esi;
    PUSH32(esp, 0x000E0731u); RECOMP_ABI_CALL(0x000E67C0u, sub_000E67C0); /* call 0x000E67C0 */

loc_000E0731: ;
    eax = esi;
    PUSH32(esp, 0x000E0738u); RECOMP_ABI_CALL(0x000E6860u, sub_000E6860); /* call 0x000E6860 */

loc_000E0738: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E075D; /* je: equal / zero */

loc_000E073C: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp;
    PUSH32(esp, 0x000E0747u); RECOMP_ABI_CALL(0x000E7200u, sub_000E7200); /* call 0x000E7200 */

loc_000E0747: ;
    edi = eax;
    eax = ebp;
    PUSH32(esp, 0x000E0750u); RECOMP_ABI_CALL(0x000D9FD0u, sub_000D9FD0); /* call 0x000D9FD0 */

loc_000E0750: ;
    PUSH32(esp, 0x000E0755u); RECOMP_ABI_CALL(0x000E5E70u, sub_000E5E70); /* call 0x000E5E70 */

loc_000E0755: ;
    eax = esi;
    PUSH32(esp, 0x000E075Cu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000E075C: ;
    POP32(esp, edi);

loc_000E075D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0770
 * Original: 0x000E0770 - 0x000E07A5 (53 bytes, 15 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0770: ;
    PUSH32(esp, ebx);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0793; /* jne: not equal / not zero */

loc_000E0777: ;
    PUSH32(esp, 0x11D);
    PUSH32(esp, 0x32D12C);
    edx = 0x32D0F0;
    ecx = 0x32D13C;
    PUSH32(esp, 0x000E0790u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E0790: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E0793: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x000E079Cu); RECOMP_ABI_CALL(0x000E0880u, sub_000E0880); /* call 0x000E0880 */

loc_000E079C: ;
    PUSH32(esp, 0x000E07A1u); RECOMP_ABI_CALL(0x000E65E0u, sub_000E65E0); /* call 0x000E65E0 */

loc_000E07A1: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E07B0
 * Original: 0x000E07B0 - 0x000E07E5 (53 bytes, 15 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E07B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E07B0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E07D3; /* jne: not equal / not zero */

loc_000E07B7: ;
    PUSH32(esp, 0x131);
    PUSH32(esp, 0x32D12C);
    edx = 0x32D0CC;
    ecx = 0x32D13C;
    PUSH32(esp, 0x000E07D0u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E07D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E07D3: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x000E07DCu); RECOMP_ABI_CALL(0x000E0880u, sub_000E0880); /* call 0x000E0880 */

loc_000E07DC: ;
    PUSH32(esp, 0x000E07E1u); RECOMP_ABI_CALL(0x000E65F0u, sub_000E65F0); /* call 0x000E65F0 */

loc_000E07E1: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E07F0
 * Original: 0x000E07F0 - 0x000E080B (27 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E07F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E07F0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0809; /* je: equal / zero */

loc_000E07F7: ;
    PUSH32(esp, ebx);

loc_000E07F8: ;
    eax = esi;
    ebx = MEM32(eax + 8);
    esi = MEM32(esi);
    PUSH32(esp, 0x000E0804u); RECOMP_ABI_CALL(0x000E6980u, sub_000E6980); /* call 0x000E6980 */

loc_000E0804: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E07F8; /* jne: not equal / not zero */

loc_000E0808: ;
    POP32(esp, ebx);

loc_000E0809: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E0810
 * Original: 0x000E0810 - 0x000E0878 (104 bytes, 37 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0810: ;
    PUSH32(esp, ebx);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0837; /* jne: not equal / not zero */

loc_000E0817: ;
    PUSH32(esp, 0x162);
    PUSH32(esp, 0x324878);
    edx = 0x32D0BC;
    ecx = 0x32D13C;
    PUSH32(esp, 0x000E0830u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E0830: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E0837: ;
    eax = edi;
    PUSH32(esp, 0x000E083Eu); RECOMP_ABI_CALL(0x000E0880u, sub_000E0880); /* call 0x000E0880 */

loc_000E083E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0862; /* jne: not equal / not zero */

loc_000E0842: ;
    PUSH32(esp, 0x16A);
    PUSH32(esp, 0x324878);
    edx = 0x32D0A4;
    ecx = 0x32D13C;
    PUSH32(esp, 0x000E085Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E085B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E0862: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0x000E086Bu); RECOMP_ABI_CALL(0x000E6600u, sub_000E6600); /* call 0x000E6600 */

loc_000E086B: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x000E0873u); RECOMP_ABI_CALL(0x000E0930u, sub_000E0930); /* call 0x000E0930 */

loc_000E0873: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E0880
 * Original: 0x000E0880 - 0x000E08AA (42 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0880: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E08A0; /* je: equal / zero */

loc_000E0888: ;
    eax = esi;
    edi = MEM32(eax + 8);
    esi = MEM32(esi);
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0x000E0898u); RECOMP_ABI_CALL(0x000E6AB0u, sub_000E6AB0); /* call 0x000E6AB0 */

loc_000E0898: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E08A5; /* jne: not equal / not zero */

loc_000E089C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0888; /* jne: not equal / not zero */

loc_000E08A0: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E08A5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E08B0
 * Original: 0x000E08B0 - 0x000E0923 (115 bytes, 39 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E08B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E08B0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E08D9; /* jne: not equal / not zero */

loc_000E08B7: ;
    PUSH32(esp, 0x19E);
    PUSH32(esp, 0x324878);
    edx = 0x32D0BC;
    ecx = 0x32D13C;
    PUSH32(esp, 0x000E08D0u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E08D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E08D9: ;
    eax = edi;
    PUSH32(esp, 0x000E08E0u); RECOMP_ABI_CALL(0x000E0880u, sub_000E0880); /* call 0x000E0880 */

loc_000E08E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0906; /* jne: not equal / not zero */

loc_000E08E4: ;
    PUSH32(esp, 0x1A6);
    PUSH32(esp, 0x324878);
    edx = 0x32D0A4;
    ecx = 0x32D13C;
    PUSH32(esp, 0x000E08FDu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E08FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E0906: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0x000E0914u); RECOMP_ABI_CALL(0x000E6680u, sub_000E6680); /* call 0x000E6680 */

loc_000E0914: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x000E091Cu); RECOMP_ABI_CALL(0x000E0930u, sub_000E0930); /* call 0x000E0930 */

loc_000E091C: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E0930
 * Original: 0x000E0930 - 0x000E0976 (70 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0930: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0971; /* je: equal / zero */

loc_000E093D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_000E0940: ;
    eax = ebx;
    esi = MEM32(eax + 8);
    edi = ebx;
    ebx = MEM32(ebx);
    eax = esi;
    PUSH32(esp, 0x000E0950u); RECOMP_ABI_CALL(0x000E6860u, sub_000E6860); /* call 0x000E6860 */

loc_000E0950: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E096B; /* je: equal / zero */

loc_000E0954: ;
    eax = ebp;
    PUSH32(esp, 0x000E095Bu); RECOMP_ABI_CALL(0x000D9FD0u, sub_000D9FD0); /* call 0x000D9FD0 */

loc_000E095B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E096B; /* je: equal / zero */

loc_000E095F: ;
    PUSH32(esp, 0x000E0964u); RECOMP_ABI_CALL(0x000E5E70u, sub_000E5E70); /* call 0x000E5E70 */

loc_000E0964: ;
    eax = esi;
    PUSH32(esp, 0x000E096Bu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000E096B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0940; /* jne: not equal / not zero */

loc_000E096F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000E0971: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0980
 * Original: 0x000E0980 - 0x000E09B9 (57 bytes, 18 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0980: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E09A4; /* jne: not equal / not zero */

loc_000E0988: ;
    PUSH32(esp, 0x1D8);
    PUSH32(esp, 0x32D12C);
    edx = 0x32D078;
    ecx = 0x32D13C;
    PUSH32(esp, 0x000E09A1u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E09A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E09A4: ;
    eax = MEM32(esp + 0xC);
    ebx = edi;
    PUSH32(esp, 0x000E09AFu); RECOMP_ABI_CALL(0x000E0880u, sub_000E0880); /* call 0x000E0880 */

loc_000E09AF: ;
    PUSH32(esp, 0x000E09B4u); RECOMP_ABI_CALL(0x000E65B0u, sub_000E65B0); /* call 0x000E65B0 */

loc_000E09B4: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E09C0
 * Original: 0x000E09C0 - 0x000E09CB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E09C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E09C0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E09D0
 * Original: 0x000E09D0 - 0x000E0A49 (121 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E09D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E09D0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E09EB; /* jne: not equal / not zero */

loc_000E09D4: ;
    PUSH32(esp, 0x324394);
    eax = 0xE2;
    ecx = 0x324368;
    PUSH32(esp, 0x000E09E8u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E09E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E09EB: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi);
    PUSH32(esp, esi);
    eax = 0xC;
    PUSH32(esp, 0x000E09F9u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000E09F9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0A24; /* je: equal / zero */

loc_000E09FF: ;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = 0;
    MEM32(edi + 8) = MEM32(edi + 8) + 1;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E0A24; /* jne: not equal / not zero */

loc_000E0A0D: ;
    PUSH32(esp, 0x324394);
    eax = 0x65;
    ecx = 0x324318;
    PUSH32(esp, 0x000E0A21u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E0A21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E0A24: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 8) = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0A3D; /* je: equal / zero */

loc_000E0A31: ;
    MEM32(eax + 4) = esi;
    MEM32(edi) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E0A3D: ;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0A50
 * Original: 0x000E0A50 - 0x000E0A81 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0A50: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0A6B; /* jne: not equal / not zero */

loc_000E0A54: ;
    PUSH32(esp, 0x324394);
    eax = 0x1BD;
    ecx = 0x324368;
    PUSH32(esp, 0x000E0A68u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E0A68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E0A6B: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0A80; /* je: equal / zero */

loc_000E0A72: ;
    eax = esi;
    PUSH32(esp, 0x000E0A79u); RECOMP_ABI_CALL(0x000E6D40u, sub_000E6D40); /* call 0x000E6D40 */

loc_000E0A79: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0A72; /* jne: not equal / not zero */

loc_000E0A80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0A90
 * Original: 0x000E0A90 - 0x000E0AB4 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000E0A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0A90: ;
    eax = 0x58;
    PUSH32(esp, 0x000E0A9Au); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000E0A9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0AA7; /* je: equal / zero */

loc_000E0A9E: ;
    PUSH32(esp, 0x000E0AA3u); RECOMP_ABI_CALL(0x000E0AC0u, sub_000E0AC0); /* call 0x000E0AC0 */

loc_000E0AA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0AAB; /* jne: not equal / not zero */

loc_000E0AA7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000E0AAB: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E0AC0
 * Original: 0x000E0AC0 - 0x000E0AF6 (54 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0AC0: ;
    PUSH32(esp, 0x000E0AC5u); RECOMP_ABI_CALL(0x000DD410u, sub_000DD410); /* call 0x000DD410 */

loc_000E0AC5: ;
    MEM32(eax) = 0x32D198;
    MEM32(eax + 0x44) = 0;
    ecx = eax + 0x54;
    edx = 2;
    /* nop */

loc_000E0AE0: ;
    MEM16(ecx + -4) = 0;
    MEM16(ecx) = 0;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E0AE0; /* jne: not equal / not zero */

loc_000E0AF1: ;
    g_seh_ebp = ebp; sub_000E0B40(); return; /* tail jmp 0x000E0B40 */

}

/**
 * sub_000E0B00
 * Original: 0x000E0B00 - 0x000E0B1E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0B00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    PUSH32(esp, 0x000E0B0Au); RECOMP_ABI_CALL(0x000E0B20u, sub_000E0B20); /* call 0x000E0B20 */

loc_000E0B0A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000E0B1A; /* je: equal / zero */

loc_000E0B13: ;
    PUSH32(esp, 0x000E0B18u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000E0B18: ;
    eax = esi;

loc_000E0B1A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0B20
 * Original: 0x000E0B20 - 0x000E0B36 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0B20: ;
    PUSH32(esp, esi);
    esi = eax;
    MEM32(esi) = 0x32D198;
    PUSH32(esp, 0x000E0B2Eu); RECOMP_ABI_CALL(0x000E0B50u, sub_000E0B50); /* call 0x000E0B50 */

loc_000E0B2E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DD470(); return; /* tail jmp 0x000DD470 */

}

/**
 * sub_000E0B40
 * Original: 0x000E0B40 - 0x000E0B49 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0B40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0B40: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x48) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0B50
 * Original: 0x000E0B50 - 0x000E0B72 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0B50: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0B71; /* je: equal / zero */

loc_000E0B57: ;
    PUSH32(esp, 0x000E0B5Cu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000E0B5C: ;
    MEM32(esi + 0x4C) = 0;
    MEM32(esi + 0x48) = 0;
    MEM32(esi + 0x38) = 0;

loc_000E0B71: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0B80
 * Original: 0x000E0B80 - 0x000E0F5F (991 bytes, 352 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0B80: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000E0B9A; /* jne: not equal / not zero */

loc_000E0B95: ;
    PUSH32(esp, 0x000E0B9Au); RECOMP_ABI_CALL(0x002930BAu, sub_002930BA); /* call 0x002930BA */

loc_000E0B9A: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0BB8; /* jne: not equal / not zero */

loc_000E0BA2: ;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = 0;
    eax = 2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000E0BB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0BCE; /* jne: not equal / not zero */

loc_000E0BBD: ;
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000E0BCE: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0BFA; /* jne: not equal / not zero */

loc_000E0BD9: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    MEM32(esi + 0x3C) = 1;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000E0BF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E0BF0u); } /* indirect call */
    }

loc_000E0BF3: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000E0BFA: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    ebx = ebx >> 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFF (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E0C15; /* je: equal / zero */

loc_000E0C14: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E0C15: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x38);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E0C3B; /* jae: above or equal (unsigned >=) */

loc_000E0C22: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E0C33; /* je: equal / zero */

loc_000E0C2C: ;
    PUSH32(esp, 0x000E0C31u); RECOMP_ABI_CALL(0x000ED260u, sub_000ED260); /* call 0x000ED260 */

loc_000E0C31: ;
    goto loc_000E0C38;

loc_000E0C33: ;
    PUSH32(esp, 0x000E0C38u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000E0C38: ;
    MEM32(esi + 0x4C) = eax;

loc_000E0C3B: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 0x48;
    MEM32(edi) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E0C67; /* je: equal / zero */

loc_000E0C49: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000E0C58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E0C55u); } /* indirect call */
    }

loc_000E0C58: ;
    ecx = MEM32(edi);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    goto loc_000E0CE9;

loc_000E0C67: ;
    edx = ZX16(MEM16(esi + 0x16));
    eax = MEM32(esi + 0x2C);
    ebp = MEM32(esi + 0x4C);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edx);
    if (CMP_EQ(_fa, _fb)) goto loc_000E0C9A; /* je: equal / zero */

loc_000E0C78: ;
    eax = esi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E0C82u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E0C82: ;
    eax = ZX16(MEM16(esi + 0x16));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = esi + 0x50;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E0C95u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E0C95: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E0CA7;

loc_000E0C9A: ;
    eax = esi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E0CA4u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E0CA4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E0CA7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000E0D55; /* jbe: below or equal (unsigned <=) */

loc_000E0CB6: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    edx = ZX16(MEM16(esi + 0x16));
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000E0D46; /* jne: not equal / not zero */

loc_000E0CC7: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    eax = eax + edx * 2;

loc_000E0CCF: ;
    ecx = MEM32(esi + 0x34);
    MEM32(esp + 0x20) = eax;
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000E0CE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E0CE2u); } /* indirect call */
    }

loc_000E0CE5: ;
    MEM32(esp + 0x14) = eax;

loc_000E0CE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0D09; /* je: equal / zero */

loc_000E0CEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0D09; /* je: equal / zero */

loc_000E0CF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_000E0DEA; /* jne: not equal / not zero */

loc_000E0CFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0DEA; /* jne: not equal / not zero */

loc_000E0D09: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    ebx = MEM32(esi + 0x4C);
    if (CMP_B(_fa, _fb)) goto loc_000E0D5B; /* jb: below (unsigned <) */

loc_000E0D13: ;
    eax = ZX16(MEM16(esi + 0x16));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = eax + eax;
    PUSH32(esp, edx);
    eax = ebx + ecx * 2;
    PUSH32(esp, eax);
    ecx = esi + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E0D2Cu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E0D2C: ;
    eax = ZX16(MEM16(esi + 0x16));
    ecx = MEM32(edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = eax + eax;
    PUSH32(esp, edx);
    edx = ebx + ecx * 2;
    PUSH32(esp, edx);
    eax = esi + 0x54;
    PUSH32(esp, eax);
    goto loc_000E0D78;

loc_000E0D46: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = ecx;
    eax = eax + edx * 4;
    goto loc_000E0CCF;

loc_000E0D55: ;
    MEM32(esp + 0x14) = ecx;
    goto loc_000E0D09;

loc_000E0D5B: ;
    ecx = ZX16(MEM16(esi + 0x16));
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    edi = esi + 0x50;
    edx = esi + 0x54;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E0D6Fu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E0D6F: ;
    eax = ZX16(MEM16(esi + 0x16));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_000E0D78: ;
    PUSH32(esp, 0x000E0D7Du); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E0D7D: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x3C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000E0DAB; /* jne: not equal / not zero */

loc_000E0D8E: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x1C), 0xFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E0DAB; /* jne: not equal / not zero */

loc_000E0D97: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0DAB; /* jne: not equal / not zero */

loc_000E0D9D: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000E0DA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E0DA6u); } /* indirect call */
    }

loc_000E0DA9: ;
    goto loc_000E0DE6;

loc_000E0DAB: ;
    eax = MEM32(esi + 0x1C);
    ecx = eax;
    ecx = ecx ^ 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_000E0DBF; /* je: equal / zero */

loc_000E0DB8: ;
    eax = eax ^ 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa != 0)) goto loc_000E0DDA; /* jne: not equal / not zero */

loc_000E0DBF: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0DDA; /* jne: not equal / not zero */

loc_000E0DC5: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0DDA; /* jne: not equal / not zero */

loc_000E0DCC: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000E0DD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E0DD5u); } /* indirect call */
    }

loc_000E0DD8: ;
    goto loc_000E0DE6;

loc_000E0DDA: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000E0DE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E0DE3u); } /* indirect call */
    }

loc_000E0DE6: ;
    MEM32(esp + 0x10) = eax;

loc_000E0DEA: ;
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    ebp = MEM32(esp + 0x30);
    MEM32(ebp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E0E04; /* je: equal / zero */

loc_000E0DFA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0E04; /* je: equal / zero */

loc_000E0DFF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0E0A; /* jne: not equal / not zero */

loc_000E0E04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E0E13; /* jbe: below or equal (unsigned <=) */

loc_000E0E0A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0F31; /* jne: not equal / not zero */

loc_000E0E13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0F53; /* je: equal / zero */

loc_000E0E1B: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 4);
    edi = MEM32(esi + 0x2C);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x24) = edx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x1C));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x1C)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000E0E40; /* jbe: below or equal (unsigned <=) */

loc_000E0E3B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;

loc_000E0E40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E0E5B; /* jbe: below or equal (unsigned <=) */

loc_000E0E44: ;
    PUSH32(esp, 0x32D3D0);
    eax = 0xFF;
    ecx = 0x32D39C;
    PUSH32(esp, 0x000E0E58u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E0E58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E0E5B: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    edi = MEM32(esi + 0x4C);
    if (CMP_B(_fa, _fb)) goto loc_000E0E9F; /* jb: below (unsigned <) */

loc_000E0E66: ;
    eax = ZX16(MEM16(esi + 0x16));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = eax + eax;
    PUSH32(esp, edx);
    eax = edi + ecx * 2;
    PUSH32(esp, eax);
    ecx = esi + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E0E7Fu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E0E7F: ;
    eax = ZX16(MEM16(esi + 0x16));
    ecx = MEM32(ebp);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = eax + eax;
    PUSH32(esp, edx);
    edx = edi + ecx * 2;
    PUSH32(esp, edx);
    eax = esi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E0E9Du); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E0E9D: ;
    goto loc_000E0EC5;

loc_000E0E9F: ;
    ecx = ZX16(MEM16(esi + 0x16));
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ebx = esi + 0x50;
    edx = esi + 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E0EB3u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E0EB3: ;
    eax = ZX16(MEM16(esi + 0x16));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E0EC1u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E0EC1: ;
    ebx = MEM32(esp + 0x2C);

loc_000E0EC5: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x3C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000E0EF3; /* jne: not equal / not zero */

loc_000E0ED6: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x1C), 0xFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E0EF3; /* jne: not equal / not zero */

loc_000E0EDF: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0EF3; /* jne: not equal / not zero */

loc_000E0EE5: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000E0EF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E0EEEu); } /* indirect call */
    }

loc_000E0EF1: ;
    goto loc_000E0F2E;

loc_000E0EF3: ;
    eax = MEM32(esi + 0x1C);
    ecx = eax;
    ecx = ecx ^ 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_000E0F07; /* je: equal / zero */

loc_000E0F00: ;
    eax = eax ^ 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa != 0)) goto loc_000E0F22; /* jne: not equal / not zero */

loc_000E0F07: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0F22; /* jne: not equal / not zero */

loc_000E0F0D: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0F22; /* jne: not equal / not zero */

loc_000E0F14: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000E0F20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E0F1Du); } /* indirect call */
    }

loc_000E0F20: ;
    goto loc_000E0F2E;

loc_000E0F22: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000E0F2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E0F2Bu); } /* indirect call */
    }

loc_000E0F2E: ;
    MEM32(ebp) = eax;

loc_000E0F31: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E0F53; /* jbe: below or equal (unsigned <=) */

loc_000E0F3C: ;
    PUSH32(esp, 0x32D3D0);
    eax = 0x120;
    ecx = 0x32D36C;
    PUSH32(esp, 0x000E0F50u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E0F50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E0F53: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E0F60
 * Original: 0x000E0F60 - 0x000E10BB (347 bytes, 139 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000E0F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0F60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(esi + 0x1C);
    MEM32(ebp + -16) = eax;
    SET_LO16(eax, MEM16(esi + 0x16));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000E0FD6; /* jne: not equal / not zero */

loc_000E0F91: ;
    edx = MEM32(edi + 4);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = ecx;
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    edi = MEM32(ebp + 8);
    edx = MEM32(ebp + -16);
    esi = MEM32(ebp + -8);
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000E0FAF: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    esi = esi + 4;
    if (CMP_AE(_fa, _fb)) goto loc_000E0FC0; /* jae: above or equal (unsigned >=) */

loc_000E0FB8: ;
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + -4) = ecx;
    goto loc_000E0FAF;

loc_000E0FC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + 8) = edi;
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000E0FD6: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E1021; /* jne: not equal / not zero */

loc_000E0FDC: ;
    eax = MEM32(edi + 4);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = ecx;
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    edi = MEM32(ebp + 8);
    edx = MEM32(ebp + -16);
    esi = MEM32(ebp + -8);
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000E0FF9: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    esi = esi + 2;
    if (CMP_AE(_fa, _fb)) goto loc_000E100B; /* jae: above or equal (unsigned >=) */

loc_000E1002: ;
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esi + -2) = LO16(ecx);
    goto loc_000E0FF9;

loc_000E100B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + 8) = edi;
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000E1021: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1049; /* je: equal / zero */

loc_000E1027: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 6 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1049; /* je: equal / zero */

loc_000E102D: ;
    PUSH32(esp, 0x184);
    PUSH32(esp, 0x32D2B8);
    edx = 0x32D320;
    ecx = 0x32D3D0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1046u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E1046: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E1049: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(edi + 4);
    MEM32(ebp + -8) = 0;
    MEM32(ebp + -16) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E10B0; /* je: equal / zero */

loc_000E105E: ;
    eax = ZX16(MEM16(esi + 0x16));

loc_000E1062: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E1086; /* jle: less or equal (signed <=) */

loc_000E1068: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -8);
    eax = eax + ebx * 2;

loc_000E1071: ;
    SET_LO16(ebx, MEM16(eax));
    MEM16(edx) = LO16(ebx);
    ebx = ZX16(MEM16(esi + 0x16));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E1071; /* jl: less (signed <) */

loc_000E1086: ;
    eax = ZX16(MEM16(esi + 0x16));
    ebx = MEM32(ebp + -8);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -4));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -8) = ebx;
    ebx = MEM32(edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000E1062; /* jne: not equal / not zero */

loc_000E10A5: ;
    eax = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000E10B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E1049
 * Original: 0x000E1049 - 0x000E10BB (114 bytes, 47 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1049(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E1049: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(edi + 4);
    MEM32(ebp + -8) = 0;
    MEM32(ebp + -16) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E10B0; /* je: equal / zero */

loc_000E105E: ;
    eax = ZX16(MEM16(esi + 0x16));

loc_000E1062: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E1086; /* jle: less or equal (signed <=) */

loc_000E1068: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -8);
    eax = eax + ebx * 2;

loc_000E1071: ;
    SET_LO16(ebx, MEM16(eax));
    MEM16(edx) = LO16(ebx);
    ebx = ZX16(MEM16(esi + 0x16));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E1071; /* jl: less (signed <) */

loc_000E1086: ;
    eax = ZX16(MEM16(esi + 0x16));
    ebx = MEM32(ebp + -8);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -4));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -8) = ebx;
    ebx = MEM32(edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000E1062; /* jne: not equal / not zero */

loc_000E10A5: ;
    eax = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000E10B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E10C0
 * Original: 0x000E10C0 - 0x000E16B6 (1526 bytes, 432 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000E10C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E10C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x2C);
    ecx = MEM32(edi + 0x4C);
    MEM32(ebp + -24) = eax;
    eax = MEM32(edi + 0x1C);
    MEM32(ebp + -20) = eax;
    SET_LO16(eax, MEM16(edi + 0x16));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000E134F; /* jne: not equal / not zero */

loc_000E10FB: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(edx + 4);
    MEM32(ebp + -16) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000E11E8; /* jne: not equal / not zero */

loc_000E110C: ;
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    eax = 1;
    mm5 = MMX_MEM(0x344368); /* movq */
    esi = MEM32(ebp + -4);
    edx = MEM32(ebp + -24);
    ebx = MEM32(ebp + -4);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = MEM32(ebp + -16);

loc_000E1128: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E11E0; /* jae: above or equal (unsigned >=) */

loc_000E1130: ;
    eax = MEM32(ebp + -12);
    ebx = ebx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x650AD8) = esi;
    MEM32(0x650ADC) = esi;
    ecx = MEM32(ebx + eax);
    edx = MEM32(ebx + eax + 4);
    ebx = MEM32(ebp + -20);
    MEM32(0x650AD0) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x650AC8) = ecx;
    MEM32(0x650AC0) = ebx;
    MEM32(0x650AC4) = ebx;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = edi;
    mm2 = MMX_MEM(0x650AD8); /* movq */
    mm3 = MMX_MEM(0x650AC0); /* movq */
    ecx = MEM32(ebx + eax);
    edx = MEM32(ebx + eax + 4);
    MEM32(0x650ACC) = ecx;
    MEM32(0x650AD4) = edx;
    mm0 = MMX_MEM(0x650AC8); /* movq */
    mm2 = MMX_PAND(mm2, mm5); /* pand */
    mm1 = MMX_MEM(0x650AD0); /* movq */
    mm3 = MMX_PAND(mm3, mm5); /* pand */
    ebx = MEM32(ebp + -20);
    mm2 = MMX_PACKSSDW(mm2, mm3); /* packssdw */
    mm1 = MMX_PSUBSW(mm1, mm0); /* psubsw */
    mm2 = MMX_PSLLW(mm2, 3u); /* psllw */
    esi = esi + ebx * 2;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = esi;
    mm1 = MMX_PMULHW(mm1, mm2); /* pmulhw */
    edx = MEM32(ebp + -24);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm1 = MMX_PSLLW(mm1, 1u); /* psllw */
    mm1 = MMX_PADDSW(mm1, mm0); /* paddsw */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MMX_STORE(edi + -8, mm1); /* movq */
    goto loc_000E1128;

loc_000E11E0: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */
    goto loc_000E12A4;

loc_000E11E8: ;
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    ebx = MEM32(ebp + -20);
    MEM32(0x650AB8) = ebx;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x650ABC) = ebx;
    mm2 = MMX_MEM(0x650AB8); /* movq */
    MEM32(0x650AB8) = ebx;
    mm5 = MMX_MEM(0x650AB8); /* movq */
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x650AB0) = esi;
    MEM32(0x650AB4) = esi;
    mm3 = MMX_MEM(0x650AB0); /* movq */
    MEM32(0x650AA8) = 0xFFFFFFFCu;
    MEM32(0x650AAC) = 0xFFFFFFFCu;
    mm4 = MMX_MEM(0x650AA8); /* movq */
    edx = 1;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -12);
    edi = MEM32(ebp + -16);

loc_000E1253: ;
    mm1 = mm2; /* movq */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    mm1 = MMX_PADDD(mm1, mm3); /* paddd */
    if (CMP_AE(_fa, _fb)) goto loc_000E128E; /* jae: above or equal (unsigned >=) */

loc_000E125D: ;
    mm1 = MMX_PSRLD(mm1, 10u); /* psrld */
    mm3 = MMX_PADDD(mm3, mm5); /* paddd */
    mm1 = MMX_PAND(mm1, mm4); /* pand */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMX_STORE(0x650AC8, mm1); /* movq */
    ebx = MEM32(0x650AC8);
    esi = MEM32(0x650ACC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebx + ecx);
    esi = MEM32(esi + ecx);
    MEM32(edi + -8) = ebx;
    MEM32(edi + -4) = esi;
    goto loc_000E1253;

loc_000E128E: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = edi;
    esi = mm3.ud[0]; /* movd */
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = edx;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */

loc_000E12A4: ;
    esi = MEM32(ebp + 8);
    ebx = MEM32(ebp + -8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E12C9; /* jbe: below or equal (unsigned <=) */

loc_000E12AE: ;
    PUSH32(esp, 0x32D3D0);
    eax = 0x265;
    ecx = 0x32D294;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E12C2u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E12C2: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */

loc_000E12C9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000E169C; /* je: equal / zero */

loc_000E12CF: ;
    esi = MEM32(ebp + -4);

loc_000E12D2: ;
    edx = MEM32(ebp + -12);
    eax = esi;
    eax = eax >> 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(edi, MEM16(edx + eax + 2));
    MEM16(ebp + -24) = LO16(edi);
    SET_LO16(edi, MEM16(eax + edx));
    edx = (uint32_t)(int32_t)SMEM16(edx + eax + 6);
    MEM16(ebp + -8) = LO16(edi);
    edi = (uint32_t)(int32_t)SMEM16(ebp + -24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ebp + -24);
    ecx = esi;
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(edi + eax + 4);
    edi = (uint32_t)(int32_t)SMEM16(ebp + -8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + -8);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = SX16(LO16(edx));
    ecx = ZX16(LO16(eax));
    eax = MEM32(ebp + -16);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edx;
    edx = MEM32(ebp + -20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(edx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E12D2; /* jne: not equal / not zero */

loc_000E134A: ;
    goto loc_000E169F;

loc_000E134F: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E15C8; /* jne: not equal / not zero */

loc_000E1359: ;
    eax = MEM32(edx + 4);
    MEM32(ebp + -16) = eax;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E147B; /* jne: not equal / not zero */

loc_000E136A: ;
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    ecx = MEM32(ebp + -24);
    esi = MEM32(ebp + -4);
    edx = 3;
    ebx = MEM32(ebp + -4);
    mm5 = MMX_MEM(0x344368); /* movq */

loc_000E1380: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E1473; /* jae: above or equal (unsigned >=) */

loc_000E1388: ;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = MEM32(ebp + -12);
    ebx = ebx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x650AD8) = esi;
    eax = MEM32(ebp + -20);
    edi = MEM32(ebp + -4);
    ecx = MEM32(edx + ebx);
    ebx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x650AC8) = ecx;
    MEM32(0x650ADC) = eax;
    ebx = edi + ebx * 2;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(0x650AC0) = ebx;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + -20);
    ecx = MEM32(edx + eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x650AD0) = ecx;
    ebx = MEM32(edx + ebx);
    esi = edi + esi * 2;
    MEM32(0x650ACC) = ebx;
    MEM32(ebp + -4) = esi;
    MEM32(0x650AC4) = esi;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0xB) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = MEM32(ebp + -16);
    mm2 = MMX_MEM(0x650AD8); /* movq */
    mm3 = MMX_MEM(0x650AC0); /* movq */
    mm2 = MMX_PAND(mm2, mm5); /* pand */
    esi = esi & 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    mm3 = MMX_PAND(mm3, mm5); /* pand */
    mm0 = MMX_MEM(0x650AC8); /* movq */
    mm2 = MMX_PACKSSDW(mm2, mm3); /* packssdw */
    ebx = MEM32(edx + esi);
    mm1 = mm0; /* movq */
    MEM32(0x650AD4) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PUNPCKLWD(mm0, MMX_MEM(0x650AD0)); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, MMX_MEM(0x650AD0)); /* punpckhwd */
    mm4 = mm0; /* movq */
    mm0 = MMX_PUNPCKLDQ(mm0, mm1); /* punpckldq */
    esi = MEM32(ebp + -8);
    mm4 = MMX_PUNPCKHDQ(mm4, mm1); /* punpckhdq */
    MEM32(ebp + -16) = eax;
    mm4 = MMX_PSUBSW(mm4, mm0); /* psubsw */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm2 = MMX_PSLLW(mm2, 3u); /* psllw */
    ecx = MEM32(ebp + -20);
    mm4 = MMX_PMULHW(mm4, mm2); /* pmulhw */
    ebx = MEM32(ebp + -4);
    MEM32(ebp + -8) = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -24);
    esi = ebx;
    mm4 = MMX_PSLLW(mm4, 1u); /* psllw */
    MEM32(ebp + -4) = ebx;
    mm4 = MMX_PADDSW(mm4, mm0); /* paddsw */
    ebx = MEM32(ebp + -4);
    edx = MEM32(ebp + -8);
    MMX_STORE(eax + -8, mm4); /* movq */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E1380;

loc_000E1473: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */
    goto loc_000E1565;

loc_000E147B: ;
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    ebx = MEM32(ebp + -20);
    MEM32(0x650AA0) = ebx;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x650AA4) = ebx;
    mm2 = MMX_MEM(0x650AA0); /* movq */
    MEM32(0x650AA0) = ebx;
    mm5 = MMX_MEM(0x650AA0); /* movq */
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x650A98) = esi;
    MEM32(0x650A9C) = esi;
    mm3 = MMX_MEM(0x650A98); /* movq */
    MEM32(0x650A90) = 0xFFFFFFFEu;
    MEM32(0x650A94) = 0xFFFFFFFEu;
    mm4 = MMX_MEM(0x650A90); /* movq */
    edx = 1;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -12);
    edi = MEM32(ebp + -16);
    mm1 = mm2; /* movq */
    mm1 = MMX_PADDD(mm1, mm3); /* paddd */
    mm1 = MMX_PSRLD(mm1, 11u); /* psrld */
    mm3 = MMX_PADDD(mm3, mm5); /* paddd */
    mm1 = MMX_PAND(mm1, mm4); /* pand */
    MMX_STORE(0x650AC8, mm1); /* movq */
    ebx = MEM32(0x650AC8);
    esi = MEM32(0x650ACC);

loc_000E1509: ;
    mm1 = mm2; /* movq */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    mm1 = MMX_PADDD(mm1, mm3); /* paddd */
    if (CMP_AE(_fa, _fb)) goto loc_000E154C; /* jae: above or equal (unsigned >=) */

loc_000E1513: ;
    mm1 = MMX_PSRLD(mm1, 11u); /* psrld */
    ebx = MEM32(ebx + ecx);
    mm3 = MMX_PADDD(mm3, mm5); /* paddd */
    esi = MEM32(esi + ecx);
    mm1 = MMX_PAND(mm1, mm4); /* pand */
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMX_STORE(0x650AC8, mm1); /* movq */
    ebx = ebx | esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + -4) = ebx;
    ebx = MEM32(0x650AC8);
    esi = MEM32(0x650ACC);
    goto loc_000E1509;

loc_000E154C: ;
    mm3 = MMX_PSUBD(mm3, mm5); /* psubd */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = edi;
    esi = mm3.ud[0]; /* movd */
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = edx;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */

loc_000E1565: ;
    ecx = MEM32(ebp + 8);
    ebx = MEM32(ebp + -8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E169C; /* je: equal / zero */

loc_000E1573: ;
    esi = MEM32(ebp + -4);
    edx = MEM32(ebp + -16);
    /* nop */

loc_000E1580: ;
    edi = MEM32(ebp + -12);
    eax = esi;
    eax = eax >> 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1FFFFE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + edi));
    eax = (uint32_t)(int32_t)SMEM16(edi + eax + 2);
    edi = SX16(LO16(ecx));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esi;
    edi = edi & 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -28);
    MEM16(edx) = LO16(eax);
    _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E1580; /* jne: not equal / not zero */

loc_000E15C3: ;
    goto loc_000E169F;

loc_000E15C8: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E15F3; /* je: equal / zero */

loc_000E15CE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 6 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E15F3; /* je: equal / zero */

loc_000E15D4: ;
    PUSH32(esp, 0x357);
    PUSH32(esp, 0x32D2B8);
    edx = 0x32D248;
    ecx = 0x32D3D0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E15EDu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E15ED: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E15F3: ;
    ecx = ZX16(MEM16(edi + 0x16));
    eax = MEM32(edi + 0x4C);
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(ebp + -24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E16A2; /* je: equal / zero */

loc_000E160F: ;
    /* nop */

loc_000E1610: ;
    eax = esi;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -28));
    ecx = esi;
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(edi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x16), 0 (16-bit) */
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -20) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_000E167E; /* jbe: below or equal (unsigned <=) */

loc_000E1632: ;
    edx = MEM32(ebp + -16);
    eax = edx + eax * 2;
    goto loc_000E1640;

    /* nop */

loc_000E1640: ;
    SET_LO16(ecx, MEM16(eax));
    edx = MEM32(ebp + -28);
    edx = (uint32_t)(int32_t)SMEM16(eax + edx * 2);
    ecx = SX16(LO16(ecx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + -12));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -24);
    MEM16(ecx) = LO16(edx);
    edx = ZX16(MEM16(edi + 0x16));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(ebp + -20);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(ebp + -20) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000E1640; /* jl: less (signed <) */

loc_000E167B: ;
    edx = MEM32(ebp + 8);

loc_000E167E: ;
    _fb = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E1610; /* jne: not equal / not zero */

loc_000E1688: ;
    esi = esi & 0xFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 0x2C) = esi;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000E169C: ;
    esi = MEM32(ebp + -4);

loc_000E169F: ;
    edi = MEM32(ebp + -28);

loc_000E16A2: ;
    esi = esi & 0xFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 0x2C) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E16C0
 * Original: 0x000E16C0 - 0x000E1F35 (2165 bytes, 707 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000E16C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E16C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx);
    edx = MEM32(esi + 0x4C);
    MEM32(ebp + -16) = eax;
    SET_LO16(eax, MEM16(esi + 0x16));
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000E1921; /* jne: not equal / not zero */

loc_000E16FB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E17A2; /* je: equal / zero */

loc_000E170C: ;
    goto loc_000E1711;

loc_000E170E: ;
    edx = MEM32(ebp + -4);

loc_000E1711: ;
    ecx = MEM32(esi + 0x2C);
    ecx = ecx ^ 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa != 0)) goto loc_000E179F; /* jne: not equal / not zero */

loc_000E171D: ;
    eax = edi;
    eax = eax >> 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(ebx, MEM16(eax + edx + 2));
    MEM16(ebp + -8) = LO16(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(eax + edx));
    edx = (uint32_t)(int32_t)SMEM16(eax + edx + 4);
    ecx = edi;
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -32) = ebx;
    ebx = SX16(LO16(ebx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(ebp + -32);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + ebx + 6);
    ebx = (uint32_t)(int32_t)SMEM16(ebp + -8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + -8);
    ebx = MEM32(ebp + -16);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = SX16(LO16(eax));
    eax = MEM32(ebp + -20);
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edx;
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E170E; /* jne: not equal / not zero */

loc_000E179F: ;
    MEM32(ebp + -8) = edi;

loc_000E17A2: ;
    eax = MEM32(esi + 0x1C);
    eax = eax ^ 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa != 0)) goto loc_000E1812; /* jne: not equal / not zero */

loc_000E17AC: ;
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    eax = 1;
    esi = MEM32(ebp + -8);
    edx = MEM32(ebp + -24);
    ebx = MEM32(ebp + -8);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebp + -20);

loc_000E17C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E1804; /* jae: above or equal (unsigned >=) */

loc_000E17C8: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + eax);
    mm1 = MMX_FROM32(MEM32(ebx + eax + 4)); /* movd */
    mm0 = MMX_FROM32(ecx); /* movd */
    ebx = MEM32(ebp + -16);
    mm1 = MMX_PSUBSW(mm1, mm0); /* psubsw */
    MEM32(edi + -8) = ecx;
    mm1 = MMX_PSRAW(mm1, 1u); /* psraw */
    esi = esi + ebx * 2;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi;
    MEM32(ebp + -12) = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm1 = MMX_PADDSW(mm1, mm0); /* paddsw */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + -4) = mm1.ud[0]; /* movd */
    goto loc_000E17C4;

loc_000E1804: ;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -20) = edi;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */
    goto loc_000E1890;

loc_000E1812: ;
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    eax = 3;
    esi = MEM32(ebp + -8);
    edx = MEM32(ebp + -24);
    ebx = MEM32(ebp + -8);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebp + -20);

loc_000E182A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E1887; /* jae: above or equal (unsigned >=) */

loc_000E182E: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + eax);
    mm1 = MMX_FROM32(MEM32(ebx + eax + 4)); /* movd */
    mm0 = MMX_FROM32(ecx); /* movd */
    ebx = MEM32(ebp + -16);
    mm1 = MMX_PSUBSW(mm1, mm0); /* psubsw */
    MEM32(edi + -16) = ecx;
    mm2 = mm1; /* movq */
    mm1 = MMX_PSRAW(mm1, 2u); /* psraw */
    esi = esi + ebx * 4;
    mm2 = MMX_PSRAW(mm2, 1u); /* psraw */
    mm3 = mm1; /* movq */
    mm1 = MMX_PADDSW(mm1, mm0); /* paddsw */
    mm3 = MMX_PADDSW(mm3, mm2); /* paddsw */
    eax = MEM32(ebp + -12);
    MEM32(edi + -12) = mm1.ud[0]; /* movd */
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi;
    MEM32(edi + -8) = mm2.ud[0]; /* movd */
    mm3 = MMX_PADDSW(mm3, mm0); /* paddsw */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + -12) = eax;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + -4) = mm3.ud[0]; /* movd */
    goto loc_000E182A;

loc_000E1887: ;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -20) = edi;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */

loc_000E1890: ;
    ecx = MEM32(ebp + 8);
    ebx = MEM32(ebp + -12);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1F1B; /* je: equal / zero */

loc_000E189E: ;
    edi = MEM32(ebp + -8);

loc_000E18A1: ;
    edx = MEM32(ebp + -4);
    eax = edi;
    eax = eax >> 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(esi, MEM16(edx + eax + 2));
    MEM16(ebp + -24) = LO16(esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(esi, MEM16(eax + edx));
    edx = (uint32_t)(int32_t)SMEM16(edx + eax + 4);
    ecx = edi;
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -32) = esi;
    esi = SX16(LO16(esi));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(ebp + -32);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(esi + eax + 6);
    esi = (uint32_t)(int32_t)SMEM16(ebp + -24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + -24);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = SX16(LO16(eax));
    eax = MEM32(ebp + -20);
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edx;
    edx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    eax = MEM32(edx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E18A1; /* jne: not equal / not zero */

loc_000E191C: ;
    goto loc_000E1F1E;

loc_000E1921: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E1B3D; /* jne: not equal / not zero */

loc_000E192B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E1993; /* je: equal / zero */

loc_000E1938: ;
    ecx = MEM32(esi + 0x2C);
    ecx = ecx ^ 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa != 0)) goto loc_000E198D; /* jne: not equal / not zero */

loc_000E1940: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    eax = eax >> 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1FFFFE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(ecx, MEM16(eax + edx));
    eax = (uint32_t)(int32_t)SMEM16(eax + edx + 2);
    MEM32(ebp + -32) = ecx;
    ecx = SX16(LO16(ecx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + -32);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = MEM32(ebp + -20);
    MEM16(eax) = LO16(ecx);
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E1938; /* jne: not equal / not zero */

loc_000E198D: ;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -8) = edi;

loc_000E1993: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx ^ 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa != 0)) goto loc_000E1A25; /* jne: not equal / not zero */

loc_000E19A2: ;
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    ecx = MEM32(ebp + -16);
    eax = 7;
    esi = MEM32(ebp + -8);
    edx = MEM32(ebp + -24);
    ebx = MEM32(ebp + -8);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebp + -20);

loc_000E19BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ebp + -4);
    esi = esi + ecx * 8;
    if (CMP_AE(_fa, _fb)) goto loc_000E1A12; /* jae: above or equal (unsigned >=) */

loc_000E19C7: ;
    mm0 = MMX_MEM(ebx + eax); /* movq */
    mm1 = MMX_MEM(ebx + eax + 8); /* movq */
    mm2 = mm0; /* movq */
    mm1 = MMX_PSLLQ(mm1, 48u); /* psllq */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm2 = MMX_POR(mm2, mm1); /* por */
    eax = MEM32(ebp + -12);
    mm2 = MMX_PSUBSW(mm2, mm0); /* psubsw */
    mm2 = MMX_PSRAW(mm2, 1u); /* psraw */
    mm1 = mm0; /* movq */
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PUNPCKLWD(mm0, mm2); /* punpcklwd */
    ebx = esi;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + -12) = eax;
    MMX_STORE(edi + -16, mm0); /* movq */
    mm1 = MMX_PUNPCKHWD(mm1, mm2); /* punpckhwd */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMX_STORE(edi + -8, mm1); /* movq */
    goto loc_000E19BD;

loc_000E1A12: ;
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -20) = edi;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */
    goto loc_000E1AE2;

loc_000E1A25: ;
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    ecx = MEM32(ebp + -16);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0xF;
    esi = MEM32(ebp + -8);
    edx = MEM32(ebp + -24);
    ebx = MEM32(ebp + -8);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebp + -20);

loc_000E1A42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ebp + -4);
    esi = esi + ecx * 8;
    if (CMP_AE(_fa, _fb)) goto loc_000E1AD4; /* jae: above or equal (unsigned >=) */

loc_000E1A50: ;
    mm0 = MMX_MEM(ebx + eax); /* movq */
    mm1 = MMX_MEM(ebx + eax + 8); /* movq */
    mm2 = mm0; /* movq */
    mm1 = MMX_PSLLQ(mm1, 48u); /* psllq */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    eax = MEM32(ebp + -12);
    mm2 = MMX_POR(mm2, mm1); /* por */
    mm2 = MMX_PSUBSW(mm2, mm0); /* psubsw */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = mm2; /* movq */
    mm2 = MMX_PSRAW(mm2, 2u); /* psraw */
    mm4 = mm2; /* movq */
    mm3 = MMX_PSRAW(mm3, 1u); /* psraw */
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    mm4 = MMX_PADDSW(mm4, mm3); /* paddsw */
    mm3 = MMX_PADDSW(mm3, mm0); /* paddsw */
    mm4 = MMX_PADDSW(mm4, mm0); /* paddsw */
    mm1 = mm0; /* movq */
    mm0 = MMX_PUNPCKLWD(mm0, mm2); /* punpcklwd */
    mm6 = mm3; /* movq */
    mm1 = MMX_PUNPCKHWD(mm1, mm2); /* punpckhwd */
    ebx = esi;
    mm6 = MMX_PUNPCKLWD(mm6, mm4); /* punpcklwd */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm3 = MMX_PUNPCKHWD(mm3, mm4); /* punpckhwd */
    mm4 = mm0; /* movq */
    mm0 = MMX_PUNPCKLDQ(mm0, mm6); /* punpckldq */
    MEM32(ebp + -12) = eax;
    mm4 = MMX_PUNPCKHDQ(mm4, mm6); /* punpckhdq */
    mm5 = mm1; /* movq */
    mm1 = MMX_PUNPCKLDQ(mm1, mm3); /* punpckldq */
    MMX_STORE(edi + -32, mm0); /* movq */
    mm5 = MMX_PUNPCKHDQ(mm5, mm3); /* punpckhdq */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MMX_STORE(edi + -24, mm4); /* movq */
    MMX_STORE(edi + -16, mm1); /* movq */
    MMX_STORE(edi + -8, mm5); /* movq */
    goto loc_000E1A42;

loc_000E1AD4: ;
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -20) = edi;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */

loc_000E1AE2: ;
    edx = MEM32(ebp + 8);
    ebx = MEM32(ebp + -12);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1F1B; /* je: equal / zero */

loc_000E1AF0: ;
    edi = MEM32(ebp + -8);
    edx = MEM32(ebp + -20);

loc_000E1AF6: ;
    esi = MEM32(ebp + -4);
    eax = edi;
    eax = eax >> 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1FFFFE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + esi));
    eax = (uint32_t)(int32_t)SMEM16(esi + eax + 2);
    esi = SX16(LO16(ecx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi;
    esi = esi & 0xFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    esi = MEM32(ebp + -16);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 8);
    MEM16(edx) = LO16(eax);
    eax = MEM32(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E1AF6; /* jne: not equal / not zero */

loc_000E1B38: ;
    goto loc_000E1F1E;

loc_000E1B3D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1B65; /* je: equal / zero */

loc_000E1B43: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 6 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1B65; /* je: equal / zero */

loc_000E1B49: ;
    PUSH32(esp, 0x527);
    PUSH32(esp, 0x32D2B8);
    edx = 0x32D1F8;
    ecx = 0x32D3D0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1B62u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E1B62: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E1B65: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 4);
    edx = MEM32(esi + 0x4C);
    ecx = ZX16(MEM16(esi + 0x16));
    MEM32(ebp + -20) = edx;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1C14; /* je: equal / zero */

loc_000E1B81: ;
    edx = MEM32(esi + 0x2C);
    edx = edx ^ 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa != 0)) goto loc_000E1C14; /* jne: not equal / not zero */

loc_000E1B8D: ;
    edx = edi;
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    MEM32(ebp + -32) = edx;
    edx = edi;
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), 0 (16-bit) */
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -8) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_000E1C02; /* jbe: below or equal (unsigned <=) */

loc_000E1BB1: ;
    edx = MEM32(ebp + -20);
    ebx = MEM32(ebp + -32);
    edx = edx + ebx * 2;
    MEM32(ebp + -24) = edx;
    goto loc_000E1BC2;

loc_000E1BBF: ;
    edx = MEM32(ebp + -24);

loc_000E1BC2: ;
    SET_LO16(ebx, MEM16(edx));
    edx = (uint32_t)(int32_t)SMEM16(edx + ecx * 2);
    ebx = SX16(LO16(ebx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + -28));
    ebx = MEM32(ebp + -24);
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -32) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ebx));
    ebx = MEM32(ebp + -32);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + -8);
    MEM16(eax + -2) = LO16(ebx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -24) = MEM32(ebp + -24) + 2;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX16(MEM16(esi + 0x16));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000E1BBF; /* jl: less (signed <) */

loc_000E1BFF: ;
    ebx = MEM32(ebp + -12);

loc_000E1C02: ;
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -16);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    MEM32(ebp + -12) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000E1B81; /* jne: not equal / not zero */

loc_000E1C14: ;
    edx = MEM32(ebp + -16);
    edx = edx ^ 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(ebp + 8);
    edx = MEM32(edx);
    if ((_fa != 0)) goto loc_000E1CF5; /* jne: not equal / not zero */

loc_000E1C28: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E1E74; /* jg: greater (signed >) */

loc_000E1C33: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + edx * 2;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -12) = ebx;

loc_000E1C41: ;
    edx = edi;
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), 0 (16-bit) */
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -8) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_000E1C89; /* jbe: below or equal (unsigned <=) */

loc_000E1C5A: ;
    ebx = MEM32(ebp + -20);
    edx = ebx + edx * 2;
    goto loc_000E1C65;

loc_000E1C62: ;
    edx = MEM32(ebp + -32);

loc_000E1C65: ;
    SET_LO16(ebx, MEM16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(ebx);
    ebx = MEM32(ebp + -8);
    MEM32(ebp + -32) = edx;
    edx = ZX16(MEM16(esi + 0x16));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(ebp + -8) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_000E1C62; /* jl: less (signed <) */

loc_000E1C83: ;
    edx = MEM32(ebp + -24);
    ebx = MEM32(ebp + -12);

loc_000E1C89: ;
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), 0 (16-bit) */
    MEM32(ebp + -8) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_000E1CE0; /* jbe: below or equal (unsigned <=) */

loc_000E1C97: ;
    ebx = MEM32(ebp + -20);
    edx = ebx + edx * 2;
    MEM32(ebp + -24) = edx;
    goto loc_000E1CA5;

loc_000E1CA2: ;
    edx = MEM32(ebp + -24);

loc_000E1CA5: ;
    SET_LO16(ebx, MEM16(edx));
    edx = (uint32_t)(int32_t)SMEM16(edx + ecx * 2);
    ebx = SX16(LO16(ebx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(ebp + -24);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + -32) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ebx));
    ebx = MEM32(ebp + -32);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + -8);
    MEM16(eax + -2) = LO16(ebx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -24) = MEM32(ebp + -24) + 2;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX16(MEM16(esi + 0x16));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000E1CA2; /* jl: less (signed <) */

loc_000E1CDD: ;
    ebx = MEM32(ebp + -12);

loc_000E1CE0: ;
    edx = MEM32(ebp + -16);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E1C41; /* jne: not equal / not zero */

loc_000E1CF0: ;
    goto loc_000E1E74;

loc_000E1CF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E1E74; /* jg: greater (signed >) */

loc_000E1D00: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + edx * 4;
    MEM32(ebp + -32) = edx;
    MEM32(ebp + -12) = ebx;
    /* nop */

loc_000E1D10: ;
    edx = edi;
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), 0 (16-bit) */
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -8) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_000E1D58; /* jbe: below or equal (unsigned <=) */

loc_000E1D29: ;
    ebx = MEM32(ebp + -20);
    edx = ebx + edx * 2;
    goto loc_000E1D34;

loc_000E1D31: ;
    edx = MEM32(ebp + -28);

loc_000E1D34: ;
    SET_LO16(ebx, MEM16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(ebx);
    ebx = MEM32(ebp + -8);
    MEM32(ebp + -28) = edx;
    edx = ZX16(MEM16(esi + 0x16));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(ebp + -8) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_000E1D31; /* jl: less (signed <) */

loc_000E1D52: ;
    edx = MEM32(ebp + -4);
    ebx = MEM32(ebp + -12);

loc_000E1D58: ;
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), 0 (16-bit) */
    MEM32(ebp + -8) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_000E1DB8; /* jbe: below or equal (unsigned <=) */

loc_000E1D66: ;
    ebx = MEM32(ebp + -20);
    edx = ebx + edx * 2;
    MEM32(ebp + -24) = edx;
    goto loc_000E1D74;

loc_000E1D71: ;
    edx = MEM32(ebp + -24);

loc_000E1D74: ;
    SET_LO16(ebx, MEM16(edx));
    edx = (uint32_t)(int32_t)SMEM16(edx + ecx * 2);
    ebx = SX16(LO16(ebx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(ebp + -8);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + ebx * 4 + -48) = edx;
    edx = ebx;
    SET_LO16(edx, MEM16(ebp + edx * 4 + -48));
    ebx = MEM32(ebp + -24);
    _fb = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(ebx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(edx);
    edx = MEM32(ebp + -8);
    MEM32(ebp + -24) = ebx;
    ebx = ZX16(MEM16(esi + 0x16));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000E1D71; /* jl: less (signed <) */

loc_000E1DB2: ;
    edx = MEM32(ebp + -4);
    ebx = MEM32(ebp + -12);

loc_000E1DB8: ;
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), 0 (16-bit) */
    MEM32(ebp + -8) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_000E1E17; /* jbe: below or equal (unsigned <=) */

loc_000E1DC6: ;
    ebx = MEM32(ebp + -20);
    edx = ebx + edx * 2;
    MEM32(ebp + -24) = edx;
    goto loc_000E1DD4;

loc_000E1DD1: ;
    edx = MEM32(ebp + -24);

loc_000E1DD4: ;
    SET_LO16(ebx, MEM16(edx));
    edx = (uint32_t)(int32_t)SMEM16(edx + ecx * 2);
    ebx = SX16(LO16(ebx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(ebp + -8);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + ebx * 4 + -40) = edx;
    edx = ebx;
    SET_LO16(edx, MEM16(ebp + edx * 4 + -40));
    ebx = MEM32(ebp + -24);
    _fb = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(ebx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(edx);
    edx = MEM32(ebp + -8);
    MEM32(ebp + -24) = ebx;
    ebx = ZX16(MEM16(esi + 0x16));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000E1DD1; /* jl: less (signed <) */

loc_000E1E11: ;
    edx = MEM32(ebp + -4);
    ebx = MEM32(ebp + -12);

loc_000E1E17: ;
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), 0 (16-bit) */
    MEM32(ebp + -8) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_000E1E63; /* jbe: below or equal (unsigned <=) */

loc_000E1E25: ;
    ebx = MEM32(ebp + -20);
    edx = ebx + edx * 2;
    MEM32(ebp + -28) = edx;
    edx = MEM32(ebp + -8);

loc_000E1E31: ;
    SET_LO16(ebx, MEM16(ebp + edx * 4 + -40));
    _fb = (uint32_t)(MEM16(ebp + edx * 4 + -48)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ebx, LO16(ebx) + MEM16(ebp + edx * 4 + -48));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, LO16(ebx));
    ebx = MEM32(ebp + -28);
    _fb = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(ebx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + -2) = LO16(edx);
    edx = MEM32(ebp + -8);
    MEM32(ebp + -28) = ebx;
    ebx = ZX16(MEM16(esi + 0x16));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000E1E31; /* jl: less (signed <) */

loc_000E1E60: ;
    ebx = MEM32(ebp + -12);

loc_000E1E63: ;
    edx = MEM32(ebp + -16);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E1D10; /* jne: not equal / not zero */

loc_000E1E74: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1F21; /* je: equal / zero */

loc_000E1E7F: ;
    /* nop */

loc_000E1E80: ;
    edx = edi;
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    MEM32(ebp + -32) = edx;
    edx = edi;
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), 0 (16-bit) */
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -8) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_000E1EF5; /* jbe: below or equal (unsigned <=) */

loc_000E1EA4: ;
    edx = MEM32(ebp + -20);
    ebx = MEM32(ebp + -32);
    edx = edx + ebx * 2;
    MEM32(ebp + -24) = edx;
    goto loc_000E1EB5;

loc_000E1EB2: ;
    edx = MEM32(ebp + -24);

loc_000E1EB5: ;
    SET_LO16(ebx, MEM16(edx));
    edx = (uint32_t)(int32_t)SMEM16(edx + ecx * 2);
    ebx = SX16(LO16(ebx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + -28));
    ebx = MEM32(ebp + -24);
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -32) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ebx));
    ebx = MEM32(ebp + -32);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + -8);
    MEM16(eax + -2) = LO16(ebx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -24) = MEM32(ebp + -24) + 2;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX16(MEM16(esi + 0x16));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000E1EB2; /* jl: less (signed <) */

loc_000E1EF2: ;
    ebx = MEM32(ebp + -12);

loc_000E1EF5: ;
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -16);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    MEM32(ebp + -12) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000E1E80; /* jne: not equal / not zero */

loc_000E1F07: ;
    edi = edi & 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2C) = edi;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000E1F1B: ;
    edi = MEM32(ebp + -8);

loc_000E1F1E: ;
    esi = MEM32(ebp + -28);

loc_000E1F21: ;
    edi = edi & 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E1F40
 * Original: 0x000E1F40 - 0x000E1F47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1F40(void)
{

loc_000E1F40: ;
    MEM32(eax) = 0x32D420;
    esp += 4; return; /* ret */

}

/**
 * sub_000E1F50
 * Original: 0x000E1F50 - 0x000E1F55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E1F50: ;
    g_seh_ebp = ebp; sub_000ED250(); return; /* tail jmp 0x000ED250 */

}

/**
 * sub_000E1F60
 * Original: 0x000E1F60 - 0x000E1F8A (42 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000E1F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E1F60: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000E1F65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E1F62u); } /* indirect call */
    }

loc_000E1F65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1F70; /* je: equal / zero */

loc_000E1F69: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x30)); return; /* indirect tail jmp */

loc_000E1F70: ;
    PUSH32(esp, 0x32D460);
    eax = 0x22;
    ecx = 0x324878;
    PUSH32(esp, 0x000E1F84u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E1F84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E1F90
 * Original: 0x000E1F90 - 0x000E1FC1 (49 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E1F90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1FB4; /* je: equal / zero */

loc_000E1F98: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E1FB4; /* jne: not equal / not zero */

loc_000E1F9D: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E1FB4; /* jne: not equal / not zero */

loc_000E1FA4: ;
    SET_LO16(eax, MEM16(eax + 6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1FB9; /* je: equal / zero */

loc_000E1FAE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1FB9; /* je: equal / zero */

loc_000E1FB4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000E1FB9: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E1FD0
 * Original: 0x000E1FD0 - 0x000E1FFF (47 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E1FD0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E1FDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E1FDBu); } /* indirect call */
    }

loc_000E1FDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E1FE6; /* jne: not equal / not zero */

loc_000E1FE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E1FE6: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E1FF2u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E1FF2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2000
 * Original: 0x000E2000 - 0x000E208D (141 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2000: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296968);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = 0x7C;
    PUSH32(esp, 0x000E2021u); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000E2021: ;
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E203B; /* je: equal / zero */

loc_000E2031: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2037u); RECOMP_ABI_CALL(0x000E20B0u, sub_000E20B0); /* call 0x000E20B0 */

loc_000E2037: ;
    esi = eax;
    goto loc_000E203D;

loc_000E203B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E203D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2062; /* je: equal / zero */

loc_000E2049: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000E2055u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2052u); } /* indirect call */
    }

loc_000E2055: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2075; /* jne: not equal / not zero */

loc_000E2059: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000E2062u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E205Fu); } /* indirect call */
    }

loc_000E2062: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E2075: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 8);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E2090
 * Original: 0x000E2090 - 0x000E20A4 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2090: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E20A3; /* je: equal / zero */

loc_000E2096: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000E209Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E209Au); } /* indirect call */
    }

loc_000E209D: ;
    MEM32(esi) = 0;

loc_000E20A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E20B0
 * Original: 0x000E20B0 - 0x000E2137 (135 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E20B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E20B0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296948);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esi;
    PUSH32(esp, 0x000E20D1u); RECOMP_ABI_CALL(0x000DA220u, sub_000DA220); /* call 0x000DA220 */

loc_000E20D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = eax;
    MEM32(esi) = 0x32D4A8;
    MEM32(esi + 0x64) = 0xFFFFFFFFu;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = 1;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x000E2120u); RECOMP_ABI_CALL(0x000D9E50u, sub_000D9E50); /* call 0x000D9E50 */

loc_000E2120: ;
    ecx = MEM32(esp + 4);
    MEM32(esi + 0x78) = eax;
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2140
 * Original: 0x000E2140 - 0x000E215C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2140: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E2148u); RECOMP_ABI_CALL(0x000E2170u, sub_000E2170); /* call 0x000E2170 */

loc_000E2148: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000E2158; /* je: equal / zero */

loc_000E2151: ;
    PUSH32(esp, 0x000E2156u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000E2156: ;
    eax = esi;

loc_000E2158: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2160
 * Original: 0x000E2160 - 0x000E216F (15 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2160(void)
{

loc_000E2160: ;
    MEM32(ecx + 0x64) = 0xFFFFFFFFu;
    MEM32(ecx + 0x20) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2170
 * Original: 0x000E2170 - 0x000E217B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2170: ;
    MEM32(ecx) = 0x32D4A8;
    g_seh_ebp = ebp; sub_000DA260(); return; /* tail jmp 0x000DA260 */

}

/**
 * sub_000E2180
 * Original: 0x000E2180 - 0x000E21AE (46 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2180: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000E218Eu); RECOMP_ABI_CALL(0x000DA290u, sub_000DA290); /* call 0x000DA290 */

loc_000E218E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E21A9; /* je: equal / zero */

loc_000E2192: ;
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E21A7; /* jne: not equal / not zero */

loc_000E2199: ;
    ecx = ZX16(MEM16(edi + 6));
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    MEM32(esi + 0x68) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E21A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E21A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E21B0
 * Original: 0x000E21B0 - 0x000E21B7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E21B0(void)
{

loc_000E21B0: ;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x34) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E21C0
 * Original: 0x000E21C0 - 0x000E21C7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E21C0(void)
{

loc_000E21C0: ;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x38) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E21D0
 * Original: 0x000E21D0 - 0x000E21D7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E21D0(void)
{

loc_000E21D0: ;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x3C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E21E0
 * Original: 0x000E21E0 - 0x000E21E7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E21E0(void)
{

loc_000E21E0: ;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x40) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E21F0
 * Original: 0x000E21F0 - 0x000E2218 (40 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E21F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E21F0: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esi + 0x44) = 1;
    MEM32(esi + 0x50) = 0;
    PUSH32(esp, 0x000E2208u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000E2208: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2220
 * Original: 0x000E2220 - 0x000E22BD (157 bytes, 54 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2220: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E2245; /* je: equal / zero */

loc_000E222E: ;
    PUSH32(esp, 0x32D570);
    eax = 0xCF;
    ecx = 0x32CECC;
    PUSH32(esp, 0x000E2242u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E2242: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2245: ;
    edi = MEM32(esp + 0x18);
    ecx = esp + 8;
    eax = edi;
    PUSH32(esp, 0x000E2254u); RECOMP_ABI_CALL(0x000DA300u, sub_000DA300); /* call 0x000DA300 */

loc_000E2254: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E22B2; /* jne: not equal / not zero */

loc_000E225B: ;
    SET_LO16(eax, MEM16(esp + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x14)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x14) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E22B2; /* jne: not equal / not zero */

loc_000E2266: ;
    SET_LO16(ecx, MEM16(esp + 0xE));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(esi + 0x16) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E22B2; /* jne: not equal / not zero */

loc_000E2271: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E22B2; /* jne: not equal / not zero */

loc_000E227A: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2295; /* je: equal / zero */

loc_000E2281: ;
    MEM32(esi + 0x20) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x70) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E2295: ;
    edx = MEM32(esi + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E229Fu); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000E229F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x70) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E22B2: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E22C0
 * Original: 0x000E22C0 - 0x000E22DC (28 bytes, 7 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000E22C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E22C0: ;
    PUSH32(esp, 0x32D570);
    eax = 0xEA;
    ecx = 0x324878;
    PUSH32(esp, 0x000E22D4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E22D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E22E0
 * Original: 0x000E22E0 - 0x000E22FB (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E22E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E22E0: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E22EC; /* jne: not equal / not zero */

loc_000E22E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000E22EC: ;
    MEM32(ecx + 0x20) = 0;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2300
 * Original: 0x000E2300 - 0x000E2339 (57 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000E2300: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E230B; /* jne: not equal / not zero */

loc_000E2308: ;
    esp += 8; return; /* ret 4 */

loc_000E230B: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E2317; /* je: equal / zero */

loc_000E2312: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000E2317: ;
    SET_LO16(edx, MEM16(eax + 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x14)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x14) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E2312; /* jne: not equal / not zero */

loc_000E2321: ;
    SET_LO16(edx, MEM16(eax + 6));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x16)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x16) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E2312; /* jne: not equal / not zero */

loc_000E232B: ;
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x18)));
    eax = eax - MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2340
 * Original: 0x000E2340 - 0x000E2358 (24 bytes, 6 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2340(void)
{

loc_000E2340: ;
    PUSH32(esp, 0x32D570);
    eax = 0x12A;
    ecx = 0x324878;
    PUSH32(esp, 0x000E2354u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E2354: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2360
 * Original: 0x000E2360 - 0x000E2396 (54 bytes, 18 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2360: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2384; /* je: equal / zero */

loc_000E2367: ;
    PUSH32(esp, 0x32D570);
    eax = 0x136;
    ecx = 0x324878;
    PUSH32(esp, 0x000E237Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E237B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

loc_000E2384: ;
    eax = MEM32(ecx + 0x6C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2391u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000E2391: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E23A0
 * Original: 0x000E23A0 - 0x000E268F (751 bytes, 257 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E23A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E23A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    ebx = 2;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000E23E0; /* jne: not equal / not zero */

loc_000E23CE: ;
    edx = MEM32(esp + 0x24);
    MEM32(edx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000E23E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E23FA; /* jne: not equal / not zero */

loc_000E23E5: ;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000E23FA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2569; /* je: equal / zero */

loc_000E2402: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2569; /* jne: not equal / not zero */

loc_000E240B: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2569; /* je: equal / zero */

loc_000E2416: ;
    edx = MEM32(esi + 0x68);
    eax = MEM32(esp + 0x20);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    ebx = MEM32(eax + 4);
    PUSH32(esp, esi);
    eax = esp + 0x14;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000E2439u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2436u); } /* indirect call */
    }

loc_000E2439: ;
    ebx = eax;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2460; /* je: equal / zero */

loc_000E2440: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2460; /* je: equal / zero */

loc_000E2444: ;
    PUSH32(esp, 0x166);
    PUSH32(esp, 0x32D53C);
    edx = 0x32D558;
    ecx = 0x32D570;
    PUSH32(esp, 0x000E245Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E245D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2460: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E2529; /* ja: above (unsigned >) */

loc_000E2469: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0xE2690); /* switch: 9 entries, 5 targets */
    if (_jt == 0x000E2470u) goto loc_000E2470;
    if (_jt == 0x000E24C5u) goto loc_000E24C5;
    if (_jt == 0x000E2514u) goto loc_000E2514;
    if (_jt == 0x000E2529u) goto loc_000E2529;
    if (_jt == 0x000E2545u) goto loc_000E2545;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000E2470: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E247D; /* je: equal / zero */

loc_000E2475: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E24AC; /* je: equal / zero */

loc_000E247A: ;
    MEM32(esi + 0x58) = edi;

loc_000E247D: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E24AC; /* je: equal / zero */

loc_000E2482: ;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E249E; /* je: equal / zero */

loc_000E2487: ;
    PUSH32(esp, 0x32D570);
    eax = 0x17B;
    ecx = 0x32D510;
    PUSH32(esp, 0x000E249Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E249B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E249E: ;
    MEM32(esi + 0x5C) = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E2545;

loc_000E24AC: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2545; /* je: equal / zero */

loc_000E24B7: ;
    ecx = MEM32(esi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000E24BDu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000E24BBu); } /* indirect call */
    }

loc_000E24BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E2545;

loc_000E24C5: ;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E24E1; /* je: equal / zero */

loc_000E24CA: ;
    PUSH32(esp, 0x32D570);
    eax = 0x187;
    ecx = 0x32D510;
    PUSH32(esp, 0x000E24DEu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E24DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E24E1: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E24F1; /* je: equal / zero */

loc_000E24E8: ;
    edx = MEM32(esi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000E24EEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000E24ECu); } /* indirect call */
    }

loc_000E24EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E24F1: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    MEM32(esi + 0x58) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2502; /* je: equal / zero */

loc_000E24FD: ;
    MEM32(esi + 0x60) = edi;
    goto loc_000E2545;

loc_000E2502: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E250Fu); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000E250F: ;
    MEM32(esi + 0x60) = eax;
    goto loc_000E2542;

loc_000E2514: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), edi (32-bit) */
    MEM32(esi + 0x54) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000E2545; /* jne: not equal / not zero */

loc_000E2520: ;
    MEM32(esi + 8) = 2;
    goto loc_000E2545;

loc_000E2529: ;
    PUSH32(esp, 0x198);
    PUSH32(esp, 0x324878);
    edx = 0x32D4EC;
    ecx = 0x32D570;
    PUSH32(esp, 0x000E2542u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E2542: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2545: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2569; /* je: equal / zero */

loc_000E255A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2569; /* je: equal / zero */

loc_000E255F: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2402; /* jne: not equal / not zero */

loc_000E2569: ;
    _fa = (uint32_t)(MEM32(esi + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x74), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2583; /* je: equal / zero */

loc_000E256E: ;
    edx = MEM32(esi + 0x70);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x70) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_000E25EE; /* jg: greater (signed >) */

loc_000E257C: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esi + 0x74) = edi;
    goto loc_000E25EB;

loc_000E2583: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E25E6; /* je: equal / zero */

loc_000E2588: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(eax);
    ecx = MEM32(esi + 0x60);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0x60) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_000E25DD; /* jg: greater (signed >) */

loc_000E259A: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E25AA; /* je: equal / zero */

loc_000E25A1: ;
    ecx = MEM32(esi + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000E25A7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000E25A5u); } /* indirect call */
    }

loc_000E25A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E25AA: ;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E25C2; /* je: equal / zero */

loc_000E25AF: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x5C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E25C2; /* je: equal / zero */

loc_000E25B9: ;
    edx = MEM32(esi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000E25BFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000E25BDu); } /* indirect call */
    }

loc_000E25BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E25C2: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E25CC; /* jne: not equal / not zero */

loc_000E25C7: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E25D3; /* jne: not equal / not zero */

loc_000E25CC: ;
    MEM32(esi + 8) = 2;

loc_000E25D3: ;
    eax = MEM32(esi + 0x60);
    MEM32(esi + 0x58) = edi;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_000E25EB;

loc_000E25DD: ;
    ecx = MEM32(eax);
    eax = MEM32(esi + 0x6C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E25EB;

loc_000E25E6: ;
    eax = MEM32(esi + 0x6C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E25EB: ;
    MEM32(esi + 0x6C) = eax;

loc_000E25EE: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    MEM32(edx) = ebp;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E2613; /* jbe: below or equal (unsigned <=) */

loc_000E25FC: ;
    PUSH32(esp, 0x32D570);
    eax = 0x1D7;
    ecx = 0x32D36C;
    PUSH32(esp, 0x000E2610u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E2610: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2613: ;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2674; /* je: equal / zero */

loc_000E2618: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    ebp = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x48);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x50) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_000E2634; /* jge: greater or equal (signed >=) */

loc_000E262F: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2674; /* jne: not equal / not zero */

loc_000E2634: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2644; /* je: equal / zero */

loc_000E263B: ;
    ecx = MEM32(esi + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000E2641u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000E263Fu); } /* indirect call */
    }

loc_000E2641: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2644: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x6C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E265A; /* je: equal / zero */

loc_000E2655: ;
    MEM32(esi + 0x70) = edi;
    goto loc_000E266D;

loc_000E265A: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0x78);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2667u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000E2667: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x70) = eax;

loc_000E266D: ;
    MEM32(esi + 0x74) = 1;

loc_000E2674: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2683; /* jne: not equal / not zero */

loc_000E2679: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), edi (32-bit) */
    eax = 6;
    if (CMP_NE(_fa, _fb)) goto loc_000E2685; /* jne: not equal / not zero */

loc_000E2683: ;
    eax = ebx;

loc_000E2685: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E2463
 * Original: 0x000E2463 - 0x000E268F (556 bytes, 187 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2463(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2463: ;
    if (_flags /* ja: above (unsigned >) */) goto loc_000E2529;

loc_000E2469: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0xE2690); /* switch: 9 entries, 5 targets */
    if (_jt == 0x000E2470u) goto loc_000E2470;
    if (_jt == 0x000E24C5u) goto loc_000E24C5;
    if (_jt == 0x000E2514u) goto loc_000E2514;
    if (_jt == 0x000E2529u) goto loc_000E2529;
    if (_jt == 0x000E2545u) goto loc_000E2545;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000E2470: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E247D; /* je: equal / zero */

loc_000E2475: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E24AC; /* je: equal / zero */

loc_000E247A: ;
    MEM32(esi + 0x58) = edi;

loc_000E247D: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E24AC; /* je: equal / zero */

loc_000E2482: ;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E249E; /* je: equal / zero */

loc_000E2487: ;
    PUSH32(esp, 0x32D570);
    eax = 0x17B;
    ecx = 0x32D510;
    PUSH32(esp, 0x000E249Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E249B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E249E: ;
    MEM32(esi + 0x5C) = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E2545;

loc_000E24AC: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2545; /* je: equal / zero */

loc_000E24B7: ;
    ecx = MEM32(esi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000E24BDu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000E24BBu); } /* indirect call */
    }

loc_000E24BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E2545;

loc_000E24C5: ;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E24E1; /* je: equal / zero */

loc_000E24CA: ;
    PUSH32(esp, 0x32D570);
    eax = 0x187;
    ecx = 0x32D510;
    PUSH32(esp, 0x000E24DEu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E24DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E24E1: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E24F1; /* je: equal / zero */

loc_000E24E8: ;
    edx = MEM32(esi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000E24EEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000E24ECu); } /* indirect call */
    }

loc_000E24EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E24F1: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    MEM32(esi + 0x58) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2502; /* je: equal / zero */

loc_000E24FD: ;
    MEM32(esi + 0x60) = edi;
    goto loc_000E2545;

loc_000E2502: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E250Fu); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000E250F: ;
    MEM32(esi + 0x60) = eax;
    goto loc_000E2542;

loc_000E2514: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), edi (32-bit) */
    MEM32(esi + 0x54) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000E2545; /* jne: not equal / not zero */

loc_000E2520: ;
    MEM32(esi + 8) = 2;
    goto loc_000E2545;

loc_000E2529: ;
    PUSH32(esp, 0x198);
    PUSH32(esp, 0x324878);
    edx = 0x32D4EC;
    ecx = 0x32D570;
    PUSH32(esp, 0x000E2542u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E2542: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2545: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2569; /* je: equal / zero */

loc_000E255A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2569; /* je: equal / zero */

loc_000E255F: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000E2402(); return; } /* jne: not equal / not zero */

loc_000E2569: ;
    _fa = (uint32_t)(MEM32(esi + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x74), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2583; /* je: equal / zero */

loc_000E256E: ;
    edx = MEM32(esi + 0x70);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x70) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_000E25EE; /* jg: greater (signed >) */

loc_000E257C: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esi + 0x74) = edi;
    goto loc_000E25EB;

loc_000E2583: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E25E6; /* je: equal / zero */

loc_000E2588: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(eax);
    ecx = MEM32(esi + 0x60);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0x60) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_000E25DD; /* jg: greater (signed >) */

loc_000E259A: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E25AA; /* je: equal / zero */

loc_000E25A1: ;
    ecx = MEM32(esi + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000E25A7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000E25A5u); } /* indirect call */
    }

loc_000E25A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E25AA: ;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E25C2; /* je: equal / zero */

loc_000E25AF: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x5C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E25C2; /* je: equal / zero */

loc_000E25B9: ;
    edx = MEM32(esi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000E25BFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000E25BDu); } /* indirect call */
    }

loc_000E25BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E25C2: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E25CC; /* jne: not equal / not zero */

loc_000E25C7: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E25D3; /* jne: not equal / not zero */

loc_000E25CC: ;
    MEM32(esi + 8) = 2;

loc_000E25D3: ;
    eax = MEM32(esi + 0x60);
    MEM32(esi + 0x58) = edi;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_000E25EB;

loc_000E25DD: ;
    ecx = MEM32(eax);
    eax = MEM32(esi + 0x6C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E25EB;

loc_000E25E6: ;
    eax = MEM32(esi + 0x6C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E25EB: ;
    MEM32(esi + 0x6C) = eax;

loc_000E25EE: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    MEM32(edx) = ebp;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E2613; /* jbe: below or equal (unsigned <=) */

loc_000E25FC: ;
    PUSH32(esp, 0x32D570);
    eax = 0x1D7;
    ecx = 0x32D36C;
    PUSH32(esp, 0x000E2610u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E2610: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2613: ;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2674; /* je: equal / zero */

loc_000E2618: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    ebp = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x48);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x50) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_000E2634; /* jge: greater or equal (signed >=) */

loc_000E262F: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2674; /* jne: not equal / not zero */

loc_000E2634: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2644; /* je: equal / zero */

loc_000E263B: ;
    ecx = MEM32(esi + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000E2641u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000E263Fu); } /* indirect call */
    }

loc_000E2641: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2644: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x6C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E265A; /* je: equal / zero */

loc_000E2655: ;
    MEM32(esi + 0x70) = edi;
    goto loc_000E266D;

loc_000E265A: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0x78);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2667u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000E2667: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x70) = eax;

loc_000E266D: ;
    MEM32(esi + 0x74) = 1;

loc_000E2674: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2683; /* jne: not equal / not zero */

loc_000E2679: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), edi (32-bit) */
    eax = 6;
    if (CMP_NE(_fa, _fb)) goto loc_000E2685; /* jne: not equal / not zero */

loc_000E2683: ;
    eax = ebx;

loc_000E2685: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E26C0
 * Original: 0x000E26C0 - 0x000E2756 (150 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E26C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E26C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296968);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E270C; /* jne: not equal / not zero */

loc_000E26DD: ;
    eax = 0x44;
    PUSH32(esp, 0x000E26E7u); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000E26E7: ;
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E26FC; /* je: equal / zero */

loc_000E26F3: ;
    esi = eax;
    PUSH32(esp, 0x000E26FAu); RECOMP_ABI_CALL(0x000E2790u, sub_000E2790); /* call 0x000E2790 */

loc_000E26FA: ;
    goto loc_000E26FE;

loc_000E26FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E26FE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_000E272F; /* je: equal / zero */

loc_000E270C: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x000E271Fu); RECOMP_ABI_CALL(0x000E2B90u, sub_000E2B90); /* call 0x000E2B90 */

loc_000E271F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2742; /* jne: not equal / not zero */

loc_000E2723: ;
    PUSH32(esp, 0x000E2728u); RECOMP_ABI_CALL(0x000E27C0u, sub_000E27C0); /* call 0x000E27C0 */

loc_000E2728: ;
    eax = esi;
    PUSH32(esp, 0x000E272Fu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000E272F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E2742: ;
    ecx = MEM32(esp + 8);
    MEM32(ebx) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E2760
 * Original: 0x000E2760 - 0x000E2784 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2760: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2782; /* je: equal / zero */

loc_000E2767: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x000E276Fu); RECOMP_ABI_CALL(0x000E2BF0u, sub_000E2BF0); /* call 0x000E2BF0 */

loc_000E276F: ;
    PUSH32(esp, 0x000E2774u); RECOMP_ABI_CALL(0x000E27C0u, sub_000E27C0); /* call 0x000E27C0 */

loc_000E2774: ;
    eax = esi;
    PUSH32(esp, 0x000E277Bu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000E277B: ;
    MEM32(ebx) = 0;
    POP32(esp, edi);

loc_000E2782: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E2790
 * Original: 0x000E2790 - 0x000E27B8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2790: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0x000E27B2u); RECOMP_ABI_CALL(0x000D9E50u, sub_000D9E50); /* call 0x000D9E50 */

loc_000E27B2: ;
    MEM32(esi + 0x40) = eax;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_000E27C0
 * Original: 0x000E27C0 - 0x000E2837 (119 bytes, 33 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E27C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E27C0: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E27DE; /* je: equal / zero */

loc_000E27C7: ;
    PUSH32(esp, 0x32D738);
    eax = 0x64;
    ecx = 0x32D720;
    PUSH32(esp, 0x000E27DBu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E27DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E27DE: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E27FC; /* je: equal / zero */

loc_000E27E5: ;
    PUSH32(esp, 0x32D738);
    eax = 0x65;
    ecx = 0x32D70C;
    PUSH32(esp, 0x000E27F9u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E27F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E27FC: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E281A; /* je: equal / zero */

loc_000E2803: ;
    PUSH32(esp, 0x32D738);
    eax = 0x66;
    ecx = 0x32D6F8;
    PUSH32(esp, 0x000E2817u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E2817: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E281A: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2836; /* je: equal / zero */

loc_000E2821: ;
    PUSH32(esp, 0x32D738);
    eax = 0x67;
    ecx = 0x32D6E4;
    PUSH32(esp, 0x000E2835u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E2835: ;
    POP32(esp, ecx);

loc_000E2836: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2840
 * Original: 0x000E2840 - 0x000E299E (350 bytes, 110 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2840: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2876; /* jne: not equal / not zero */

loc_000E2855: ;
    PUSH32(esp, 0x6E);
    PUSH32(esp, 0x32D6B0);
    edx = 0x32D6C8;
    ecx = 0x32D738;
    PUSH32(esp, 0x000E286Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E286B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000E2876: ;
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2988; /* je: equal / zero */

loc_000E2881: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + 6)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 6), 1 (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E294D; /* je: equal / zero */

loc_000E2897: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E28BD; /* je: equal / zero */

loc_000E289C: ;
    PUSH32(esp, 0x9A);
    PUSH32(esp, 0x324878);
    edx = 0x32D61C;
    ecx = 0x32D738;
    PUSH32(esp, 0x000E28B5u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E28B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E297E;

loc_000E28BD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E28DD; /* jne: not equal / not zero */

loc_000E28C1: ;
    PUSH32(esp, 0x82);
    PUSH32(esp, 0x32D658);
    edx = 0x32D660;
    ecx = 0x32D738;
    PUSH32(esp, 0x000E28DAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E28DA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E28DD: ;
    eax = MEM32(esi + 0xC);
    edi = MEM32(ebp + 0x3C);
    PUSH32(esp, 0x000E28E8u); RECOMP_ABI_CALL(0x000D6A00u, sub_000D6A00); /* call 0x000D6A00 */

loc_000E28E8: ;
    esi = eax;
    MEM32(ebp + 0x3C) = eax;
    PUSH32(esp, 0x000E28F2u); RECOMP_ABI_CALL(0x000D6320u, sub_000D6320); /* call 0x000D6320 */

loc_000E28F2: ;
    esi = MEM32(ebp + 0x3C);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E2900u); RECOMP_ABI_CALL(0x000D6370u, sub_000D6370); /* call 0x000D6370 */

loc_000E2900: ;
    eax = MEM32(esp + 0x1C);
    esi = MEM32(eax + 4);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E2912u); RECOMP_ABI_CALL(0x000D6F70u, sub_000D6F70); /* call 0x000D6F70 */

loc_000E2912: ;
    xmm1 = XMM_SCALAR(MEMF(0x33381C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    esi = eax;
    PUSH32(esp, esi);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E2931u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000E2931: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, esi);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, edx);
    edi = eax;
    PUSH32(esp, 0x000E2948u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000E2948: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E2978;

loc_000E294D: ;
    SET_LO8(ebx, MEM8(esi + 0xC));
    esi = MEM32(esi + 4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    edi = esp + 0x14;
    PUSH32(esp, 0x000E2961u); RECOMP_ABI_CALL(0x000D6950u, sub_000D6950); /* call 0x000D6950 */

loc_000E2961: ;
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E296Du); RECOMP_ABI_CALL(0x000D6F70u, sub_000D6F70); /* call 0x000D6F70 */

loc_000E296D: ;
    esi = MEM32(esp + 0x10);
    edi = eax;
    PUSH32(esp, 0x000E2978u); RECOMP_ABI_CALL(0x000D6F70u, sub_000D6F70); /* call 0x000D6F70 */

loc_000E2978: ;
    esi = MEM32(esp + 0x1C);
    ebx = eax;

loc_000E297E: ;
    ecx = MEM32(ebp + 0x28);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000E2988u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2985u); } /* indirect call */
    }

loc_000E2988: ;
    ecx = MEM32(esi);
    ebp = MEM32(ebp + 0x24);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000E2996u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2993u); } /* indirect call */
    }

loc_000E2996: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E29A0
 * Original: 0x000E29A0 - 0x000E2B2A (394 bytes, 158 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E29A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E29A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ecx = MEM32(edi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = edi + 0x20;
    if (CMP_NE(_fa, _fb)) goto loc_000E29D0; /* jne: not equal / not zero */

loc_000E29B1: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(edi + 0x18);
    edx = edi;
    PUSH32(esp, 0x000E29BFu); RECOMP_ABI_CALL(0x000E72B0u, sub_000E72B0); /* call 0x000E72B0 */

loc_000E29BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E29DA; /* je: equal / zero */

loc_000E29C3: ;
    PUSH32(esp, 0x000E29C8u); RECOMP_ABI_CALL(0x000E2B30u, sub_000E2B30); /* call 0x000E2B30 */

loc_000E29C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E29D0: ;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000E29D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E29D3u); } /* indirect call */
    }

loc_000E29D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E29C3; /* je: equal / zero */

loc_000E29DA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xC);
    ebp = edi + 0xC;
    ecx = esp + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E29EBu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E29EB: ;
    SET_LO16(eax, MEM16(edi + 6));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + 0x12)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(edi + 0x12) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E29FD; /* je: equal / zero */

loc_000E29F8: ;
    MEM16(esp + 0x12) = LO16(eax);

loc_000E29FD: ;
    ecx = MEM32(edi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = edi + 0x24;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_000E2A28; /* jne: not equal / not zero */

loc_000E2A0C: ;
    eax = esi;
    PUSH32(esp, 0x000E2A13u); RECOMP_ABI_CALL(0x000DD480u, sub_000DD480); /* call 0x000DD480 */

loc_000E2A13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2A31; /* je: equal / zero */

loc_000E2A1A: ;
    PUSH32(esp, 0x000E2A1Fu); RECOMP_ABI_CALL(0x000E2B30u, sub_000E2B30); /* call 0x000E2B30 */

loc_000E2A1F: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E2A28: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000E2A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2A2Au); } /* indirect call */
    }

loc_000E2A2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2A1A; /* je: equal / zero */

loc_000E2A31: ;
    ecx = MEM32(edi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = edi + 0x28;
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_000E2A5A; /* jne: not equal / not zero */

loc_000E2A3D: ;
    eax = ebx;
    PUSH32(esp, 0x000E2A44u); RECOMP_ABI_CALL(0x000E7390u, sub_000E7390); /* call 0x000E7390 */

loc_000E2A44: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2A63; /* je: equal / zero */

loc_000E2A4B: ;
    PUSH32(esp, 0x000E2A50u); RECOMP_ABI_CALL(0x000E2B30u, sub_000E2B30); /* call 0x000E2B30 */

loc_000E2A50: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E2A5A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000E2A5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2A5Cu); } /* indirect call */
    }

loc_000E2A5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2A4B; /* je: equal / zero */

loc_000E2A63: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2A7F; /* jne: not equal / not zero */

loc_000E2A68: ;
    PUSH32(esp, 0x32D738);
    eax = 0xD6;
    ecx = 0x32D610;
    PUSH32(esp, 0x000E2A7Cu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E2A7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2A7F: ;
    ecx = MEM32(edi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebp = edi + 0x2C;
    eax = edi + 0xC;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_000E2AA9; /* jne: not equal / not zero */

loc_000E2A8D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E2A93u); RECOMP_ABI_CALL(0x000E7620u, sub_000E7620); /* call 0x000E7620 */

loc_000E2A93: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2AB2; /* je: equal / zero */

loc_000E2A9A: ;
    PUSH32(esp, 0x000E2A9Fu); RECOMP_ABI_CALL(0x000E2B30u, sub_000E2B30); /* call 0x000E2B30 */

loc_000E2A9F: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E2AA9: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000E2AAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2AABu); } /* indirect call */
    }

loc_000E2AAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2A4B; /* je: equal / zero */

loc_000E2AB2: ;
    ecx = MEM32(ebp);
    edx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E2ABCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2ABAu); } /* indirect call */
    }

loc_000E2ABC: ;
    ecx = MEM32(ebx);
    MEM32(edi + 0x30) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2AFD; /* je: equal / zero */

loc_000E2AC7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E2ACCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2ACAu); } /* indirect call */
    }

loc_000E2ACC: ;
    ecx = MEM32(esi);
    edx = MEM32(edi + 0x20);
    MEM32(edi + 0x38) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E2AD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2AD7u); } /* indirect call */
    }

loc_000E2AD9: ;
    MEM32(edi + 0x34) = eax;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2A4B; /* jne: not equal / not zero */

loc_000E2AE7: ;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2B1B; /* je: equal / zero */

loc_000E2AEE: ;
    PUSH32(esp, 0x000E2AF3u); RECOMP_ABI_CALL(0x000E2B30u, sub_000E2B30); /* call 0x000E2B30 */

loc_000E2AF3: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E2AFD: ;
    edx = MEM32(edi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E2B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2B03u); } /* indirect call */
    }

loc_000E2B05: ;
    ecx = MEM32(edi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0x38) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E2A4B; /* jne: not equal / not zero */

loc_000E2B13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2A4B; /* jne: not equal / not zero */

loc_000E2B1B: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2B30
 * Original: 0x000E2B30 - 0x000E2B88 (88 bytes, 29 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2B30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x32D738);
    eax = 0xFA;
    ecx = 0x324878;
    PUSH32(esp, 0x000E2B45u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E2B45: ;
    eax = MEM32(edi + 0x20);
    esi = edi + 0x20;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2B57; /* je: equal / zero */

loc_000E2B52: ;
    PUSH32(esp, 0x000E2B57u); RECOMP_ABI_CALL(0x000E7310u, sub_000E7310); /* call 0x000E7310 */

loc_000E2B57: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2B66; /* je: equal / zero */

loc_000E2B61: ;
    PUSH32(esp, 0x000E2B66u); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000E2B66: ;
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x28;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2B75; /* je: equal / zero */

loc_000E2B70: ;
    PUSH32(esp, 0x000E2B75u); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000E2B75: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x2C;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2B84; /* je: equal / zero */

loc_000E2B7F: ;
    PUSH32(esp, 0x000E2B84u); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000E2B84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E2B90
 * Original: 0x000E2B90 - 0x000E2BE5 (85 bytes, 28 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000E2B90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E2B96u); RECOMP_ABI_CALL(0x000E2DC0u, sub_000E2DC0); /* call 0x000E2DC0 */

loc_000E2B96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E2B9F; /* jne: not equal / not zero */

loc_000E2B9A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_000E2B9F: ;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), 1 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E2BBD; /* jne: not equal / not zero */

loc_000E2BA6: ;
    PUSH32(esp, 0x32D738);
    eax = 0x10F;
    ecx = 0x32D5E4;
    PUSH32(esp, 0x000E2BBAu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E2BBA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2BBD: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000E2BC5u); RECOMP_ABI_CALL(0x000E2D90u, sub_000E2D90); /* call 0x000E2D90 */

loc_000E2BC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2B9A; /* je: equal / zero */

loc_000E2BC9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x000E2BDCu); RECOMP_ABI_CALL(0x000E29A0u, sub_000E29A0); /* call 0x000E29A0 */

loc_000E2BDC: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E2BF0
 * Original: 0x000E2BF0 - 0x000E2C2F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2BF0: ;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = edi + 0x20;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2C00; /* je: equal / zero */

loc_000E2BFB: ;
    PUSH32(esp, 0x000E2C00u); RECOMP_ABI_CALL(0x000E7310u, sub_000E7310); /* call 0x000E7310 */

loc_000E2C00: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2C0F; /* je: equal / zero */

loc_000E2C0A: ;
    PUSH32(esp, 0x000E2C0Fu); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000E2C0F: ;
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x28;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2C1E; /* je: equal / zero */

loc_000E2C19: ;
    PUSH32(esp, 0x000E2C1Eu); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000E2C1E: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x2C;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2C2D; /* je: equal / zero */

loc_000E2C28: ;
    PUSH32(esp, 0x000E2C2Du); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000E2C2D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E2C30
 * Original: 0x000E2C30 - 0x000E2D4B (283 bytes, 106 insns)
 * Category: game_vehicle
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2C30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = eax;
    ecx = MEM32(edi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = edi + 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2C54; /* je: equal / zero */

loc_000E2C43: ;
    edx = MEM32(edi + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000E2C4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2C49u); } /* indirect call */
    }

loc_000E2C4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2D1C; /* je: equal / zero */

loc_000E2C54: ;
    ecx = MEM32(edi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2C6C; /* je: equal / zero */

loc_000E2C5B: ;
    edx = MEM32(edi + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000E2C64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2C61u); } /* indirect call */
    }

loc_000E2C64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2D1C; /* je: equal / zero */

loc_000E2C6C: ;
    ecx = MEM32(edi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2C84; /* je: equal / zero */

loc_000E2C73: ;
    edx = MEM32(edi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000E2C7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2C79u); } /* indirect call */
    }

loc_000E2C7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2D1C; /* je: equal / zero */

loc_000E2C84: ;
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = edi + 0x20;
    MEM32(edi + 0x34) = eax;
    MEM32(edi + 0x38) = eax;
    MEM32(edi + 0x30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2CA5; /* je: equal / zero */

loc_000E2C9B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000E2CA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2C9Du); } /* indirect call */
    }

loc_000E2CA0: ;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = ebp;

loc_000E2CA5: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2CB5; /* je: equal / zero */

loc_000E2CAB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000E2CB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2CADu); } /* indirect call */
    }

loc_000E2CB0: ;
    eax = MEM32(ebx);
    MEM32(eax + 4) = ebp;

loc_000E2CB5: ;
    ecx = MEM32(edi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2CC7; /* je: equal / zero */

loc_000E2CBC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000E2CC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2CBEu); } /* indirect call */
    }

loc_000E2CC1: ;
    eax = MEM32(edi + 0x28);
    MEM32(eax + 4) = ebp;

loc_000E2CC7: ;
    ecx = MEM32(edi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2CD9; /* je: equal / zero */

loc_000E2CCE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000E2CD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2CD0u); } /* indirect call */
    }

loc_000E2CD3: ;
    eax = MEM32(edi + 0x2C);
    MEM32(eax + 4) = ebp;

loc_000E2CD9: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2CE7; /* je: equal / zero */

loc_000E2CE2: ;
    PUSH32(esp, 0x000E2CE7u); RECOMP_ABI_CALL(0x000E7310u, sub_000E7310); /* call 0x000E7310 */

loc_000E2CE7: ;
    SET_LO16(edx, MEM16(edi + 6));
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ebp + 6) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2D01; /* je: equal / zero */

loc_000E2CF5: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2D01; /* je: equal / zero */

loc_000E2CFA: ;
    esi = ebx;
    PUSH32(esp, 0x000E2D01u); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000E2D01: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E2D0Bu); RECOMP_ABI_CALL(0x000E2D90u, sub_000E2D90); /* call 0x000E2D90 */

loc_000E2D0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E2D1C; /* je: equal / zero */

loc_000E2D10: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000E2D18u); RECOMP_ABI_CALL(0x000E2DC0u, sub_000E2DC0); /* call 0x000E2DC0 */

loc_000E2D18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2D40; /* jne: not equal / not zero */

loc_000E2D1C: ;
    PUSH32(esp, 0x32D738);
    eax = 0x168;
    ecx = 0x324878;
    PUSH32(esp, 0x000E2D30u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E2D30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E2D38u); RECOMP_ABI_CALL(0x000E2BF0u, sub_000E2BF0); /* call 0x000E2BF0 */

loc_000E2D38: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_000E2D40: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000E2D50
 * Original: 0x000E2D50 - 0x000E2D7F (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2D50: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2D79; /* je: equal / zero */

loc_000E2D57: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000E2D5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2D5Bu); } /* indirect call */
    }

loc_000E2D5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFE0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFE0000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2D7E; /* je: equal / zero */

loc_000E2D65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF0000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2D7E; /* je: equal / zero */

loc_000E2D6C: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E2D76; /* jge: greater or equal (signed >=) */

loc_000E2D73: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000E2D76: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

loc_000E2D79: ;
    eax = 0xFFFF0000u;

loc_000E2D7E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2D80
 * Original: 0x000E2D80 - 0x000E2D8E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2D80: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2D8D; /* je: equal / zero */

loc_000E2D87: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000E2D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2D8Au); } /* indirect call */
    }

loc_000E2D8D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2D90
 * Original: 0x000E2D90 - 0x000E2DB9 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2D90: ;
    eax = ecx;
    PUSH32(esp, 0x000E2D97u); RECOMP_ABI_CALL(0x000E2DF0u, sub_000E2DF0); /* call 0x000E2DF0 */

loc_000E2D97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2D9E; /* jne: not equal / not zero */

loc_000E2D9B: ;
    esp += 8; return; /* ret 4 */

loc_000E2D9E: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2DAEu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E2DAE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2DC0
 * Original: 0x000E2DC0 - 0x000E2DE6 (38 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2DC0: ;
    eax = ecx;
    PUSH32(esp, 0x000E2DC7u); RECOMP_ABI_CALL(0x000E2DF0u, sub_000E2DF0); /* call 0x000E2DF0 */

loc_000E2DC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2DCE; /* jne: not equal / not zero */

loc_000E2DCB: ;
    esp += 8; return; /* ret 4 */

loc_000E2DCE: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2DDBu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E2DDB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2DF0
 * Original: 0x000E2DF0 - 0x000E2E19 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2DF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2E10; /* je: equal / zero */

loc_000E2DF4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2E10; /* jne: not equal / not zero */

loc_000E2DF9: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2E10; /* jne: not equal / not zero */

loc_000E2E00: ;
    SET_LO16(eax, MEM16(eax + 6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2E13; /* je: equal / zero */

loc_000E2E0A: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2E13; /* je: equal / zero */

loc_000E2E10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000E2E13: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2E20
 * Original: 0x000E2E20 - 0x000E2E41 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2E20: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2E33; /* je: equal / zero */

loc_000E2E28: ;
    ecx = esi;
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x000E2E31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2E2Eu); } /* indirect call */
    }

loc_000E2E31: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E2E33: ;
    MEM32(edx) = 0x10000;
    MEM32(eax) = 0x10000;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E2E50
 * Original: 0x000E2E50 - 0x000E2E65 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2E50: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2E61; /* je: equal / zero */

loc_000E2E58: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x000E2E61u); RECOMP_ABI_CALL(0x000E7870u, sub_000E7870); /* call 0x000E7870 */

loc_000E2E61: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2E70
 * Original: 0x000E2E70 - 0x000E2E7D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2E70: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2E7C; /* je: equal / zero */

loc_000E2E77: ;
    g_seh_ebp = ebp; sub_000E7860(); return; /* tail jmp 0x000E7860 */

loc_000E2E7C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2E80
 * Original: 0x000E2E80 - 0x000E2EB1 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2E80: ;
    eax = MEM32(edx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2E8C; /* je: equal / zero */

loc_000E2E87: ;
    PUSH32(esp, 0x000E2E8Cu); RECOMP_ABI_CALL(0x000DA270u, sub_000DA270); /* call 0x000DA270 */

loc_000E2E8C: ;
    eax = MEM32(edx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2E98; /* je: equal / zero */

loc_000E2E93: ;
    PUSH32(esp, 0x000E2E98u); RECOMP_ABI_CALL(0x000DA270u, sub_000DA270); /* call 0x000DA270 */

loc_000E2E98: ;
    eax = MEM32(edx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2EA4; /* je: equal / zero */

loc_000E2E9F: ;
    PUSH32(esp, 0x000E2EA4u); RECOMP_ABI_CALL(0x000DA270u, sub_000DA270); /* call 0x000DA270 */

loc_000E2EA4: ;
    eax = MEM32(edx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2EB0; /* je: equal / zero */

loc_000E2EAB: ;
    g_seh_ebp = ebp; sub_000DA270(); return; /* tail jmp 0x000DA270 */

loc_000E2EB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2EC0
 * Original: 0x000E2EC0 - 0x000E2EF1 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2EC0: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2ECC; /* je: equal / zero */

loc_000E2EC7: ;
    PUSH32(esp, 0x000E2ECCu); RECOMP_ABI_CALL(0x000DA280u, sub_000DA280); /* call 0x000DA280 */

loc_000E2ECC: ;
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2ED8; /* je: equal / zero */

loc_000E2ED3: ;
    PUSH32(esp, 0x000E2ED8u); RECOMP_ABI_CALL(0x000DA280u, sub_000DA280); /* call 0x000DA280 */

loc_000E2ED8: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2EE4; /* je: equal / zero */

loc_000E2EDF: ;
    PUSH32(esp, 0x000E2EE4u); RECOMP_ABI_CALL(0x000DA280u, sub_000DA280); /* call 0x000DA280 */

loc_000E2EE4: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2EF0; /* je: equal / zero */

loc_000E2EEB: ;
    g_seh_ebp = ebp; sub_000DA280(); return; /* tail jmp 0x000DA280 */

loc_000E2EF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2F00
 * Original: 0x000E2F00 - 0x000E2F11 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2F00: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2F0D; /* je: equal / zero */

loc_000E2F07: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E2F0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2F0Au); } /* indirect call */
    }

loc_000E2F0C: ;
    esp += 4; return; /* ret */

loc_000E2F0D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E2F20
 * Original: 0x000E2F20 - 0x000E2F31 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000E2F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2F20: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2F2E; /* je: equal / zero */

loc_000E2F27: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000E2F2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2F2Au); } /* indirect call */
    }

loc_000E2F2D: ;
    esp += 4; return; /* ret */

loc_000E2F2E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E2F40
 * Original: 0x000E2F40 - 0x000E2F6E (46 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2F40: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2F6D; /* jne: not equal / not zero */

loc_000E2F47: ;
    PUSH32(esp, 0x1FA);
    PUSH32(esp, 0x324878);
    edx = 0x32D5C0;
    ecx = 0x32D738;
    PUSH32(esp, 0x000E2F60u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E2F60: ;
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2F6D; /* jne: not equal / not zero */

loc_000E2F6A: ;
    eax = MEM32(esi + 0x20);

loc_000E2F6D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2F70
 * Original: 0x000E2F70 - 0x000E2F78 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2F70: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x44)); return; /* indirect tail jmp */

}

/**
 * sub_000E2F80
 * Original: 0x000E2F80 - 0x000E2FC1 (65 bytes, 15 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2F80: ;
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2F8E; /* je: equal / zero */

loc_000E2F87: ;
    eax = esi;
    g_seh_ebp = ebp; sub_000E78C0(); return; /* tail jmp 0x000E78C0 */

loc_000E2F8E: ;
    PUSH32(esp, 0x32D738);
    eax = 0x212;
    ecx = 0x324878;
    PUSH32(esp, 0x000E2FA2u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E2FA2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 0xC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2FD0
 * Original: 0x000E2FD0 - 0x000E2FFB (43 bytes, 12 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2FD0: ;
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2FE3; /* je: equal / zero */

loc_000E2FD7: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x000E2FE0u); RECOMP_ABI_CALL(0x000E78E0u, sub_000E78E0); /* call 0x000E78E0 */

loc_000E2FE0: ;
    esp += 8; return; /* ret 4 */

loc_000E2FE3: ;
    PUSH32(esp, 0x32D738);
    eax = 0x221;
    ecx = 0x324878;
    PUSH32(esp, 0x000E2FF7u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E2FF7: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3000
 * Original: 0x000E3000 - 0x000E3006 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3000(void)
{

loc_000E3000: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000E3010
 * Original: 0x000E3010 - 0x000E3056 (70 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3010: ;
    PUSH32(esp, esi);
    eax = 0x68;
    PUSH32(esp, 0x000E301Bu); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000E301B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3047; /* je: equal / zero */

loc_000E301F: ;
    PUSH32(esp, 0x000E3024u); RECOMP_ABI_CALL(0x000E3060u, sub_000E3060); /* call 0x000E3060 */

loc_000E3024: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3047; /* je: equal / zero */

loc_000E302A: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 4) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000E303Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E3037u); } /* indirect call */
    }

loc_000E303A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E304C; /* jne: not equal / not zero */

loc_000E303E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000E3047u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E3044u); } /* indirect call */
    }

loc_000E3047: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E304C: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E3060
 * Original: 0x000E3060 - 0x000E307B (27 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3060: ;
    PUSH32(esp, 0x000E3065u); RECOMP_ABI_CALL(0x000DF6C0u, sub_000DF6C0); /* call 0x000DF6C0 */

loc_000E3065: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x32D780;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x1C) = 0xEBCC0;
    MEM32(eax + 0x60) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E3080
 * Original: 0x000E3080 - 0x000E309C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3080: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000E3088u); RECOMP_ABI_CALL(0x000E30A0u, sub_000E30A0); /* call 0x000E30A0 */

loc_000E3088: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000E3098; /* je: equal / zero */

loc_000E3091: ;
    PUSH32(esp, 0x000E3096u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000E3096: ;
    eax = esi;

loc_000E3098: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E30A0
 * Original: 0x000E30A0 - 0x000E30AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E30A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E30A0: ;
    MEM32(ecx) = 0x32D780;
    g_seh_ebp = ebp; sub_000DF700(); return; /* tail jmp 0x000DF700 */

}

/**
 * sub_000E30B0
 * Original: 0x000E30B0 - 0x000E3143 (147 bytes, 46 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E30B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E30B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000E30C3; /* jne: not equal / not zero */

loc_000E30BC: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000E30C3: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E30DF; /* je: equal / zero */

loc_000E30C8: ;
    PUSH32(esp, 0x32D860);
    eax = 0x56;
    ecx = 0x32D844;
    PUSH32(esp, 0x000E30DCu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E30DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E30DF: ;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E30FD; /* ja: above (unsigned >) */

loc_000E30E6: ;
    PUSH32(esp, 0x32D860);
    eax = 0x57;
    ecx = 0x32D828;
    PUSH32(esp, 0x000E30FAu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E30FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E30FD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000E3104u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E3101u); } /* indirect call */
    }

loc_000E3104: ;
    PUSH32(esp, 0x3C);
    ecx = esi + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E3110u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E3110: ;
    MEM32(esi + 0x10) = 2;
    MEM32(esi + 0x20) = 0;
    MEM32(esi + 0x60) = 0;
    edx = MEM32(edi + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x000E3133u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000E3133: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x64) = eax;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E3150
 * Original: 0x000E3150 - 0x000E316C (28 bytes, 7 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000E3150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3150: ;
    PUSH32(esp, 0x32D860);
    eax = 0x6D;
    ecx = 0x324878;
    PUSH32(esp, 0x000E3164u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E3164: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3170
 * Original: 0x000E3170 - 0x000E31AB (59 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3170: ;
    eax = MEM32(ecx + 0x58);
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E319E; /* jbe: below or equal (unsigned <=) */

loc_000E317B: ;
    PUSH32(esp, esi);
    esi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1F4 (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_000E3198; /* jbe: below or equal (unsigned <=) */

loc_000E3189: ;
    eax = 0x32D7D0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000E3195u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000E3195: ;
    esp += 8; return; /* ret 4 */

loc_000E3198: ;
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

loc_000E319E: ;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 8) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E31B0
 * Original: 0x000E31B0 - 0x000E31BF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E31B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E31B0: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    eax = 0xFFFE0000u;
    if (CMP_EQ(_fa, _fb)) goto loc_000E31BE; /* je: equal / zero */

loc_000E31BB: ;
    eax = MEM32(ecx + 0x20);

loc_000E31BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E31C0
 * Original: 0x000E31C0 - 0x000E3287 (199 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E31C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E31C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = MEM32(esp + 0xC);
    ebx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_000E31E6; /* jne: not equal / not zero */

loc_000E31D2: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(eax) = 0;
    eax = 2;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000E31E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E31FA; /* jne: not equal / not zero */

loc_000E31EB: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(ecx) = 0;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000E31FA: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(ebp) = 0;
    edi = MEM32(esi + 0x58);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E321D; /* jae: above or equal (unsigned >=) */

loc_000E320E: ;
    eax = MEM32(esi + 0x20);
    edx = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E321D; /* jae: above or equal (unsigned >=) */

loc_000E3219: ;
    edi = ebx;
    goto loc_000E3222;

loc_000E321D: ;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000E3222: ;
    edx = MEM32(esi + 0x28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3232u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E3232: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = ecx;
    MEM32(ebp) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_B(_fa, _fb)) goto loc_000E3276; /* jb: below (unsigned <) */

loc_000E3246: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3276; /* je: equal / zero */

loc_000E3250: ;
    edx = MEM32(esi + 0x60);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E326F; /* jne: not equal / not zero */

loc_000E3257: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x64) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E326F; /* ja: above (unsigned >) */

loc_000E325E: ;
    MEM32(esi + 0x60) = 1;
    POP32(esp, esi);
    eax = 5;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000E326F: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000E3276: ;
    MEM32(esi + 8) = 2;
    POP32(esp, esi);
    eax = 4;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E3290
 * Original: 0x000E3290 - 0x000E32C6 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3290(void)
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

loc_000E3290: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E3297u); RECOMP_ABI_CALL(0x000D5EA0u, sub_000D5EA0); /* call 0x000D5EA0 */

loc_000E3297: ;
    esi = eax;
    PUSH32(esp, 0x000E329Eu); RECOMP_ABI_CALL(0x000D5F00u, sub_000D5F00); /* call 0x000D5F00 */

loc_000E329E: ;
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337A0)); /* fadd dword ptr [0x3337a0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333830)); /* fmul dword ptr [0x333830] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E32C0u); RECOMP_ABI_CALL(0x000ED690u, sub_000ED690); /* call 0x000ED690 */

loc_000E32C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E32D0
 * Original: 0x000E32D0 - 0x000E32D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E32D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E32D0: ;
    g_seh_ebp = ebp; sub_000ED6D0(); return; /* tail jmp 0x000ED6D0 */

}

/**
 * sub_000E32E0
 * Original: 0x000E32E0 - 0x000E333D (93 bytes, 37 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E32E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E32E0: ;
    PUSH32(esp, esi);
    eax = 0x44;
    PUSH32(esp, 0x000E32EBu); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000E32EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E32FA; /* je: equal / zero */

loc_000E32EF: ;
    PUSH32(esp, 0x000E32F4u); RECOMP_ABI_CALL(0x000E3340u, sub_000E3340); /* call 0x000E3340 */

loc_000E32F4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E330E; /* jne: not equal / not zero */

loc_000E32FA: ;
    PUSH32(esp, 0x32E1EC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000E3306u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000E3306: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E330E: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000E3321u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E331Eu); } /* indirect call */
    }

loc_000E3321: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3333; /* jne: not equal / not zero */

loc_000E3325: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000E332Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E332Bu); } /* indirect call */
    }

loc_000E332E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E3333: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E3340
 * Original: 0x000E3340 - 0x000E337A (58 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3340: ;
    PUSH32(esp, 0x000E3345u); RECOMP_ABI_CALL(0x000DF6C0u, sub_000DF6C0); /* call 0x000DF6C0 */

loc_000E3345: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x32D8A8;
    MEM32(eax + 0x10) = 2;
    MEM32(eax + 0x1C) = 0xEBCC0;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x40) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E3380
 * Original: 0x000E3380 - 0x000E339E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3380: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    PUSH32(esp, 0x000E338Au); RECOMP_ABI_CALL(0x000E33A0u, sub_000E33A0); /* call 0x000E33A0 */

loc_000E338A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000E339A; /* je: equal / zero */

loc_000E3393: ;
    PUSH32(esp, 0x000E3398u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000E3398: ;
    eax = esi;

loc_000E339A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E33A0
 * Original: 0x000E33A0 - 0x000E33E2 (66 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E33A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E33A0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x32D8A8;
    if (CMP_EQ(_fa, _fb)) goto loc_000E33BF; /* je: equal / zero */

loc_000E33B2: ;
    PUSH32(esp, 0x000E33B7u); RECOMP_ABI_CALL(0x000ED950u, sub_000ED950); /* call 0x000ED950 */

loc_000E33B7: ;
    edi = MEM32(esi + 0x20);
    PUSH32(esp, 0x000E33BFu); RECOMP_ABI_CALL(0x000EDDD0u, sub_000EDDD0); /* call 0x000EDDD0 */

loc_000E33BF: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E33D4; /* je: equal / zero */

loc_000E33C7: ;
    PUSH32(esp, 0x000E33CCu); RECOMP_ABI_CALL(0x000ED950u, sub_000ED950); /* call 0x000ED950 */

loc_000E33CC: ;
    edi = MEM32(esi + 0x24);
    PUSH32(esp, 0x000E33D4u); RECOMP_ABI_CALL(0x000EDDD0u, sub_000EDDD0); /* call 0x000EDDD0 */

loc_000E33D4: ;
    PUSH32(esp, 0x000E33D9u); RECOMP_ABI_CALL(0x000E3670u, sub_000E3670); /* call 0x000E3670 */

loc_000E33D9: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DF700(); return; /* tail jmp 0x000DF700 */

}

/**
 * sub_000E33F0
 * Original: 0x000E33F0 - 0x000E35F5 (517 bytes, 159 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E33F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E33F0: ;
    _fb = (uint32_t)(0x804) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x804;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, esi);
    MEM32(esp + 0x804) = eax;
    PUSH32(esp, 0x000E3408u); RECOMP_ABI_CALL(0x000D5EA0u, sub_000D5EA0); /* call 0x000D5EA0 */

loc_000E3408: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E3427; /* ja: above (unsigned >) */

loc_000E340E: ;
    PUSH32(esp, 0x74);
    PUSH32(esp, 0x32E164);
    edx = 0x32E1BC;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3424u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3424: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3427: ;
    _fa = (uint32_t)(MEM32(0x64D828)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D828), esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E35DD; /* jb: below (unsigned <) */

loc_000E3433: ;
    eax = MEM32(esp + 0x80C);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x410;
    PUSH32(esp, 0x32E0F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3454u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000E3454: ;
    edx = MEM32(0x64D828);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E35B0; /* jbe: below or equal (unsigned <=) */

loc_000E3467: ;
    PUSH32(esp, edi);
    goto loc_000E3470;

    /* nop */

loc_000E3470: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM8(esp + 0xC) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000E348C; /* jne: not equal / not zero */

loc_000E3479: ;
    ecx = MEM32(0x5F8CB8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x323634);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    goto loc_000E34B7;

loc_000E348C: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E34A5; /* je: equal / zero */

loc_000E3491: ;
    eax = MEM32(ebp * 4 + 0x5F8CB8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x32E0E4);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    goto loc_000E34B7;

loc_000E34A5: ;
    edx = MEM32(ebp * 4 + 0x5F8CB8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x32E0D8);
    eax = esp + 0x14;
    PUSH32(esp, eax);

loc_000E34B7: ;
    PUSH32(esp, 0x000E34BCu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000E34BC: ;
    eax = esp + 0x418;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    /* nop */

loc_000E34D0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E34D0; /* jne: not equal / not zero */

loc_000E34D7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = esp + 0xC;
    esi = eax + 1;

loc_000E34E2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E34E2; /* jne: not equal / not zero */

loc_000E34E9: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x400 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E350E; /* jb: below (unsigned <) */

loc_000E34F7: ;
    PUSH32(esp, 0x32E178);
    eax = 0x86;
    ecx = 0x32E0A4;
    PUSH32(esp, 0x000E350Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E350B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E350E: ;
    eax = esp + 0x40C;
    edx = eax + 1;

loc_000E3518: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3518; /* jne: not equal / not zero */

loc_000E351F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = esp + 0xC;
    esi = eax + 1;
    /* nop */

loc_000E3530: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3530; /* jne: not equal / not zero */

loc_000E3537: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax + edx + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E3579; /* jae: above or equal (unsigned >=) */

loc_000E3545: ;
    eax = esp + 0xC;
    edx = eax;
    goto loc_000E3550;

    /* nop */

loc_000E3550: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3550; /* jne: not equal / not zero */

loc_000E3557: ;
    edi = esp + 0x40C;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E3561: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3561; /* jne: not equal / not zero */

loc_000E3569: ;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx;
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

loc_000E3579: ;
    edx = MEM32(0x64D828);
    eax = edx + -1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E35A6; /* jne: not equal / not zero */

loc_000E3586: ;
    edi = esp + 0x40C;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000E3590: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3590; /* jne: not equal / not zero */

loc_000E3598: ;
    ecx = 7;
    esi = 0x32E084;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */

loc_000E35A6: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E3470; /* jb: below (unsigned <) */

loc_000E35AF: ;
    POP32(esp, edi);

loc_000E35B0: ;
    eax = esp + 0x408;
    edx = 8;
    PUSH32(esp, 0x000E35C1u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000E35C1: ;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x800);
    PUSH32(esp, 0x000E35D4u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000E35D4: ;
    _fb = (uint32_t)(0x804) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x804;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E35DD: ;
    ecx = MEM32(esp + 0x804);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    PUSH32(esp, 0x000E35ECu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000E35EC: ;
    _fb = (uint32_t)(0x804) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x804;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E34D7
 * Original: 0x000E34D7 - 0x000E35F5 (286 bytes, 93 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E34D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E34D7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = esp + 0xC;
    esi = eax + 1;

loc_000E34E2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E34E2; /* jne: not equal / not zero */

loc_000E34E9: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x400 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E350E; /* jb: below (unsigned <) */

loc_000E34F7: ;
    PUSH32(esp, 0x32E178);
    eax = 0x86;
    ecx = 0x32E0A4;
    PUSH32(esp, 0x000E350Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E350B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E350E: ;
    eax = esp + 0x40C;
    edx = eax + 1;

loc_000E3518: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3518; /* jne: not equal / not zero */

loc_000E351F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = esp + 0xC;
    esi = eax + 1;
    /* nop */

loc_000E3530: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3530; /* jne: not equal / not zero */

loc_000E3537: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax + edx + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E3579; /* jae: above or equal (unsigned >=) */

loc_000E3545: ;
    eax = esp + 0xC;
    edx = eax;
    goto loc_000E3550;

    /* nop */

loc_000E3550: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3550; /* jne: not equal / not zero */

loc_000E3557: ;
    edi = esp + 0x40C;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E3561: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3561; /* jne: not equal / not zero */

loc_000E3569: ;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx;
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

loc_000E3579: ;
    edx = MEM32(0x64D828);
    eax = edx + -1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E35A6; /* jne: not equal / not zero */

loc_000E3586: ;
    edi = esp + 0x40C;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000E3590: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3590; /* jne: not equal / not zero */

loc_000E3598: ;
    ecx = 7;
    esi = 0x32E084;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */

loc_000E35A6: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_000E3470(); return; } /* jb: below (unsigned <) */

loc_000E35AF: ;
    POP32(esp, edi);
    eax = esp + 0x408;
    edx = 8;
    PUSH32(esp, 0x000E35C1u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000E35C1: ;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x800);
    PUSH32(esp, 0x000E35D4u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000E35D4: ;
    _fb = (uint32_t)(0x804) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x804;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    _fb = (uint32_t)(0x804) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x804;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3506
 * Original: 0x000E3506 - 0x000E35F5 (239 bytes, 78 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3506(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E3506: ;
    PUSH32(esp, 0x000E350Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E350B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x40C;
    edx = eax + 1;

loc_000E3518: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3518; /* jne: not equal / not zero */

loc_000E351F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = esp + 0xC;
    esi = eax + 1;
    /* nop */

loc_000E3530: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3530; /* jne: not equal / not zero */

loc_000E3537: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax + edx + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E3579; /* jae: above or equal (unsigned >=) */

loc_000E3545: ;
    eax = esp + 0xC;
    edx = eax;
    goto loc_000E3550;

    /* nop */

loc_000E3550: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3550; /* jne: not equal / not zero */

loc_000E3557: ;
    edi = esp + 0x40C;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E3561: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3561; /* jne: not equal / not zero */

loc_000E3569: ;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx;
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

loc_000E3579: ;
    edx = MEM32(0x64D828);
    eax = edx + -1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E35A6; /* jne: not equal / not zero */

loc_000E3586: ;
    edi = esp + 0x40C;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000E3590: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3590; /* jne: not equal / not zero */

loc_000E3598: ;
    ecx = 7;
    esi = 0x32E084;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */

loc_000E35A6: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_000E3470(); return; } /* jb: below (unsigned <) */

loc_000E35AF: ;
    POP32(esp, edi);
    eax = esp + 0x408;
    edx = 8;
    PUSH32(esp, 0x000E35C1u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000E35C1: ;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x800);
    PUSH32(esp, 0x000E35D4u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000E35D4: ;
    _fb = (uint32_t)(0x804) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x804;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    _fb = (uint32_t)(0x804) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x804;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3600
 * Original: 0x000E3600 - 0x000E366D (109 bytes, 28 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3600: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3623; /* je: equal / zero */

loc_000E3607: ;
    PUSH32(esp, 0x97);
    PUSH32(esp, 0x32E058);
    edx = 0x32E068;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3620u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3620: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3623: ;
    eax = MEM32(0x64D828);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E3653; /* jb: below (unsigned <) */

loc_000E362D: ;
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x32E00C);
    edx = 0x32E034;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3646u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3646: ;
    eax = MEM32(0x64D828);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E365F; /* jae: above or equal (unsigned >=) */

loc_000E3653: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    MEM32(eax * 4 + 0x5F8CB8) = edx;

loc_000E365F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D828) = eax;
    MEM32(esi + 0x40) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000E3670
 * Original: 0x000E3670 - 0x000E36AA (58 bytes, 15 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3670: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E36A9; /* je: equal / zero */

loc_000E3677: ;
    eax = MEM32(0x64D828);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E369C; /* ja: above (unsigned >) */

loc_000E3680: ;
    PUSH32(esp, 0xA3);
    PUSH32(esp, 0x32DFC4);
    edx = 0x32DFE0;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3699u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3699: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E369C: ;
    MEM32(0x64D828) = MEM32(0x64D828) - 1;
    _fa = (uint32_t)(MEM32(0x64D828)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x40) = 0;

loc_000E36A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E36B0
 * Original: 0x000E36B0 - 0x000E36C5 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E36B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E36B0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx + 0x20);
    MEM32(ecx + 4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E36D0
 * Original: 0x000E36D0 - 0x000E37DA (266 bytes, 77 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E36D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E36D0: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esp + 0x108) = eax;
    PUSH32(esp, 0x000E36EBu); RECOMP_ABI_CALL(0x000E33F0u, sub_000E33F0); /* call 0x000E33F0 */

loc_000E36EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3707; /* je: equal / zero */

loc_000E36EF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x000E36FEu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000E36FE: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E3707: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x114);
    eax = esp + 0xC;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    ebx = edi + 4;
    PUSH32(esp, 0x000E3722u); RECOMP_ABI_CALL(0x000CF150u, sub_000CF150); /* call 0x000CF150 */

loc_000E3722: ;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3749; /* je: equal / zero */

loc_000E372D: ;
    PUSH32(esp, 0xBA);
    PUSH32(esp, 0x32DF88);
    edx = 0x32DFB0;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3746u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3746: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3749: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E3757u); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_000E3757: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E377C; /* jne: not equal / not zero */

loc_000E3762: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x000E3773u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000E3773: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E377C: ;
    ecx = MEM32(edi + 0x34);
    edx = MEM32(edi + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E3789u); RECOMP_ABI_CALL(0x000ED800u, sub_000ED800); /* call 0x000ED800 */

loc_000E3789: ;
    eax = MEM32(esi + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E37AF; /* je: equal / zero */

loc_000E3793: ;
    PUSH32(esp, 0xC1);
    PUSH32(esp, 0x32DF70);
    edx = 0x32DFB0;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E37ACu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E37AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E37AF: ;
    edi = MEM32(edi + 0x34);
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x38) = edi;
    PUSH32(esp, 0x000E37BDu); RECOMP_ABI_CALL(0x000E3600u, sub_000E3600); /* call 0x000E3600 */

loc_000E37BD: ;
    ecx = MEM32(esp + 0x10C);
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    PUSH32(esp, 0x000E37D1u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000E37D1: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E37E0
 * Original: 0x000E37E0 - 0x000E3801 (33 bytes, 8 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000E37E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E37E0: ;
    PUSH32(esp, 0xCD);
    PUSH32(esp, 0x324878);
    edx = 0x32DF5C;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E37F9u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E37F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3810
 * Original: 0x000E3810 - 0x000E383C (44 bytes, 12 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3810: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3839; /* je: equal / zero */

loc_000E3819: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3839; /* je: equal / zero */

loc_000E381D: ;
    PUSH32(esp, 0xD6);
    PUSH32(esp, 0x324878);
    edx = 0x32DF28;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3836u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3836: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3839: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3840
 * Original: 0x000E3840 - 0x000E384F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3840: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    eax = 0xFFFE0000u;
    if (CMP_EQ(_fa, _fb)) goto loc_000E384E; /* je: equal / zero */

loc_000E384B: ;
    eax = MEM32(ecx + 0x28);

loc_000E384E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E3850
 * Original: 0x000E3850 - 0x000E3E1D (1485 bytes, 410 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E3850: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x40C) = eax;
    eax = MEM32(esi + 0x2C);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000E387B; /* je: equal / zero */

loc_000E3875: ;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x28) = ecx;

loc_000E387B: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E38A9; /* jne: not equal / not zero */

loc_000E3883: ;
    eax = MEM32(esp + 0x41C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    eax = 2;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x000E38A0u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000E38A0: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000E38A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E38CF; /* jne: not equal / not zero */

loc_000E38AE: ;
    edx = MEM32(esp + 0x41C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = ecx;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x000E38C6u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000E38C6: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000E38CF: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000E3B35; /* je: equal / zero */

loc_000E38DB: ;
    ebp = MEM32(esp + 0x41C);
    eax = MEM32(ebp);
    edx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000E38F4; /* jb: below (unsigned <) */

loc_000E38F0: ;
    MEM32(esp + 0x10) = edx;

loc_000E38F4: ;
    ebx = MEM32(esp + 0x420);
    eax = MEM32(ebp + 4);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E390Au); RECOMP_ABI_CALL(0x000ED990u, sub_000ED990); /* call 0x000ED990 */

loc_000E390A: ;
    ecx = MEM32(ebx);
    ebp = eax;
    eax = MEM32(esi + 0x3C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E3934; /* jae: above or equal (unsigned >=) */

loc_000E3918: ;
    PUSH32(esp, 0x104);
    PUSH32(esp, 0x32DEEC);
    edx = 0x32DF14;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3931u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3931: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3934: ;
    ecx = MEM32(ebx);
    edx = MEM32(esi + 0x3C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    MEM32(esi + 0x3C) = edx;
    if (CMP_A(_fa, _fb)) goto loc_000E3B0F; /* ja: above (unsigned >) */

loc_000E3947: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0xE3E20); /* switch: 10 entries, 10 targets */
    if (_jt == 0x000E394Eu) goto loc_000E394E;
    if (_jt == 0x000E397Du) goto loc_000E397D;
    if (_jt == 0x000E39FEu) goto loc_000E39FE;
    if (_jt == 0x000E3A7Cu) goto loc_000E3A7C;
    if (_jt == 0x000E3B0Fu) goto loc_000E3B0F;
    if (_jt == 0x000E3CCFu) goto loc_000E3CCF;
    if (_jt == 0x000E3CF6u) goto loc_000E3CF6;
    if (_jt == 0x000E3D21u) goto loc_000E3D21;
    if (_jt == 0x000E3D41u) goto loc_000E3D41;
    if (_jt == 0x000E3D95u) goto loc_000E3D95;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000E394E: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3CEF; /* je: equal / zero */

loc_000E395A: ;
    PUSH32(esp, 0x10A);
    PUSH32(esp, 0x32DE5C);
    edx = 0x32DE80;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3973u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3973: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E3DF8;

loc_000E397D: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E399E; /* je: equal / zero */

loc_000E3982: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x32DDE4);
    edx = 0x32DE00;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E399Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E399B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E399E: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000E39D0; /* je: equal / zero */

loc_000E39AB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E39C0; /* jne: not equal / not zero */

loc_000E39B0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x32DDC0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    goto loc_000E39E8;

loc_000E39C0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x32DDC0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    goto loc_000E39E8;

loc_000E39D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E39DA; /* jne: not equal / not zero */

loc_000E39D5: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E39DD;

loc_000E39DA: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E39DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x32DD8C);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);

loc_000E39E8: ;
    PUSH32(esp, 0x000E39EDu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000E39ED: ;
    edx = 0xD;
    eax = esp + 0x20;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E39FEu); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000E39FE: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E3A26; /* jae: above or equal (unsigned >=) */

loc_000E3A06: ;
    PUSH32(esp, 0x123);
    PUSH32(esp, 0x32DD38);
    edx = 0x32DD58;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3A1Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3A1F: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */

loc_000E3A26: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3A5A; /* je: equal / zero */

loc_000E3A28: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3A36; /* jne: not equal / not zero */

loc_000E3A31: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E3A39;

loc_000E3A36: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3A39: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, 0x32DD08);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E3A49u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000E3A49: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14;
    edx = 0xD;
    PUSH32(esp, 0x000E3A5Au); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000E3A5A: ;
    edi = MEM32(esi + 0x24);
    PUSH32(esp, 0x000E3A62u); RECOMP_ABI_CALL(0x000EDDD0u, sub_000EDDD0); /* call 0x000EDDD0 */

loc_000E3A62: ;
    MEM32(esi + 0x24) = 0xFFFFFFFFu;
    MEM32(esi + 0x2C) = 1;
    MEM32(esi + 0x34) = 0;
    goto loc_000E3DF3;

loc_000E3A7C: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3AA0; /* je: equal / zero */

loc_000E3A84: ;
    PUSH32(esp, 0x135);
    PUSH32(esp, 0x32DE5C);
    edx = 0x32DC98;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3A9Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3A9D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3AA0: ;
    edi = MEM32(esi + 0x24);
    PUSH32(esp, 0x000E3AA8u); RECOMP_ABI_CALL(0x000EDDD0u, sub_000EDDD0); /* call 0x000EDDD0 */

loc_000E3AA8: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x24) = 0xFFFFFFFFu;
    MEM32(esi + 0x2C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3AD9; /* je: equal / zero */

loc_000E3ABD: ;
    PUSH32(esp, 0x13A);
    PUSH32(esp, 0x32DC50);
    edx = 0x32DC68;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3AD6u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3AD6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3AD9: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ebx);
    eax = MEM32(esi + 0x34);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3B03; /* je: equal / zero */

loc_000E3AE7: ;
    PUSH32(esp, 0x13B);
    PUSH32(esp, 0x32DC1C);
    edx = 0x32DC68;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3B00u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3B00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3B03: ;
    MEM32(esi + 0x34) = 0;
    goto loc_000E3DF3;

loc_000E3B0F: ;
    PUSH32(esp, ebp);
    edx = esp + 0x18;
    PUSH32(esp, 0x32DBE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E3B1Fu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000E3B1F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14;
    edx = 0xD;
    PUSH32(esp, 0x000E3B30u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000E3B30: ;
    goto loc_000E3DF8;

loc_000E3B35: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3DCA; /* je: equal / zero */

loc_000E3B40: ;
    PUSH32(esp, 0x000E3B45u); RECOMP_ABI_CALL(0x000EDD90u, sub_000EDD90); /* call 0x000EDD90 */

loc_000E3B45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3C47; /* je: equal / zero */

loc_000E3B4D: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3B6E; /* je: equal / zero */

loc_000E3B52: ;
    PUSH32(esp, 0x14D);
    PUSH32(esp, 0x32DBB4);
    edx = 0x32DFB0;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3B6Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3B6B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3B6E: ;
    edi = MEM32(esp + 0x41C);
    ebx = MEM32(esp + 0x420);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x000E3B8Cu); RECOMP_ABI_CALL(0x000ED990u, sub_000ED990); /* call 0x000ED990 */

loc_000E3B8C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3BAF; /* je: equal / zero */

loc_000E3B93: ;
    PUSH32(esp, 0x151);
    PUSH32(esp, 0x32DB54);
    edx = 0x32DB7C;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3BACu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3BAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3BAF: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3BD1; /* je: equal / zero */

loc_000E3BB5: ;
    PUSH32(esp, 0x152);
    PUSH32(esp, 0x32DAE4);
    edx = 0x32DB10;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3BCEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3BCE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3BD1: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x30);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x20) = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E3BFD; /* jae: above or equal (unsigned >=) */

loc_000E3BE1: ;
    PUSH32(esp, 0x157);
    PUSH32(esp, 0x32DABC);
    edx = 0x32DF14;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3BFAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3BFA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3BFD: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x38) = MEM32(esi + 0x38) - edx;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3C24; /* je: equal / zero */

loc_000E3C08: ;
    PUSH32(esp, 0x15A);
    PUSH32(esp, 0x32DA78);
    edx = 0x32DAA0;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3C21u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3C21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3C24: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x3C) = edx;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x38) = eax;
    edi = 5;
    PUSH32(esp, 0x000E3C42u); RECOMP_ABI_CALL(0x000E3670u, sub_000E3670); /* call 0x000E3670 */

loc_000E3C42: ;
    goto loc_000E3DF8;

loc_000E3C47: ;
    ebp = MEM32(esp + 0x41C);
    edi = MEM32(ebp);
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E3C76; /* jb: below (unsigned <) */

loc_000E3C58: ;
    PUSH32(esp, 0x16C);
    PUSH32(esp, 0x324878);
    edx = 0x32DA30;
    ecx = 0x32E178;
    edi = eax;
    PUSH32(esp, 0x000E3C73u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3C73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3C76: ;
    ebx = MEM32(esp + 0x420);
    eax = MEM32(ebp + 4);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E3C8Bu); RECOMP_ABI_CALL(0x000ED990u, sub_000ED990); /* call 0x000ED990 */

loc_000E3C8B: ;
    ecx = MEM32(esi + 0x38);
    ebp = eax;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E3CB5; /* jae: above or equal (unsigned >=) */

loc_000E3C99: ;
    PUSH32(esp, 0x170);
    PUSH32(esp, 0x32DA04);
    edx = 0x32DF14;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3CB2u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3CB2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3CB5: ;
    edx = MEM32(ebx);
    ecx = MEM32(esi + 0x38);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    MEM32(esi + 0x38) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_000E3D95; /* ja: above (unsigned >) */

loc_000E3CC8: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0xE3E34); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000E3CCFu) goto loc_000E3CCF;
    if (_jt == 0x000E3CF6u) goto loc_000E3CF6;
    if (_jt == 0x000E3D21u) goto loc_000E3D21;
    if (_jt == 0x000E3D41u) goto loc_000E3D41;
    if (_jt == 0x000E3D95u) goto loc_000E3D95;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000E3CCF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3CEF; /* je: equal / zero */

loc_000E3CD3: ;
    PUSH32(esp, 0x176);
    PUSH32(esp, 0x32DE5C);
    edx = 0x32DE80;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3CECu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3CEC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3CEF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E3DF8;

loc_000E3CF6: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3D17; /* je: equal / zero */

loc_000E3CFB: ;
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x32D9B8);
    edx = 0x32D9CC;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3D14u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3D14: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3D17: ;
    edi = 6;
    goto loc_000E3DF8;

loc_000E3D21: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3D61; /* je: equal / zero */

loc_000E3D25: ;
    PUSH32(esp, 0x17E);
    PUSH32(esp, 0x32DE5C);
    edx = 0x32DC98;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3D3Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3D3E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3D41: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E3D61; /* jbe: below or equal (unsigned <=) */

loc_000E3D45: ;
    PUSH32(esp, 0x180);
    PUSH32(esp, 0x32DD38);
    edx = 0x32D984;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3D5Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3D5E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3D61: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3D6F; /* jne: not equal / not zero */

loc_000E3D6A: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E3D72;

loc_000E3D6F: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3D72: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, 0x32D940);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3D82u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000E3D82: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14;
    edx = 0xD;
    PUSH32(esp, 0x000E3D93u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000E3D93: ;
    goto loc_000E3DF3;

loc_000E3D95: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3DA3; /* jne: not equal / not zero */

loc_000E3D9E: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E3DA6;

loc_000E3DA3: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3DA6: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x32D914);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E3DB7u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000E3DB7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14;
    edx = 0xD;
    PUSH32(esp, 0x000E3DC8u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000E3DC8: ;
    goto loc_000E3DF3;

loc_000E3DCA: ;
    PUSH32(esp, 0x19D);
    PUSH32(esp, 0x324878);
    edx = 0x32D8F4;
    ecx = 0x32E178;
    PUSH32(esp, 0x000E3DE3u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000E3DE3: ;
    ebx = MEM32(esp + 0x428);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = 0;

loc_000E3DF3: ;
    edi = 4;

loc_000E3DF8: ;
    edx = MEM32(ebx);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esp + 0x414);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(esi + 0x28) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x000E3E14u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000E3E14: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E3E50
 * Original: 0x000E3E50 - 0x000E3EB7 (103 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3E50: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3E58; /* jne: not equal / not zero */

loc_000E3E54: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000E3E58: ;
    PUSH32(esp, esi);
    eax = 0x70;
    PUSH32(esp, 0x000E3E63u); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000E3E63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3E8E; /* je: equal / zero */

loc_000E3E67: ;
    PUSH32(esp, 0x000E3E6Cu); RECOMP_ABI_CALL(0x000E3EF0u, sub_000E3EF0); /* call 0x000E3EF0 */

loc_000E3E6C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3E8E; /* je: equal / zero */

loc_000E3E72: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000E3E7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E3E7Bu); } /* indirect call */
    }

loc_000E3E7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3E93; /* jne: not equal / not zero */

loc_000E3E82: ;
    PUSH32(esp, 0x000E3E87u); RECOMP_ABI_CALL(0x000E3F10u, sub_000E3F10); /* call 0x000E3F10 */

loc_000E3E87: ;
    eax = esi;
    PUSH32(esp, 0x000E3E8Eu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000E3E8E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E3E93: ;
    eax = esi;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x000E3E9Du); RECOMP_ABI_CALL(0x000E3F40u, sub_000E3F40); /* call 0x000E3F40 */

loc_000E3E9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3E82; /* je: equal / zero */

loc_000E3EA1: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000E3EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E3EAAu); } /* indirect call */
    }

loc_000E3EAD: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E3EC0
 * Original: 0x000E3EC0 - 0x000E3EE8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3EC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3EE5; /* je: equal / zero */

loc_000E3ECC: ;
    eax = esi;
    PUSH32(esp, 0x000E3ED3u); RECOMP_ABI_CALL(0x000E3FE0u, sub_000E3FE0); /* call 0x000E3FE0 */

loc_000E3ED3: ;
    PUSH32(esp, 0x000E3ED8u); RECOMP_ABI_CALL(0x000E3F10u, sub_000E3F10); /* call 0x000E3F10 */

loc_000E3ED8: ;
    eax = esi;
    PUSH32(esp, 0x000E3EDFu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000E3EDF: ;
    MEM32(edi) = 0;

loc_000E3EE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E3EF0
 * Original: 0x000E3EF0 - 0x000E3F0B (27 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3EF0: ;
    PUSH32(esp, 0x000E3EF5u); RECOMP_ABI_CALL(0x000E0550u, sub_000E0550); /* call 0x000E0550 */

loc_000E3EF5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x32E230;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x28) = 0xE3EC0;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E3F10
 * Original: 0x000E3F10 - 0x000E3F3B (43 bytes, 11 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E3F10: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x32E230;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3F34; /* je: equal / zero */

loc_000E3F1D: ;
    PUSH32(esp, 0x32E298);
    eax = 0x5A;
    ecx = 0x32E284;
    PUSH32(esp, 0x000E3F31u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E3F31: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3F34: ;
    eax = esi;
    g_seh_ebp = ebp; sub_000E0570(); return; /* tail jmp 0x000E0570 */

}

/**
 * sub_000E3F40
 * Original: 0x000E3F40 - 0x000E3FD1 (145 bytes, 48 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3F40: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    SET_LO16(eax, MEM16(esi + 0xE));
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    MEM16(esp + 0xE) = LO16(eax);
    MEM32(esp + 8) = 1;
    MEM32(esp + 0x10) = edi;
    MEM16(esp + 0xC) = 0x10;
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x000E3F7Bu); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000E3F7B: ;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E3F93u); RECOMP_ABI_CALL(0x000E7970u, sub_000E7970); /* call 0x000E7970 */

loc_000E3F93: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3FA7; /* je: equal / zero */

loc_000E3F9C: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E3FA7: ;
    PUSH32(esp, 0x32E298);
    eax = 0x7A;
    ecx = 0x324878;
    PUSH32(esp, 0x000E3FBBu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000E3FBB: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3FC9; /* je: equal / zero */

loc_000E3FC4: ;
    PUSH32(esp, 0x000E3FC9u); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000E3FC9: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E3FE0
 * Original: 0x000E3FE0 - 0x000E3FF4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3FE0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x6C);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3FF2; /* je: equal / zero */

loc_000E3FED: ;
    PUSH32(esp, 0x000E3FF2u); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000E3FF2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4000
 * Original: 0x000E4000 - 0x000E400D (13 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4000(void)
{

loc_000E4000: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    PUSH32(esp, 0x000E4009u); RECOMP_ABI_CALL(0x000E3000u, sub_000E3000); /* call 0x000E3000 */

loc_000E4009: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}
