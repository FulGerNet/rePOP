/**
 * PoP SoT xbox-demo - Recompiled code chunk 11
 * Functions: 250 (0x000C74A0 - 0x000D02A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000C74A0
 * Original: 0x000C74A0 - 0x000C751D (125 bytes, 41 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C74A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C74A0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000C74A8u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000C74A8: ;
    PUSH32(esp, 0x42E);
    eax = 0x3248E4;
    PUSH32(esp, 0x000C74B7u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000C74B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7502; /* je: equal / zero */

loc_000C74BE: ;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C74F4; /* je: equal / zero */

loc_000C74C6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C74E6; /* je: equal / zero */

loc_000C74C9: ;
    PUSH32(esp, 0x324844);
    edx = 8;
    PUSH32(esp, 0x000C74D8u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000C74D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000C74E2u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000C74E2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C74E6: ;
    esi = 2;
    PUSH32(esp, 0x000C74F0u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000C74F0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C74F4: ;
    esi = 1;
    PUSH32(esp, 0x000C74FEu); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000C74FE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C7502: ;
    PUSH32(esp, 0x32485C);
    edx = 8;
    PUSH32(esp, 0x000C7511u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000C7511: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000C7519u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000C7519: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7520
 * Original: 0x000C7520 - 0x000C75BD (157 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C7520: ;
    PUSH32(esp, esi);
    esi = 0x64DA18;
    PUSH32(esp, 0x000C752Bu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_000C752B: ;
    esi = 0x64DA3C;
    PUSH32(esp, 0x000C7535u); RECOMP_ABI_CALL(0x000E6C70u, sub_000E6C70); /* call 0x000E6C70 */

loc_000C7535: ;
    eax = 0x78;
    MEM32(0x64D3EC) = 1;
    PUSH32(esp, 0x000C7549u); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000C7549: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7554; /* je: equal / zero */

loc_000C754D: ;
    PUSH32(esp, 0x000C7552u); RECOMP_ABI_CALL(0x000D23A0u, sub_000D23A0); /* call 0x000D23A0 */

loc_000C7552: ;
    goto loc_000C7556;

loc_000C7554: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C7556: ;
    MEM32(0x64D3F4) = eax;
    eax = 0x94;
    PUSH32(esp, 0x000C7565u); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000C7565: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7570; /* je: equal / zero */

loc_000C7569: ;
    PUSH32(esp, 0x000C756Eu); RECOMP_ABI_CALL(0x000D4810u, sub_000D4810); /* call 0x000D4810 */

loc_000C756E: ;
    goto loc_000C7572;

loc_000C7570: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C7572: ;
    esi = MEM32(0x64D3F4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(0x64D3F8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C75A1; /* je: equal / zero */

loc_000C7581: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C758C; /* je: equal / zero */

loc_000C7585: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C758C: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x000C7594u); RECOMP_ABI_CALL(0x000D23B0u, sub_000D23B0); /* call 0x000D23B0 */

loc_000C7594: ;
    eax = edi;
    PUSH32(esp, 0x000C759Bu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000C759B: ;
    eax = MEM32(0x64D3F8);
    POP32(esp, edi);

loc_000C75A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C75AA; /* je: equal / zero */

loc_000C75A5: ;
    PUSH32(esp, 0x000C75AAu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000C75AA: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000C75B9u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000C75B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7596
 * Original: 0x000C7596 - 0x000C75BD (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7596(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C7596: ;
    PUSH32(esp, 0x000C759Bu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000C759B: ;
    eax = MEM32(0x64D3F8);
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C75AA; /* je: equal / zero */

loc_000C75A5: ;
    PUSH32(esp, 0x000C75AAu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000C75AA: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000C75B9u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000C75B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C75C0
 * Original: 0x000C75C0 - 0x000C76A0 (224 bytes, 70 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C75C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C75C0: ;
    eax = MEM32(0x64D3EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000C75E5; /* jne: not equal / not zero */

loc_000C75CF: ;
    PUSH32(esp, 0x3244F0);
    edx = 8;
    PUSH32(esp, 0x000C75DEu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000C75DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000C75E5: ;
    eax = MEM32(0x64DA20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000C7664; /* je: equal / zero */

loc_000C75EF: ;
    /* nop */

loc_000C75F0: ;
    eax = MEM32(0x64DA18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7610; /* jne: not equal / not zero */

loc_000C75F9: ;
    PUSH32(esp, 0x324394);
    eax = 0x7D;
    ecx = 0x324370;
    PUSH32(esp, 0x000C760Du); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000C760D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7610: ;
    eax = MEM32(0x64DA18);
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7651; /* je: equal / zero */

loc_000C761C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C763A; /* je: equal / zero */

loc_000C7621: ;
    eax = esi + 0xC;
    PUSH32(esp, 0x000C7629u); RECOMP_ABI_CALL(0x000C6C60u, sub_000C6C60); /* call 0x000C6C60 */

loc_000C7629: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7638; /* je: equal / zero */

loc_000C762D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7638; /* je: equal / zero */

loc_000C7631: ;
    ebx = 1;
    goto loc_000C763A;

loc_000C7638: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C763A: ;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, 0x000C7642u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000C7642: ;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, 0x000C764Au); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000C764A: ;
    eax = esi;
    PUSH32(esp, 0x000C7651u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000C7651: ;
    eax = 0x64DA18;
    PUSH32(esp, 0x000C765Bu); RECOMP_ABI_CALL(0x000E6D40u, sub_000E6D40); /* call 0x000E6D40 */

loc_000C765B: ;
    eax = MEM32(0x64DA20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C75F0; /* jne: not equal / not zero */

loc_000C7664: ;
    PUSH32(esp, 0x000C7669u); RECOMP_ABI_CALL(0x000C64D0u, sub_000C64D0); /* call 0x000C64D0 */

loc_000C7669: ;
    esi = MEM32(0x64D3F4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7683; /* je: equal / zero */

loc_000C7673: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x000C767Bu); RECOMP_ABI_CALL(0x000D23B0u, sub_000D23B0); /* call 0x000D23B0 */

loc_000C767B: ;
    eax = edi;
    PUSH32(esp, 0x000C7682u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000C7682: ;
    POP32(esp, edi);

loc_000C7683: ;
    eax = MEM32(0x64D3F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000C7692; /* je: equal / zero */

loc_000C768D: ;
    PUSH32(esp, 0x000C7692u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000C7692: ;
    eax = ebx;
    MEM32(0x64D3EC) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C76A0
 * Original: 0x000C76A0 - 0x000C76C4 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C76A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C76A0: ;
    eax = MEM32(0x64D3F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C76C1; /* je: equal / zero */

loc_000C76A9: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C76C1; /* je: equal / zero */

loc_000C76B0: ;
    ecx = MEM32(eax + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C76C1; /* je: equal / zero */

loc_000C76B7: ;
    eax = MEM32(esp + 4);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C76C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C76D0
 * Original: 0x000C76D0 - 0x000C76F4 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C76D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C76D0: ;
    eax = MEM32(0x64D3F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C76F1; /* je: equal / zero */

loc_000C76D9: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C76F1; /* je: equal / zero */

loc_000C76E0: ;
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C76F1; /* je: equal / zero */

loc_000C76E7: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C76F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C7700
 * Original: 0x000C7700 - 0x000C7750 (80 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C7700: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64DA18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7740; /* je: equal / zero */

loc_000C770C: ;
    /* nop */

loc_000C7710: ;
    eax = edi;
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    edi = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000C773C; /* je: equal / zero */

loc_000C771C: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C773C; /* jle: less or equal (signed <=) */

loc_000C7728: ;
    ecx = MEM32(esi + 0x34);
    goto loc_000C7730;

    /* nop */

loc_000C7730: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7745; /* je: equal / zero */

loc_000C7734: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C7730; /* jl: less (signed <) */

loc_000C773C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7710; /* jne: not equal / not zero */

loc_000C7740: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000C7745: ;
    ecx = MEM32(esi + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C7750
 * Original: 0x000C7750 - 0x000C77BE (110 bytes, 37 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C7750: ;
    eax = MEM32(0x64D3EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C77BD; /* je: equal / zero */

loc_000C7759: ;
    PUSH32(esp, esi);
    esi = MEM32(0x64DA18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C77BC; /* je: equal / zero */

loc_000C7764: ;
    PUSH32(esp, edi);

loc_000C7765: ;
    eax = esi;
    eax = MEM32(eax + 8);
    esi = MEM32(esi);
    edi = eax + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C7775u); RECOMP_ABI_CALL(0x000C7950u, sub_000C7950); /* call 0x000C7950 */

loc_000C7775: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7793; /* jne: not equal / not zero */

loc_000C777C: ;
    PUSH32(esp, 0x3248E4);
    eax = 0x56D;
    ecx = 0x324878;
    PUSH32(esp, 0x000C7790u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000C7790: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7793: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C7799u); RECOMP_ABI_CALL(0x000C7900u, sub_000C7900); /* call 0x000C7900 */

loc_000C7799: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C77B7; /* jne: not equal / not zero */

loc_000C77A0: ;
    PUSH32(esp, 0x3248E4);
    eax = 0x571;
    ecx = 0x324878;
    PUSH32(esp, 0x000C77B4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000C77B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C77B7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7765; /* jne: not equal / not zero */

loc_000C77BB: ;
    POP32(esp, edi);

loc_000C77BC: ;
    POP32(esp, esi);

loc_000C77BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C77C0
 * Original: 0x000C77C0 - 0x000C77E1 (33 bytes, 7 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C77C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C77C0: ;
    PUSH32(esp, 0x000C77C5u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000C77C5: ;
    PUSH32(esp, 0x57A);
    eax = 0x3248E4;
    PUSH32(esp, 0x000C77D4u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000C77D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000C77DCu); RECOMP_ABI_CALL(0x000C64D0u, sub_000C64D0); /* call 0x000C64D0 */

loc_000C77DC: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000C77F0
 * Original: 0x000C77F0 - 0x000C78FB (267 bytes, 99 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C77F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C77F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000C77FEu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000C77FE: ;
    PUSH32(esp, 0x58E);
    eax = 0x3248E4;
    PUSH32(esp, 0x000C780Du); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000C780D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000C7815u); RECOMP_ABI_CALL(0x000C64D0u, sub_000C64D0); /* call 0x000C64D0 */

loc_000C7815: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000C7841; /* jle: less or equal (signed <=) */

loc_000C781E: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;

loc_000C7823: ;
    eax = MEM32(ecx);
    eax = eax + eax * 4;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi + eax * 8 + 0x30;
    if ((_fa != 0)) goto loc_000C7823; /* jne: not equal / not zero */

loc_000C7832: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7841; /* je: equal / zero */

loc_000C7836: ;
    eax = esi;
    PUSH32(esp, 0x000C783Du); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000C783D: ;
    ebx = eax;
    goto loc_000C7843;

loc_000C7841: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C7843: ;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi);
    eax = ebp;
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    esi = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(0x5F60E0) = esi;
    MEM32(0x5F60E4) = ebp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000C7868u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000C7868: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C78E2; /* jle: less or equal (signed <=) */

loc_000C786F: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebp;
    /* nop */

loc_000C7880: ;
    MEM32(esi) = ebx;
    ecx = MEM32(edi);
    MEM32(esi + 4) = ecx;
    eax = MEM32(edi);
    edx = eax + eax * 4;
    MEM32(esi + -4) = 5;
    eax = MEM32(edi);
    ecx = MEM32(edi + -4);
    eax = eax + eax * 4;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ebx = ebx + edx * 8;
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C78ABu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000C78AB: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C78D1; /* jle: less or equal (signed <=) */

loc_000C78B9: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_000C78C0: ;
    MEM32(ecx) = 0;
    edx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C78C0; /* jl: less (signed <) */

loc_000C78D1: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000C7880; /* jne: not equal / not zero */

loc_000C78E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D3F0) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000C7900
 * Original: 0x000C7900 - 0x000C794C (76 bytes, 19 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C7900: ;
    eax = MEM32(0x64D3EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C791E; /* jne: not equal / not zero */

loc_000C7909: ;
    PUSH32(esp, 0x3244BC);
    edx = 8;
    PUSH32(esp, 0x000C7918u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000C7918: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000C791E: ;
    _fa = (uint32_t)(MEM32(0x64D3F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3F0), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7943; /* je: equal / zero */

loc_000C7927: ;
    PUSH32(esp, 0x5E1);
    PUSH32(esp, 0x324448);
    edx = 0x324470;
    ecx = 0x3248E4;
    PUSH32(esp, 0x000C7940u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C7940: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7943: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000C6C20(); return; /* tail jmp 0x000C6C20 */

}

/**
 * sub_000C7950
 * Original: 0x000C7950 - 0x000C797E (46 bytes, 10 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C7950: ;
    _fa = (uint32_t)(MEM32(0x64D3F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3F0), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7975; /* je: equal / zero */

loc_000C7959: ;
    PUSH32(esp, 0x5F3);
    PUSH32(esp, 0x324448);
    edx = 0x324470;
    ecx = 0x3248E4;
    PUSH32(esp, 0x000C7972u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C7972: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7975: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000C6C60(); return; /* tail jmp 0x000C6C60 */

}

/**
 * sub_000C7980
 * Original: 0x000C7980 - 0x000C79AA (42 bytes, 9 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C7980: ;
    _fa = (uint32_t)(MEM32(0x64D3F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3F0), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C79A5; /* je: equal / zero */

loc_000C7989: ;
    PUSH32(esp, 0x683);
    PUSH32(esp, 0x3243CC);
    edx = 0x3243F8;
    ecx = 0x3248E4;
    PUSH32(esp, 0x000C79A2u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C79A2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C79A5: ;
    g_seh_ebp = ebp; sub_000C6F30(); return; /* tail jmp 0x000C6F30 */

}

/**
 * sub_000C79B0
 * Original: 0x000C79B0 - 0x000C79DE (46 bytes, 10 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C79B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C79B0: ;
    _fa = (uint32_t)(MEM32(0x64D3F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3F0), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C79D5; /* je: equal / zero */

loc_000C79B9: ;
    PUSH32(esp, 0x69A);
    PUSH32(esp, 0x3243CC);
    edx = 0x3243F8;
    ecx = 0x3248E4;
    PUSH32(esp, 0x000C79D2u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C79D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C79D5: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000C7030(); return; /* tail jmp 0x000C7030 */

}

/**
 * sub_000C79E0
 * Original: 0x000C79E0 - 0x000C7A0A (42 bytes, 9 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C79E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C79E0: ;
    _fa = (uint32_t)(MEM32(0x64D3F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3F0), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7A05; /* je: equal / zero */

loc_000C79E9: ;
    PUSH32(esp, 0x6AD);
    PUSH32(esp, 0x3243CC);
    edx = 0x3243F8;
    ecx = 0x3248E4;
    PUSH32(esp, 0x000C7A02u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C7A02: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7A05: ;
    g_seh_ebp = ebp; sub_000C73A0(); return; /* tail jmp 0x000C73A0 */

}

/**
 * sub_000C7A10
 * Original: 0x000C7A10 - 0x000C7A3E (46 bytes, 10 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C7A10: ;
    _fa = (uint32_t)(MEM32(0x64D3F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3F0), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7A35; /* je: equal / zero */

loc_000C7A19: ;
    PUSH32(esp, 0x6C4);
    PUSH32(esp, 0x3243CC);
    edx = 0x3243F8;
    ecx = 0x3248E4;
    PUSH32(esp, 0x000C7A32u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C7A32: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7A35: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000C74A0(); return; /* tail jmp 0x000C74A0 */

}

/**
 * sub_000C7A40
 * Original: 0x000C7A40 - 0x000C7A77 (55 bytes, 16 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C7A40: ;
    eax = MEM32(0x64D3F0);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C7A6C; /* je: equal / zero */

loc_000C7A4A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C7A72; /* je: equal / zero */

loc_000C7A4D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C7A6D; /* je: equal / zero */

loc_000C7A50: ;
    PUSH32(esp, 0x6DF);
    PUSH32(esp, 0x324878);
    edx = 0x3243B4;
    ecx = 0x3248E4;
    PUSH32(esp, 0x000C7A69u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C7A69: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7A6C: ;
    esp += 4; return; /* ret */

loc_000C7A6D: ;
    g_seh_ebp = ebp; sub_000C7310(); return; /* tail jmp 0x000C7310 */

loc_000C7A72: ;
    g_seh_ebp = ebp; sub_000C6B60(); return; /* tail jmp 0x000C6B60 */

}

/**
 * sub_000C7A80
 * Original: 0x000C7A80 - 0x000C7A85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C7A80: ;
    g_seh_ebp = ebp; sub_000C6CA0(); return; /* tail jmp 0x000C6CA0 */

}

/**
 * sub_000C7A90
 * Original: 0x000C7A90 - 0x000C7AB6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C7A90: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000C7A98u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_000C7A98: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000C7AB5; /* je: equal / zero */

loc_000C7AA0: ;
    PUSH32(esp, 0x324394);
    eax = 0xDC;
    ecx = 0x324384;
    PUSH32(esp, 0x000C7AB4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000C7AB4: ;
    POP32(esp, ecx);

loc_000C7AB5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C7AC0
 * Original: 0x000C7AC0 - 0x000C7B3D (125 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C7AC0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7ADB; /* jne: not equal / not zero */

loc_000C7AC4: ;
    PUSH32(esp, 0x324394);
    eax = 0xF1;
    ecx = 0x324368;
    PUSH32(esp, 0x000C7AD8u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000C7AD8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7ADB: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    eax = 0xC;
    PUSH32(esp, 0x000C7AEAu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000C7AEA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7B15; /* je: equal / zero */

loc_000C7AF0: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = ebx;
    MEM32(edi + 8) = MEM32(edi + 8) + 1;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C7B15; /* jne: not equal / not zero */

loc_000C7AFE: ;
    PUSH32(esp, 0x324394);
    eax = 0x65;
    ecx = 0x324318;
    PUSH32(esp, 0x000C7B12u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000C7B12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7B15: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    MEM32(esi + 8) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7B31; /* je: equal / zero */

loc_000C7B25: ;
    MEM32(eax) = esi;
    MEM32(edi + 4) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000C7B31: ;
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C7B40
 * Original: 0x000C7B40 - 0x000C7B8C (76 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C7B40: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7B5E; /* jne: not equal / not zero */

loc_000C7B47: ;
    PUSH32(esp, 0x324394);
    eax = 0x1A7;
    ecx = 0x324368;
    PUSH32(esp, 0x000C7B5Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000C7B5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7B5E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7B66; /* jne: not equal / not zero */

loc_000C7B62: ;
    esi = MEM32(esi);
    goto loc_000C7B68;

loc_000C7B66: ;
    esi = MEM32(edi);

loc_000C7B68: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7B84; /* je: equal / zero */

loc_000C7B6C: ;
    /* nop */

loc_000C7B70: ;
    eax = esi + 8;
    ecx = ebx;
    PUSH32(esp, 0x000C7B7Au); RECOMP_ABI_CALL(0x000E72A0u, sub_000E72A0); /* call 0x000E72A0 */

loc_000C7B7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7B88; /* jne: not equal / not zero */

loc_000C7B7E: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7B70; /* jne: not equal / not zero */

loc_000C7B84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C7B88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7B90
 * Original: 0x000C7B90 - 0x000C7C17 (135 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C7B90: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000C7BB2; /* jne: not equal / not zero */

loc_000C7B9B: ;
    PUSH32(esp, 0x324394);
    eax = 0xF1;
    ecx = 0x324368;
    PUSH32(esp, 0x000C7BAFu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000C7BAF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7BB2: ;
    ebx = MEM32(edi + 4);
    eax = 0x10;
    PUSH32(esp, 0x000C7BBFu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000C7BBF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7BEA; /* je: equal / zero */

loc_000C7BC5: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = ebx;
    MEM32(edi + 8) = MEM32(edi + 8) + 1;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C7BEA; /* jne: not equal / not zero */

loc_000C7BD3: ;
    PUSH32(esp, 0x324394);
    eax = 0x65;
    ecx = 0x324318;
    PUSH32(esp, 0x000C7BE7u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000C7BE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7BEA: ;
    eax = MEM32(ebp);
    MEM32(esi + 8) = eax;
    ecx = MEM32(ebp + 4);
    MEM32(esi + 0xC) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7C0A; /* je: equal / zero */

loc_000C7BFD: ;
    MEM32(eax) = esi;
    MEM32(edi + 4) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000C7C0A: ;
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C7C20
 * Original: 0x000C7C20 - 0x000C7C2D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C7C20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7C2C; /* je: equal / zero */

loc_000C7C24: ;
    PUSH32(esp, 0x000C7C29u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000C7C29: ;
    MEM32(esi + 8) = MEM32(esi + 8) - 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000C7C2C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C7C30
 * Original: 0x000C7C30 - 0x000C7C4A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C7C30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x64D40C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x64D40C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C7C49; /* jge: greater or equal (signed >=) */

loc_000C7C38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C7C49; /* jl: less (signed <) */

loc_000C7C3C: ;
    ecx = MEM32(0x64D410);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    MEM32(eax + ecx + 0x40) = edx;

loc_000C7C49: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C7C50
 * Original: 0x000C7C50 - 0x000C7CDE (142 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C7C50: ;
    edx = MEM32(0x64D410);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    PUSH32(esp, esi);
    esi = MEM32(eax + edx + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7C6D; /* je: equal / zero */

loc_000C7C62: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7C6F; /* je: equal / zero */

loc_000C7C66: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7C62; /* jne: not equal / not zero */

loc_000C7C6D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C7C6F: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7C83; /* je: equal / zero */

loc_000C7C77: ;
    PUSH32(esp, 0x000C7C7Cu); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000C7C7C: ;
    MEM32(esi + 0x10) = 0xFFFFFFFEu;

loc_000C7C83: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7C90; /* je: equal / zero */

loc_000C7C8A: ;
    ecx = MEM32(esi + 0x28);
    MEM32(eax + 0x28) = ecx;

loc_000C7C90: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7C9D; /* je: equal / zero */

loc_000C7C97: ;
    edx = MEM32(esi + 0x24);
    MEM32(eax + 0x24) = edx;

loc_000C7C9D: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7CC1; /* je: equal / zero */

loc_000C7CA4: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7CB3; /* jne: not equal / not zero */

loc_000C7CAE: ;
    ecx = MEM32(esi + 0x24);
    MEM32(eax) = ecx;

loc_000C7CB3: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7CC1; /* jne: not equal / not zero */

loc_000C7CBB: ;
    edx = MEM32(esi + 0x28);
    MEM32(eax + 4) = edx;

loc_000C7CC1: ;
    MEM32(esi + 0x24) = 0;
    MEM32(esi + 0x28) = 0;
    MEM32(esi + 0x2C) = 0;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

}

/**
 * sub_000C7CE0
 * Original: 0x000C7CE0 - 0x000C7D4B (107 bytes, 30 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C7CE0: ;
    eax = MEM32(0x64D410);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7D09; /* jne: not equal / not zero */

loc_000C7CED: ;
    PUSH32(esp, 0x325688);
    eax = 0x168;
    ecx = 0x32566C;
    PUSH32(esp, 0x000C7D01u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000C7D01: ;
    eax = MEM32(0x64D410);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7D09: ;
    esi = MEM32(esp + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    _fa = (uint32_t)(MEM32(esi + eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax + 0x4C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7D44; /* je: equal / zero */

loc_000C7D16: ;
    eax = MEM32(esi + eax + 0x50);
    PUSH32(esp, 0x000C7D1Fu); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000C7D1F: ;
    eax = MEM32(0x64D410);
    MEM32(esi + eax + 0x50) = 0xFFFFFFFEu;
    MEM32(esi + eax + 0x60) = edi;
    MEM32(esi + eax + 0x5C) = edi;
    MEM32(esi + eax + 0x54) = edi;
    MEM32(esi + eax + 0x4C) = edi;
    MEM32(esi + eax + 0x58) = edi;
    MEM32(esi + eax + 0x44) = ebx;

loc_000C7D44: ;
    POP32(esp, edi);
    MEM32(esi + eax + 0x48) = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7D50
 * Original: 0x000C7D50 - 0x000C7E26 (214 bytes, 78 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C7D50: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_000C7D69; /* jne: not equal / not zero */

loc_000C7D60: ;
    ecx = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000C7C50(); return; /* tail jmp 0x000C7C50 */

loc_000C7D69: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x64D410);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    esi = MEM32(edi + eax + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7D8B; /* je: equal / zero */

loc_000C7D7D: ;
    /* nop */

loc_000C7D80: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7DF4; /* je: equal / zero */

loc_000C7D84: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7D80; /* jne: not equal / not zero */

loc_000C7D8B: ;
    eax = 0x30;
    PUSH32(esp, 0x000C7D95u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000C7D95: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7DAE; /* jne: not equal / not zero */

loc_000C7D9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x32563C;
    edx = 0xA;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000ED170(); return; /* tail jmp 0x000ED170 */

loc_000C7DAE: ;
    ecx = MEM32(0x64D410);
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x24) = ebx;
    edx = MEM32(edi + ecx + 0x68);
    eax = edi + ecx + 0x64;
    MEM32(esi + 0x28) = edx;
    MEM32(esi + 0x2C) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7DDF; /* jne: not equal / not zero */

loc_000C7DCF: ;
    MEM32(eax) = esi;
    eax = edi + ecx + 0x6C;
    MEM32(edi + ecx + 0x68) = esi;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ebp;
    goto loc_000C7E01;

loc_000C7DDF: ;
    eax = MEM32(edi + ecx + 0x68);
    MEM32(eax + 0x24) = esi;
    eax = edi + ecx + 0x6C;
    MEM32(edi + ecx + 0x68) = esi;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ebp;
    goto loc_000C7E01;

loc_000C7DF4: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7E08; /* je: equal / zero */

loc_000C7DFC: ;
    PUSH32(esp, 0x000C7E01u); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000C7E01: ;
    MEM32(esi + 0x10) = 0xFFFFFFFEu;

loc_000C7E08: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7E30
 * Original: 0x000C7E30 - 0x000C7F06 (214 bytes, 68 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C7E30: ;
    eax = MEM32(0x64D410);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7E5A; /* jne: not equal / not zero */

loc_000C7E39: ;
    PUSH32(esp, 0x27C);
    PUSH32(esp, 0x32566C);
    edx = 0x325620;
    ecx = 0x325688;
    PUSH32(esp, 0x000C7E52u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C7E52: ;
    eax = MEM32(0x64D410);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7E5A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    ecx = MEM32(esi + eax + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7F00; /* je: equal / zero */

loc_000C7E6E: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7F00; /* je: equal / zero */

loc_000C7E7A: ;
    ecx = MEM32(esi + eax + 0x54);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + eax + 0x50);
    PUSH32(esp, ebp);
    ebp = esi + eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x000C7E91u); RECOMP_ABI_CALL(0x000D6CA0u, sub_000D6CA0); /* call 0x000D6CA0 */

loc_000C7E91: ;
    edx = MEM32(ebp + 0x58);
    edi = eax;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C7ED9; /* jl: less (signed <) */

loc_000C7EA0: ;
    eax = MEM32(ebp + 0x50);
    PUSH32(esp, 0x000C7EA8u); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000C7EA8: ;
    ecx = MEM32(0x64D410);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + ecx + 0x60) = eax;
    MEM32(esi + ecx + 0x5C) = eax;
    MEM32(esi + ecx + 0x54) = eax;
    MEM32(esi + ecx + 0x4C) = eax;
    MEM32(esi + ecx + 0x58) = eax;
    eax = MEM32(esi + ecx + 0x48);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esi + ecx + 0x50) = 0xFFFFFFFEu;
    MEM32(esi + ecx + 0x44) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C7ED9: ;
    PUSH32(esp, 0x000C7EDEu); RECOMP_ABI_CALL(0x000D6B50u, sub_000D6B50); /* call 0x000D6B50 */

loc_000C7EDE: ;
    ecx = eax;
    eax = MEM32(0x64D410);
    edx = MEM32(esi + eax + 0x48);
    PUSH32(esp, edx);
    edx = MEM32(esi + eax + 0x44);
    eax = MEM32(esi + eax + 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C7EF8u); RECOMP_ABI_CALL(0x000D7040u, sub_000D7040); /* call 0x000D7040 */

loc_000C7EF8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C7F00: ;
    eax = MEM32(esi + eax + 0x48);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7E62
 * Original: 0x000C7E62 - 0x000C7F06 (164 bytes, 55 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7E62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C7E62: ;
    ecx = MEM32(esi + eax + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7F00; /* je: equal / zero */

loc_000C7E6E: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7F00; /* je: equal / zero */

loc_000C7E7A: ;
    ecx = MEM32(esi + eax + 0x54);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + eax + 0x50);
    PUSH32(esp, ebp);
    ebp = esi + eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x000C7E91u); RECOMP_ABI_CALL(0x000D6CA0u, sub_000D6CA0); /* call 0x000D6CA0 */

loc_000C7E91: ;
    edx = MEM32(ebp + 0x58);
    edi = eax;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C7ED9; /* jl: less (signed <) */

loc_000C7EA0: ;
    eax = MEM32(ebp + 0x50);
    PUSH32(esp, 0x000C7EA8u); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000C7EA8: ;
    ecx = MEM32(0x64D410);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + ecx + 0x60) = eax;
    MEM32(esi + ecx + 0x5C) = eax;
    MEM32(esi + ecx + 0x54) = eax;
    MEM32(esi + ecx + 0x4C) = eax;
    MEM32(esi + ecx + 0x58) = eax;
    eax = MEM32(esi + ecx + 0x48);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esi + ecx + 0x50) = 0xFFFFFFFEu;
    MEM32(esi + ecx + 0x44) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C7ED9: ;
    PUSH32(esp, 0x000C7EDEu); RECOMP_ABI_CALL(0x000D6B50u, sub_000D6B50); /* call 0x000D6B50 */

loc_000C7EDE: ;
    ecx = eax;
    eax = MEM32(0x64D410);
    edx = MEM32(esi + eax + 0x48);
    PUSH32(esp, edx);
    edx = MEM32(esi + eax + 0x44);
    eax = MEM32(esi + eax + 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C7EF8u); RECOMP_ABI_CALL(0x000D7040u, sub_000D7040); /* call 0x000D7040 */

loc_000C7EF8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C7F00: ;
    eax = MEM32(esi + eax + 0x48);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7F10
 * Original: 0x000C7F10 - 0x000C7FC9 (185 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C7F10: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x64D410);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7F35; /* je: equal / zero */

loc_000C7F26: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7F39; /* je: equal / zero */

loc_000C7F2E: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7F26; /* jne: not equal / not zero */

loc_000C7F35: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C7F39: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7FC4; /* je: equal / zero */

loc_000C7F44: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C7FC4; /* je: equal / zero */

loc_000C7F4C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C7F5Au); RECOMP_ABI_CALL(0x000D6CA0u, sub_000D6CA0); /* call 0x000D6CA0 */

loc_000C7F5A: ;
    ecx = MEM32(esi + 0x18);
    edi = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C7FA3; /* jl: less (signed <) */

loc_000C7F65: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0x000C7F6Du); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000C7F6D: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x10) = 0xFFFFFFFEu;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C7F9E; /* jne: not equal / not zero */

loc_000C7F8F: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x000C7F9Cu); RECOMP_ABI_CALL(0x000C7C50u, sub_000C7C50); /* call 0x000C7C50 */

loc_000C7F9C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C7F9E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C7FA3: ;
    eax = ebp;
    PUSH32(esp, 0x000C7FAAu); RECOMP_ABI_CALL(0x000D6B50u, sub_000D6B50); /* call 0x000D6B50 */

loc_000C7FAA: ;
    edx = MEM32(esi + 4);
    ecx = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C7FBCu); RECOMP_ABI_CALL(0x000D7040u, sub_000D7040); /* call 0x000D7040 */

loc_000C7FBC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C7FC4: ;
    eax = MEM32(esi + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C7FD0
 * Original: 0x000C7FD0 - 0x000C818B (443 bytes, 123 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C7FD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x64D414); PUSH32(esp, 0x000C7FDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C7FD8u); } /* indirect call */
    }

loc_000C7FDE: ;
    xmm0 = XMM_SCALAR(MEMF(0x33381C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esi) = ecx;
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    PUSH32(esp, edi);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    { uint32_t _icall_target = MEM32(0x64D418); PUSH32(esp, 0x000C8024u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C801Eu); } /* indirect call */
    }

loc_000C8024: ;
    xmm0 = XMM_SCALAR(MEMF(0x33381C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esi + 0xC) = edx;
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = (int32_t)xmm1.f[0]; /* cvttss2si */
    PUSH32(esp, edi);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ecx;
    { uint32_t _icall_target = MEM32(0x64D41C); PUSH32(esp, 0x000C806Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8065u); } /* indirect call */
    }

loc_000C806B: ;
    xmm0 = XMM_SCALAR(MEMF(0x33381C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esi + 0x18) = eax;
    ecx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    PUSH32(esp, edi);
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = edx;
    { uint32_t _icall_target = MEM32(0x64D420); PUSH32(esp, 0x000C80B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C80ACu); } /* indirect call */
    }

loc_000C80B2: ;
    xmm0 = XMM_SCALAR(MEMF(0x33381C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000C8121; /* jne: not equal / not zero */

loc_000C80F7: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8121; /* jne: not equal / not zero */

loc_000C80FE: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8121; /* jne: not equal / not zero */

loc_000C8105: ;
    PUSH32(esp, 0x320);
    PUSH32(esp, 0x3255B8);
    edx = 0x3255F4;
    ecx = 0x325688;
    PUSH32(esp, 0x000C811Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C811E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C8121: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8152; /* jne: not equal / not zero */

loc_000C8128: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8152; /* jne: not equal / not zero */

loc_000C812F: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8152; /* jne: not equal / not zero */

loc_000C8136: ;
    PUSH32(esp, 0x321);
    PUSH32(esp, 0x32554C);
    edx = 0x325588;
    ecx = 0x325688;
    PUSH32(esp, 0x000C814Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C814F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C8152: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = 0x10000;
    if (CMP_NE(_fa, _fb)) goto loc_000C816F; /* jne: not equal / not zero */

loc_000C815E: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C816F; /* jne: not equal / not zero */

loc_000C8165: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C816F; /* jne: not equal / not zero */

loc_000C816C: ;
    MEM32(esi + 0x18) = eax;

loc_000C816F: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8187; /* jne: not equal / not zero */

loc_000C8176: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8187; /* jne: not equal / not zero */

loc_000C817D: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8187; /* jne: not equal / not zero */

loc_000C8184: ;
    MEM32(esi + 0x28) = eax;

loc_000C8187: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C8190
 * Original: 0x000C8190 - 0x000C82F2 (354 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000C8190: ;
    edx = MEM32(esi + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    ecx = MEM32(0x64D410);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx & 0xFFFFFFFBu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x24) = edx;
    PUSH32(esp, ebx);
    ebx = 0xFFFFFFFEu;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x44) = ebx;
    eax = MEM32(eax + ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C82B4; /* je: equal / zero */

loc_000C81C3: ;
    ecx = MEM32(esp + 0x18);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000C81CFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C81CDu); } /* indirect call */
    }

loc_000C81CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C82B4; /* je: equal / zero */

loc_000C81DA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000C8219; /* jp: parity */

loc_000C81F1: ;
    eax = 0x325508;
    edx = 8;
    PUSH32(esp, 0x000C8200u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000C8200: ;
    xmm3 = XMM_SCALAR(MEMF(0x33381C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEM32(esi + 0x3C) = 0;
    goto loc_000C822C;

loc_000C8219: ;
    xmm3 = XMM_SCALAR(MEMF(0x33381C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esi + 0x3C) = edx;

loc_000C822C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000C8244; /* jp: parity */

loc_000C823F: ;
    MEM32(esi + 0x40) = edi;
    goto loc_000C824F;

loc_000C8244: ;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esi + 0x40) = eax;

loc_000C824F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000C8291; /* jnp: not parity */

loc_000C8264: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000C829A; /* jnp: not parity */

loc_000C826D: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C828A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000C8272: ;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    MEM32(esi + 0x48) = ecx;
    MEM32(esi + 0x44) = edx;
    goto loc_000C82AF;

loc_000C828A: ;
    eax = 0x325440;
    goto loc_000C829F;

loc_000C8291: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000C82A9; /* jnp: not parity */

loc_000C829A: ;
    eax = 0x3254A8;

loc_000C829F: ;
    edx = 8;
    PUSH32(esp, 0x000C82A9u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000C82A9: ;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x44) = edi;

loc_000C82AF: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) | 4;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);

loc_000C82B4: ;
    eax = esp + 4;
    PUSH32(esp, 0x000C82BDu); RECOMP_ABI_CALL(0x000D6430u, sub_000D6430); /* call 0x000D6430 */

loc_000C82BD: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C82C9; /* jne: not equal / not zero */

loc_000C82C2: ;
    eax = MEM32(esp + 4);
    MEM32(esi + 0x3C) = eax;

loc_000C82C9: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C82D5; /* jne: not equal / not zero */

loc_000C82CE: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x40) = ecx;

loc_000C82D5: ;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C82E1; /* jne: not equal / not zero */

loc_000C82DA: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x44) = edx;

loc_000C82E1: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), ebx (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000C82EE; /* jne: not equal / not zero */

loc_000C82E7: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x48) = eax;

loc_000C82EE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C8300
 * Original: 0x000C8300 - 0x000C8385 (133 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C8300: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 4);
    ecx = eax + 0x60;
    PUSH32(esp, ebx);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000C8327; /* jne: not equal / not zero */

loc_000C8319: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = eax;
    MEM32(esi + 0x68) = 1;

loc_000C8327: ;
    edi = MEM32(esp + 0x18);
    ebp = 1;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 2;
    goto loc_000C8340;

    /* nop */

loc_000C8340: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C8362; /* je: equal / zero */

loc_000C8348: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edx = MEM32(0x64D410);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + edx + 0xC); PUSH32(esp, 0x000C835Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C8359u); } /* indirect call */
    }

loc_000C835D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;

loc_000C8362: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp << 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000C8340; /* jne: not equal / not zero */

loc_000C8373: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(eax + 0x4C) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C8390
 * Original: 0x000C8390 - 0x000C839C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8390: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C83A0
 * Original: 0x000C83A0 - 0x000C83BD (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C83A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C83A0: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_000C83B6; /* je: equal / zero */

loc_000C83B1: ;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

loc_000C83B6: ;
    eax = ~eax;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000C83C0
 * Original: 0x000C83C0 - 0x000C847B (187 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C83C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C83C0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C83C6: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x54);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000C83D5u); RECOMP_ABI_CALL(0x000C8390u, sub_000C8390); /* call 0x000C8390 */

loc_000C83D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C840B; /* je: equal / zero */

loc_000C83DC: ;
    eax = MEM32(0x64D410);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + eax + 0x10); PUSH32(esp, 0x000C83EDu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C83E9u); } /* indirect call */
    }

loc_000C83ED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi * 4 + 0x5F60F8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C8412; /* jne: not equal / not zero */

loc_000C83FC: ;
    eax = 0x3253E0;
    edx = 0x1C;
    PUSH32(esp, 0x000C840Bu); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000C840B: ;
    MEM32(esi * 4 + 0x5F60F8) = ebp;

loc_000C8412: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C83C6; /* jl: less (signed <) */

loc_000C8418: ;
    MEM32(0x5F6178) = ebp;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C8420: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0x58);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000C842Fu); RECOMP_ABI_CALL(0x000C8390u, sub_000C8390); /* call 0x000C8390 */

loc_000C842F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8472; /* je: equal / zero */

loc_000C8436: ;
    ecx = MEM32(0x64D410);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + ecx + 0x10); PUSH32(esp, 0x000C8449u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C8445u); } /* indirect call */
    }

loc_000C8449: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8462; /* jne: not equal / not zero */

loc_000C8451: ;
    eax = 0x3253E0;
    edx = 0x1C;
    PUSH32(esp, 0x000C8460u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000C8460: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C8462: ;
    PUSH32(esp, eax);
    edx = 0x5F6178;
    ecx = esi;
    PUSH32(esp, 0x000C846Fu); RECOMP_ABI_CALL(0x000C83A0u, sub_000C83A0); /* call 0x000C83A0 */

loc_000C846F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C8472: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C8420; /* jl: less (signed <) */

loc_000C8478: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8480
 * Original: 0x000C8480 - 0x000C84AE (46 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C8480: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    esi = edx;
    ebx = ecx;
    ecx = MEM32(0x64D410);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + ecx + 0x2C); PUSH32(esp, 0x000C8499u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8495u); } /* indirect call */
    }

loc_000C8499: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C84A7; /* jne: not equal / not zero */

loc_000C84A2: ;
    PUSH32(esp, 0x000C84A7u); RECOMP_ABI_CALL(0x000CB110u, sub_000CB110); /* call 0x000CB110 */

loc_000C84A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C84B0
 * Original: 0x000C84B0 - 0x000C8543 (147 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C84B0(void)
{

loc_000C84B0: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx); /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 4); /* addss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 8); /* addss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8550
 * Original: 0x000C8550 - 0x000C8587 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8550(void)
{

loc_000C8550: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x33381C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    MEM32(ecx) = edx;
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    MEM32(ecx + 4) = edx;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000C8590
 * Original: 0x000C8590 - 0x000C889B (779 bytes, 208 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C8590: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x8C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x98);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x90);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x24) = 0;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000C8688; /* jne: not equal / not zero */

loc_000C85E3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8678; /* je: equal / zero */

loc_000C85EB: ;
    ebx = MEM32(esp + 0x98);
    ecx = MEM32(0x64D410);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x70);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(ebx + ecx); PUSH32(esp, 0x000C8604u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8601u); } /* indirect call */
    }

loc_000C8604: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = MEM32(0x64D410);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, ebp);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(ebx + eax + 4); PUSH32(esp, 0x000C8637u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8633u); } /* indirect call */
    }

loc_000C8637: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    eax = MEM32(0x33B538);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM8(esi + 8) = 0x40;
    if (CMP_NE(_fa, _fb)) goto loc_000C87E3; /* jne: not equal / not zero */

loc_000C866F: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) | 2;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000C87E3;

loc_000C8678: ;
    MEM8(esi + 8) = 0x40;
    MEM32(esi + 0x24) = 3;
    goto loc_000C87E3;

loc_000C8688: ;
    ebx = MEM32(esp + 0x98);
    eax = MEM32(0x64D410);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x70);
    ecx = MEM32(ebx + eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C870E; /* je: equal / zero */

loc_000C869F: ;
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(ebx + eax + 0x24); PUSH32(esp, 0x000C86AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C86A6u); } /* indirect call */
    }

loc_000C86AA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    eax = MEM32(0x64D410);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(ebx + eax + 0x28); PUSH32(esp, 0x000C86DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C86DAu); } /* indirect call */
    }

loc_000C86DE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM8(esi + 8) = 0x40;
    goto loc_000C87E3;

loc_000C870E: ;
    ecx = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(ebx + eax + 0x18); PUSH32(esp, 0x000C8718u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8714u); } /* indirect call */
    }

loc_000C8718: ;
    eax = MEM32(0x64D410);
    edx = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(ebx + eax + 0x1C); PUSH32(esp, 0x000C8727u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8723u); } /* indirect call */
    }

loc_000C8727: ;
    edx = MEM32(0x64D410);
    ecx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(ebx + edx + 0x20); PUSH32(esp, 0x000C8737u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8733u); } /* indirect call */
    }

loc_000C8737: ;
    ecx = MEM32(0x64D410);
    eax = esp + 0x74;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(ebx + ecx + 0x24); PUSH32(esp, 0x000C8748u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8744u); } /* indirect call */
    }

loc_000C8748: ;
    eax = MEM32(0x64D410);
    edx = esp + 0x8C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(ebx + eax); PUSH32(esp, 0x000C8759u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8756u); } /* indirect call */
    }

loc_000C8759: ;
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    ecx = esp + 0x54;
    edx = esp + 0x6C;
    esi = esp + 0x78;
    edi = esp + 0x84;
    PUSH32(esp, 0x000C8781u); RECOMP_ABI_CALL(0x000C84B0u, sub_000C84B0); /* call 0x000C84B0 */

loc_000C8781: ;
    esi = MEM32(esp + 0xC4);
    ecx = MEM32(0x64D410);
    eax = esp + 0xA8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(ebx + ecx + 0x28); PUSH32(esp, 0x000C879Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8798u); } /* indirect call */
    }

loc_000C879C: ;
    eax = MEM32(0x64D410);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(ebx + eax + 0x28); PUSH32(esp, 0x000C87B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C87AEu); } /* indirect call */
    }

loc_000C87B2: ;
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    ecx = esp + 0x40;
    edx = esp + 0x4C;
    esi = esp + 0x58;
    PUSH32(esp, 0x000C87D3u); RECOMP_ABI_CALL(0x000C84B0u, sub_000C84B0); /* call 0x000C84B0 */

loc_000C87D3: ;
    eax = MEM32(esp + 0xB0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 8) = 0x40;
    esi = eax;

loc_000C87E3: ;
    ecx = esi + 0xC;
    eax = esp + 0x20;
    PUSH32(esp, 0x000C87EFu); RECOMP_ABI_CALL(0x000C8550u, sub_000C8550); /* call 0x000C8550 */

loc_000C87EF: ;
    ecx = esi + 0x18;
    eax = esp + 0x2C;
    PUSH32(esp, 0x000C87FBu); RECOMP_ABI_CALL(0x000C8550u, sub_000C8550); /* call 0x000C8550 */

loc_000C87FB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8810; /* je: equal / zero */

loc_000C8800: ;
    eax = MEM32(esp + 0x98);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C880Du); RECOMP_ABI_CALL(0x000C8190u, sub_000C8190); /* call 0x000C8190 */

loc_000C880D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C8810: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x4C) = eax;
    ebx = MEM32(0x5F60E8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C8890; /* je: equal / zero */

loc_000C8823: ;
    edi = esi + 0x30;

loc_000C8826: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8846; /* jne: not equal / not zero */

loc_000C882F: ;
    PUSH32(esp, 0x325688);
    eax = 0x515;
    ecx = 0x3253C0;
    PUSH32(esp, 0x000C8843u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000C8843: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C8846: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8867; /* je: equal / zero */

loc_000C884B: ;
    edx = MEM32(esp + 0x98);
    eax = MEM32(0x64D410);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + eax + 0x14); PUSH32(esp, 0x000C8860u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C885Cu); } /* indirect call */
    }

loc_000C8860: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    goto loc_000C886D;

loc_000C8867: ;
    MEM32(edi) = 1;

loc_000C886D: ;
    ecx = MEM32(ebx);
    edx = MEM32(esp + 0x10);
    MEM32(edi + -4) = ecx;
    ebx = MEM32(ebx + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000C8826; /* jne: not equal / not zero */

loc_000C8885: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C8890: ;
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C88A0
 * Original: 0x000C88A0 - 0x000C8978 (216 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C88A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C88A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0xFFFFFFFEu;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    ebx = ebp;
    edi = ebp;
    esi = ebp;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x18) = esi;
    if (CMP_A(_fa, _fb)) goto loc_000C8970; /* ja: above (unsigned >) */

loc_000C88CF: ;
    eax = ZX8(MEM8(eax + 0xC8988));
    { uint32_t _jt = MEM32(eax * 4 + 0xC8978); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000C88DDu) goto loc_000C88DD;
    if (_jt == 0x000C88EAu) goto loc_000C88EA;
    if (_jt == 0x000C88F7u) goto loc_000C88F7;
    if (_jt == 0x000C8923u) goto loc_000C8923;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000C88DD: ;
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    goto loc_000C8902;

loc_000C88EA: ;
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    goto loc_000C8902;

loc_000C88F7: ;
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);

loc_000C8902: ;
    PUSH32(esp, 0x000C8907u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000C8907: ;
    ebp = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C892C; /* jne: not equal / not zero */

loc_000C891F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C892C; /* jne: not equal / not zero */

loc_000C8923: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C892C; /* jne: not equal / not zero */

loc_000C8928: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8970; /* je: equal / zero */

loc_000C892C: ;
    eax = esp + 0x10;
    PUSH32(esp, 0x000C8935u); RECOMP_ABI_CALL(0x000D6430u, sub_000D6430); /* call 0x000D6430 */

loc_000C8935: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) edi = MEM32(esp + 0x10); /* cmove */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) ebp = MEM32(esp + 0x14); /* cmove */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) esi = MEM32(esp + 0x18); /* cmove */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) ebx = MEM32(esp + 0x1C); /* cmove */
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x24) = ecx;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = ebx;

loc_000C8970: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C89A0
 * Original: 0x000C89A0 - 0x000C8CA5 (773 bytes, 264 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C89A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C89A0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    ecx = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x000C89D2u); RECOMP_ABI_CALL(0x000C88A0u, sub_000C88A0); /* call 0x000C88A0 */

loc_000C89D2: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x44);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C89E3; /* jne: not equal / not zero */

loc_000C89DF: ;
    MEM32(edi + 0x24) = MEM32(edi + 0x24) | 2;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000C89E3: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x4C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C89EF; /* jne: not equal / not zero */

loc_000C89EB: ;
    MEM32(edi + 0x24) = MEM32(edi + 0x24) | 1;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000C89EF: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(0x64D410);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    eax = MEM32(edx + eax + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8A1A; /* je: equal / zero */

loc_000C8A02: ;
    ecx = MEM32(eax);
    edx = MEM32(edi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFA00000u;
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(edi + 4) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000C8A1A; /* jge: greater or equal (signed >=) */

loc_000C8A17: ;
    MEM32(edi + 4) = eax;

loc_000C8A1A: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C8A26u); RECOMP_ABI_CALL(0x000C7E30u, sub_000C7E30); /* call 0x000C7E30 */

loc_000C8A26: ;
    ecx = MEM32(esi + 0xC);
    ebp = eax;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C8A37u); RECOMP_ABI_CALL(0x000C7F10u, sub_000C7F10); /* call 0x000C7F10 */

loc_000C8A37: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8A42; /* jne: not equal / not zero */

loc_000C8A3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8A5A; /* je: equal / zero */

loc_000C8A42: ;
    edx = MEM32(edi + 4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFA00000u;
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(edi + 4) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000C8A5A; /* jge: greater or equal (signed >=) */

loc_000C8A57: ;
    MEM32(edi + 4) = eax;

loc_000C8A5A: ;
    ecx = MEM32(esi + 0x24);
    MEM32(edi) = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8A7E; /* jne: not equal / not zero */

loc_000C8A68: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8A7E; /* je: equal / zero */

loc_000C8A72: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C8A79u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000C8A79: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;

loc_000C8A7E: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8A95; /* je: equal / zero */

loc_000C8A89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8A99; /* jne: not equal / not zero */

loc_000C8A8E: ;
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8A99; /* je: equal / zero */

loc_000C8A95: ;
    ebx = esp + 0x1C;

loc_000C8A99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8AAA; /* je: equal / zero */

loc_000C8A9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8AB0; /* jne: not equal / not zero */

loc_000C8AA3: ;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8AB0; /* je: equal / zero */

loc_000C8AAA: ;
    ebp = esp + 0x20;
    goto loc_000C8AB4;

loc_000C8AB0: ;
    ebp = MEM32(esp + 0x14);

loc_000C8AB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8AC5; /* je: equal / zero */

loc_000C8AB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8ACF; /* jne: not equal / not zero */

loc_000C8ABE: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8ACF; /* je: equal / zero */

loc_000C8AC5: ;
    eax = esp + 0x24;
    MEM32(esp + 0x18) = eax;
    goto loc_000C8AD3;

loc_000C8ACF: ;
    eax = MEM32(esp + 0x18);

loc_000C8AD3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8AE3; /* jne: not equal / not zero */

loc_000C8AD7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8AE3; /* jne: not equal / not zero */

loc_000C8ADB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8C63; /* je: equal / zero */

loc_000C8AE3: ;
    edx = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D410);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + ecx + 8); PUSH32(esp, 0x000C8AFBu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C8AF7u); } /* indirect call */
    }

loc_000C8AFB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8B76; /* je: equal / zero */

loc_000C8B02: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8B1B; /* jne: not equal / not zero */

loc_000C8B0B: ;
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_000C8B2B;

loc_000C8B1B: ;
    eax = MEM32(eax + 0xC);
    edx = esp + 0x14;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000C8B2Bu); RECOMP_ABI_CALL(0x000D6C80u, sub_000D6C80); /* call 0x000D6C80 */

loc_000C8B2B: ;
    ecx = MEM32(edi);
    edx = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33381C); /* mulss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C8B4Bu); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000C8B4B: ;
    _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C8B58u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000C8B58: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_000C8B76; /* jg: greater (signed >) */

loc_000C8B61: ;
    eax = 0x325338;
    edx = 8;
    PUSH32(esp, 0x000C8B70u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000C8B70: ;
    MEM32(edi) = 0x10000;

loc_000C8B76: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8BF3; /* je: equal / zero */

loc_000C8B7A: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8B93; /* jne: not equal / not zero */

loc_000C8B83: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    goto loc_000C8BA3;

loc_000C8B93: ;
    eax = MEM32(eax + 0x10);
    edx = esp + 0x14;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000C8BA3u); RECOMP_ABI_CALL(0x000D6C80u, sub_000D6C80); /* call 0x000D6C80 */

loc_000C8BA3: ;
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33381C); /* mulss */
    PUSH32(esp, eax);
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C8BC0u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000C8BC0: ;
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xFFA00000u;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C8BD5; /* jge: greater or equal (signed >=) */

loc_000C8BD0: ;
    MEM32(edi + 4) = ecx;
    goto loc_000C8BF3;

loc_000C8BD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000C8BEC; /* jg: greater (signed >) */

loc_000C8BD9: ;
    edx = MEM32(edi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 4) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000C8BF3; /* jge: greater or equal (signed >=) */

loc_000C8BE7: ;
    MEM32(edi + 4) = ecx;
    goto loc_000C8BF3;

loc_000C8BEC: ;
    MEM32(edi + 4) = 0;

loc_000C8BF3: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8C63; /* je: equal / zero */

loc_000C8BFB: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8C0C; /* jne: not equal / not zero */

loc_000C8C04: ;
    ecx = MEM32(eax + 0xC);
    ebp = MEM32(eax + 0x10);
    goto loc_000C8C24;

loc_000C8C0C: ;
    eax = MEM32(eax + 0x14);
    edx = esp + 0x14;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000C8C1Cu); RECOMP_ABI_CALL(0x000D6C80u, sub_000D6C80); /* call 0x000D6C80 */

loc_000C8C1C: ;
    ecx = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x14);

loc_000C8C24: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33381C); /* mulss */
    PUSH32(esp, ecx);
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C8C3Du); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000C8C3D: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C8C4F; /* jge: greater or equal (signed >=) */

loc_000C8C49: ;
    MEM8(edi + 8) = 0;
    goto loc_000C8C5F;

loc_000C8C4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C8C5C; /* jle: less or equal (signed <=) */

loc_000C8C56: ;
    MEM8(edi + 8) = 0x80;
    goto loc_000C8C5F;

loc_000C8C5C: ;
    MEM8(edi + 8) = LO8(eax);

loc_000C8C5F: ;
    MEM32(edi + 0x24) = MEM32(edi + 0x24) | 1;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000C8C63: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_000C8C7E; /* je: equal / zero */

loc_000C8C6E: ;
    eax = MEM32(edi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8C7E; /* jne: not equal / not zero */

loc_000C8C75: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C8C7Bu); RECOMP_ABI_CALL(0x000C8300u, sub_000C8300); /* call 0x000C8300 */

loc_000C8C7B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C8C7E: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8C8F; /* jne: not equal / not zero */

loc_000C8C88: ;
    ecx = MEM32(eax + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8C9E; /* je: equal / zero */

loc_000C8C8F: ;
    edi = MEM32(esi + 0x10);
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C8C9Bu); RECOMP_ABI_CALL(0x000C83C0u, sub_000C83C0); /* call 0x000C83C0 */

loc_000C8C9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C8C9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C8CB0
 * Original: 0x000C8CB0 - 0x000C8D01 (81 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C8CB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x40);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000C8CFB; /* je: equal / zero */

loc_000C8CBE: ;
    eax = MEM32(0x5F617C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_000C8CF7; /* je: equal / zero */

loc_000C8CC8: ;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8CF0; /* jne: not equal / not zero */

loc_000C8CCE: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8CDC; /* je: equal / zero */

loc_000C8CD6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C8CDC; /* jge: greater or equal (signed >=) */

loc_000C8CDA: ;
    edx = ecx;

loc_000C8CDC: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8CF0; /* jne: not equal / not zero */

loc_000C8CE1: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8CF0; /* jne: not equal / not zero */

loc_000C8CE6: ;
    ecx = MEM32(eax + 4);
    ebp = MEM32(ecx + 0x40);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8CFC; /* jne: not equal / not zero */

loc_000C8CF0: ;
    eax = MEM32(eax + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8CC8; /* jne: not equal / not zero */

loc_000C8CF7: ;
    eax = edx + 1;
    POP32(esp, ebp);

loc_000C8CFB: ;
    esp += 4; return; /* ret */

loc_000C8CFC: ;
    eax = MEM32(eax + 0x1C);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8D10
 * Original: 0x000C8D10 - 0x000C8D4F (63 bytes, 20 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C8D10: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000C8D2F; /* ja: above (unsigned >) */

loc_000C8D1C: ;
    eax = ZX8(MEM8(eax + 0xC8D58));
    { uint32_t _jt = MEM32(eax * 4 + 0xC8D50); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000C8D2Au) goto loc_000C8D2A;
    if (_jt == 0x000C8D2Fu) goto loc_000C8D2F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000C8D2A: ;
    eax = MEM32(ecx + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C8D2F: ;
    PUSH32(esp, 0x66C);
    PUSH32(esp, 0x324878);
    edx = 0x325320;
    ecx = 0x325688;
    PUSH32(esp, 0x000C8D48u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C8D48: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8D70
 * Original: 0x000C8D70 - 0x000C8DAB (59 bytes, 19 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C8D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C8D70: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000C8D8C; /* ja: above (unsigned >) */

loc_000C8D79: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xC8DAC); /* switch: 9 entries, 4 targets */
    if (_jt == 0x000C8D80u) goto loc_000C8D80;
    if (_jt == 0x000C8D84u) goto loc_000C8D84;
    if (_jt == 0x000C8D88u) goto loc_000C8D88;
    if (_jt == 0x000C8D8Cu) goto loc_000C8D8C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000C8D80: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

loc_000C8D84: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

loc_000C8D88: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

loc_000C8D8C: ;
    PUSH32(esp, 0x688);
    PUSH32(esp, 0x324878);
    edx = 0x325320;
    ecx = 0x325688;
    PUSH32(esp, 0x000C8DA5u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C8DA5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C8DD0
 * Original: 0x000C8DD0 - 0x000C8E20 (80 bytes, 28 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C8DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C8DD0: ;
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000C8E01; /* ja: above (unsigned >) */

loc_000C8DD9: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0xC8E20); /* switch: 9 entries, 4 targets */
    if (_jt == 0x000C8DE0u) goto loc_000C8DE0;
    if (_jt == 0x000C8DEBu) goto loc_000C8DEB;
    if (_jt == 0x000C8DF6u) goto loc_000C8DF6;
    if (_jt == 0x000C8E01u) goto loc_000C8E01;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000C8DE0: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8E1D; /* je: equal / zero */

loc_000C8DE7: ;
    eax = MEM32(eax + 0x18);
    esp += 4; return; /* ret */

loc_000C8DEB: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8E1D; /* je: equal / zero */

loc_000C8DF2: ;
    eax = MEM32(eax + 0x2C);
    esp += 4; return; /* ret */

loc_000C8DF6: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8E1D; /* je: equal / zero */

loc_000C8DFD: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

loc_000C8E01: ;
    PUSH32(esp, 0x6B1);
    PUSH32(esp, 0x324878);
    edx = 0x325320;
    ecx = 0x325688;
    PUSH32(esp, 0x000C8E1Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C8E1A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C8E1D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C8E50
 * Original: 0x000C8E50 - 0x000C8E8D (61 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8E50: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000C8E68; /* je: equal / zero */

loc_000C8E59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C8E86; /* jle: less or equal (signed <=) */

loc_000C8E5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000C8E86; /* jg: greater (signed >) */

loc_000C8E63: ;
    esi = MEM32(ecx + 0x14);
    goto loc_000C8E6B;

loc_000C8E68: ;
    esi = MEM32(ecx + 0xC);

loc_000C8E6B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8E86; /* je: equal / zero */

loc_000C8E6F: ;
    eax = esi + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C8E78u); RECOMP_ABI_CALL(0x000D7280u, sub_000D7280); /* call 0x000D7280 */

loc_000C8E78: ;
    ecx = 0x10000;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C8E86: ;
    eax = 0x10000;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8E90
 * Original: 0x000C8E90 - 0x000C8EAF (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8E90: ;
    ecx = MEM32(0x33B534);
    eax = ecx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    MEM32(0x33B534) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000C8EAE; /* jne: not equal / not zero */

loc_000C8EA4: ;
    MEM32(0x33B534) = 1;

loc_000C8EAE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C8EB0
 * Original: 0x000C8EB0 - 0x000C8ECF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C8EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8EB0: ;
    eax = MEM32(0x5F617C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8ECC; /* je: equal / zero */

loc_000C8EB9: ;
    /* nop */

loc_000C8EC0: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8ECE; /* je: equal / zero */

loc_000C8EC5: ;
    eax = MEM32(eax + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8EC0; /* jne: not equal / not zero */

loc_000C8ECC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C8ECE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C8ED0
 * Original: 0x000C8ED0 - 0x000C8F2F (95 bytes, 40 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8ED0: ;
    PUSH32(esp, esi);
    esi = eax;

loc_000C8ED3: ;
    eax = MEM32(esi + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C8F15; /* je: equal / zero */

loc_000C8ED9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C8EEA; /* je: equal / zero */

loc_000C8EDC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C8EF5; /* jne: not equal / not zero */

loc_000C8EDF: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8F11; /* je: equal / zero */

loc_000C8EE6: ;
    esi = eax;
    goto loc_000C8ED3;

loc_000C8EEA: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8F11; /* je: equal / zero */

loc_000C8EF1: ;
    esi = eax;
    goto loc_000C8ED3;

loc_000C8EF5: ;
    PUSH32(esp, 0x72C);
    PUSH32(esp, 0x324878);
    edx = 0x325308;
    ecx = 0x325688;
    PUSH32(esp, 0x000C8F0Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C8F0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C8F11: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C8F15: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8F2B; /* je: equal / zero */

loc_000C8F1A: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8F2B; /* je: equal / zero */

loc_000C8F24: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C8F2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8F30
 * Original: 0x000C8F30 - 0x000C8F78 (72 bytes, 27 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8F30: ;
    ecx = MEM32(eax + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C8F71; /* je: equal / zero */

loc_000C8F36: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C8F49; /* je: equal / zero */

loc_000C8F39: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C8F52; /* jne: not equal / not zero */

loc_000C8F3C: ;
    eax = MEM32(eax + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8F30; /* jne: not equal / not zero */

loc_000C8F43: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000C8F49: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8F43; /* je: equal / zero */

loc_000C8F50: ;
    goto loc_000C8F30;

loc_000C8F52: ;
    PUSH32(esp, 0x754);
    PUSH32(esp, 0x324878);
    edx = 0x325308;
    ecx = 0x325688;
    PUSH32(esp, 0x000C8F6Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C8F6B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000C8F71: ;
    eax = MEM32(eax + 4);
    eax = MEM32(eax + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8F80
 * Original: 0x000C8F80 - 0x000C90F7 (375 bytes, 117 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C8F80: ;
    _fa = (uint32_t)(MEM32(0x5F6184)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F6184), 0x41 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C8F9B; /* jl: less (signed <) */

loc_000C8F89: ;
    eax = 0x325305;
    edx = 0x14;
    PUSH32(esp, 0x000C8F98u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000C8F98: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000C8F9B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0x8C;
    PUSH32(esp, 0x000C8FA7u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000C8FA7: ;
    ebx = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C90F2; /* je: equal / zero */

loc_000C8FB3: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(ebx + 0x5C) = esi;
    MEM32(ebx + 0x60) = esi;
    MEM32(ebx + 0x64) = esi;
    MEM32(ebx) = 1;
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 0x10) = edx;
    PUSH32(esp, 0x000C8FDEu); RECOMP_ABI_CALL(0x000C8E90u, sub_000C8E90); /* call 0x000C8E90 */

loc_000C8FDE: ;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, 0x40);
    ebp = ebx + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    MEM32(ebx + 0x14) = eax;
    MEM32(ebx + 4) = edi;
    MEM32(ebx + 0x68) = esi;
    MEM32(ebx + 0x80) = esi;
    MEM32(ebx + 0x7C) = esi;
    MEM32(ebx + 0x70) = 0xFFFFFFFEu;
    MEM32(ebx + 0x74) = esi;
    MEM32(ebx + 0x6C) = esi;
    MEM32(ebx + 0x84) = esi;
    MEM32(ebx + 0x88) = esi;
    PUSH32(esp, 0x000C9019u); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000C9019: ;
    eax = MEM32(ebx + 4);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000C90D4; /* ja: above (unsigned >) */

loc_000C902C: ;
    ecx = ZX8(MEM8(eax + 0xC9108));
    { uint32_t _jt = MEM32(ecx * 4 + 0xC90F8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000C903Au) goto loc_000C903A;
    if (_jt == 0x000C90A2u) goto loc_000C90A2;
    if (_jt == 0x000C90BAu) goto loc_000C90BA;
    if (_jt == 0x000C90D4u) goto loc_000C90D4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000C903A: ;
    eax = 0xFFFFFFFEu;
    MEM32(ebx + 0x40) = esi;
    MEM32(ebx + 0x3C) = esi;
    MEM32(ebx + 0x34) = esi;
    MEM32(ebx + 0x38) = esi;
    MEM32(ebx + 0x2C) = esi;
    MEM32(ebx + 0x58) = esi;
    MEM32(ebx + 0x54) = esi;
    MEM32(ebx + 0x4C) = esi;
    MEM32(ebx + 0x50) = esi;
    MEM32(ebx + 0x44) = esi;
    esi = MEM32(esp + 0x1C);
    ecx = edi;
    edi = MEM32(esp + 0x18);
    MEM32(ebx + 0x18) = 1;
    MEM32(ebx + 0x30) = eax;
    MEM32(ebx + 0x48) = eax;
    MEM32(ebx + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000C9080u); RECOMP_ABI_CALL(0x000C8CB0u, sub_000C8CB0); /* call 0x000C8CB0 */

loc_000C9080: ;
    esi = MEM32(esp + 0x20);
    ecx = esi;
    MEM32(ebp) = eax;
    PUSH32(esp, 0x000C908Eu); RECOMP_ABI_CALL(0x000C8E50u, sub_000C8E50); /* call 0x000C8E50 */

loc_000C908E: ;
    ecx = esi;
    MEM32(ebx + 0x24) = eax;
    PUSH32(esp, 0x000C9098u); RECOMP_ABI_CALL(0x000C8D10u, sub_000C8D10); /* call 0x000C8D10 */

loc_000C9098: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ebx + 0x28) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000C90A2: ;
    POP32(esp, edi);
    MEM32(ebp) = 0xFFFFFFFEu;
    POP32(esp, ebp);
    MEM32(ebx + 0x20) = esi;
    POP32(esp, esi);
    MEM32(ebx + 0x18) = 2;
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000C90BA: ;
    POP32(esp, edi);
    MEM32(ebp) = esi;
    POP32(esp, ebp);
    MEM32(ebx + 0x28) = esi;
    MEM32(ebx + 0x20) = esi;
    MEM32(ebx + 0x24) = esi;
    POP32(esp, esi);
    MEM32(ebx + 0x18) = 3;
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000C90D4: ;
    PUSH32(esp, 0x7AE);
    PUSH32(esp, 0x324878);
    edx = 0x3252D8;
    ecx = 0x325688;
    PUSH32(esp, 0x000C90EDu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C90ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);

loc_000C90F2: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9120
 * Original: 0x000C9120 - 0x000C9264 (324 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9120: ;
    ecx = MEM32(0x5F617C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C914A; /* je: equal / zero */

loc_000C912F: ;
    edx = MEM32(eax + 0xC);

loc_000C9132: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9143; /* jne: not equal / not zero */

loc_000C9137: ;
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C91C6; /* je: equal / zero */

loc_000C9143: ;
    ecx = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9132; /* jne: not equal / not zero */

loc_000C914A: ;
    ecx = MEM32(eax + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9157; /* je: equal / zero */

loc_000C9151: ;
    edx = MEM32(eax + 0x60);
    MEM32(ecx + 0x60) = edx;

loc_000C9157: ;
    ecx = MEM32(eax + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9164; /* je: equal / zero */

loc_000C915E: ;
    edx = MEM32(eax + 0x5C);
    MEM32(ecx + 0x5C) = edx;

loc_000C9164: ;
    ecx = MEM32(eax + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9188; /* je: equal / zero */

loc_000C916B: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x64);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C917A; /* jne: not equal / not zero */

loc_000C9175: ;
    edx = MEM32(eax + 0x5C);
    MEM32(ecx) = edx;

loc_000C917A: ;
    ecx = MEM32(eax + 0x64);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9188; /* jne: not equal / not zero */

loc_000C9182: ;
    edx = MEM32(eax + 0x60);
    MEM32(ecx + 4) = edx;

loc_000C9188: ;
    MEM32(eax + 0x60) = edi;
    MEM32(eax + 0x64) = edi;
    MEM32(eax + 0x5C) = edi;
    ecx = MEM32(0x5F6180);
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = 0x5F617C;
    _fa = (uint32_t)(MEM32(0x5F617C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F617C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9247; /* jne: not equal / not zero */

loc_000C91AD: ;
    MEM32(0x5F617C) = eax;
    MEM32(0x5F6180) = eax;
    eax = MEM32(0x5F6184);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x5F6184) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000C91C6: ;
    edx = MEM32(eax + 0x5C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    esi = MEM32(ecx + 0x5C);
    if (CMP_EQ(_fa, _fb)) goto loc_000C91D6; /* je: equal / zero */

loc_000C91D0: ;
    ebx = MEM32(eax + 0x60);
    MEM32(edx + 0x60) = ebx;

loc_000C91D6: ;
    edx = MEM32(eax + 0x60);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C91E3; /* je: equal / zero */

loc_000C91DD: ;
    ebx = MEM32(eax + 0x5C);
    MEM32(edx + 0x5C) = ebx;

loc_000C91E3: ;
    edx = MEM32(eax + 0x64);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9207; /* je: equal / zero */

loc_000C91EA: ;
    MEM32(edx + 8) = MEM32(edx + 8) - 1;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(eax + 0x64);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C91F9; /* jne: not equal / not zero */

loc_000C91F4: ;
    ebx = MEM32(eax + 0x5C);
    MEM32(edx) = ebx;

loc_000C91F9: ;
    edx = MEM32(eax + 0x64);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9207; /* jne: not equal / not zero */

loc_000C9201: ;
    ebx = MEM32(eax + 0x60);
    MEM32(edx + 4) = ebx;

loc_000C9207: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(eax + 0x64) = edi;
    MEM32(eax + 0x5C) = esi;
    MEM32(eax + 0x60) = ecx;
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + 0x5C) = eax;
    MEM32(eax + 0x64) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C9233; /* je: equal / zero */

loc_000C921D: ;
    ecx = MEM32(esi + 0x64);
    MEM32(esi + 0x60) = eax;
    MEM32(eax + 0x64) = ecx;
    eax = ecx;
    ecx = MEM32(eax + 8);
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000C9233: ;
    edx = MEM32(ecx + 0x64);
    MEM32(edx + 4) = eax;
    eax = MEM32(eax + 0x64);
    ecx = MEM32(eax + 8);
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000C9247: ;
    edx = MEM32(0x5F6180);
    MEM32(edx + 0x5C) = eax;
    MEM32(0x5F6180) = eax;
    eax = MEM32(0x5F6184);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x5F6184) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9270
 * Original: 0x000C9270 - 0x000C92D2 (98 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9270: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9284; /* je: equal / zero */

loc_000C9278: ;
    PUSH32(esp, 0x000C927Du); RECOMP_ABI_CALL(0x000D5500u, sub_000D5500); /* call 0x000D5500 */

loc_000C927D: ;
    MEM32(esi + 0x20) = 0xFFFFFFFFu;

loc_000C9284: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9298; /* je: equal / zero */

loc_000C928C: ;
    PUSH32(esp, 0x000C9291u); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000C9291: ;
    MEM32(esi + 0x30) = 0xFFFFFFFEu;

loc_000C9298: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C92AC; /* je: equal / zero */

loc_000C92A0: ;
    PUSH32(esp, 0x000C92A5u); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000C92A5: ;
    MEM32(esi + 0x48) = 0xFFFFFFFEu;

loc_000C92AC: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C92D1; /* je: equal / zero */

loc_000C92B4: ;
    PUSH32(esp, 0x000C92B9u); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000C92B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x70) = 0xFFFFFFFEu;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x6C) = eax;

loc_000C92D1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C92E0
 * Original: 0x000C92E0 - 0x000C92F8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C92E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C92E0: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C92F7; /* je: equal / zero */

loc_000C92E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C92EDu); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000C92ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = 0;

loc_000C92F7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C9300
 * Original: 0x000C9300 - 0x000C9399 (153 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C9300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9300: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9382; /* je: equal / zero */

loc_000C9310: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 4);

loc_000C9314: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x000C931Bu); RECOMP_ABI_CALL(0x000C8EB0u, sub_000C8EB0); /* call 0x000C8EB0 */

loc_000C931B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9328; /* je: equal / zero */

loc_000C931F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C9325u); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000C9325: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9328: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9335; /* je: equal / zero */

loc_000C932F: ;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;

loc_000C9335: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9342; /* je: equal / zero */

loc_000C933C: ;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;

loc_000C9342: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9366; /* je: equal / zero */

loc_000C9349: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9358; /* jne: not equal / not zero */

loc_000C9353: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_000C9358: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9366; /* jne: not equal / not zero */

loc_000C9360: ;
    edx = MEM32(esi + 8);
    MEM32(eax + 4) = edx;

loc_000C9366: ;
    eax = esi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x000C9376u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000C9376: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    esi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C9381; /* je: equal / zero */

loc_000C937C: ;
    ebx = MEM32(ebx + 4);
    goto loc_000C9314;

loc_000C9381: ;
    POP32(esp, ebx);

loc_000C9382: ;
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9395; /* je: equal / zero */

loc_000C9389: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C938Fu); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000C938F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = edi;

loc_000C9395: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C93A0
 * Original: 0x000C93A0 - 0x000C9437 (151 bytes, 54 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C93A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C93A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C93E1; /* je: equal / zero */

loc_000C93AB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C93DA; /* je: equal / zero */

loc_000C93AE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C93CF; /* je: equal / zero */

loc_000C93B1: ;
    PUSH32(esp, 0x863);
    PUSH32(esp, 0x324878);
    edx = 0x325308;
    ecx = 0x325688;
    PUSH32(esp, 0x000C93CAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C93CA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C93E6;

loc_000C93CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C93D5u); RECOMP_ABI_CALL(0x000C9300u, sub_000C9300); /* call 0x000C9300 */

loc_000C93D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C93E6;

loc_000C93DA: ;
    PUSH32(esp, 0x000C93DFu); RECOMP_ABI_CALL(0x000C92E0u, sub_000C92E0); /* call 0x000C92E0 */

loc_000C93DF: ;
    goto loc_000C93E6;

loc_000C93E1: ;
    PUSH32(esp, 0x000C93E6u); RECOMP_ABI_CALL(0x000C9270u, sub_000C9270); /* call 0x000C9270 */

loc_000C93E6: ;
    eax = MEM32(esi + 0x5C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C93F5; /* je: equal / zero */

loc_000C93EF: ;
    edx = MEM32(esi + 0x60);
    MEM32(eax + 0x60) = edx;

loc_000C93F5: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9402; /* je: equal / zero */

loc_000C93FC: ;
    edx = MEM32(esi + 0x5C);
    MEM32(eax + 0x5C) = edx;

loc_000C9402: ;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9426; /* je: equal / zero */

loc_000C9409: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9418; /* jne: not equal / not zero */

loc_000C9413: ;
    edx = MEM32(esi + 0x5C);
    MEM32(eax) = edx;

loc_000C9418: ;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9426; /* jne: not equal / not zero */

loc_000C9420: ;
    edx = MEM32(esi + 0x60);
    MEM32(eax + 4) = edx;

loc_000C9426: ;
    MEM32(esi + 0x5C) = ecx;
    MEM32(esi + 0x60) = ecx;
    MEM32(esi + 0x64) = ecx;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

}

/**
 * sub_000C9440
 * Original: 0x000C9440 - 0x000C9486 (70 bytes, 27 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9440: ;
    ecx = MEM32(eax + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C947B; /* je: equal / zero */

loc_000C9446: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C9455; /* je: equal / zero */

loc_000C9449: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C945E; /* jne: not equal / not zero */

loc_000C944C: ;
    eax = MEM32(eax + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9485; /* je: equal / zero */

loc_000C9453: ;
    goto loc_000C9440;

loc_000C9455: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9485; /* je: equal / zero */

loc_000C945C: ;
    goto loc_000C9440;

loc_000C945E: ;
    PUSH32(esp, 0x88A);
    PUSH32(esp, 0x324878);
    edx = 0x325308;
    ecx = 0x325688;
    PUSH32(esp, 0x000C9477u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C9477: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C947B: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    PUSH32(esp, 0x000C9484u); RECOMP_ABI_CALL(0x000D5550u, sub_000D5550); /* call 0x000D5550 */

loc_000C9484: ;
    POP32(esp, esi);

loc_000C9485: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C9490
 * Original: 0x000C9490 - 0x000C94DA (74 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C9490: ;
    edx = MEM32(esi + 0x84);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esi + 0x84) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000C94AA; /* jle: less or equal (signed <=) */

loc_000C94A4: ;
    _fa = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x70), 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C94D9; /* je: equal / zero */

loc_000C94AA: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C94BE; /* je: equal / zero */

loc_000C94B2: ;
    PUSH32(esp, 0x000C94B7u); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000C94B7: ;
    MEM32(esi + 0x70) = 0xFFFFFFFEu;

loc_000C94BE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x78) = eax;
    eax = esi;
    g_seh_ebp = ebp; sub_000C9440(); return; /* tail jmp 0x000C9440 */

loc_000C94D9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C94E0
 * Original: 0x000C94E0 - 0x000C9522 (66 bytes, 24 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C94E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C94E0: ;
    ecx = MEM32(eax + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C951A; /* je: equal / zero */

loc_000C94E6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C94F4; /* je: equal / zero */

loc_000C94E9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C94FD; /* jne: not equal / not zero */

loc_000C94EC: ;
    eax = MEM32(eax + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C94E0; /* jne: not equal / not zero */

loc_000C94F3: ;
    esp += 4; return; /* ret */

loc_000C94F4: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C94F3; /* je: equal / zero */

loc_000C94FB: ;
    goto loc_000C94E0;

loc_000C94FD: ;
    PUSH32(esp, 0x8D9);
    PUSH32(esp, 0x324878);
    edx = 0x325308;
    ecx = 0x325688;
    PUSH32(esp, 0x000C9516u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C9516: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C951A: ;
    eax = MEM32(eax + 0x20);
    g_seh_ebp = ebp; sub_000D55C0(); return; /* tail jmp 0x000D55C0 */

}

/**
 * sub_000C9530
 * Original: 0x000C9530 - 0x000C9580 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9530: ;
    eax = MEM32(esi + 0x84);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C957E; /* je: equal / zero */

loc_000C953D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x84) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_000C957E; /* jg: greater (signed >) */

loc_000C9548: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    MEM32(esi + 0x88) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000C956C; /* je: equal / zero */

loc_000C955A: ;
    PUSH32(esp, 0x000C955Fu); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000C955F: ;
    MEM32(esi + 0x70) = 0xFFFFFFFEu;
    MEM32(esi + 0x88) = edi;

loc_000C956C: ;
    MEM32(esi + 0x80) = edi;
    MEM32(esi + 0x7C) = edi;
    MEM32(esi + 0x74) = edi;
    MEM32(esi + 0x6C) = edi;
    MEM32(esi + 0x78) = edi;

loc_000C957E: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9580
 * Original: 0x000C9580 - 0x000C960A (138 bytes, 48 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9580: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C95A5; /* je: equal / zero */

loc_000C9587: ;
    eax = MEM32(esi + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C95CE; /* je: equal / zero */

loc_000C958D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C959C; /* je: equal / zero */

loc_000C9590: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C95B0; /* jne: not equal / not zero */

loc_000C9593: ;
    esi = MEM32(esi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9608; /* je: equal / zero */

loc_000C959A: ;
    goto loc_000C9587;

loc_000C959C: ;
    esi = MEM32(esi + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9608; /* je: equal / zero */

loc_000C95A3: ;
    goto loc_000C9587;

loc_000C95A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C95ABu); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000C95AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C95B0: ;
    PUSH32(esp, 0xA3C);
    PUSH32(esp, 0x324878);
    edx = 0x325308;
    ecx = 0x325688;
    PUSH32(esp, 0x000C95C9u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C95C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C95CE: ;
    PUSH32(esp, 0x000C95D3u); RECOMP_ABI_CALL(0x000D6D90u, sub_000D6D90); /* call 0x000D6D90 */

loc_000C95D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    MEM32(esi + 0x48) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C95F7; /* jne: not equal / not zero */

loc_000C95DB: ;
    PUSH32(esp, 0xA2E);
    PUSH32(esp, 0x325270);
    edx = 0x3252BC;
    ecx = 0x325688;
    PUSH32(esp, 0x000C95F4u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C95F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C95F7: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x50) = 0;
    MEM32(esi + 0x54) = eax;

loc_000C9608: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9610
 * Original: 0x000C9610 - 0x000C9667 (87 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C9610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9610: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(0x5F617C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C9663; /* je: equal / zero */

loc_000C9623: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x5C);

loc_000C9627: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9657; /* jne: not equal / not zero */

loc_000C9630: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9657; /* jne: not equal / not zero */

loc_000C9639: ;
    eax = esi;
    PUSH32(esp, 0x000C9640u); RECOMP_ABI_CALL(0x000C8F30u, sub_000C8F30); /* call 0x000C8F30 */

loc_000C9640: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9651; /* je: equal / zero */

loc_000C9644: ;
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0x000C964Cu); RECOMP_ABI_CALL(0x000C9580u, sub_000C9580); /* call 0x000C9580 */

loc_000C964C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C9657;

loc_000C9651: ;
    MEM32(esi) = 0;

loc_000C9657: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C9662; /* je: equal / zero */

loc_000C965D: ;
    ebx = MEM32(ebx + 0x5C);
    goto loc_000C9627;

loc_000C9662: ;
    POP32(esp, ebx);

loc_000C9663: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9670
 * Original: 0x000C9670 - 0x000C96D0 (96 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C9670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9670: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(0x5F617C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C96CC; /* je: equal / zero */

loc_000C9683: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x5C);

loc_000C9687: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C96C0; /* jne: not equal / not zero */

loc_000C9690: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C96C0; /* jne: not equal / not zero */

loc_000C9699: ;
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C96C0; /* jne: not equal / not zero */

loc_000C96A2: ;
    eax = esi;
    PUSH32(esp, 0x000C96A9u); RECOMP_ABI_CALL(0x000C8F30u, sub_000C8F30); /* call 0x000C8F30 */

loc_000C96A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C96BA; /* je: equal / zero */

loc_000C96AD: ;
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0x000C96B5u); RECOMP_ABI_CALL(0x000C9580u, sub_000C9580); /* call 0x000C9580 */

loc_000C96B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C96C0;

loc_000C96BA: ;
    MEM32(esi) = 0;

loc_000C96C0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C96CB; /* je: equal / zero */

loc_000C96C6: ;
    ebx = MEM32(ebx + 0x5C);
    goto loc_000C9687;

loc_000C96CB: ;
    POP32(esp, ebx);

loc_000C96CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C96D0
 * Original: 0x000C96D0 - 0x000C9702 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C96D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C96D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x5F617C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C96FF; /* je: equal / zero */

loc_000C96E1: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x5C);

loc_000C96E5: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C96F3; /* jne: not equal / not zero */

loc_000C96EA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000C96F0u); RECOMP_ABI_CALL(0x000C9580u, sub_000C9580); /* call 0x000C9580 */

loc_000C96F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C96F3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000C96FE; /* je: equal / zero */

loc_000C96F9: ;
    esi = MEM32(esi + 0x5C);
    goto loc_000C96E5;

loc_000C96FE: ;
    POP32(esp, esi);

loc_000C96FF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9710
 * Original: 0x000C9710 - 0x000C9737 (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9710: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x5F617C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9735; /* je: equal / zero */

loc_000C971C: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x5C);

loc_000C9720: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000C9726u); RECOMP_ABI_CALL(0x000C9580u, sub_000C9580); /* call 0x000C9580 */

loc_000C9726: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000C9734; /* je: equal / zero */

loc_000C972F: ;
    esi = MEM32(esi + 0x5C);
    goto loc_000C9720;

loc_000C9734: ;
    POP32(esp, esi);

loc_000C9735: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9740
 * Original: 0x000C9740 - 0x000C985E (286 bytes, 108 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C9740: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000C976E; /* je: equal / zero */

loc_000C9752: ;
    PUSH32(esp, 0xADA);
    PUSH32(esp, 0x325234);
    edx = 0x325254;
    ecx = 0x325688;
    PUSH32(esp, 0x000C976Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C976B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C976E: ;
    edi = MEM32(0x5F617C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C97E0; /* je: equal / zero */

loc_000C9778: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C97D9; /* jne: not equal / not zero */

loc_000C9780: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C97D9; /* jne: not equal / not zero */

loc_000C9788: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9798; /* jne: not equal / not zero */

loc_000C9790: ;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C97D9; /* jne: not equal / not zero */

loc_000C9798: ;
    eax = 0x10;
    PUSH32(esp, 0x000C97A2u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000C97A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C97E7; /* je: equal / zero */

loc_000C97A6: ;
    ecx = MEM32(edi + 0x14);
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ebp;
    MEM32(eax + 4) = ebp;
    edx = MEM32(esi + 0x20);
    ecx = esi + 0x1C;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C97C8; /* jne: not equal / not zero */

loc_000C97C4: ;
    MEM32(ecx) = eax;
    goto loc_000C97CE;

loc_000C97C8: ;
    ecx = MEM32(esi + 0x20);
    MEM32(ecx + 4) = eax;

loc_000C97CE: ;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 1;

loc_000C97D9: ;
    edi = MEM32(edi + 0x5C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9778; /* jne: not equal / not zero */

loc_000C97E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000C97E7: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9848; /* je: equal / zero */

loc_000C97EE: ;
    esi = MEM32(eax + 4);

loc_000C97F1: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C97FE; /* je: equal / zero */

loc_000C97F8: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_000C97FE: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C980B; /* je: equal / zero */

loc_000C9805: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_000C980B: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C982F; /* je: equal / zero */

loc_000C9812: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9821; /* jne: not equal / not zero */

loc_000C981C: ;
    edx = MEM32(eax + 4);
    MEM32(ecx) = edx;

loc_000C9821: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C982F; /* jne: not equal / not zero */

loc_000C9829: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;

loc_000C982F: ;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ebp;
    PUSH32(esp, 0x000C983Du); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000C983D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000C9848; /* je: equal / zero */

loc_000C9843: ;
    esi = MEM32(esi + 4);
    goto loc_000C97F1;

loc_000C9848: ;
    eax = 0x3251FC;
    edx = 0xA;
    PUSH32(esp, 0x000C9857u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000C9857: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9860
 * Original: 0x000C9860 - 0x000C98EA (138 bytes, 45 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000C9860: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9882; /* je: equal / zero */

loc_000C9866: ;
    PUSH32(esp, 0xB18);
    PUSH32(esp, 0x325234);
    edx = 0x325254;
    ecx = 0x325688;
    PUSH32(esp, 0x000C987Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C987F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9882: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    PUSH32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C98A4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000C9892: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33381C); /* mulss */
    eax = MEM32(esp + 0xC);
    edi = (int32_t)xmm0.f[0]; /* cvttss2si */
    goto loc_000C98B6;

loc_000C98A4: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x000C98ACu); RECOMP_ABI_CALL(0x000C8D70u, sub_000C8D70); /* call 0x000C8D70 */

loc_000C98AC: ;
    edi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x000C98B6u); RECOMP_ABI_CALL(0x000C8DD0u, sub_000C8DD0); /* call 0x000C8DD0 */

loc_000C98B6: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000C98D5; /* je: equal / zero */

loc_000C98C4: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0x000C98D0u); RECOMP_ABI_CALL(0x000C9610u, sub_000C9610); /* call 0x000C9610 */

loc_000C98D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000C98D5: ;
    edx = MEM32(ecx + 8);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0x000C98E5u); RECOMP_ABI_CALL(0x000C9670u, sub_000C9670); /* call 0x000C9670 */

loc_000C98E5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C98F0
 * Original: 0x000C98F0 - 0x000C99ED (253 bytes, 95 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C98F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C98F0: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 4 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000C9919; /* je: equal / zero */

loc_000C98FD: ;
    PUSH32(esp, 0xB4A);
    PUSH32(esp, 0x3251D0);
    edx = 0x325320;
    ecx = 0x325688;
    PUSH32(esp, 0x000C9916u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C9916: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9919: ;
    eax = MEM32(esp + 0x2C);
    MEM32(eax) = 0;
    eax = MEM32(edi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF0000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9936; /* jne: not equal / not zero */

loc_000C992F: ;
    PUSH32(esp, 0x000C9934u); RECOMP_ABI_CALL(0x000D6280u, sub_000D6280); /* call 0x000D6280 */

loc_000C9934: ;
    goto loc_000C994E;

loc_000C9936: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9952; /* je: equal / zero */

loc_000C993A: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9952; /* jne: not equal / not zero */

loc_000C9941: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9957; /* jne: not equal / not zero */

loc_000C9948: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx + 0x34);

loc_000C994E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9957; /* jne: not equal / not zero */

loc_000C9952: ;
    ebx = 1;

loc_000C9957: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C9968u); RECOMP_ABI_CALL(0x000C8F80u, sub_000C8F80); /* call 0x000C8F80 */

loc_000C9968: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C99E7; /* je: equal / zero */

loc_000C9971: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C99A2; /* jne: not equal / not zero */

loc_000C9975: ;
    PUSH32(esp, 0x000C997Au); RECOMP_ABI_CALL(0x000C9740u, sub_000C9740); /* call 0x000C9740 */

loc_000C997A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C99A2; /* je: equal / zero */

loc_000C997E: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esi + 0x28) = ebx;
    PUSH32(esp, 0x000C9990u); RECOMP_ABI_CALL(0x000C9860u, sub_000C9860); /* call 0x000C9860 */

loc_000C9990: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9993: ;
    eax = MEM32(esp + 0x2C);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000C99A2: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C99B1u); RECOMP_ABI_CALL(0x000C9860u, sub_000C9860); /* call 0x000C9860 */

loc_000C99B1: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x24);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C99D7u); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000C99D7: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9993; /* jne: not equal / not zero */

loc_000C99DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C99E4u); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000C99E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C99E7: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C99F0
 * Original: 0x000C99F0 - 0x000C9C3E (590 bytes, 184 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C99F0(void)
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

loc_000C99F0: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x74);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9A33; /* je: equal / zero */

loc_000C9A03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9A33; /* je: equal / zero */

loc_000C9A08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9A33; /* je: equal / zero */

loc_000C9A0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9A33; /* je: equal / zero */

loc_000C9A12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9A33; /* je: equal / zero */

loc_000C9A17: ;
    PUSH32(esp, 0xC14);
    PUSH32(esp, 0x3250F8);
    edx = 0x325320;
    ecx = 0x325688;
    PUSH32(esp, 0x000C9A30u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C9A30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9A33: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca >= _fcb)) goto loc_000C9A5E; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000C9A42: ;
    PUSH32(esp, 0xC15);
    PUSH32(esp, 0x3250B0);
    edx = 0x3250C8;
    ecx = 0x325688;
    PUSH32(esp, 0x000C9A5Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C9A5B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9A5E: ;
    eax = MEM32(esp + 0x7C);
    ecx = esi;
    MEM32(eax) = 0;
    PUSH32(esp, 0x000C9A6Fu); RECOMP_ABI_CALL(0x000C8D10u, sub_000C8D10); /* call 0x000C8D10 */

loc_000C9A6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9A79; /* jne: not equal / not zero */

loc_000C9A73: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C9A79: ;
    ecx = MEM32(esp + 0x6C);
    edx = MEM32(esp + 0x68);
    eax = MEM32(esp + 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C9A8Fu); RECOMP_ABI_CALL(0x000C8F80u, sub_000C8F80); /* call 0x000C8F80 */

loc_000C9A8F: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9BE5; /* je: equal / zero */

loc_000C9A9C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    PUSH32(esp, ebx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C9ABE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000C9AAC: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33381C); /* mulss */
    esi = MEM32(esp + 0x7C);
    ebx = (int32_t)xmm0.f[0]; /* cvttss2si */
    goto loc_000C9AD0;

loc_000C9ABE: ;
    ecx = esi;
    PUSH32(esp, 0x000C9AC5u); RECOMP_ABI_CALL(0x000C8D70u, sub_000C8D70); /* call 0x000C8D70 */

loc_000C9AC5: ;
    ebx = eax;
    eax = esi;
    PUSH32(esp, 0x000C9ACEu); RECOMP_ABI_CALL(0x000C8DD0u, sub_000C8DD0); /* call 0x000C8DD0 */

loc_000C9ACE: ;
    esi = eax;

loc_000C9AD0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9AF9; /* jne: not equal / not zero */

loc_000C9AD4: ;
    ecx = MEM32(0x64D404);
    MEM32(esp + 0x38) = ecx;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 0xC);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C9AF4u); RECOMP_ABI_CALL(0x000C8590u, sub_000C8590); /* call 0x000C8590 */

loc_000C9AF4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C9B09;

loc_000C9AF9: ;
    PUSH32(esp, 0x58);
    eax = esp + 0x14;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C9B06u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000C9B06: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9B09: ;
    eax = esp + 0x10;
    ecx = edi;
    PUSH32(esp, 0x000C9B14u); RECOMP_ABI_CALL(0x000C89A0u, sub_000C89A0); /* call 0x000C89A0 */

loc_000C9B14: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C9B3C; /* jge: greater or equal (signed >=) */

loc_000C9B18: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFF0000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9B3C; /* je: equal / zero */

loc_000C9B20: ;
    PUSH32(esp, 0xC51);
    PUSH32(esp, 0x325020);
    edx = 0x325070;
    ecx = 0x325688;
    PUSH32(esp, 0x000C9B39u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C9B39: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9B3C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ebp = 0xFFFFFFFEu;
    if (CMP_G(_fas, _fbs)) goto loc_000C9B4D; /* jg: greater (signed >) */

loc_000C9B45: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFF0000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9BAB; /* jne: not equal / not zero */

loc_000C9B4D: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9B6E; /* je: equal / zero */

loc_000C9B52: ;
    PUSH32(esp, 0xC54);
    PUSH32(esp, 0x324FA8);
    edx = 0x324FF0;
    ecx = 0x325688;
    PUSH32(esp, 0x000C9B6Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C9B6B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9B6E: ;
    PUSH32(esp, 0x000C9B73u); RECOMP_ABI_CALL(0x000D6D90u, sub_000D6D90); /* call 0x000D6D90 */

loc_000C9B73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(edi + 0x30) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C9B96; /* jne: not equal / not zero */

loc_000C9B7A: ;
    PUSH32(esp, 0xC56);
    PUSH32(esp, 0x324F60);
    edx = 0x3252BC;
    ecx = 0x325688;
    PUSH32(esp, 0x000C9B93u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C9B93: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9B96: ;
    MEM32(edi + 0x3C) = esi;
    MEM32(edi + 0x34) = ebx;
    MEM32(edi + 0x38) = 0;
    MEM32(esp + 0x14) = 0xFFA00000u;

loc_000C9BAB: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0x5F60F8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(edi + 0x1C);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x28);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C9BD0u); RECOMP_ABI_CALL(0x000D5230u, sub_000D5230); /* call 0x000D5230 */

loc_000C9BD0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(edi + 0x20) = eax;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000C9BEE; /* jne: not equal / not zero */

loc_000C9BDC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C9BE2u); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000C9BE2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9BE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C9BEE: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9C22; /* je: equal / zero */

loc_000C9BF3: ;
    ecx = eax;
    PUSH32(esp, 0x000C9BFAu); RECOMP_ABI_CALL(0x000D5BA0u, sub_000D5BA0); /* call 0x000D5BA0 */

loc_000C9BFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9C22; /* jne: not equal / not zero */

loc_000C9BFE: ;
    esi = MEM32(edi + 0x30);
    MEM32(edi + 0x40) = 1;
    PUSH32(esp, 0x000C9C0Du); RECOMP_ABI_CALL(0x000D6DC0u, sub_000D6DC0); /* call 0x000D6DC0 */

loc_000C9C0D: ;
    edx = MEM32(esp + 0x80);
    MEM32(edx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C9C22: ;
    edx = MEM32(esp + 0x80);
    MEM32(edi + 0x40) = 0;
    MEM32(edx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C9C40
 * Original: 0x000C9C40 - 0x000C9C70 (48 bytes, 12 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9C40: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9C62; /* je: equal / zero */

loc_000C9C46: ;
    PUSH32(esp, 0xC8A);
    PUSH32(esp, 0x324F34);
    edx = 0x325320;
    ecx = 0x325688;
    PUSH32(esp, 0x000C9C5Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C9C5F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9C62: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0x000C9C6Au); RECOMP_ABI_CALL(0x000D5650u, sub_000D5650); /* call 0x000D5650 */

loc_000C9C6A: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000C9C70
 * Original: 0x000C9C70 - 0x000C9CB5 (69 bytes, 21 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9C70: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9C92; /* je: equal / zero */

loc_000C9C76: ;
    PUSH32(esp, 0xCA2);
    PUSH32(esp, 0x324F0C);
    edx = 0x325320;
    ecx = 0x325688;
    PUSH32(esp, 0x000C9C8Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C9C8F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9C92: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x000C9CACu); RECOMP_ABI_CALL(0x000C9670u, sub_000C9670); /* call 0x000C9670 */

loc_000C9CAC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000C9CC0
 * Original: 0x000C9CC0 - 0x000C9D01 (65 bytes, 19 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9CC0: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9CE2; /* je: equal / zero */

loc_000C9CC6: ;
    PUSH32(esp, 0xCBB);
    PUSH32(esp, 0x324EE0);
    edx = 0x325320;
    ecx = 0x325688;
    PUSH32(esp, 0x000C9CDFu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C9CDF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9CE2: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C9CF8u); RECOMP_ABI_CALL(0x000C9610u, sub_000C9610); /* call 0x000C9610 */

loc_000C9CF8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000C9D10
 * Original: 0x000C9D10 - 0x000C9DB5 (165 bytes, 57 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9D10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9D36; /* je: equal / zero */

loc_000C9D1A: ;
    PUSH32(esp, 0xCD3);
    PUSH32(esp, 0x324EB0);
    edx = 0x325320;
    ecx = 0x325688;
    PUSH32(esp, 0x000C9D33u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C9D33: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9D36: ;
    ebx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9D75; /* je: equal / zero */

loc_000C9D3E: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF0000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9D59; /* jne: not equal / not zero */

loc_000C9D49: ;
    PUSH32(esp, 0x000C9D4Eu); RECOMP_ABI_CALL(0x000D62C0u, sub_000D62C0); /* call 0x000D62C0 */

loc_000C9D4E: ;
    edx = eax;
    PUSH32(esp, 0x000C9D55u); RECOMP_ABI_CALL(0x000D62D0u, sub_000D62D0); /* call 0x000D62D0 */

loc_000C9D55: ;
    ecx = eax;
    goto loc_000C9D5C;

loc_000C9D59: ;
    ecx = MEM32(esi + 0x14);

loc_000C9D5C: ;
    eax = MEM32(esi + 0xC);
    edi = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0x000C9D6Au); RECOMP_ABI_CALL(0x000D5CB0u, sub_000D5CB0); /* call 0x000D5CB0 */

loc_000C9D6A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000C9D75: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9D95; /* je: equal / zero */

loc_000C9D7C: ;
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C9D85u); RECOMP_ABI_CALL(0x000C7CE0u, sub_000C7CE0); /* call 0x000C7CE0 */

loc_000C9D85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000C9D8Du); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_000C9D8D: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000C9D95: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0x000C9DA5u); RECOMP_ABI_CALL(0x000C7D50u, sub_000C7D50); /* call 0x000C7D50 */

loc_000C9DA5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000C9DADu); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_000C9DAD: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9DC0
 * Original: 0x000C9DC0 - 0x000C9E4F (143 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9DC0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    ecx = MEM32(ebx + 0x18);
    MEM32(esp + 0x400) = eax;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000C9DED; /* jle: less or equal (signed <=) */

loc_000C9DE0: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9E05; /* je: equal / zero */

loc_000C9DE5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C9DE0; /* jl: less (signed <) */

loc_000C9DED: ;
    eax = MEM32(ebx + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000C9DFEu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000C9DFE: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C9E05: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x000C9E0Cu); RECOMP_ABI_CALL(0x000D00A0u, sub_000D00A0); /* call 0x000D00A0 */

loc_000C9E0C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9E38; /* jne: not equal / not zero */

loc_000C9E12: ;
    eax = MEM32(esi);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x324E70);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C9E27u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000C9E27: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 8;
    edx = 8;
    PUSH32(esp, 0x000C9E38u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000C9E38: ;
    ecx = MEM32(esp + 0x408);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000C9E48u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000C9E48: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C9E50
 * Original: 0x000C9E50 - 0x000C9F29 (217 bytes, 83 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C9E50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 0xB (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_000C9E7D; /* je: equal / zero */

loc_000C9E61: ;
    PUSH32(esp, 0xD41);
    PUSH32(esp, 0x324E48);
    edx = 0x325320;
    ecx = 0x325688;
    PUSH32(esp, 0x000C9E7Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000C9E7A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9E7D: ;
    eax = MEM32(esp + 0x2C);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    MEM32(eax) = 0;
    edx = MEM32(ebx + 0xC);
    eax = MEM32(0x64D410);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(ecx + eax + 0xC); PUSH32(esp, 0x000C9E9Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C9E96u); } /* indirect call */
    }

loc_000C9E9A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000C9EA8u); RECOMP_ABI_CALL(0x000C9DC0u, sub_000C9DC0); /* call 0x000C9DC0 */

loc_000C9EA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C9EBB; /* jne: not equal / not zero */

loc_000C9EB0: ;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C9EBB: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000C9EC9u); RECOMP_ABI_CALL(0x000C8F80u, sub_000C8F80); /* call 0x000C8F80 */

loc_000C9EC9: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9F0E; /* je: equal / zero */

loc_000C9ED2: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x2C);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    MEM32(esi + 0x1C) = ecx;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000C9EFEu); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000C9EFE: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9F17; /* jne: not equal / not zero */

loc_000C9F05: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C9F0Bu); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000C9F0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9F0E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C9F17: ;
    edx = MEM32(esp + 0x30);
    MEM32(edx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C9F30
 * Original: 0x000C9F30 - 0x000CA175 (581 bytes, 155 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C9F30: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x98);
    MEM32(esp + 0x84) = eax;
    MEM32(ecx) = 0;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9F98; /* jne: not equal / not zero */

loc_000C9F5E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x324E10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C9F70u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000C9F70: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = 8;
    PUSH32(esp, 0x000C9F7Fu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000C9F7F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0x000C9F91u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000C9F91: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C9F98: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_000CA14C; /* ja: above (unsigned >) */

loc_000C9FA6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xCA178); /* switch: 11 entries, 7 targets */
    if (_jt == 0x000C9FADu) goto loc_000C9FAD;
    if (_jt == 0x000C9FFDu) goto loc_000C9FFD;
    if (_jt == 0x000CA054u) goto loc_000CA054;
    if (_jt == 0x000CA0ACu) goto loc_000CA0AC;
    if (_jt == 0x000CA0D9u) goto loc_000CA0D9;
    if (_jt == 0x000CA106u) goto loc_000CA106;
    if (_jt == 0x000CA120u) goto loc_000CA120;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000C9FAD: ;
    eax = MEM32(esp + 0xAC);
    edx = MEM32(esp + 0xA4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xAC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xA0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x000C9FE5u); RECOMP_ABI_CALL(0x000C99F0u, sub_000C99F0); /* call 0x000C99F0 */

loc_000C9FE5: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0x000C9FF6u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000C9FF6: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C9FFD: ;
    eax = MEM32(esp + 0xAC);
    edx = MEM32(esp + 0xA4);
    edi = MEM32(esp + 0x98);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xAC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xA8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xA0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x000CA03Cu); RECOMP_ABI_CALL(0x000C9E50u, sub_000C9E50); /* call 0x000C9E50 */

loc_000CA03C: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0x000CA04Du); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CA04D: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CA054: ;
    eax = MEM32(esp + 0xAC);
    edx = MEM32(esp + 0xA4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xAC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xA8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xA4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xA4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xA4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = esi;
    PUSH32(esp, 0x000CA094u); RECOMP_ABI_CALL(0x000C98F0u, sub_000C98F0); /* call 0x000C98F0 */

loc_000CA094: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0x000CA0A5u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CA0A5: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CA0AC: ;
    ecx = MEM32(esp + 0x98);
    edx = MEM32(esp + 0x94);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CA0C1u); RECOMP_ABI_CALL(0x000C9C70u, sub_000C9C70); /* call 0x000C9C70 */

loc_000CA0C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0x000CA0D2u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CA0D2: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CA0D9: ;
    eax = MEM32(esp + 0x98);
    ecx = MEM32(esp + 0x94);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CA0EEu); RECOMP_ABI_CALL(0x000C9CC0u, sub_000C9CC0); /* call 0x000C9CC0 */

loc_000CA0EE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0x000CA0FFu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CA0FF: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CA106: ;
    PUSH32(esp, 0x000CA10Bu); RECOMP_ABI_CALL(0x000C9C40u, sub_000C9C40); /* call 0x000C9C40 */

loc_000CA10B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0x000CA119u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CA119: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CA120: ;
    edx = MEM32(esp + 0x94);
    eax = MEM32(esp + 0x98);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CA134u); RECOMP_ABI_CALL(0x000C9D10u, sub_000C9D10); /* call 0x000C9D10 */

loc_000CA134: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0x000CA145u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CA145: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CA14C: ;
    PUSH32(esp, 0x325305);
    edx = 0x15;
    PUSH32(esp, 0x000CA15Bu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CA15B: ;
    ecx = MEM32(esp + 0x8C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    PUSH32(esp, 0x000CA16Eu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CA16E: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CA1B0
 * Original: 0x000CA1B0 - 0x000CA270 (192 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000CA1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA1B0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA26D; /* jne: not equal / not zero */

loc_000CA1C2: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA26D; /* je: equal / zero */

loc_000CA1CC: ;
    eax = MEM32(edi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000CA1F6; /* je: equal / zero */

loc_000CA1D4: ;
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, 0x000CA1DCu); RECOMP_ABI_CALL(0x000D5BA0u, sub_000D5BA0); /* call 0x000D5BA0 */

loc_000CA1DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF0000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA1E7; /* je: equal / zero */

loc_000CA1E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CA1F6; /* jle: less or equal (signed <=) */

loc_000CA1E7: ;
    esi = MEM32(edi + 0x30);
    PUSH32(esp, 0x000CA1EFu); RECOMP_ABI_CALL(0x000D6E20u, sub_000D6E20); /* call 0x000D6E20 */

loc_000CA1EF: ;
    MEM32(edi + 0x40) = 0;

loc_000CA1F6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x30);
    PUSH32(esp, 0x000CA1FFu); RECOMP_ABI_CALL(0x000D6CA0u, sub_000D6CA0); /* call 0x000D6CA0 */

loc_000CA1FF: ;
    edx = MEM32(edi + 0x38);
    esi = MEM32(edi + 0x34);
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFF0000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA221; /* jne: not equal / not zero */

loc_000CA211: ;
    PUSH32(esp, 0x000CA216u); RECOMP_ABI_CALL(0x000D6240u, sub_000D6240); /* call 0x000D6240 */

loc_000CA216: ;
    esi = eax;
    PUSH32(esp, 0x000CA21Du); RECOMP_ABI_CALL(0x000D6250u, sub_000D6250); /* call 0x000D6250 */

loc_000CA21D: ;
    ebx = eax;
    goto loc_000CA224;

loc_000CA221: ;
    ebx = MEM32(edi + 0x3C);

loc_000CA224: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA243; /* jl: less (signed <) */

loc_000CA228: ;
    eax = MEM32(edi + 0x30);
    PUSH32(esp, 0x000CA230u); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000CA230: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM32(edi + 0x30) = 0xFFFFFFFEu;
    MEM32(edi + 0x38) = 0;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000CA243: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CA249u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000CA249: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx;
    PUSH32(esp, 0x000CA253u); RECOMP_ABI_CALL(0x000D7160u, sub_000D7160); /* call 0x000D7160 */

loc_000CA253: ;
    edx = MEM32(ebp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    MEM32(ebp + 4) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000CA26B; /* jge: greater or equal (signed >=) */

loc_000CA264: ;
    MEM32(ebp + 4) = 0xFFA00000u;

loc_000CA26B: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_000CA26D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA270
 * Original: 0x000CA270 - 0x000CA316 (166 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CA270: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA285; /* je: equal / zero */

loc_000CA27F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CA285: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x4C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFF0000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA29F; /* jne: not equal / not zero */

loc_000CA291: ;
    PUSH32(esp, 0x000CA296u); RECOMP_ABI_CALL(0x000D6280u, sub_000D6280); /* call 0x000D6280 */

loc_000CA296: ;
    esi = eax;
    PUSH32(esp, 0x000CA29Du); RECOMP_ABI_CALL(0x000D6290u, sub_000D6290); /* call 0x000D6290 */

loc_000CA29D: ;
    goto loc_000CA2A2;

loc_000CA29F: ;
    eax = MEM32(edi + 0x54);

loc_000CA2A2: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000CA30B; /* je: equal / zero */

loc_000CA2AF: ;
    PUSH32(esp, 0x000CA2B4u); RECOMP_ABI_CALL(0x000D6CA0u, sub_000D6CA0); /* call 0x000D6CA0 */

loc_000CA2B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA2DF; /* jl: less (signed <) */

loc_000CA2B8: ;
    eax = MEM32(edi + 0x48);
    PUSH32(esp, 0x000CA2C0u); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000CA2C0: ;
    PUSH32(esp, edi);
    MEM32(edi + 0x48) = 0xFFFFFFFEu;
    MEM32(edi + 0x50) = 0;
    PUSH32(esp, 0x000CA2D4u); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000CA2D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CA2DF: ;
    edi = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    PUSH32(esp, 0x000CA2EAu); RECOMP_ABI_CALL(0x000D6B50u, sub_000D6B50); /* call 0x000D6B50 */

loc_000CA2EA: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x000CA2F3u); RECOMP_ABI_CALL(0x000D7160u, sub_000D7160); /* call 0x000D7160 */

loc_000CA2F3: ;
    edx = MEM32(ebp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    MEM32(ebp + 4) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000CA30B; /* jge: greater or equal (signed >=) */

loc_000CA304: ;
    MEM32(ebp + 4) = 0xFFA00000u;

loc_000CA30B: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA320
 * Original: 0x000CA320 - 0x000CA39D (125 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CA320: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_000CA39B; /* je: equal / zero */

loc_000CA32C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA39B; /* je: equal / zero */

loc_000CA331: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x70);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x74);
    PUSH32(esp, 0x000CA33Eu); RECOMP_ABI_CALL(0x000D6CA0u, sub_000D6CA0); /* call 0x000D6CA0 */

loc_000CA33E: ;
    edx = MEM32(esi + 0x78);
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA370; /* jl: less (signed <) */

loc_000CA349: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, 0x000CA351u); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000CA351: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esi + 0x70) = 0xFFFFFFFEu;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x78) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000CA370: ;
    eax = edi;
    edi = ecx;
    PUSH32(esp, 0x000CA379u); RECOMP_ABI_CALL(0x000D6B50u, sub_000D6B50); /* call 0x000D6B50 */

loc_000CA379: ;
    edi = MEM32(esi + 0x7C);
    PUSH32(esp, 0x000CA381u); RECOMP_ABI_CALL(0x000D7160u, sub_000D7160); /* call 0x000D7160 */

loc_000CA381: ;
    edx = MEM32(ebp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    MEM32(ebp + 4) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000CA399; /* jge: greater or equal (signed >=) */

loc_000CA392: ;
    MEM32(ebp + 4) = 0xFFA00000u;

loc_000CA399: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000CA39B: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA3A0
 * Original: 0x000CA3A0 - 0x000CA42A (138 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CA3A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_000CA427; /* je: equal / zero */

loc_000CA3AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA427; /* je: equal / zero */

loc_000CA3B2: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x70);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x74);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0x000CA3C3u); RECOMP_ABI_CALL(0x000D6CA0u, sub_000D6CA0); /* call 0x000D6CA0 */

loc_000CA3C3: ;
    _fb = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA3FA; /* jl: less (signed <) */

loc_000CA3CA: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, 0x000CA3D2u); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000CA3D2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x70) = 0xFFFFFFFEu;
    eax = esi;
    POP32(esp, ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000C9440(); return; /* tail jmp 0x000C9440 */

loc_000CA3FA: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x000CA405u); RECOMP_ABI_CALL(0x000D6B50u, sub_000D6B50); /* call 0x000D6B50 */

loc_000CA405: ;
    edi = MEM32(esi + 0x7C);
    PUSH32(esp, 0x000CA40Du); RECOMP_ABI_CALL(0x000D7160u, sub_000D7160); /* call 0x000D7160 */

loc_000CA40D: ;
    edx = MEM32(ebp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    MEM32(ebp + 4) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000CA425; /* jge: greater or equal (signed >=) */

loc_000CA41E: ;
    MEM32(ebp + 4) = 0xFFA00000u;

loc_000CA425: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000CA427: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA430
 * Original: 0x000CA430 - 0x000CA50D (221 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA430: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000CA43Bu); RECOMP_ABI_CALL(0x000C8ED0u, sub_000C8ED0); /* call 0x000C8ED0 */

loc_000CA43B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA4F7; /* je: equal / zero */

loc_000CA443: ;
    eax = MEM32(esp + 0x60);
    ecx = esp + 4;
    PUSH32(esp, 0x000CA450u); RECOMP_ABI_CALL(0x000D4CD0u, sub_000D4CD0); /* call 0x000D4CD0 */

loc_000CA450: ;
    eax = esp + 4;
    ecx = esi;
    PUSH32(esp, 0x000CA45Bu); RECOMP_ABI_CALL(0x000C89A0u, sub_000C89A0); /* call 0x000C89A0 */

loc_000CA45B: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x000CA467u); RECOMP_ABI_CALL(0x000CA270u, sub_000CA270); /* call 0x000CA270 */

loc_000CA467: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA4CB; /* je: equal / zero */

loc_000CA46E: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x000CA47Au); RECOMP_ABI_CALL(0x000CA1B0u, sub_000CA1B0); /* call 0x000CA1B0 */

loc_000CA47A: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CA484u); RECOMP_ABI_CALL(0x000CA3A0u, sub_000CA3A0); /* call 0x000CA3A0 */

loc_000CA484: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CA48Eu); RECOMP_ABI_CALL(0x000CA320u, sub_000CA320); /* call 0x000CA320 */

loc_000CA48E: ;
    eax = MEM32(esi + 0x84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA4A2; /* jl: less (signed <) */

loc_000CA49C: ;
    _fa = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x70), 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA503; /* je: equal / zero */

loc_000CA4A2: ;
    eax = MEM32(esi + 0x20);
    ecx = esp + 4;
    PUSH32(esp, 0x5F60F8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CA4B4u); RECOMP_ABI_CALL(0x000D5420u, sub_000D5420); /* call 0x000D5420 */

loc_000CA4B4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA4D2; /* jne: not equal / not zero */

loc_000CA4BB: ;
    MEM32(esi + 0x20) = 0xFFFFFFFFu;

loc_000CA4C2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CA4C8u); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000CA4C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CA4CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CA4D2: ;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA503; /* je: equal / zero */

loc_000CA4DC: ;
    eax = esi;
    PUSH32(esp, 0x000CA4E3u); RECOMP_ABI_CALL(0x000C94E0u, sub_000C94E0); /* call 0x000C94E0 */

loc_000CA4E3: ;
    MEM32(esi + 0x88) = 0;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CA4F7: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0x000CA4FFu); RECOMP_ABI_CALL(0x000D5490u, sub_000D5490); /* call 0x000D5490 */

loc_000CA4FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA4C2; /* je: equal / zero */

loc_000CA503: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CA510
 * Original: 0x000CA510 - 0x000CA65E (334 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CA510: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA609; /* je: equal / zero */

loc_000CA52A: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(eax + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    eax = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(0x64D410);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + edx + 0xC); PUSH32(esp, 0x000CA542u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CA53Eu); } /* indirect call */
    }

loc_000CA542: ;
    ecx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000CA609; /* je: equal / zero */

loc_000CA554: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x20;
    if (CMP_EQ(_fa, _fb)) goto loc_000CA592; /* je: equal / zero */

loc_000CA55F: ;
    MEM32(eax + 0x84) = ebx;
    eax = MEM32(edi);
    MEM32(eax + 0x80) = ebx;
    ecx = MEM32(edi);
    MEM32(ecx + 0x7C) = ebx;
    edx = MEM32(edi);
    MEM32(edx + 0x70) = 0xFFFFFFFEu;
    eax = MEM32(edi);
    MEM32(eax + 0x74) = ebx;
    ecx = MEM32(edi);
    MEM32(ecx + 0x6C) = ebx;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CA58Du); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000CA58D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;

loc_000CA592: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CA598u); RECOMP_ABI_CALL(0x000CA3A0u, sub_000CA3A0); /* call 0x000CA3A0 */

loc_000CA598: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CA59Eu); RECOMP_ABI_CALL(0x000CA320u, sub_000CA320); /* call 0x000CA320 */

loc_000CA59E: ;
    ecx = MEM32(esi + 0x84);
    eax = 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA5B5; /* jl: less (signed <) */

loc_000CA5B0: ;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA5D0; /* je: equal / zero */

loc_000CA5B5: ;
    edx = MEM32(esp + 0x10);
    ebx = MEM32(esi + 4);
    PUSH32(esp, 0x000CA5C1u); RECOMP_ABI_CALL(0x000C9DC0u, sub_000C9DC0); /* call 0x000C9DC0 */

loc_000CA5C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA5D6; /* jne: not equal / not zero */

loc_000CA5C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CA5CBu); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000CA5CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CA5D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CA5D6: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CA5F0u); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000CA5F0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA5C5; /* je: equal / zero */

loc_000CA5F7: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CA609: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA654; /* je: equal / zero */

loc_000CA60E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CA614u); RECOMP_ABI_CALL(0x000CA3A0u, sub_000CA3A0); /* call 0x000CA3A0 */

loc_000CA614: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CA61Au); RECOMP_ABI_CALL(0x000CA320u, sub_000CA320); /* call 0x000CA320 */

loc_000CA61A: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CA624u); RECOMP_ABI_CALL(0x000CA7A0u, sub_000CA7A0); /* call 0x000CA7A0 */

loc_000CA624: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA63E; /* jne: not equal / not zero */

loc_000CA62B: ;
    PUSH32(esp, esi);
    MEM32(esi + 0x20) = ebx;
    PUSH32(esp, 0x000CA634u); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000CA634: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CA63E: ;
    _fa = (uint32_t)(MEM32(esi + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x88), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA654; /* je: equal / zero */

loc_000CA646: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0x000CA64Eu); RECOMP_ABI_CALL(0x000C94E0u, sub_000C94E0); /* call 0x000C94E0 */

loc_000CA64E: ;
    MEM32(esi + 0x88) = ebx;

loc_000CA654: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA660
 * Original: 0x000CA660 - 0x000CA798 (312 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CA660: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000CA6C7; /* je: equal / zero */

loc_000CA673: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CA679u); RECOMP_ABI_CALL(0x000CA3A0u, sub_000CA3A0); /* call 0x000CA3A0 */

loc_000CA679: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CA67Fu); RECOMP_ABI_CALL(0x000CA320u, sub_000CA320); /* call 0x000CA320 */

loc_000CA67F: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CA689u); RECOMP_ABI_CALL(0x000CA7A0u, sub_000CA7A0); /* call 0x000CA7A0 */

loc_000CA689: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA6A3; /* jne: not equal / not zero */

loc_000CA690: ;
    MEM32(esi + 0x28) = ebx;

loc_000CA693: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CA699u); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000CA699: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000CA6A3: ;
    _fa = (uint32_t)(MEM32(esi + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x88), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA78E; /* je: equal / zero */

loc_000CA6AF: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 0x000CA6B7u); RECOMP_ABI_CALL(0x000C94E0u, sub_000C94E0); /* call 0x000C94E0 */

loc_000CA6B7: ;
    POP32(esp, edi);
    MEM32(esi + 0x88) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000CA6C7: ;
    edi = MEM32(esi + 0x1C);
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA78E; /* je: equal / zero */

loc_000CA6D4: ;
    ecx = MEM32(edx);
    PUSH32(esp, 0x000CA6DBu); RECOMP_ABI_CALL(0x000C8EB0u, sub_000C8EB0); /* call 0x000C8EB0 */

loc_000CA6DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA6F0; /* je: equal / zero */

loc_000CA6DF: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA6D4; /* jne: not equal / not zero */

loc_000CA6E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000CA6F0: ;
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA757; /* je: equal / zero */

loc_000CA6F6: ;
    edi = MEM32(eax + 4);
    /* nop */

loc_000CA700: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA70D; /* je: equal / zero */

loc_000CA707: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_000CA70D: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA71A; /* je: equal / zero */

loc_000CA714: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_000CA71A: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA73E; /* je: equal / zero */

loc_000CA721: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA730; /* jne: not equal / not zero */

loc_000CA72B: ;
    edx = MEM32(eax + 4);
    MEM32(ecx) = edx;

loc_000CA730: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA73E; /* jne: not equal / not zero */

loc_000CA738: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;

loc_000CA73E: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    PUSH32(esp, 0x000CA74Cu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CA74C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000CA757; /* je: equal / zero */

loc_000CA752: ;
    edi = MEM32(edi + 4);
    goto loc_000CA700;

loc_000CA757: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CA75Du); RECOMP_ABI_CALL(0x000CA3A0u, sub_000CA3A0); /* call 0x000CA3A0 */

loc_000CA75D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CA763u); RECOMP_ABI_CALL(0x000CA320u, sub_000CA320); /* call 0x000CA320 */

loc_000CA763: ;
    edx = MEM32(esi + 0x10);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CA783u); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000CA783: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA693; /* je: equal / zero */

loc_000CA78E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA7A0
 * Original: 0x000CA7A0 - 0x000CA7F9 (89 bytes, 31 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA7A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000CA7EB; /* je: equal / zero */

loc_000CA7AA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000CA7DD; /* je: equal / zero */

loc_000CA7AD: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000CA7CF; /* je: equal / zero */

loc_000CA7B0: ;
    PUSH32(esp, 0xFAF);
    PUSH32(esp, 0x324878);
    edx = 0x325308;
    ecx = 0x325688;
    PUSH32(esp, 0x000CA7C9u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CA7C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000CA7CF: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CA7D9u); RECOMP_ABI_CALL(0x000CA660u, sub_000CA660); /* call 0x000CA660 */

loc_000CA7D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CA7DD: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CA7E7u); RECOMP_ABI_CALL(0x000CA510u, sub_000CA510); /* call 0x000CA510 */

loc_000CA7E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CA7EB: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CA7F5u); RECOMP_ABI_CALL(0x000CA430u, sub_000CA430); /* call 0x000CA430 */

loc_000CA7F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CA800
 * Original: 0x000CA800 - 0x000CA8A7 (167 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CA800: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    MEM32(ebx) = 0;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(ecx) = 0;
    PUSH32(esp, esi);
    MEM32(ebp) = 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x4D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x4D (8-bit) */
    PUSH32(esp, edi);
    edi = esp + 0xC;
    esi = 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_000CA83D; /* jne: not equal / not zero */

loc_000CA83C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000CA83D: ;
    PUSH32(esp, 0x000CA842u); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CA842: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x2E);
    PUSH32(esp, edx);
    MEM8(esp + 0x23) = 0;
    PUSH32(esp, 0x000CA853u); RECOMP_ABI_CALL(0x0028C220u, sub_0028C220); /* call 0x0028C220 */

loc_000CA853: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA897; /* je: equal / zero */

loc_000CA85C: ;
    esi = esp + 0xC;
    MEM8(edi) = 0;
    PUSH32(esp, 0x000CA868u); RECOMP_ABI_CALL(0x000D4C80u, sub_000D4C80); /* call 0x000D4C80 */

loc_000CA868: ;
    esi = edi + 1;
    PUSH32(esp, 0x2E);
    PUSH32(esp, esi);
    MEM32(ebx) = eax;
    PUSH32(esp, 0x000CA875u); RECOMP_ABI_CALL(0x0028C220u, sub_0028C220); /* call 0x0028C220 */

loc_000CA875: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA897; /* je: equal / zero */

loc_000CA87E: ;
    MEM8(edi) = 0;
    PUSH32(esp, 0x000CA886u); RECOMP_ABI_CALL(0x000D4C80u, sub_000D4C80); /* call 0x000D4C80 */

loc_000CA886: ;
    ecx = MEM32(esp + 0x24);
    esi = edi + 1;
    MEM32(ecx) = eax;
    PUSH32(esp, 0x000CA894u); RECOMP_ABI_CALL(0x000D4C80u, sub_000D4C80); /* call 0x000D4C80 */

loc_000CA894: ;
    MEM32(ebp) = eax;

loc_000CA897: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x000CA8A3u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CA8A3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CA8B0
 * Original: 0x000CA8B0 - 0x000CA8DD (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA8B0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA8C4; /* je: equal / zero */

loc_000CA8C0: ;
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_000CA8C4: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA8D0; /* je: equal / zero */

loc_000CA8CC: ;
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_000CA8D0: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA8DC; /* je: equal / zero */

loc_000CA8D8: ;
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_000CA8DC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CA8E0
 * Original: 0x000CA8E0 - 0x000CA8F6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA8E0(void)
{

loc_000CA8E0: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000CA900
 * Original: 0x000CA900 - 0x000CA91E (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA900(void)
{

loc_000CA900: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000CA920
 * Original: 0x000CA920 - 0x000CA93E (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA920(void)
{

loc_000CA920: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000CA940
 * Original: 0x000CA940 - 0x000CA97A (58 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA940: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5F60E8) = eax;
    MEM32(0x5F60EC) = eax;
    MEM32(0x5F60F0) = eax;
    MEM32(0x64D404) = eax;
    eax = 0xCA8E0;
    MEM32(0x64D414) = eax;
    MEM32(0x64D418) = eax;
    MEM32(0x64D41C) = 0xCA900;
    MEM32(0x64D420) = 0xCA920;
    esp += 4; return; /* ret */

}

/**
 * sub_000CA980
 * Original: 0x000CA980 - 0x000CA99A (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA980: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA999; /* je: equal / zero */

loc_000CA988: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_000CA999: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CA9A0
 * Original: 0x000CA9A0 - 0x000CA9BA (26 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA9A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA9A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x33B500);
    MEM32(0x64D40C) = 0;
    PUSH32(esp, 0x000CA9B6u); RECOMP_ABI_CALL(0x000CB640u, sub_000CB640); /* call 0x000CB640 */

loc_000CA9B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CA9C0
 * Original: 0x000CA9C0 - 0x000CAA3D (125 bytes, 34 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA9C0: ;
    ecx = MEM32(0x64D410);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA9E7; /* jne: not equal / not zero */

loc_000CA9CA: ;
    PUSH32(esp, 0x325688);
    eax = 0x10CB;
    ecx = 0x32566C;
    PUSH32(esp, 0x000CA9DEu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CA9DE: ;
    ecx = MEM32(0x64D410);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CA9E7: ;
    eax = MEM32(0x64D40C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CAA20; /* jle: less or equal (signed <=) */

loc_000CA9F3: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CA9F6: ;
    eax = MEM32(esi + ecx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAA12; /* je: equal / zero */

loc_000CA9FF: ;
    PUSH32(esp, 0x000CAA04u); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000CAA04: ;
    ecx = MEM32(0x64D410);
    MEM32(esi + ecx + 0x50) = 0xFFFFFFFEu;

loc_000CAA12: ;
    eax = MEM32(0x64D40C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CA9F6; /* jl: less (signed <) */

loc_000CAA1F: ;
    POP32(esp, esi);

loc_000CAA20: ;
    eax = ecx;
    PUSH32(esp, 0x000CAA27u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CAA27: ;
    MEM32(0x64D40C) = 0;
    MEM32(0x64D410) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CAA40
 * Original: 0x000CAA40 - 0x000CAA6C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CAA40: ;
    eax = MEM32(0x5F6188);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAA61; /* je: equal / zero */

loc_000CAA49: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    /* nop */

loc_000CAA50: ;
    PUSH32(esp, 0x000CAA55u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CAA55: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000CAA60; /* je: equal / zero */

loc_000CAA5B: ;
    esi = MEM32(esi + 4);
    goto loc_000CAA50;

loc_000CAA60: ;
    POP32(esp, esi);

loc_000CAA61: ;
    MEM32(0x64D408) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000CAA70
 * Original: 0x000CAA70 - 0x000CAA82 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAA70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CAA70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5F617C) = eax;
    MEM32(0x5F6180) = eax;
    MEM32(0x5F6184) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000CAA90
 * Original: 0x000CAA90 - 0x000CAB28 (152 bytes, 51 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CAA90: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CAA99u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CAA99: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CAAAA; /* jne: not equal / not zero */

loc_000CAAA2: ;
    ecx = MEM32(0x33B500);
    MEM32(esi) = ecx;

loc_000CAAAA: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CAABA; /* jne: not equal / not zero */

loc_000CAAB1: ;
    edx = MEM32(0x33B504);
    MEM32(esi + 4) = edx;

loc_000CAABA: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CAAC9; /* jne: not equal / not zero */

loc_000CAAC1: ;
    eax = MEM32(0x33B508);
    MEM32(esi + 8) = eax;

loc_000CAAC9: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CAAD9; /* jne: not equal / not zero */

loc_000CAAD0: ;
    ecx = MEM32(0x33B50C);
    MEM32(esi + 0xC) = ecx;

loc_000CAAD9: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CAAE9; /* jne: not equal / not zero */

loc_000CAAE0: ;
    edx = MEM32(0x33B510);
    MEM32(esi + 0x10) = edx;

loc_000CAAE9: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CAAF8; /* jne: not equal / not zero */

loc_000CAAF0: ;
    eax = MEM32(0x33B514);
    MEM32(esi + 0x14) = eax;

loc_000CAAF8: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CAB08; /* jne: not equal / not zero */

loc_000CAAFF: ;
    ecx = MEM32(0x33B518);
    MEM32(esi + 0x18) = ecx;

loc_000CAB08: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CAB18; /* jne: not equal / not zero */

loc_000CAB0F: ;
    edx = MEM32(0x33B51C);
    MEM32(esi + 0x1C) = edx;

loc_000CAB18: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CAB27; /* jne: not equal / not zero */

loc_000CAB1F: ;
    eax = MEM32(0x33B520);
    MEM32(esi + 0x20) = eax;

loc_000CAB27: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CAB30
 * Original: 0x000CAB30 - 0x000CAB4E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAB30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CAB30: ;
    ecx = MEM32(0x64D410);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    PUSH32(esp, 0x10);
    edx = eax + ecx + 0x24;
    PUSH32(esp, 0x33B524);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CAB4Au); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CAB4A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CAB50
 * Original: 0x000CAB50 - 0x000CAB9A (74 bytes, 19 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CAB50: ;
    PUSH32(esp, 0x000CAB55u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CAB55: ;
    PUSH32(esp, 0x119D);
    eax = 0x325688;
    PUSH32(esp, 0x000CAB64u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CAB64: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000CAB70u); RECOMP_ABI_CALL(0x000C8EB0u, sub_000C8EB0); /* call 0x000C8EB0 */

loc_000CAB70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAB95; /* je: equal / zero */

loc_000CAB74: ;
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33381C); /* mulss */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edi = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, 0x000CAB91u); RECOMP_ABI_CALL(0x000C9580u, sub_000C9580); /* call 0x000C9580 */

loc_000CAB91: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_000CAB95: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CABA0
 * Original: 0x000CABA0 - 0x000CACC8 (296 bytes, 85 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CABA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CABA0: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x84) = eax;
    eax = MEM32(0x64D424);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAC31; /* je: equal / zero */

loc_000CABBB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAC31; /* je: equal / zero */

loc_000CABBF: ;
    eax = MEM32(0x64D3FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CABEA; /* je: equal / zero */

loc_000CABC8: ;
    ecx = MEM32(0x64D400);
    eax = ecx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D400) = ecx;
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, 0x000CABE3u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CABE3: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CABEA: ;
    PUSH32(esp, 0x000CABEFu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CABEF: ;
    PUSH32(esp, 0x11CD);
    eax = 0x325688;
    PUSH32(esp, 0x000CABFEu); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CABFE: ;
    eax = MEM32(esi + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CAC47; /* jne: not equal / not zero */

loc_000CAC08: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x324E10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CAC1Au); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000CAC1A: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = 8;
    PUSH32(esp, 0x000CAC29u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CAC29: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000CAC31u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CAC31: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, 0x000CAC40u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CAC40: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CAC47: ;
    ecx = MEM32(esp + 0x9C);
    edx = MEM32(esp + 0x98);
    PUSH32(esp, edi);
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x9C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xA0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CAC7Eu); RECOMP_ABI_CALL(0x000C9F30u, sub_000C9F30); /* call 0x000C9F30 */

loc_000CAC7E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CACA2; /* je: equal / zero */

loc_000CAC85: ;
    edi = MEM32(esp + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAC99; /* je: equal / zero */

loc_000CAC8D: ;
    eax = edi;
    PUSH32(esp, 0x000CAC94u); RECOMP_ABI_CALL(0x000C9120u, sub_000C9120); /* call 0x000C9120 */

loc_000CAC94: ;
    edi = MEM32(edi + 0x14);
    goto loc_000CACA4;

loc_000CAC99: ;
    PUSH32(esp, 0x000CAC9Eu); RECOMP_ABI_CALL(0x000C8E90u, sub_000C8E90); /* call 0x000C8E90 */

loc_000CAC9E: ;
    edi = eax;
    goto loc_000CACA4;

loc_000CACA2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CACA4: ;
    edx = esi;
    eax = ebx;
    PUSH32(esp, 0x000CACADu); RECOMP_ABI_CALL(0x000C7C30u, sub_000C7C30); /* call 0x000C7C30 */

loc_000CACAD: ;
    PUSH32(esp, 0x000CACB2u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CACB2: ;
    ecx = MEM32(esp + 0x88);
    eax = edi;
    POP32(esp, edi);
    PUSH32(esp, 0x000CACC1u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CACC1: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CACC8
 * Original: 0x000CACC8 - 0x000CACD0 (8 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CACC8(void)
{

loc_000CACC8: ;
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
 * sub_000CACD0
 * Original: 0x000CACD0 - 0x000CAD49 (121 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CACD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CACD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x000CACD9u); RECOMP_ABI_CALL(0x000D4310u, sub_000D4310); /* call 0x000D4310 */

loc_000CACD9: ;
    esi = MEM32(edi);
    PUSH32(esp, 0x000CACE0u); RECOMP_ABI_CALL(0x000CEE80u, sub_000CEE80); /* call 0x000CEE80 */

loc_000CACE0: ;
    PUSH32(esp, 0x000CACE5u); RECOMP_ABI_CALL(0x000ED180u, sub_000ED180); /* call 0x000ED180 */

loc_000CACE5: ;
    PUSH32(esp, 0x000CACEAu); RECOMP_ABI_CALL(0x000E3000u, sub_000E3000); /* call 0x000E3000 */

loc_000CACEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CACF8; /* jne: not equal / not zero */

loc_000CACEE: ;
    PUSH32(esp, 0x000CACF3u); RECOMP_ABI_CALL(0x000D4360u, sub_000D4360); /* call 0x000D4360 */

loc_000CACF3: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000CACF8: ;
    PUSH32(esp, 0x000CACFDu); RECOMP_ABI_CALL(0x000CA9A0u, sub_000CA9A0); /* call 0x000CA9A0 */

loc_000CACFD: ;
    PUSH32(esp, 0x000CAD02u); RECOMP_ABI_CALL(0x000CA940u, sub_000CA940); /* call 0x000CA940 */

loc_000CAD02: ;
    PUSH32(esp, 0x000CAD07u); RECOMP_ABI_CALL(0x000CAA70u, sub_000CAA70); /* call 0x000CAA70 */

loc_000CAD07: ;
    PUSH32(esp, 0x000CAD0Cu); RECOMP_ABI_CALL(0x000D51D0u, sub_000D51D0); /* call 0x000D51D0 */

loc_000CAD0C: ;
    esi = eax;
    PUSH32(esp, 0x000CAD13u); RECOMP_ABI_CALL(0x000D7260u, sub_000D7260); /* call 0x000D7260 */

loc_000CAD13: ;
    PUSH32(esp, 0x000CAD18u); RECOMP_ABI_CALL(0x000D5DF0u, sub_000D5DF0); /* call 0x000D5DF0 */

loc_000CAD18: ;
    PUSH32(esp, 0x000CAD1Du); RECOMP_ABI_CALL(0x000CF6B0u, sub_000CF6B0); /* call 0x000CF6B0 */

loc_000CAD1D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(0x64D424) = 1;
    MEM32(0x64D428) = eax;
    PUSH32(esp, 0x000CAD39u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CAD39: ;
    PUSH32(esp, 0x000CAD3Eu); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000CAD3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CAD50
 * Original: 0x000CAD50 - 0x000CADC1 (113 bytes, 27 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CAD50: ;
    eax = MEM32(0x64D424);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CADC0; /* je: equal / zero */

loc_000CAD59: ;
    PUSH32(esp, ebx);
    MEM32(0x64D424) = 0;
    PUSH32(esp, 0x000CAD69u); RECOMP_ABI_CALL(0x000CB420u, sub_000CB420); /* call 0x000CB420 */

loc_000CAD69: ;
    PUSH32(esp, 0x000CAD6Eu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CAD6E: ;
    PUSH32(esp, 0x1285);
    eax = 0x325688;
    PUSH32(esp, 0x000CAD7Du); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CAD7D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CAD89u); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CAD89: ;
    PUSH32(esp, 0x000CAD8Eu); RECOMP_ABI_CALL(0x000CA9C0u, sub_000CA9C0); /* call 0x000CA9C0 */

loc_000CAD8E: ;
    PUSH32(esp, 0x000CAD93u); RECOMP_ABI_CALL(0x000CAA40u, sub_000CAA40); /* call 0x000CAA40 */

loc_000CAD93: ;
    PUSH32(esp, 0x000CAD98u); RECOMP_ABI_CALL(0x000D0020u, sub_000D0020); /* call 0x000D0020 */

loc_000CAD98: ;
    eax = MEM32(0x64D428);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000CADB1; /* je: equal / zero */

loc_000CADA2: ;
    PUSH32(esp, 0x000CADA7u); RECOMP_ABI_CALL(0x000D5E40u, sub_000D5E40); /* call 0x000D5E40 */

loc_000CADA7: ;
    PUSH32(esp, 0x000CADACu); RECOMP_ABI_CALL(0x000CF6F0u, sub_000CF6F0); /* call 0x000CF6F0 */

loc_000CADAC: ;
    PUSH32(esp, 0x000CADB1u); RECOMP_ABI_CALL(0x000D5630u, sub_000D5630); /* call 0x000D5630 */

loc_000CADB1: ;
    PUSH32(esp, 0x000CADB6u); RECOMP_ABI_CALL(0x000D4360u, sub_000D4360); /* call 0x000D4360 */

loc_000CADB6: ;
    MEM32(0x64D3FC) = 0;

loc_000CADC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CADD0
 * Original: 0x000CADD0 - 0x000CAE40 (112 bytes, 28 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CADD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000CADD0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000CAE00; /* jp: parity */

loc_000CADE2: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33381C); /* mulss */
    PUSH32(esp, esi);
    MEM32(0x33B538) = 0;
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, 0x000CADFEu); RECOMP_ABI_CALL(0x000D5220u, sub_000D5220); /* call 0x000D5220 */

loc_000CADFE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000CAE00: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000CAE22; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000CAE05: ;
    PUSH32(esp, 0x325688);
    eax = 0x12C1;
    ecx = 0x324E04;
    PUSH32(esp, 0x000CAE19u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CAE19: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CAE22: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33381C); /* mulss */
    PUSH32(esp, esi);
    MEM32(0x33B538) = 1;
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, 0x000CAE3Eu); RECOMP_ABI_CALL(0x000D5220u, sub_000D5220); /* call 0x000D5220 */

loc_000CAE3E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CAE40
 * Original: 0x000CAE40 - 0x000CAF40 (256 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000CAE40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CAE61; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx)) */

loc_000CAE4B: ;
    PUSH32(esp, 0x324DE0);
    edx = 8;
    PUSH32(esp, 0x000CAE5Au); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CAE5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CAE61: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000CAEA1; /* jnp: not parity */

loc_000CAE77: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000CAEA1; /* jnp: not parity */

loc_000CAE85: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CAEA1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0xC)) */

loc_000CAE8B: ;
    PUSH32(esp, 0x324DAC);
    edx = 8;
    PUSH32(esp, 0x000CAE9Au); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CAE9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CAEA1: ;
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x33381C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    eax = (int32_t)xmm2.f[0]; /* cvttss2si */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    MEM32(esp) = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000CAECF; /* jp: parity */

loc_000CAEC9: ;
    MEM32(esp + 4) = edx;
    goto loc_000CAEE0;

loc_000CAECF: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    eax = (int32_t)xmm2.f[0]; /* cvttss2si */
    MEM32(esp + 4) = eax;

loc_000CAEE0: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000CAEF4; /* jp: parity */

loc_000CAEEE: ;
    MEM32(esp + 8) = edx;
    goto loc_000CAF05;

loc_000CAEF4: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    eax = (int32_t)xmm2.f[0]; /* cvttss2si */
    MEM32(esp + 8) = eax;

loc_000CAF05: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000CAF23; /* jp: parity */

loc_000CAF13: ;
    ecx = esp;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x000CAF1Fu); RECOMP_ABI_CALL(0x000D5210u, sub_000D5210); /* call 0x000D5210 */

loc_000CAF1F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CAF23: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esp + 0xC) = ecx;
    ecx = esp;
    PUSH32(esp, 0x000CAF3Cu); RECOMP_ABI_CALL(0x000D5210u, sub_000D5210); /* call 0x000D5210 */

loc_000CAF3C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CAF40
 * Original: 0x000CAF40 - 0x000CB09B (347 bytes, 106 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CAF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CAF40: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 1;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x000CAF63u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CAF63: ;
    PUSH32(esp, 0x131C);
    eax = 0x325688;
    PUSH32(esp, 0x000CAF72u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CAF72: ;
    eax = MEM32(0x64EE70);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAF90; /* je: equal / zero */

loc_000CAF7E: ;
    PUSH32(esp, 0x324D9C);
    edx = 3;
    PUSH32(esp, 0x000CAF8Du); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CAF8D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CAF90: ;
    edi = MEM32(0x5F60E8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(0x64EE70) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000CAFBA; /* je: equal / zero */

loc_000CAFA2: ;
    esi = esp + 0x74;
    PUSH32(esp, 0x000CAFABu); RECOMP_ABI_CALL(0x000C7FD0u, sub_000C7FD0); /* call 0x000C7FD0 */

loc_000CAFAB: ;
    eax = MEM32(edi);
    PUSH32(esp, 0x000CAFB2u); RECOMP_ABI_CALL(0x000D5680u, sub_000D5680); /* call 0x000D5680 */

loc_000CAFB2: ;
    edi = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CAFA2; /* jne: not equal / not zero */

loc_000CAFBA: ;
    _fa = (uint32_t)(MEM32(0x64D404)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D404), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CAFD9; /* je: equal / zero */

loc_000CAFC2: ;
    PUSH32(esp, 0x325688);
    eax = 0x1333;
    ecx = 0x324D84;
    PUSH32(esp, 0x000CAFD6u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CAFD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CAFD9: ;
    esi = MEM32(0x5F617C);
    eax = MEM32(0x64D404);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x44) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000CB080; /* je: equal / zero */

loc_000CAFF2: ;
    edi = MEM32(esi + 0x5C);

loc_000CAFF5: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB00E; /* je: equal / zero */

loc_000CAFF9: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB00E; /* je: equal / zero */

loc_000CB001: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 8);
    PUSH32(esp, 0x000CB00Cu); RECOMP_ABI_CALL(0x000C8480u, sub_000C8480); /* call 0x000C8480 */

loc_000CB00C: ;
    MEM32(esi) = eax;

loc_000CB00E: ;
    eax = esi;
    PUSH32(esp, 0x000CB015u); RECOMP_ABI_CALL(0x000C8ED0u, sub_000C8ED0); /* call 0x000C8ED0 */

loc_000CB015: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB072; /* je: equal / zero */

loc_000CB019: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB036; /* jne: not equal / not zero */

loc_000CB01F: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB036; /* jne: not equal / not zero */

loc_000CB024: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB036; /* jne: not equal / not zero */

loc_000CB02D: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB064; /* je: equal / zero */

loc_000CB036: ;
    eax = MEM32(0x64D404);
    MEM32(esp + 0x44) = eax;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0xC);
    ebp = MEM32(esi + 8);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0x000CB05Du); RECOMP_ABI_CALL(0x000C8590u, sub_000C8590); /* call 0x000C8590 */

loc_000CB05D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebx;

loc_000CB064: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CB06Fu); RECOMP_ABI_CALL(0x000CA7A0u, sub_000CA7A0); /* call 0x000CA7A0 */

loc_000CB06F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CB072: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000CB080; /* je: equal / zero */

loc_000CB078: ;
    edi = MEM32(edi + 0x5C);
    goto loc_000CAFF5;

loc_000CB080: ;
    PUSH32(esp, 0x000CB085u); RECOMP_ABI_CALL(0x000D5CA0u, sub_000D5CA0); /* call 0x000D5CA0 */

loc_000CB085: ;
    MEM32(0x64EE70) = ebx;
    PUSH32(esp, 0x000CB090u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CB090: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CB0A0
 * Original: 0x000CB0A0 - 0x000CB0B1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB0A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB0A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000CB0ADu); RECOMP_ABI_CALL(0x000CABA0u, sub_000CABA0); /* call 0x000CABA0 */

loc_000CB0AD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CB0C0
 * Original: 0x000CB0C0 - 0x000CB0D6 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB0C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB0C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CB0D1u); RECOMP_ABI_CALL(0x000CABA0u, sub_000CABA0); /* call 0x000CABA0 */

loc_000CB0D1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CB0E0
 * Original: 0x000CB0E0 - 0x000CB0F0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB0E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB0E0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CB0ECu); RECOMP_ABI_CALL(0x000CAB50u, sub_000CAB50); /* call 0x000CAB50 */

loc_000CB0EC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CB0F0
 * Original: 0x000CB0F0 - 0x000CB10D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CB0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB0F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x64D40C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x64D40C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CB10A; /* jge: greater or equal (signed >=) */

loc_000CB0F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CB10A; /* jl: less (signed <) */

loc_000CB0FC: ;
    ecx = MEM32(0x64D410);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + ecx + 0x40);
    esp += 4; return; /* ret */

loc_000CB10A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CB110
 * Original: 0x000CB110 - 0x000CB15B (75 bytes, 22 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB110: ;
    PUSH32(esp, 0x000CB115u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB115: ;
    PUSH32(esp, 0x153B);
    eax = 0x325688;
    PUSH32(esp, 0x000CB124u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB124: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB156; /* je: equal / zero */

loc_000CB12C: ;
    eax = MEM32(0x5F617C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB156; /* je: equal / zero */

loc_000CB135: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB144; /* jne: not equal / not zero */

loc_000CB13A: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB144; /* jne: not equal / not zero */

loc_000CB13F: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB150; /* je: equal / zero */

loc_000CB144: ;
    eax = MEM32(eax + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB135; /* jne: not equal / not zero */

loc_000CB14B: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000CB150: ;
    MEM32(eax) = 0;

loc_000CB156: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CB160
 * Original: 0x000CB160 - 0x000CB212 (178 bytes, 48 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB160: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CB167u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB167: ;
    PUSH32(esp, 0x1561);
    eax = 0x325688;
    PUSH32(esp, 0x000CB176u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB176: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(0x64D410);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x10);
    edi = esi + eax + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CB193u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CB193: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB1B8; /* jne: not equal / not zero */

loc_000CB19C: ;
    PUSH32(esp, 0x1565);
    PUSH32(esp, 0x324D20);
    edx = 0x324D68;
    ecx = 0x325688;
    PUSH32(esp, 0x000CB1B5u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CB1B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CB1B8: ;
    edx = MEM32(0x64D410);
    eax = MEM32(esi + edx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB1E2; /* jne: not equal / not zero */

loc_000CB1C6: ;
    PUSH32(esp, 0x1566);
    PUSH32(esp, 0x324CD8);
    edx = 0x324D68;
    ecx = 0x325688;
    PUSH32(esp, 0x000CB1DFu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CB1DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CB1E2: ;
    eax = MEM32(0x64D410);
    ecx = MEM32(esi + eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000CB20D; /* jne: not equal / not zero */

loc_000CB1F1: ;
    PUSH32(esp, 0x1567);
    PUSH32(esp, 0x324C90);
    edx = 0x324D68;
    ecx = 0x325688;
    PUSH32(esp, 0x000CB20Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CB20A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CB20D: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CB220
 * Original: 0x000CB220 - 0x000CB263 (67 bytes, 17 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB220: ;
    PUSH32(esp, 0x000CB225u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB225: ;
    PUSH32(esp, 0x157D);
    eax = 0x325688;
    PUSH32(esp, 0x000CB234u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB234: ;
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33381C); /* mulss */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, 0x000CB252u); RECOMP_ABI_CALL(0x000C9610u, sub_000C9610); /* call 0x000C9610 */

loc_000CB252: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0x000CB25Eu); RECOMP_ABI_CALL(0x000C7C50u, sub_000C7C50); /* call 0x000C7C50 */

loc_000CB25E: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CB270
 * Original: 0x000CB270 - 0x000CB27D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB270: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000CB279u); RECOMP_ABI_CALL(0x000CB220u, sub_000CB220); /* call 0x000CB220 */

loc_000CB279: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CB280
 * Original: 0x000CB280 - 0x000CB2C2 (66 bytes, 17 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CB286u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB286: ;
    PUSH32(esp, 0x15C6);
    eax = 0x325688;
    PUSH32(esp, 0x000CB295u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB295: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33381C); /* mulss */
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, 0x000CB2B1u); RECOMP_ABI_CALL(0x000C96D0u, sub_000C96D0); /* call 0x000C96D0 */

loc_000CB2B1: ;
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CB2B9u); RECOMP_ABI_CALL(0x000C7CE0u, sub_000C7CE0); /* call 0x000C7CE0 */

loc_000CB2B9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CB2D0
 * Original: 0x000CB2D0 - 0x000CB2DF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB2D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB2D0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CB2DBu); RECOMP_ABI_CALL(0x000CB280u, sub_000CB280); /* call 0x000CB280 */

loc_000CB2DB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CB2E0
 * Original: 0x000CB2E0 - 0x000CB2ED (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB2E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000CB2E9u); RECOMP_ABI_CALL(0x000CB280u, sub_000CB280); /* call 0x000CB280 */

loc_000CB2E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CB2F0
 * Original: 0x000CB2F0 - 0x000CB34C (92 bytes, 28 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB2F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CB2F7u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB2F7: ;
    PUSH32(esp, 0x1610);
    eax = 0x325688;
    PUSH32(esp, 0x000CB306u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB306: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33381C); /* mulss */
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, 0x000CB324u); RECOMP_ABI_CALL(0x000C9710u, sub_000C9710); /* call 0x000C9710 */

loc_000CB324: ;
    eax = MEM32(0x64D40C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CB345; /* jle: less or equal (signed <=) */

loc_000CB32F: ;
    /* nop */

loc_000CB330: ;
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CB338u); RECOMP_ABI_CALL(0x000C7CE0u, sub_000C7CE0); /* call 0x000C7CE0 */

loc_000CB338: ;
    eax = MEM32(0x64D40C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CB330; /* jl: less (signed <) */

loc_000CB345: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CB350
 * Original: 0x000CB350 - 0x000CB35F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB350: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CB35Bu); RECOMP_ABI_CALL(0x000CB2F0u, sub_000CB2F0); /* call 0x000CB2F0 */

loc_000CB35B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CB360
 * Original: 0x000CB360 - 0x000CB36D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB360: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000CB369u); RECOMP_ABI_CALL(0x000CB2F0u, sub_000CB2F0); /* call 0x000CB2F0 */

loc_000CB369: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CB370
 * Original: 0x000CB370 - 0x000CB41F (175 bytes, 48 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB370: ;
    PUSH32(esp, 0x000CB375u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB375: ;
    PUSH32(esp, 0x16A9);
    eax = 0x325688;
    PUSH32(esp, 0x000CB384u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB384: ;
    eax = MEM32(0x64D404);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB3AC; /* jne: not equal / not zero */

loc_000CB391: ;
    PUSH32(esp, 0x324C7C);
    edx = 8;
    PUSH32(esp, 0x000CB3A0u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CB3A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000CB3A8u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CB3A8: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000CB3AC: ;
    edx = MEM32(0x64D404);
    PUSH32(esp, esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    eax = 0x10;
    MEM32(0x64D404) = edx;
    PUSH32(esp, 0x000CB3C5u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CB3C5: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x5F60EC);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = 0x5F60E8;
    _fa = (uint32_t)(MEM32(0x5F60E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F60E8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB3F2; /* jne: not equal / not zero */

loc_000CB3EA: ;
    MEM32(0x5F60E8) = esi;
    goto loc_000CB3FB;

loc_000CB3F2: ;
    edx = MEM32(0x5F60EC);
    MEM32(edx + 4) = esi;

loc_000CB3FB: ;
    eax = MEM32(0x5F60F0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5F60EC) = esi;
    MEM32(0x5F60F0) = eax;
    PUSH32(esp, 0x000CB413u); RECOMP_ABI_CALL(0x000D5660u, sub_000D5660); /* call 0x000D5660 */

loc_000CB413: ;
    MEM32(esi) = eax;
    PUSH32(esp, 0x000CB41Au); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CB41A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CB420
 * Original: 0x000CB420 - 0x000CB4B8 (152 bytes, 55 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB420: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CB427u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB427: ;
    PUSH32(esp, 0x16F8);
    eax = 0x325688;
    PUSH32(esp, 0x000CB436u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB436: ;
    esi = MEM32(0x5F60E8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(0x64D404) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CB4B1; /* je: equal / zero */

loc_000CB44B: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    /* nop */

loc_000CB450: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x000CB457u); RECOMP_ABI_CALL(0x000D5670u, sub_000D5670); /* call 0x000D5670 */

loc_000CB457: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB464; /* je: equal / zero */

loc_000CB45E: ;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;

loc_000CB464: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB471; /* je: equal / zero */

loc_000CB46B: ;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;

loc_000CB471: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB495; /* je: equal / zero */

loc_000CB478: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB487; /* jne: not equal / not zero */

loc_000CB482: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_000CB487: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB495; /* jne: not equal / not zero */

loc_000CB48F: ;
    edx = MEM32(esi + 8);
    MEM32(eax + 4) = edx;

loc_000CB495: ;
    eax = esi;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x000CB4A5u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CB4A5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000CB4B0; /* je: equal / zero */

loc_000CB4AB: ;
    edi = MEM32(edi + 4);
    goto loc_000CB450;

loc_000CB4B0: ;
    POP32(esp, edi);

loc_000CB4B1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CB4C0
 * Original: 0x000CB4C0 - 0x000CB581 (193 bytes, 47 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB4C0: ;
    PUSH32(esp, 0x000CB4C5u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB4C5: ;
    PUSH32(esp, 0x171A);
    eax = 0x325688;
    PUSH32(esp, 0x000CB4D4u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB4D4: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64D414);
    PUSH32(esp, 0x000CB4E5u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CB4E5: ;
    eax = MEM32(0x64D414);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB50D; /* jne: not equal / not zero */

loc_000CB4F1: ;
    PUSH32(esp, 0x171C);
    PUSH32(esp, 0x324C30);
    edx = 0x324C50;
    ecx = 0x325688;
    PUSH32(esp, 0x000CB50Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CB50A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CB50D: ;
    eax = MEM32(0x64D418);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB532; /* jne: not equal / not zero */

loc_000CB516: ;
    PUSH32(esp, 0x171D);
    PUSH32(esp, 0x324BE4);
    edx = 0x324C08;
    ecx = 0x325688;
    PUSH32(esp, 0x000CB52Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CB52F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CB532: ;
    eax = MEM32(0x64D41C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB557; /* jne: not equal / not zero */

loc_000CB53B: ;
    PUSH32(esp, 0x171E);
    PUSH32(esp, 0x324B98);
    edx = 0x324BBC;
    ecx = 0x325688;
    PUSH32(esp, 0x000CB554u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CB554: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CB557: ;
    eax = MEM32(0x64D420);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB57C; /* jne: not equal / not zero */

loc_000CB560: ;
    PUSH32(esp, 0x171F);
    PUSH32(esp, 0x324B44);
    edx = 0x324B6C;
    ecx = 0x325688;
    PUSH32(esp, 0x000CB579u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CB579: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CB57C: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CB590
 * Original: 0x000CB590 - 0x000CB63A (170 bytes, 48 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB590: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CB597u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB597: ;
    PUSH32(esp, 0x1734);
    eax = 0x325688;
    PUSH32(esp, 0x000CB5A6u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB5A6: ;
    eax = MEM32(0x64D408);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB5C6; /* jne: not equal / not zero */

loc_000CB5B4: ;
    MEM32(0x5F6188) = edi;
    MEM32(0x5F618C) = edi;
    MEM32(0x5F6190) = edi;

loc_000CB5C6: ;
    eax = 0x10;
    PUSH32(esp, 0x000CB5D0u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CB5D0: ;
    PUSH32(esp, 0x10);
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CB5DBu); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000CB5DB: ;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 4) = edi;
    eax = MEM32(0x5F618C);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = 0x5F6188;
    eax = MEM32(0x5F6188);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB607; /* jne: not equal / not zero */

loc_000CB5FF: ;
    MEM32(0x5F6188) = esi;
    goto loc_000CB610;

loc_000CB607: ;
    ecx = MEM32(0x5F618C);
    MEM32(ecx + 4) = esi;

loc_000CB610: ;
    ecx = MEM32(0x5F6190);
    eax = MEM32(0x64D408);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5F618C) = esi;
    MEM32(0x5F6190) = ecx;
    MEM32(esi) = edi;
    MEM32(0x64D408) = eax;
    PUSH32(esp, 0x000CB635u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CB635: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CB640
 * Original: 0x000CB640 - 0x000CB71D (221 bytes, 68 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB640: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB66A; /* jne: not equal / not zero */

loc_000CB64E: ;
    PUSH32(esp, 0x1762);
    PUSH32(esp, 0x324B18);
    edx = 0x324B20;
    ecx = 0x325688;
    PUSH32(esp, 0x000CB667u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CB667: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CB66A: ;
    PUSH32(esp, 0x000CB66Fu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB66F: ;
    PUSH32(esp, 0x1764);
    eax = 0x325688;
    PUSH32(esp, 0x000CB67Eu); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB67E: ;
    ebx = MEM32(0x64D40C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB69F; /* jne: not equal / not zero */

loc_000CB68B: ;
    eax = 0x70;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CB697u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CB697: ;
    MEM32(0x64D40C) = edi;
    goto loc_000CB6B0;

loc_000CB69F: ;
    ecx = MEM32(0x64D410);
    eax = ebx + 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    PUSH32(esp, 0x000CB6B0u); RECOMP_ABI_CALL(0x000ED260u, sub_000ED260); /* call 0x000ED260 */

loc_000CB6B0: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    PUSH32(esp, 0x70);
    esi = ecx + eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(0x64D410) = eax;
    PUSH32(esp, 0x000CB6C6u); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000CB6C6: ;
    eax = MEM32(0x64D40C);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D40C) = eax;
    eax = ebp;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = edi;
    MEM32(esi + 0x6C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x50) = 0xFFFFFFFEu;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x5C) = edi;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x34) = edx;
    PUSH32(esp, 0x000CB70Au); RECOMP_ABI_CALL(0x000CAA90u, sub_000CAA90); /* call 0x000CAA90 */

loc_000CB70A: ;
    eax = ebx;
    PUSH32(esp, 0x000CB711u); RECOMP_ABI_CALL(0x000CAB30u, sub_000CAB30); /* call 0x000CAB30 */

loc_000CB711: ;
    PUSH32(esp, 0x000CB716u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CB716: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CB720
 * Original: 0x000CB720 - 0x000CB73E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB720: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CB73D; /* jl: less (signed <) */

loc_000CB724: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x64D40C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x64D40C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CB73D; /* jge: greater or equal (signed >=) */

loc_000CB72C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB73D; /* je: equal / zero */

loc_000CB730: ;
    ecx = MEM32(0x64D410);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    MEM32(eax + ecx + 0x38) = edx;

loc_000CB73D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CB740
 * Original: 0x000CB740 - 0x000CB75E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB740: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CB75D; /* jl: less (signed <) */

loc_000CB744: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x64D40C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x64D40C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CB75D; /* jge: greater or equal (signed >=) */

loc_000CB74C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB75D; /* je: equal / zero */

loc_000CB750: ;
    ecx = MEM32(0x64D410);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    MEM32(eax + ecx + 0x3C) = edx;

loc_000CB75D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CB760
 * Original: 0x000CB760 - 0x000CB775 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB760: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB771; /* je: equal / zero */

loc_000CB764: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333830); /* mulss */
    esp += 4; return; /* ret */

loc_000CB771: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esp += 4; return; /* ret */

}

/**
 * sub_000CB780
 * Original: 0x000CB780 - 0x000CB7F7 (119 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB780(void)
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

loc_000CB780: ;
    PUSH32(esp, 0x000CB785u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB785: ;
    PUSH32(esp, 0x1830);
    eax = 0x325688;
    PUSH32(esp, 0x000CB794u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB794: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333830); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x333E20); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CB7B9; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x333E20)) */

loc_000CB7B1: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000CB7DB; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000CB7B9: ;
    PUSH32(esp, 0x1832);
    PUSH32(esp, 0x324A70);
    edx = 0x324AE0;
    ecx = 0x325688;
    PUSH32(esp, 0x000CB7D2u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CB7D2: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CB7DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB7F2; /* je: equal / zero */

loc_000CB7DF: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(0x33381C); /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    MEM32(esi) = eax;
    PUSH32(esp, 0x000CB7F2u); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_000CB7F2: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CB800
 * Original: 0x000CB800 - 0x000CB843 (67 bytes, 21 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB800: ;
    eax = MEM32(0x64D424);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB842; /* je: equal / zero */

loc_000CB809: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CB80Fu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB80F: ;
    PUSH32(esp, 0x1859);
    eax = 0x325688;
    PUSH32(esp, 0x000CB81Eu); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB81E: ;
    esi = MEM32(0x5F617C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB83C; /* je: equal / zero */

loc_000CB82B: ;
    goto loc_000CB830;

    /* nop */

loc_000CB830: ;
    PUSH32(esp, 0x000CB835u); RECOMP_ABI_CALL(0x000C9490u, sub_000C9490); /* call 0x000C9490 */

loc_000CB835: ;
    esi = MEM32(esi + 0x5C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB830; /* jne: not equal / not zero */

loc_000CB83C: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000CB842: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CB850
 * Original: 0x000CB850 - 0x000CB893 (67 bytes, 21 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB850: ;
    eax = MEM32(0x64D424);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB892; /* je: equal / zero */

loc_000CB859: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CB85Fu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB85F: ;
    PUSH32(esp, 0x187D);
    eax = 0x325688;
    PUSH32(esp, 0x000CB86Eu); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB86E: ;
    esi = MEM32(0x5F617C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB88C; /* je: equal / zero */

loc_000CB87B: ;
    goto loc_000CB880;

    /* nop */

loc_000CB880: ;
    PUSH32(esp, 0x000CB885u); RECOMP_ABI_CALL(0x000C9530u, sub_000C9530); /* call 0x000C9530 */

loc_000CB885: ;
    esi = MEM32(esi + 0x5C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB880; /* jne: not equal / not zero */

loc_000CB88C: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000CB892: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CB8A0
 * Original: 0x000CB8A0 - 0x000CB8ED (77 bytes, 25 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB8A0: ;
    eax = MEM32(0x64D424);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB8EC; /* je: equal / zero */

loc_000CB8A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CB8AFu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB8AF: ;
    PUSH32(esp, 0x18A0);
    eax = 0x325688;
    PUSH32(esp, 0x000CB8BEu); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB8BE: ;
    esi = MEM32(0x5F617C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB8E6; /* je: equal / zero */

loc_000CB8CB: ;
    goto loc_000CB8D0;

    /* nop */

loc_000CB8D0: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB8DF; /* jne: not equal / not zero */

loc_000CB8D5: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB8DF; /* jne: not equal / not zero */

loc_000CB8DA: ;
    PUSH32(esp, 0x000CB8DFu); RECOMP_ABI_CALL(0x000C9490u, sub_000C9490); /* call 0x000C9490 */

loc_000CB8DF: ;
    esi = MEM32(esi + 0x5C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB8D0; /* jne: not equal / not zero */

loc_000CB8E6: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000CB8EC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CB8F0
 * Original: 0x000CB8F0 - 0x000CB93D (77 bytes, 25 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB8F0: ;
    eax = MEM32(0x64D424);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB93C; /* je: equal / zero */

loc_000CB8F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CB8FFu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB8FF: ;
    PUSH32(esp, 0x18C5);
    eax = 0x325688;
    PUSH32(esp, 0x000CB90Eu); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB90E: ;
    esi = MEM32(0x5F617C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB936; /* je: equal / zero */

loc_000CB91B: ;
    goto loc_000CB920;

    /* nop */

loc_000CB920: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB92F; /* jne: not equal / not zero */

loc_000CB925: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB92F; /* jne: not equal / not zero */

loc_000CB92A: ;
    PUSH32(esp, 0x000CB92Fu); RECOMP_ABI_CALL(0x000C9530u, sub_000C9530); /* call 0x000C9530 */

loc_000CB92F: ;
    esi = MEM32(esi + 0x5C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB920; /* jne: not equal / not zero */

loc_000CB936: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000CB93C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CB940
 * Original: 0x000CB940 - 0x000CB988 (72 bytes, 23 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB940: ;
    eax = MEM32(0x64D424);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB987; /* je: equal / zero */

loc_000CB949: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CB94Fu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB94F: ;
    PUSH32(esp, 0x18E9);
    eax = 0x325688;
    PUSH32(esp, 0x000CB95Eu); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB95E: ;
    esi = MEM32(0x5F617C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB981; /* je: equal / zero */

loc_000CB96B: ;
    goto loc_000CB970;

    /* nop */

loc_000CB970: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB97A; /* jne: not equal / not zero */

loc_000CB975: ;
    PUSH32(esp, 0x000CB97Au); RECOMP_ABI_CALL(0x000C9490u, sub_000C9490); /* call 0x000C9490 */

loc_000CB97A: ;
    esi = MEM32(esi + 0x5C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB970; /* jne: not equal / not zero */

loc_000CB981: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000CB987: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CB990
 * Original: 0x000CB990 - 0x000CB9D8 (72 bytes, 23 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB990: ;
    eax = MEM32(0x64D424);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB9D7; /* je: equal / zero */

loc_000CB999: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CB99Fu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB99F: ;
    PUSH32(esp, 0x190D);
    eax = 0x325688;
    PUSH32(esp, 0x000CB9AEu); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB9AE: ;
    esi = MEM32(0x5F617C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB9D1; /* je: equal / zero */

loc_000CB9BB: ;
    goto loc_000CB9C0;

    /* nop */

loc_000CB9C0: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB9CA; /* jne: not equal / not zero */

loc_000CB9C5: ;
    PUSH32(esp, 0x000CB9CAu); RECOMP_ABI_CALL(0x000C9530u, sub_000C9530); /* call 0x000C9530 */

loc_000CB9CA: ;
    esi = MEM32(esi + 0x5C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CB9C0; /* jne: not equal / not zero */

loc_000CB9D1: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000CB9D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CB9E0
 * Original: 0x000CB9E0 - 0x000CBA28 (72 bytes, 23 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CB9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CB9E0: ;
    eax = MEM32(0x64D424);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBA27; /* je: equal / zero */

loc_000CB9E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CB9EFu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CB9EF: ;
    PUSH32(esp, 0x1931);
    eax = 0x325688;
    PUSH32(esp, 0x000CB9FEu); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CB9FE: ;
    esi = MEM32(0x5F617C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBA21; /* je: equal / zero */

loc_000CBA0B: ;
    goto loc_000CBA10;

    /* nop */

loc_000CBA10: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBA1A; /* je: equal / zero */

loc_000CBA15: ;
    PUSH32(esp, 0x000CBA1Au); RECOMP_ABI_CALL(0x000C9490u, sub_000C9490); /* call 0x000C9490 */

loc_000CBA1A: ;
    esi = MEM32(esi + 0x5C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CBA10; /* jne: not equal / not zero */

loc_000CBA21: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000CBA27: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CBA30
 * Original: 0x000CBA30 - 0x000CBA78 (72 bytes, 23 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CBA30: ;
    eax = MEM32(0x64D424);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBA77; /* je: equal / zero */

loc_000CBA39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CBA3Fu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CBA3F: ;
    PUSH32(esp, 0x1956);
    eax = 0x325688;
    PUSH32(esp, 0x000CBA4Eu); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CBA4E: ;
    esi = MEM32(0x5F617C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBA71; /* je: equal / zero */

loc_000CBA5B: ;
    goto loc_000CBA60;

    /* nop */

loc_000CBA60: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBA6A; /* je: equal / zero */

loc_000CBA65: ;
    PUSH32(esp, 0x000CBA6Au); RECOMP_ABI_CALL(0x000C9530u, sub_000C9530); /* call 0x000C9530 */

loc_000CBA6A: ;
    esi = MEM32(esi + 0x5C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CBA60; /* jne: not equal / not zero */

loc_000CBA71: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000CBA77: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CBA80
 * Original: 0x000CBA80 - 0x000CBB03 (131 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBA80(void)
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

loc_000CBA80: ;
    PUSH32(esp, 0x000CBA85u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CBA85: ;
    PUSH32(esp, 0x1C63);
    eax = 0x325688;
    PUSH32(esp, 0x000CBA94u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CBA94: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333830); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x333E20); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CBAB9; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x333E20)) */

loc_000CBAB1: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000CBADB; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000CBAB9: ;
    PUSH32(esp, 0x1C65);
    PUSH32(esp, 0x324A70);
    edx = 0x324AE0;
    ecx = 0x325688;
    PUSH32(esp, 0x000CBAD2u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CBAD2: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CBADB: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(0x33381C); /* mulss */
    ecx = MEM32(esp + 4);
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CBAF6u); RECOMP_ABI_CALL(0x000C7D50u, sub_000C7D50); /* call 0x000C7D50 */

loc_000CBAF6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000CBAFEu); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_000CBAFE: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CBB10
 * Original: 0x000CBB10 - 0x000CBB4E (62 bytes, 18 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBB10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CBB10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CBB16u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CBB16: ;
    PUSH32(esp, 0x1DAB);
    eax = 0x325688;
    PUSH32(esp, 0x000CBB25u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CBB25: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CBB36u); RECOMP_ABI_CALL(0x000C7F10u, sub_000C7F10); /* call 0x000C7F10 */

loc_000CBB36: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x000CBB40u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CBB40: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333830); /* mulss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBB50
 * Original: 0x000CBB50 - 0x000CBBCA (122 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBB50(void)
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

loc_000CBB50: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333830); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x333E20); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CBB6F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x333E20)) */

loc_000CBB67: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000CBB8B; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000CBB6F: ;
    PUSH32(esp, 0x1DF1);
    PUSH32(esp, 0x324A70);
    edx = 0x324AE0;
    ecx = 0x325688;
    PUSH32(esp, 0x000CBB88u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CBB88: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CBB8B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CBB91u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CBB91: ;
    PUSH32(esp, 0x1DF5);
    eax = 0x325688;
    PUSH32(esp, 0x000CBBA0u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CBBA0: ;
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33381C); /* mulss */
    PUSH32(esp, eax);
    ebx = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, 0x000CBBBCu); RECOMP_ABI_CALL(0x000C7CE0u, sub_000C7CE0); /* call 0x000C7CE0 */

loc_000CBBBC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000CBBC4u); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_000CBBC4: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CBBD0
 * Original: 0x000CBBD0 - 0x000CBC09 (57 bytes, 16 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBBD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CBBD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CBBD6u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CBBD6: ;
    PUSH32(esp, 0x1E16);
    eax = 0x325688;
    PUSH32(esp, 0x000CBBE5u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CBBE5: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CBBF1u); RECOMP_ABI_CALL(0x000C7E30u, sub_000C7E30); /* call 0x000C7E30 */

loc_000CBBF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x000CBBFBu); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CBBFB: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333830); /* mulss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBC10
 * Original: 0x000CBC10 - 0x000CBC3A (42 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBC10(void)
{

loc_000CBC10: ;
    xmm0 = XMM_SCALAR(MEMF(0x33381C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x000CBC38u); RECOMP_ABI_CALL(0x000D5CB0u, sub_000D5CB0); /* call 0x000D5CB0 */

loc_000CBC38: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBC40
 * Original: 0x000CBC40 - 0x000CBCA1 (97 bytes, 30 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CBC40: ;
    eax = MEM32(0x64D3FC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CBC6D; /* jne: not equal / not zero */

loc_000CBC4C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CBC71; /* jne: not equal / not zero */

loc_000CBC51: ;
    PUSH32(esp, 0x1FD8);
    PUSH32(esp, 0x324878);
    edx = 0x3249D0;
    ecx = 0x325688;
    PUSH32(esp, 0x000CBC6Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CBC6A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CBC6D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000CBC71: ;
    PUSH32(esp, 0x000CBC76u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CBC76: ;
    PUSH32(esp, 0x1FDC);
    eax = 0x325688;
    PUSH32(esp, 0x000CBC85u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CBC85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x000CBC8Fu); RECOMP_ABI_CALL(0x000C8EB0u, sub_000C8EB0); /* call 0x000C8EB0 */

loc_000CBC8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBC98; /* je: equal / zero */

loc_000CBC93: ;
    esi = 1;

loc_000CBC98: ;
    PUSH32(esp, 0x000CBC9Du); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CBC9D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBCB0
 * Original: 0x000CBCB0 - 0x000CBCC0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBCB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CBCB0: ;
    PUSH32(esp, 0x3249C4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CBCBCu); RECOMP_ABI_CALL(0x000CA800u, sub_000CA800); /* call 0x000CA800 */

loc_000CBCBC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CBCC0
 * Original: 0x000CBCC0 - 0x000CBD83 (195 bytes, 65 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000CBCC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CBCC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x10C) = eax;
    eax = MEM32(0x64D3FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000CBD70; /* jne: not equal / not zero */

loc_000CBCE8: ;
    esi = MEM32(0x5F617C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBD47; /* je: equal / zero */

loc_000CBCF2: ;
    ebx = MEM32(esi + 0x5C);

loc_000CBCF5: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CBD3C; /* jne: not equal / not zero */

loc_000CBCFD: ;
    MEM8(esp + 0x10) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x324940);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000CBD24u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000CBD24: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000CBD33u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CBD33: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000CBD39u); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000CBD39: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CBD3C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CBD47; /* je: equal / zero */

loc_000CBD42: ;
    ebx = MEM32(ebx + 0x5C);
    goto loc_000CBCF5;

loc_000CBD47: ;
    ecx = MEM32(0x64D40C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CBD70; /* jle: less or equal (signed <=) */

loc_000CBD51: ;
    eax = MEM32(0x64D410);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_000CBD60: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CBD6A; /* jne: not equal / not zero */

loc_000CBD64: ;
    MEM32(eax) = 0;

loc_000CBD6A: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000CBD60; /* jne: not equal / not zero */

loc_000CBD70: ;
    ecx = MEM32(esp + 0x114);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000CBD7Cu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CBD7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBD2E
 * Original: 0x000CBD2E - 0x000CBD83 (85 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBD2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CBD2E: ;
    PUSH32(esp, 0x000CBD33u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CBD33: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CBD39u); RECOMP_ABI_CALL(0x000C93A0u, sub_000C93A0); /* call 0x000C93A0 */

loc_000CBD39: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CBD47; /* je: equal / zero */

loc_000CBD42: ;
    ebx = MEM32(ebx + 0x5C);
    g_seh_ebp = ebp; sub_000CBCF5(); return; /* tail jmp 0x000CBCF5 */

loc_000CBD47: ;
    ecx = MEM32(0x64D40C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CBD70; /* jle: less or equal (signed <=) */

loc_000CBD51: ;
    eax = MEM32(0x64D410);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_000CBD60: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CBD6A; /* jne: not equal / not zero */

loc_000CBD64: ;
    MEM32(eax) = 0;

loc_000CBD6A: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000CBD60; /* jne: not equal / not zero */

loc_000CBD70: ;
    ecx = MEM32(esp + 0x114);
    PUSH32(esp, 0x000CBD7Cu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CBD7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBD90
 * Original: 0x000CBD90 - 0x000CBD95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CBD90: ;
    g_seh_ebp = ebp; sub_000D5610(); return; /* tail jmp 0x000D5610 */

}

/**
 * sub_000CBDA0
 * Original: 0x000CBDA0 - 0x000CBDA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CBDA0: ;
    g_seh_ebp = ebp; sub_000D5620(); return; /* tail jmp 0x000D5620 */

}

/**
 * sub_000CBDB0
 * Original: 0x000CBDB0 - 0x000CBDCD (29 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBDB0(void)
{

loc_000CBDB0: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CBDCAu); RECOMP_ABI_CALL(0x002EB9A1u, sub_002EB9A1); /* call 0x002EB9A1 */

loc_000CBDCA: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000CBDD0
 * Original: 0x000CBDD0 - 0x000CBDD5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CBDD0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_000CBDE0
 * Original: 0x000CBDE0 - 0x000CBDFC (28 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBDE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CBDE0: ;
    PUSH32(esp, 0x37);
    PUSH32(esp, 0x324878);
    edx = 0x326F3C;
    ecx = 0x326F14;
    PUSH32(esp, 0x000CBDF6u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CBDF6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CBE00
 * Original: 0x000CBE00 - 0x000CBE21 (33 bytes, 8 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CBE00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CBE00: ;
    PUSH32(esp, 0x91);
    PUSH32(esp, 0x324878);
    edx = 0x326EEC;
    ecx = 0x326EA0;
    PUSH32(esp, 0x000CBE19u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CBE19: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CBE30
 * Original: 0x000CBE30 - 0x000CBE4B (27 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBE30(void)
{

loc_000CBE30: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333830); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333834); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_000CBE50
 * Original: 0x000CBE50 - 0x000CBEA6 (86 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CBE50: ;
    PUSH32(esp, esi);
    eax = 0x1B8;
    PUSH32(esp, 0x000CBE5Bu); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000CBE5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBE91; /* je: equal / zero */

loc_000CBE5F: ;
    edx = eax;
    PUSH32(esp, 0x000CBE66u); RECOMP_ABI_CALL(0x000CC230u, sub_000CC230); /* call 0x000CC230 */

loc_000CBE66: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBE91; /* je: equal / zero */

loc_000CBE6C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x000CBE74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CBE71u); } /* indirect call */
    }

loc_000CBE74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBE84; /* je: equal / zero */

loc_000CBE78: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x000CBE80u); RECOMP_ABI_CALL(0x000CC950u, sub_000CC950); /* call 0x000CC950 */

loc_000CBE80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBE96; /* je: equal / zero */

loc_000CBE84: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CBE8Au); RECOMP_ABI_CALL(0x000CC300u, sub_000CC300); /* call 0x000CC300 */

loc_000CBE8A: ;
    eax = esi;
    PUSH32(esp, 0x000CBE91u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000CBE91: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000CBE96: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = esi;
    MEM32(0x64D430) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBEB0
 * Original: 0x000CBEB0 - 0x000CBF16 (102 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CBEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CBEB0: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    eax = MEM32(edi + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CBEBCu); RECOMP_ABI_CALL(0x00281A66u, sub_00281A66); /* call 0x00281A66 */

loc_000CBEBC: ;
    ecx = MEM32(edi + 0x60);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CBEC7u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000CBEC7: ;
    edx = MEM32(edi + 0x60);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CBED0u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000CBED0: ;
    MEM32(edi + 0x60) = 0;
    PUSH32(esp, 0x000CBEDCu); RECOMP_ABI_CALL(0x000CCD30u, sub_000CCD30); /* call 0x000CCD30 */

loc_000CBEDC: ;
    eax = MEM32(edi + 0x1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBEEB; /* je: equal / zero */

loc_000CBEE6: ;
    PUSH32(esp, 0x000CBEEBu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CBEEB: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBEF7; /* je: equal / zero */

loc_000CBEF2: ;
    PUSH32(esp, 0x000CBEF7u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CBEF7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CBEFDu); RECOMP_ABI_CALL(0x000CC300u, sub_000CC300); /* call 0x000CC300 */

loc_000CBEFD: ;
    eax = edi;
    PUSH32(esp, 0x000CBF04u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000CBF04: ;
    MEM32(esi) = 0;
    MEM32(0x64D430) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CBF20
 * Original: 0x000CBF20 - 0x000CC1A6 (646 bytes, 209 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000CBF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CBF20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    ecx = MEM32(0x326E8C);
    MEM32(esp + 0x144) = eax;
    eax = MEM32(0x326E88);
    MEM32(esp) = eax;
    eax = MEM32(0x326E90);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(0x326E94);
    MEM32(esp + 8) = eax;
    eax = MEM32(0x326E98);
    MEM32(esp + 0xC) = ecx;
    SET_LO16(ecx, MEM16(0x326E9C));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    MEM16(esp + 0x1C) = LO16(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = 0x3A;
    edi = esp + 0x1E;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC18F; /* je: equal / zero */

loc_000CBF8B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC18F; /* je: equal / zero */

loc_000CBF94: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x8007000Eu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000CC03B; /* jg: greater (signed >) */

loc_000CBFA0: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000CC01C; /* je: equal / zero */

loc_000CBFA2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80004001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80004001u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBFFA; /* je: equal / zero */

loc_000CBFAA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80004005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80004005u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CBFDA; /* je: equal / zero */

loc_000CBFB2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80040110u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80040110u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC057; /* jne: not equal / not zero */

loc_000CBFBE: ;
    edi = esp + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CBFC3: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CBFC3; /* jne: not equal / not zero */

loc_000CBFCB: ;
    ecx = 0xA;
    esi = 0x326D80;
    goto loc_000CC0F2;

loc_000CBFDA: ;
    edi = esp + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_000CBFE0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CBFE0; /* jne: not equal / not zero */

loc_000CBFE8: ;
    ecx = 0x10;
    esi = 0x326DE8;
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
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    goto loc_000CC0F6;

loc_000CBFFA: ;
    edi = esp + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_000CC000: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC000; /* jne: not equal / not zero */

loc_000CC008: ;
    ecx = 0xC;
    esi = 0x326C80;
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
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    goto loc_000CC0F6;

loc_000CC01C: ;
    edi = esp + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CC021: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC021; /* jne: not equal / not zero */

loc_000CC029: ;
    ecx = 0x18;
    esi = 0x326CB8;
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
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    goto loc_000CC0F6;

loc_000CC03B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8878001Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x8878001Eu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC0D4; /* je: equal / zero */

loc_000CC047: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88780032u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x88780032u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC0B7; /* je: equal / zero */

loc_000CC04F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88780078u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x88780078u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC09E; /* je: equal / zero */

loc_000CC057: ;
    PUSH32(esp, edx);
    edx = esp + 0x10C;
    PUSH32(esp, 0x326C68);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000CC06Au); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000CC06A: ;
    eax = esp + 0x114;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;

loc_000CC076: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC076; /* jne: not equal / not zero */

loc_000CC07D: ;
    edi = esp + 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CC084: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC084; /* jne: not equal / not zero */

loc_000CC08C: ;
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
    goto loc_000CC0F6;

loc_000CC09E: ;
    edi = esp + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CC0A3: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC0A3; /* jne: not equal / not zero */

loc_000CC0AB: ;
    ecx = 0x17;
    esi = 0x326D20;
    goto loc_000CC0F2;

loc_000CC0B7: ;
    edi = esp + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_000CC0C0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC0C0; /* jne: not equal / not zero */

loc_000CC0C8: ;
    ecx = 0xD;
    esi = 0x326DAC;
    goto loc_000CC0F2;

loc_000CC0D4: ;
    edi = esp + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_000CC0E0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC0E0; /* jne: not equal / not zero */

loc_000CC0E8: ;
    ecx = 0x15;
    esi = 0x326E30;

loc_000CC0F2: ;
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

loc_000CC0F6: ;
    edi = esp + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000CC100;

    /* nop */

loc_000CC100: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC100; /* jne: not equal / not zero */

loc_000CC108: ;
    eax = MEM32(0x326C58);
    ecx = MEM32(0x326C5C);
    edx = MEM32(0x326C60);
    MEM32(edi) = eax;
    SET_LO8(eax, MEM8(0x326C64));
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    MEM8(edi + 0xC) = LO8(eax);
    eax = MEM32(ebp + 8);
    edx = eax;
    edi = edi;

loc_000CC130: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC130; /* jne: not equal / not zero */

loc_000CC137: ;
    edi = esp + 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000CC140: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC140; /* jne: not equal / not zero */

loc_000CC148: ;
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
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000CC164u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CC164: ;
    PUSH32(esp, 0x326C10);
    eax = 0xB8;
    ecx = 0x324878;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000CC178u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CC178: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x14C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000CC189u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CC189: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000CC18F: ;
    ecx = MEM32(esp + 0x14C);
    eax = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000CC1A0u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CC1A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000CC1B0
 * Original: 0x000CC1B0 - 0x000CC22D (125 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC1B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC227; /* je: equal / zero */

loc_000CC1B9: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC1C2u); RECOMP_ABI_CALL(0x000D44B0u, sub_000D44B0); /* call 0x000D44B0 */

loc_000CC1C2: ;
    ecx = MEM32(esi + 0x70);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CC1D0u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000CC1D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC227; /* je: equal / zero */

loc_000CC1D4: ;
    eax = esi;
    PUSH32(esp, 0x000CC1DBu); RECOMP_ABI_CALL(0x000CC7F0u, sub_000CC7F0); /* call 0x000CC7F0 */

loc_000CC1DB: ;
    PUSH32(esp, 0x000CC1E0u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000CC1E0: ;
    edx = MEM32(esi + 0x70);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CC1E9u); RECOMP_ABI_CALL(0x000D45A0u, sub_000D45A0); /* call 0x000D45A0 */

loc_000CC1E9: ;
    eax = MEM32(esi + 0x70);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC1F7u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000CC1F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC227; /* je: equal / zero */

loc_000CC1FB: ;
    PUSH32(esp, 0x000CC200u); RECOMP_ABI_CALL(0x000D9120u, sub_000D9120); /* call 0x000D9120 */

loc_000CC200: ;
    PUSH32(esp, 0x000CC205u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CC205: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000CC20Cu); RECOMP_ABI_CALL(0x00281CC1u, sub_00281CC1); /* call 0x00281CC1 */

loc_000CC20C: ;
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CC215u); RECOMP_ABI_CALL(0x000D44B0u, sub_000D44B0); /* call 0x000D44B0 */

loc_000CC215: ;
    edx = MEM32(esi + 0x70);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CC223u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000CC223: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC1D4; /* jne: not equal / not zero */

loc_000CC227: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CC230
 * Original: 0x000CC230 - 0x000CC2FD (205 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC230: ;
    eax = edx;
    PUSH32(esp, 0x000CC237u); RECOMP_ABI_CALL(0x000D8010u, sub_000D8010); /* call 0x000D8010 */

loc_000CC237: ;
    eax = edx + 0x148;
    MEM32(edx) = 0x3256B8;
    PUSH32(esp, 0x000CC248u); RECOMP_ABI_CALL(0x000D8100u, sub_000D8100); /* call 0x000D8100 */

loc_000CC248: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x50) = eax;
    MEM32(edx + 0x60) = eax;
    MEM32(edx + 0x58) = eax;
    MEM32(edx + 0x1A4) = eax;
    MEM32(edx + 0x2C) = eax;
    MEM32(edx + 0x194) = eax;
    MEM32(edx + 0x198) = eax;
    MEM32(edx + 0x19C) = eax;
    MEM32(edx + 0x1B4) = eax;
    MEM32(edx + 0x70) = eax;
    MEM32(edx + 0x1A0) = eax;
    MEM32(edx + 0x1AC) = eax;
    MEM32(edx + 0x1B0) = eax;
    MEMF(0x64D44C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x333840)); /* movss */
    MEM32(edx + 0x6C) = eax;
    MEM32(edx + 0x48) = eax;
    MEM32(edx + 0x68) = eax;
    MEM32(edx + 0x13C) = eax;
    MEM32(edx + 0x140) = eax;
    MEM32(0x64D438) = eax;
    MEM32(0x64D434) = eax;
    eax = edx;
    MEMF(edx + 0x1A8) = xmm0.f[0]; /* movss */
    MEMF(0x64D448) = xmm1.f[0]; /* movss */
    MEMF(0x64D43C) = xmm0.f[0]; /* movss */
    MEMF(0x64D440) = xmm0.f[0]; /* movss */
    MEMF(0x64D444) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x138) = 1;
    PUSH32(esp, 0x000CC2FCu); RECOMP_ABI_CALL(0x000CE570u, sub_000CE570); /* call 0x000CE570 */

loc_000CC2FC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CC300
 * Original: 0x000CC300 - 0x000CC3A7 (167 bytes, 49 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC300: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296988);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM32(esi) = 0x3256B8;
    MEM32(esp + 0x10) = 0;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC341; /* je: equal / zero */

loc_000CC330: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC336u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000CC336: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC341; /* je: equal / zero */

loc_000CC33A: ;
    MEM32(esi + 0x70) = 0;

loc_000CC341: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC383; /* je: equal / zero */

loc_000CC348: ;
    eax = MEM32(eax + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC383; /* je: equal / zero */

loc_000CC34F: ;
    PUSH32(esp, 0x326BD0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC35Fu); RECOMP_ABI_CALL(0x002EB0BAu, sub_002EB0BA); /* call 0x002EB0BA */

loc_000CC35F: ;
    edx = eax;
    PUSH32(esp, 0x000CC366u); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CC366: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 5 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CC383; /* je: equal / zero */

loc_000CC371: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC37Du); RECOMP_ABI_CALL(0x002EB082u, sub_002EB082); /* call 0x002EB082 */

loc_000CC37D: ;
    MEM32(0x64D434) = MEM32(0x64D434) - 1;
    _fa = (uint32_t)(MEM32(0x64D434)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CC383: ;
    eax = esi + 0x148;
    PUSH32(esp, 0x000CC38Eu); RECOMP_ABI_CALL(0x000D8130u, sub_000D8130); /* call 0x000D8130 */

loc_000CC38E: ;
    eax = esi;
    PUSH32(esp, 0x000CC395u); RECOMP_ABI_CALL(0x000D8020u, sub_000D8020); /* call 0x000D8020 */

loc_000CC395: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CC3B0
 * Original: 0x000CC3B0 - 0x000CC418 (104 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC3B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D45C);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(0x33B53C) = 1;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x000CC3D3u); RECOMP_ABI_CALL(0x002EAF8Bu, sub_002EAF8B); /* call 0x002EAF8B */

loc_000CC3D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CC3F5; /* jge: greater or equal (signed >=) */

loc_000CC3D7: ;
    PUSH32(esp, 0x142);
    PUSH32(esp, 0x324878);
    edx = 0x326B98;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CC3F0u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CC3F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CC3F5: ;
    eax = MEM32(esp);
    edx = eax;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC416; /* jne: not equal / not zero */

loc_000CC405: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CC416; /* jne: not equal / not zero */

loc_000CC40C: ;
    MEM32(0x33B53C) = 3;

loc_000CC416: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CC420
 * Original: 0x000CC420 - 0x000CC4FC (220 bytes, 53 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC420(void)
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

loc_000CC420: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0xBB80 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CC450; /* je: equal / zero */

loc_000CC434: ;
    PUSH32(esp, 0x154);
    PUSH32(esp, 0x326B40);
    edx = 0x326B7C;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CC44Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CC44D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CC450: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000CC458u); RECOMP_ABI_CALL(0x000D8090u, sub_000D8090); /* call 0x000D8090 */

loc_000CC458: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC465; /* je: equal / zero */

loc_000CC45E: ;
    MEM32(esi + 0x58) = 0x5FBE;

loc_000CC465: ;
    eax = MEM32(esi + 0x14);
    fp_push((double)SMEM32(esi + 0x14)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CC475; /* jge: greater or equal (signed >=) */

loc_000CC46F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000CC475: ;
    ecx = ZX16(MEM16(esi + 0x12));
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edx = ZX16(MEM16(esi + 0x10));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333854)); /* fmul dword ptr [0x333854] */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x333850); /* mulss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x33384C)); /* fmul dword ptr [0x33384c] */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x33384C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x333848); /* mulss */
    MEMF(esi + 0x1A8) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333848)); /* fmul dword ptr [0x333848] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333844)); /* fmul dword ptr [0x333844] */
    PUSH32(esp, 0x000CC4ECu); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_000CC4EC: ;
    MEM32(esi + 0x1A0) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CC500
 * Original: 0x000CC500 - 0x000CC556 (86 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC500: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC517; /* je: equal / zero */

loc_000CC50D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000CC517: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = esp + 8;
    eax = edi;
    PUSH32(esp, 0x000CC527u); RECOMP_ABI_CALL(0x000DA300u, sub_000DA300); /* call 0x000DA300 */

loc_000CC527: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000CC533u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CC530u); } /* indirect call */
    }

loc_000CC533: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC542; /* jne: not equal / not zero */

loc_000CC537: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000CC542: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 0x50) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CC560
 * Original: 0x000CC560 - 0x000CC587 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CC560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC560: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC582; /* je: equal / zero */

loc_000CC567: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC582; /* jne: not equal / not zero */

loc_000CC56F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x50) = 0;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000CC582: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CC590
 * Original: 0x000CC590 - 0x000CC5CF (63 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC590: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000CC5A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CC5A0u); } /* indirect call */
    }

loc_000CC5A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC5BE; /* je: equal / zero */

loc_000CC5A7: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000CC5B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CC5B0u); } /* indirect call */
    }

loc_000CC5B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC5C5; /* jne: not equal / not zero */

loc_000CC5B7: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000CC5BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CC5BCu); } /* indirect call */
    }

loc_000CC5BE: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000CC5C5: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CC5D0
 * Original: 0x000CC5D0 - 0x000CC604 (52 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CC5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC5D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC5FF; /* jne: not equal / not zero */

loc_000CC5DB: ;
    SET_LO16(edx, MEM16(eax + 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x10) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC5FF; /* jne: not equal / not zero */

loc_000CC5E5: ;
    SET_LO16(edx, MEM16(eax + 6));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x12)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x12) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC5FF; /* jne: not equal / not zero */

loc_000CC5EF: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC5FF; /* jne: not equal / not zero */

loc_000CC5F7: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000CC5FF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CC610
 * Original: 0x000CC610 - 0x000CC614 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC610(void)
{

loc_000CC610: ;
    eax = MEM32(ecx + 0x58);
    esp += 4; return; /* ret */

}

/**
 * sub_000CC620
 * Original: 0x000CC620 - 0x000CC772 (338 bytes, 99 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CC620: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 4) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_000CC76B; /* jle: less or equal (signed <=) */

loc_000CC636: ;
    PUSH32(esp, edi);
    goto loc_000CC640;

    /* nop */

loc_000CC640: ;
    ecx = MEM32(esi + 0x1A4);
    eax = MEM32(esi + 0x194);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x1680;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x54));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x54)); }
    ecx = MEM32(esi + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    edx = MEM32(ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000CC673u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CC670u); } /* indirect call */
    }

loc_000CC673: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000CC6BE; /* ja: above (unsigned >) */

loc_000CC678: ;
    ecx = ZX8(MEM8(eax + 0xCC780));
    { uint32_t _jt = MEM32(ecx * 4 + 0xCC774); /* switch: 3 entries, 3 targets */
    if (_jt == 0x000CC686u) goto loc_000CC686;
    if (_jt == 0x000CC6BEu) goto loc_000CC6BE;
    if (_jt == 0x000CC6D5u) goto loc_000CC6D5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000CC686: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000CC6B3; /* je: equal / zero */

loc_000CC692: ;
    edx = MEM32(esi + 0x54);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ecx = 0x1680;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    goto loc_000CC6D5;

loc_000CC6B3: ;
    ecx = 0x5A0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_000CC6D5;

loc_000CC6BE: ;
    PUSH32(esp, 0x326C10);
    eax = 0x203;
    ecx = 0x324878;
    PUSH32(esp, 0x000CC6D2u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CC6D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CC6D5: ;
    edx = MEM32(esi + 0x194);
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(0x1680) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1680;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x194) = edx;
    eax = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 4)); }
    eax = MEM32(esi + 0x198);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esi + 0x194) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_000CC70B; /* jbe: below or equal (unsigned <=) */

loc_000CC701: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x19C) = edx;
    goto loc_000CC745;

loc_000CC70B: ;
    if (CMP_NE(_fa, _fb)) goto loc_000CC738; /* jne: not equal / not zero */

loc_000CC70D: ;
    edx = MEM32(esp + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC72D; /* je: equal / zero */

loc_000CC716: ;
    PUSH32(esp, 0x326C10);
    eax = 0x212;
    ecx = 0x326B28;
    PUSH32(esp, 0x000CC72Au); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CC72A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CC72D: ;
    eax = MEM32(esi + 0x48);
    MEM32(esi + 0x19C) = eax;
    goto loc_000CC745;

loc_000CC738: ;
    ecx = MEM32(esi + 0x48);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x19C) = ecx;

loc_000CC745: ;
    edx = MEM32(esi + 0x19C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x1A0) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CC75D; /* jbe: below or equal (unsigned <=) */

loc_000CC753: ;
    MEM32(esi + 0x1B4) = 1;

loc_000CC75D: ;
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CC640; /* jl: less (signed <) */

loc_000CC76A: ;
    POP32(esp, edi);

loc_000CC76B: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CC772
 * Original: 0x000CC772 - 0x000CC790 (30 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC772(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC772: ;
    edi = edi;
    RECOMP_UNIMPL("aad 0xc6", 0x000CC774u); /* TODO: aad 0xc6 */
    SET_LO8(eax, LO8(eax) | 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint32_t _tmp = HI8(edx);
    SET_HI8(edx, LO8(eax));
    SET_LO8(eax, _tmp); }
    SET_LO8(eax, LO8(eax) | 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esi = 0xCC6;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
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
 * sub_000CC790
 * Original: 0x000CC790 - 0x000CC7EF (95 bytes, 28 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC790: ;
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 0x1AC);
    eax = MEM32(esi + 0x1B0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x1A8); /* mulss */
    edi = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x1AC) = ecx;
    if ((_fa == 0)) goto loc_000CC7EC; /* je: equal / zero */

loc_000CC7BB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000CC7D6; /* jg: greater (signed >) */

loc_000CC7BF: ;
    PUSH32(esp, 0x326C10);
    eax = 0x230;
    ecx = 0x326B10;
    PUSH32(esp, 0x000CC7D3u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CC7D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CC7D6: ;
    eax = MEM32(esi + 0x1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CC7EC; /* jne: not equal / not zero */

loc_000CC7E0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CC7E6u); RECOMP_ABI_CALL(0x000CC620u, sub_000CC620); /* call 0x000CC620 */

loc_000CC7E6: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x1B0) = MEM32(esi + 0x1B0) + edi;
    _fa = (uint32_t)(MEM32(esi + 0x1B0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CC7EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CC7F0
 * Original: 0x000CC7F0 - 0x000CC950 (352 bytes, 114 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC7F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x000CC7FDu); RECOMP_ABI_CALL(0x000CC790u, sub_000CC790); /* call 0x000CC790 */

loc_000CC7FD: ;
    eax = MEM32(esi + 0x28);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, 0x326AC0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC818u); RECOMP_ABI_CALL(0x002EB0D6u, sub_002EB0D6); /* call 0x002EB0D6 */

loc_000CC818: ;
    edx = eax;
    PUSH32(esp, 0x000CC81Fu); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CC81F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC947; /* je: equal / zero */

loc_000CC82A: ;
    edx = MEM32(esi + 0x4C);
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC947; /* je: equal / zero */

loc_000CC839: ;
    if (CMP_BE(_fa, _fb)) goto loc_000CC841; /* jbe: below or equal (unsigned <=) */

loc_000CC83B: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    goto loc_000CC848;

loc_000CC841: ;
    ecx = MEM32(esi + 0x48);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CC848: ;
    eax = 0x6C16C16D;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esi + 0x19C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1680);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CC884; /* jbe: below or equal (unsigned <=) */

loc_000CC86A: ;
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x6C16C16D;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CC884u); RECOMP_ABI_CALL(0x000CC620u, sub_000CC620); /* call 0x000CC620 */

loc_000CC884: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC947; /* je: equal / zero */

loc_000CC88E: ;
    eax = MEM32(esi + 0x198);
    ecx = MEM32(esi + 0x1A4);
    edx = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000CC8A9u); RECOMP_ABI_CALL(0x000D7380u, sub_000D7380); /* call 0x000D7380 */

loc_000CC8A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CC942; /* jl: less (signed <) */

loc_000CC8B1: ;
    edx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x198)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x198) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC8D3; /* je: equal / zero */

loc_000CC8BC: ;
    PUSH32(esp, 0x326C10);
    eax = 0x272;
    ecx = 0x326A94;
    PUSH32(esp, 0x000CC8D0u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CC8D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CC8D3: ;
    eax = MEM32(esi + 0x198);
    ecx = MEM32(esi + 0x48);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esi + 0x194);
    MEM32(esi + 0x1AC) = ebx;
    MEM32(esi + 0x1B0) = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esi + 0x198) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_000CC904; /* jbe: below or equal (unsigned <=) */

loc_000CC8FE: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CC910;

loc_000CC904: ;
    if (CMP_NE(_fa, _fb)) goto loc_000CC90E; /* jne: not equal / not zero */

loc_000CC906: ;
    MEM32(esi + 0x19C) = ebx;
    goto loc_000CC916;

loc_000CC90E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000CC910: ;
    MEM32(esi + 0x19C) = eax;

loc_000CC916: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1A0) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000CC92A; /* jae: above or equal (unsigned >=) */

loc_000CC924: ;
    MEM32(esi + 0x1B4) = ebx;

loc_000CC92A: ;
    eax = MEM32(esi + 0x4C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    POP32(esp, edi);
    eax = 1;
    MEM32(esi + 0x4C) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CC942: ;
    PUSH32(esp, 0x000CC947u); RECOMP_ABI_CALL(0x002930BAu, sub_002930BA); /* call 0x002930BA */

loc_000CC947: ;
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
 * sub_000CC950
 * Original: 0x000CC950 - 0x000CCA44 (244 bytes, 81 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CC950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CC950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = ZX16(MEM16(edi + 0x12));
    ecx = ZX16(MEM16(edi + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x54) = eax;
    eax = MEM32(esp + 0x10);
    ebx = edi;
    MEM32(edi + 0x4C) = esi;
    MEM32(edi + 0x194) = esi;
    MEM32(edi + 0x198) = esi;
    MEM32(edi + 0x19C) = esi;
    MEM32(edi + 0x1B4) = esi;
    PUSH32(esp, 0x000CC994u); RECOMP_ABI_CALL(0x000CCA50u, sub_000CCA50); /* call 0x000CCA50 */

loc_000CC994: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC9B0; /* je: equal / zero */

loc_000CC998: ;
    PUSH32(esp, 0x326A74);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CC9A4u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CC9A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000CC9B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CC9BAu); RECOMP_ABI_CALL(0x00281A05u, sub_00281A05); /* call 0x00281A05 */

loc_000CC9BA: ;
    edx = edi + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xCC1B0);
    PUSH32(esp, 0x1F400);
    PUSH32(esp, esi);
    MEM32(edi + 0x70) = eax;
    PUSH32(esp, 0x000CC9D3u); RECOMP_ABI_CALL(0x0027FB7Du, sub_0027FB7D); /* call 0x0027FB7D */

loc_000CC9D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(edi + 0x60) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000CC9F5; /* jne: not equal / not zero */

loc_000CC9DA: ;
    PUSH32(esp, 0x000CC9DFu); RECOMP_ABI_CALL(0x000CCD30u, sub_000CCD30); /* call 0x000CCD30 */

loc_000CC9DF: ;
    edi = MEM32(edi + 0x70);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CC9EC; /* je: equal / zero */

loc_000CC9E6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CC9ECu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000CC9EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000CC9F5: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CC9FDu); RECOMP_ABI_CALL(0x0027F96Eu, sub_0027F96E); /* call 0x0027F96E */

loc_000CC9FD: ;
    eax = MEM32(edi + 0x48);
    PUSH32(esp, 0x000CCA05u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CCA05: ;
    MEM32(edi + 0x1A4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    PUSH32(esp, 0x000CCA14u); RECOMP_ABI_CALL(0x000CE200u, sub_000CE200); /* call 0x000CE200 */

loc_000CCA14: ;
    MEM32(edi + 0x138) = esi;
    PUSH32(esp, 0x000CCA1Fu); RECOMP_ABI_CALL(0x000D6D90u, sub_000D6D90); /* call 0x000D6D90 */

loc_000CCA1F: ;
    MEM32(edi + 0x144) = eax;
    MEM32(0x64D450) = esi;
    MEM32(0x64D454) = esi;
    MEM32(0x64D458) = esi;
    PUSH32(esp, 0x000CCA3Cu); RECOMP_ABI_CALL(0x000CC3B0u, sub_000CC3B0); /* call 0x000CC3B0 */

loc_000CCA3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CCA50
 * Original: 0x000CCA50 - 0x000CCD21 (721 bytes, 232 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CCA50: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x64D45C);
    PUSH32(esp, ebp);
    esi = eax;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000CCA6Du); RECOMP_ABI_CALL(0x002EC9D1u, sub_002EC9D1); /* call 0x002EC9D1 */

loc_000CCA6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CCA7A; /* je: equal / zero */

loc_000CCA71: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CCA7A: ;
    PUSH32(esp, 0x000CCA7Fu); RECOMP_ABI_CALL(0x002EA1B3u, sub_002EA1B3); /* call 0x002EA1B3 */

loc_000CCA7F: ;
    eax = MEM32(ebx + 0x6C);
    ecx = MEM32(0x64D45C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CCA8Fu); RECOMP_ABI_CALL(0x002EAFCEu, sub_002EAFCE); /* call 0x002EAFCE */

loc_000CCA8F: ;
    edx = MEM32(0x64D45C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CCAA1u); RECOMP_ABI_CALL(0x002EC7B2u, sub_002EC7B2); /* call 0x002EC7B2 */

loc_000CCAA1: ;
    PUSH32(esp, 0x12);
    eax = esp + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CCAAEu); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000CCAAE: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000CCAD8; /* je: equal / zero */

loc_000CCAB6: ;
    PUSH32(esp, 0x326C10);
    eax = 0x30F;
    ecx = 0x324878;
    PUSH32(esp, 0x000CCACAu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CCACA: ;
    eax = MEM32(esp + 0x18);
    SET_LO16(esi, MEM16(esp + 0x1C));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CCB1A;

loc_000CCAD8: ;
    SET_LO16(ecx, MEM16(esi + 6));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 4));
    MEM16(esp + 0x1A) = LO16(eax);
    SET_LO16(eax, LO16(eax) >> 3);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    MEM16(esp + 0xE) = LO16(ecx);
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x10) = ecx;
    MEM16(esp + 0xC) = 1;
    MEM16(esp + 0x1C) = LO16(ebp);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xE));
    SET_LO16(esi, LO16(eax));
    eax = ZX16(LO16(esi));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM16(esp + 0x18) = LO16(esi);
    MEM32(esp + 0x14) = eax;

loc_000CCB1A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = ebx + 0x30;
    ecx = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    ecx = eax + eax * 2;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = esp + 0x10;
    MEM32(ebx + 0x3C) = edx;
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = edx;
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x6C16C16D;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1680);
    esi = ZX16(LO16(esi));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    MEM32(edi) = 0x18;
    MEM32(ebx + 0x34) = ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CCB7C; /* je: equal / zero */

loc_000CCB78: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CCB7C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(ebx + 0x38) = ebp;
    MEM32(ebx + 0x48) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_000CCB9D; /* ja: above (unsigned >) */

loc_000CCB86: ;
    PUSH32(esp, 0x326C10);
    eax = 0x32A;
    ecx = 0x326A60;
    PUSH32(esp, 0x000CCB9Au); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CCB9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CCB9D: ;
    _fa = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x2C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CCBB9; /* je: equal / zero */

loc_000CCBA2: ;
    PUSH32(esp, 0x326C10);
    eax = 0x32B;
    ecx = 0x326A44;
    PUSH32(esp, 0x000CCBB6u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CCBB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CCBB9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000CCBC0;

    /* nop */

loc_000CCBC0: ;
    edx = MEM32(0x64D45C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CCBCEu); RECOMP_ABI_CALL(0x002EAFEAu, sub_002EAFEA); /* call 0x002EAFEA */

loc_000CCBCE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CCBC0; /* jle: less or equal (signed <=) */

loc_000CCBD4: ;
    eax = 0x2C;
    PUSH32(esp, 0x000CCBDEu); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000CCBDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CCBE9; /* je: equal / zero */

loc_000CCBE2: ;
    PUSH32(esp, 0x000CCBE7u); RECOMP_ABI_CALL(0x000D72A0u, sub_000D72A0); /* call 0x000D72A0 */

loc_000CCBE7: ;
    goto loc_000CCBEB;

loc_000CCBE9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CCBEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(ebx + 0x28) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000CCC0E; /* jne: not equal / not zero */

loc_000CCBF2: ;
    PUSH32(esp, 0x332);
    PUSH32(esp, 0x326A10);
    edx = 0x326A24;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CCC0Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CCC0B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CCC0E: ;
    eax = MEM32(ebx + 0x28);
    PUSH32(esp, 0x3269A8);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(0x64D45C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CCC27u); RECOMP_ABI_CALL(0x002EC6EBu, sub_002EC6EB); /* call 0x002EC6EB */

loc_000CCC27: ;
    edx = eax;
    PUSH32(esp, 0x000CCC2Eu); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CCC2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CCD04; /* je: equal / zero */

loc_000CCC39: ;
    ecx = MEM32(ebx + 0x28);
    MEM32(ecx + 0x10) = ebp;
    eax = MEM32(ebx + 0x48);
    PUSH32(esp, 0x000CCC47u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CCC47: ;
    ecx = MEM32(ebx + 0x48);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    MEM32(ebx + 0x2C) = edi;
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
    esi = MEM32(ebx + 0x48);
    edx = MEM32(ebx + 0x2C);
    ecx = MEM32(ebx + 0x28);
    PUSH32(esp, 0x000CCC6Du); RECOMP_ABI_CALL(0x000D72F0u, sub_000D72F0); /* call 0x000D72F0 */

loc_000CCC6D: ;
    eax = MEM32(ebx + 0x28);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CCC7Du); RECOMP_ABI_CALL(0x002EB05Eu, sub_002EB05E); /* call 0x002EB05E */

loc_000CCC7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CCCE2; /* jne: not equal / not zero */

loc_000CCC81: ;
    ecx = MEM32(ebx + 0x28);
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, 0x326950);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CCC92u); RECOMP_ABI_CALL(0x000CBE30u, sub_000CBE30); /* call 0x000CBE30 */

loc_000CCC92: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CCC9Cu); RECOMP_ABI_CALL(0x002EB00Au, sub_002EB00A); /* call 0x002EB00A */

loc_000CCC9C: ;
    edx = eax;
    PUSH32(esp, 0x000CCCA3u); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CCCA3: ;
    edx = MEM32(ebx + 0x28);
    eax = MEM32(edx + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x31B);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CCCB7u); RECOMP_ABI_CALL(0x002EB026u, sub_002EB026); /* call 0x002EB026 */

loc_000CCCB7: ;
    eax = MEM32(0x64D434);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = ebp;
    MEM32(0x64D434) = eax;
    PUSH32(esp, 0x000CCCCBu); RECOMP_ABI_CALL(0x000CCEF0u, sub_000CCEF0); /* call 0x000CCEF0 */

loc_000CCCCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CCCD7; /* je: equal / zero */

loc_000CCCCF: ;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;

loc_000CCCD7: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CCCE2: ;
    PUSH32(esp, 0x326C10);
    eax = 0x34C;
    ecx = 0x324878;
    PUSH32(esp, 0x000CCCF6u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CCCF6: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CCD04: ;
    ecx = MEM32(0x64D45C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CCD10u); RECOMP_ABI_CALL(0x002EA182u, sub_002EA182); /* call 0x002EA182 */

loc_000CCD10: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D45C) = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CCD30
 * Original: 0x000CCD30 - 0x000CCDAF (127 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CCD30: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi + 0x144);
    PUSH32(esp, 0x000CCD3Cu); RECOMP_ABI_CALL(0x000D6EA0u, sub_000D6EA0); /* call 0x000D6EA0 */

loc_000CCD3C: ;
    eax = MEM32(edi + 0x28);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CCD48u); RECOMP_ABI_CALL(0x002EB082u, sub_002EB082); /* call 0x002EB082 */

loc_000CCD48: ;
    MEM32(0x64D434) = MEM32(0x64D434) - 1;
    _fa = (uint32_t)(MEM32(0x64D434)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000CCD50: ;
    edx = MEM32(edi + 0x28);
    eax = MEM32(edx + 0x28);
    PUSH32(esp, 0x326BD0);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CCD66u); RECOMP_ABI_CALL(0x002EB0BAu, sub_002EB0BA); /* call 0x002EB0BA */

loc_000CCD66: ;
    edx = eax;
    PUSH32(esp, 0x000CCD6Du); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CCD6D: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 5 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CCD50; /* jne: not equal / not zero */

loc_000CCD78: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CCD8C; /* je: equal / zero */

loc_000CCD80: ;
    PUSH32(esp, 0x000CCD85u); RECOMP_ABI_CALL(0x000D72D0u, sub_000D72D0); /* call 0x000D72D0 */

loc_000CCD85: ;
    eax = esi;
    PUSH32(esp, 0x000CCD8Cu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000CCD8C: ;
    MEM32(edi + 0x28) = 0;
    eax = MEM32(0x64D45C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000CCDAD; /* je: equal / zero */

loc_000CCD9D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CCDA3u); RECOMP_ABI_CALL(0x002EA182u, sub_002EA182); /* call 0x002EA182 */

loc_000CCDA3: ;
    MEM32(0x64D45C) = 0;

loc_000CCDAD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CCDB0
 * Original: 0x000CCDB0 - 0x000CCDC5 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCDB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CCDB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x180);
    esi = 0x3E8;
    PUSH32(esp, 0x000CCDC0u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000CCDC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CCDD0
 * Original: 0x000CCDD0 - 0x000CCDD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCDD0(void)
{

loc_000CCDD0: ;
    eax = 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_000CCDE0
 * Original: 0x000CCDE0 - 0x000CCE09 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCDE0(void)
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

loc_000CCDE0: ;
    eax = MEM32(esp + 4);
    fp_push((double)SMEM32(eax + 0x6C)); /* fild */
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000CCDFC; /* jge: greater or equal (signed >=) */

loc_000CCDF6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000CCDFC: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x33381C)); /* fmul dword ptr [0x33381c] */
    g_seh_ebp = ebp; sub_0028AF78(); return; /* tail jmp 0x0028AF78 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CCE10
 * Original: 0x000CCE10 - 0x000CCE4B (59 bytes, 17 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CCE10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CCE20; /* jne: not equal / not zero */

loc_000CCE14: ;
    PUSH32(esp, 0x3AA);
    edx = 0x326938;
    goto loc_000CCE35;

loc_000CCE20: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CCE2B; /* jne: not equal / not zero */

loc_000CCE26: ;
    SET_LO16(eax, MEM16(eax + 0x32));
    esp += 4; return; /* ret */

loc_000CCE2B: ;
    PUSH32(esp, 0x3B2);
    edx = 0x32691C;

loc_000CCE35: ;
    ecx = 0x326C10;
    PUSH32(esp, 0x324878);
    PUSH32(esp, 0x000CCE44u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CCE44: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CCE50
 * Original: 0x000CCE50 - 0x000CCE54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCE50(void)
{

loc_000CCE50: ;
    eax = MEM32(eax + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_000CCE60
 * Original: 0x000CCE60 - 0x000CCE99 (57 bytes, 17 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CCE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CCE60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CCE70; /* jne: not equal / not zero */

loc_000CCE64: ;
    PUSH32(esp, 0x3C5);
    edx = 0x326938;
    goto loc_000CCE84;

loc_000CCE70: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CCE7A; /* jne: not equal / not zero */

loc_000CCE76: ;
    eax = MEM32(eax + 0x1C);
    esp += 4; return; /* ret */

loc_000CCE7A: ;
    PUSH32(esp, 0x3CD);
    edx = 0x32691C;

loc_000CCE84: ;
    ecx = 0x326C10;
    PUSH32(esp, 0x324878);
    PUSH32(esp, 0x000CCE93u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CCE93: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CCEA0
 * Original: 0x000CCEA0 - 0x000CCEE4 (68 bytes, 23 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CCEA0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CCEC3; /* jne: not equal / not zero */

loc_000CCEA4: ;
    PUSH32(esp, 0x3DB);
    PUSH32(esp, 0x324878);
    edx = 0x3268FC;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CCEBDu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CCEBD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CCEC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000CCEC3: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CCECF; /* jne: not equal / not zero */

loc_000CCECB: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

loc_000CCECF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CCEDE; /* je: equal / zero */

loc_000CCED4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CCEDE; /* je: equal / zero */

loc_000CCED9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CCEC0; /* jne: not equal / not zero */

loc_000CCEDE: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000CCEF0
 * Original: 0x000CCEF0 - 0x000CD0A0 (432 bytes, 137 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CCEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CCEF0: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x110) = eax;
    PUSH32(esp, 0x000CCF07u); RECOMP_ABI_CALL(0x000CEE70u, sub_000CEE70); /* call 0x000CEE70 */

loc_000CCF07: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_000CCF10: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CCF10; /* jne: not equal / not zero */

loc_000CCF1A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x325305;
    esi = esp + 0x18;
    ecx = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_000CCF59; /* jne: not equal / not zero */

loc_000CCF30: ;
    PUSH32(esp, 0x326888);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CCF3Cu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CCF3C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0x80004005u;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x110);
    PUSH32(esp, 0x000CCF52u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CCF52: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CCF59: ;
    edi = esp + 0x18;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000CCF60: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CCF60; /* jne: not equal / not zero */

loc_000CCF68: ;
    ecx = MEM32(0x32687C);
    edx = MEM32(0x326880);
    eax = MEM32(0x326884);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    MEM32(edi) = ecx;
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    ecx = esp + 0x34;
    MEM32(edi + 4) = edx;
    PUSH32(esp, ecx);
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x000CCF9Bu); RECOMP_ABI_CALL(0x002804EAu, sub_002804EA); /* call 0x002804EA */

loc_000CCF9B: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CCFCC; /* jne: not equal / not zero */

loc_000CCFA2: ;
    PUSH32(esp, 0x326838);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CCFAEu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CCFAE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0x80004005u;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x110);
    PUSH32(esp, 0x000CCFC5u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CCFC5: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CCFCC: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CCFD4u); RECOMP_ABI_CALL(0x00281606u, sub_00281606); /* call 0x00281606 */

loc_000CCFD4: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CCFDCu); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000CCFDC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CCFF0u); RECOMP_ABI_CALL(0x00281198u, sub_00281198); /* call 0x00281198 */

loc_000CCFF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD02D; /* jne: not equal / not zero */

loc_000CCFF4: ;
    PUSH32(esp, 0x32680C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CD000u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CD000: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CD009u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000CD009: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CD00Fu); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000CD00F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0x80004005u;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x110);
    PUSH32(esp, 0x000CD026u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CD026: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CD02D: ;
    edx = MEM32(0x64D45C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 1;
    PUSH32(esp, 0x000CD055u); RECOMP_ABI_CALL(0x002EAFA7u, sub_002EAFA7); /* call 0x002EAFA7 */

loc_000CD055: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000CD079; /* jne: not equal / not zero */

loc_000CD05B: ;
    PUSH32(esp, 0x42D);
    PUSH32(esp, 0x3267D8);
    edx = 0x3267E0;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CD074u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CD074: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CD082;

loc_000CD079: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CD07Fu); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000CD07F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CD082: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CD088u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000CD088: ;
    ecx = MEM32(esp + 0x11C);
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000CD099u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CD099: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CD0A0
 * Original: 0x000CD0A0 - 0x000CD405 (869 bytes, 229 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CD0A0: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x9C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000CD131; /* je: equal / zero */

loc_000CD0BC: ;
    if (CMP_LE(_fas, _fbs)) goto loc_000CD109; /* jle: less or equal (signed <=) */

loc_000CD0BE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000CD109; /* jg: greater (signed >) */

loc_000CD0C3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0x1C) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000CD0EB; /* jne: not equal / not zero */

loc_000CD0CF: ;
    PUSH32(esp, 0x45C);
    PUSH32(esp, 0x3266C4);
    edx = 0x3266E0;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CD0E8u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CD0E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CD0EB: ;
    _fa = (uint32_t)(MEM32(esp + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x9C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD180; /* je: equal / zero */

loc_000CD0F8: ;
    PUSH32(esp, 0x45D);
    PUSH32(esp, 0x326678);
    edx = 0x326688;
    goto loc_000CD173;

loc_000CD109: ;
    PUSH32(esp, 0x460);
    PUSH32(esp, 0x324878);
    edx = 0x326640;

loc_000CD118: ;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CD122u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CD122: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CD125: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CD131: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(ebx + 0x78) = ebp;
    MEM32(ebx + 0x7C) = ebp;
    MEM32(esp + 0x1C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000CD15B; /* je: equal / zero */

loc_000CD13F: ;
    PUSH32(esp, 0x456);
    PUSH32(esp, 0x326780);
    edx = 0x32679C;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CD158u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CD158: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CD15B: ;
    _fa = (uint32_t)(MEM32(esp + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x9C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD180; /* jne: not equal / not zero */

loc_000CD164: ;
    PUSH32(esp, 0x457);
    PUSH32(esp, 0x326730);
    edx = 0x326740;

loc_000CD173: ;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CD17Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CD17D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CD180: ;
    PUSH32(esp, 0x20);
    eax = esp + 0x44;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CD18Du); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000CD18D: ;
    edx = MEM32(ebx + 0x2C);
    SET_LO16(ecx, MEM16(ebx + 0x32));
    MEM32(esp + 0x5C) = edx;
    MEM16(esp + 0x5A) = LO16(ecx);
    eax = MEM32(esp + 0x5A);
    eax = eax + eax * 8;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esp + 0x64) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = edx;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    MEM32(esp + 0x34) = edx;
    MEM16(esp + 0x5E) = 0x40;
    MEM16(esp + 0x4C) = 0x69;
    MEM32(esp + 0x54) = eax;
    MEM16(esp + 0x5A) = 4;
    MEM16(esp + 0x5C) = 2;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x24) = 0x18;
    MEM32(esp + 0x2C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000CD220; /* je: equal / zero */

loc_000CD203: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD220; /* jne: not equal / not zero */

loc_000CD209: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD220; /* je: equal / zero */

loc_000CD20E: ;
    MEM32(esp + 0x28) = 0x40010;
    MEM32(esp + 0x18) = 1;
    goto loc_000CD228;

loc_000CD220: ;
    MEM32(esp + 0x28) = 0x40000;

loc_000CD228: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    eax = esp + 0x4C;
    MEM32(esp + 0x30) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000CD256; /* jne: not equal / not zero */

loc_000CD234: ;
    ecx = MEM32(esp + 0x9C);
    MEM32(esp + 0x14) = ecx;

loc_000CD23F: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD274; /* je: equal / zero */

loc_000CD244: ;
    eax = MEM32(ebx + 0x24);
    esi = MEM32(ebx + 0x68);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0xC) = eax;
    goto loc_000CD281;

loc_000CD256: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000CD23F; /* jne: not equal / not zero */

loc_000CD260: ;
    PUSH32(esp, 0x487);
    PUSH32(esp, 0x324878);
    edx = 0x32660C;
    goto loc_000CD118;

loc_000CD274: ;
    edx = MEM32(ebx + 0x68);
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0xC) = edx;
    esi = ebp;

loc_000CD281: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD29F; /* jne: not equal / not zero */

loc_000CD287: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD29F; /* jne: not equal / not zero */

loc_000CD28B: ;
    PUSH32(esp, 0x4C8);
    PUSH32(esp, 0x324878);
    edx = 0x326584;
    goto loc_000CD118;

loc_000CD29F: ;
    eax = 0x2C;
    PUSH32(esp, 0x000CD2A9u); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000CD2A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD2B6; /* je: equal / zero */

loc_000CD2AD: ;
    PUSH32(esp, 0x000CD2B2u); RECOMP_ABI_CALL(0x000D72A0u, sub_000D72A0); /* call 0x000D72A0 */

loc_000CD2B2: ;
    edi = eax;
    goto loc_000CD2B8;

loc_000CD2B6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CD2B8: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x64D45C);
    PUSH32(esp, 0x3265B0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    MEM32(esp + 0x44) = esi;
    esi = edi + 0x28;
    PUSH32(esp, esi);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x40) = ebp;
    PUSH32(esp, 0x000CD2E1u); RECOMP_ABI_CALL(0x002EC6EBu, sub_002EC6EB); /* call 0x002EC6EB */

loc_000CD2E1: ;
    edx = eax;
    PUSH32(esp, 0x000CD2E8u); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CD2E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD125; /* je: equal / zero */

loc_000CD2F3: ;
    _fa = (uint32_t)(MEM32(esp + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xA0), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD2FF; /* jne: not equal / not zero */

loc_000CD2FC: ;
    MEM32(ebx + 0x78) = edi;

loc_000CD2FF: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CD3AF; /* je: equal / zero */

loc_000CD315: ;
    eax = 7;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    edx = esp + 0x64;
    PUSH32(esp, eax);
    MEM32(esp + 0x68) = 6;
    MEM32(esp + 0x6C) = ebp;
    MEM32(esp + 0x70) = 8;
    MEM32(esp + 0x74) = ebp;
    MEM32(esp + 0x7C) = ebp;
    MEM32(esp + 0x80) = 9;
    MEM32(esp + 0x84) = ebp;
    MEM32(esp + 0x88) = 2;
    MEM32(esp + 0x8C) = ebp;
    MEM32(esp + 0x90) = 0xA;
    MEM32(esp + 0x94) = ebp;
    MEM32(esp + 0x98) = 3;
    MEM32(esp + 0x9C) = ebp;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x000CD397u); RECOMP_ABI_CALL(0x002EB026u, sub_002EB026); /* call 0x002EB026 */

loc_000CD397: ;
    edx = MEM32(esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CD3A4u); RECOMP_ABI_CALL(0x002EB908u, sub_002EB908); /* call 0x002EB908 */

loc_000CD3A4: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CD3ADu); RECOMP_ABI_CALL(0x000D7490u, sub_000D7490); /* call 0x000D7490 */

loc_000CD3AD: ;
    goto loc_000CD3C6;

loc_000CD3AF: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x31B);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CD3BCu); RECOMP_ABI_CALL(0x002EB026u, sub_002EB026); /* call 0x002EB026 */

loc_000CD3BC: ;
    edx = MEM32(ebx + 0x14);
    ecx = edi;
    PUSH32(esp, 0x000CD3C6u); RECOMP_ABI_CALL(0x000D7510u, sub_000D7510); /* call 0x000D7510 */

loc_000CD3C6: ;
    esi = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0x000CD3D5u); RECOMP_ABI_CALL(0x000D72F0u, sub_000D72F0); /* call 0x000D72F0 */

loc_000CD3D5: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD3EC; /* je: equal / zero */

loc_000CD3DD: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD3EC; /* je: equal / zero */

loc_000CD3E5: ;
    eax = edi;
    PUSH32(esp, 0x000CD3ECu); RECOMP_ABI_CALL(0x000D7470u, sub_000D7470); /* call 0x000D7470 */

loc_000CD3EC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebx + 0x32)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x32), 1 (16-bit) */
    eax = edi;
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(edi + 0x18) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CD410
 * Original: 0x000CD410 - 0x000CD449 (57 bytes, 18 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CD410: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x78);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD424; /* je: equal / zero */

loc_000CD418: ;
    PUSH32(esp, 0x000CD41Du); RECOMP_ABI_CALL(0x000D72D0u, sub_000D72D0); /* call 0x000D72D0 */

loc_000CD41D: ;
    eax = esi;
    PUSH32(esp, 0x000CD424u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000CD424: ;
    eax = MEM32(edi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000CD448; /* je: equal / zero */

loc_000CD42C: ;
    PUSH32(esp, 0x4E8);
    PUSH32(esp, 0x326528);
    edx = 0x326564;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CD445u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CD445: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CD448: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CD450
 * Original: 0x000CD450 - 0x000CD526 (214 bytes, 84 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CD450: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x6C);
    ebp = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    eax = MEM32(edi + 0x7C);
    if (CMP_NE(_fa, _fb)) goto loc_000CD470; /* jne: not equal / not zero */

loc_000CD465: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD490; /* je: equal / zero */

loc_000CD469: ;
    PUSH32(esp, 0x500);
    goto loc_000CD479;

loc_000CD470: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD490; /* je: equal / zero */

loc_000CD474: ;
    PUSH32(esp, 0x505);

loc_000CD479: ;
    ecx = 0x326C10;
    edx = 0x326564;
    PUSH32(esp, 0x3264E8);
    PUSH32(esp, 0x000CD48Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CD48D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CD490: ;
    ebx = MEM32(edi + 0x78);
    esi = MEM32(esp + 0x70);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0x000CD49Fu); RECOMP_ABI_CALL(0x000CE190u, sub_000CE190); /* call 0x000CE190 */

loc_000CD49F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD4C7; /* je: equal / zero */

loc_000CD4A6: ;
    PUSH32(esp, 2);
    eax = ebx;
    PUSH32(esp, 0);
    ebx = edi;
    PUSH32(esp, 0x000CD4B3u); RECOMP_ABI_CALL(0x000CD0A0u, sub_000CD0A0); /* call 0x000CD0A0 */

loc_000CD4B3: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD4E4; /* jne: not equal / not zero */

loc_000CD4BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CD4C7: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD4E4; /* je: equal / zero */

loc_000CD4CE: ;
    PUSH32(esp, 1);
    eax = ebx;
    PUSH32(esp, 0);
    ebx = edi;
    PUSH32(esp, 0x000CD4DBu); RECOMP_ABI_CALL(0x000CD0A0u, sub_000CD0A0); /* call 0x000CD0A0 */

loc_000CD4DB: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD4BC; /* je: equal / zero */

loc_000CD4E4: ;
    PUSH32(esp, 0x58);
    eax = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CD4F1u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CD4F1: ;
    esi = esp + 0x1C;
    eax = edi;
    PUSH32(esp, 0x000CD4FCu); RECOMP_ABI_CALL(0x000CDB20u, sub_000CDB20); /* call 0x000CDB20 */

loc_000CD4FC: ;
    ecx = MEM32(edi + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0x000CD508u); RECOMP_ABI_CALL(0x000CD530u, sub_000CD530); /* call 0x000CD530 */

loc_000CD508: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD4BC; /* je: equal / zero */

loc_000CD50F: ;
    eax = 8;
    PUSH32(esp, 0x000CD519u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CD519: ;
    MEM32(eax + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CD530
 * Original: 0x000CD530 - 0x000CD67C (332 bytes, 107 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CD530: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000CD674; /* je: equal / zero */

loc_000CD541: ;
    _fa = (uint32_t)(MEM32(0x64D438)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D438), 0x40 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000CD56B; /* jb: below (unsigned <) */

loc_000CD54A: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD56B; /* je: equal / zero */

loc_000CD551: ;
    PUSH32(esp, 0x326498);
    edx = 0x16;
    PUSH32(esp, 0x000CD560u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CD560: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CD56B: ;
    _fa = (uint32_t)(MEM32(0x64D434)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D434), 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000CD591; /* jb: below (unsigned <) */

loc_000CD577: ;
    PUSH32(esp, 0x326448);
    edx = 0x16;
    PUSH32(esp, 0x000CD586u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CD586: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CD589: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CD591: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CD59Cu); RECOMP_ABI_CALL(0x000CD8F0u, sub_000CD8F0); /* call 0x000CD8F0 */

loc_000CD59C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD589; /* je: equal / zero */

loc_000CD5A3: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD626; /* je: equal / zero */

loc_000CD5AA: ;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24), 4 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000CD603; /* je: equal / zero */

loc_000CD5B1: ;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), 0xFFFFFFFFu (32-bit) */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x3C); /* cvtsi2ss */
    xmm0 = XMM_SCALAR(MEMF(0x333830)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD5E9; /* je: equal / zero */

loc_000CD5CE: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x48); /* cvtsi2ss */
    edx = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_000CD610;

loc_000CD5E9: ;
    xmm0 = XMM_SCALAR(MEMF(0x333840)); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_000CD610;

loc_000CD603: ;
    eax = MEM32(0x64D448);
    ecx = MEM32(0x64D44C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_000CD610: ;
    esi = ebx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CD619u); RECOMP_ABI_CALL(0x000D75D0u, sub_000D75D0); /* call 0x000D75D0 */

loc_000CD619: ;
    edx = MEM32(0x64D45C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CD625u); RECOMP_ABI_CALL(0x002EC2E3u, sub_002EC2E3); /* call 0x002EC2E3 */

loc_000CD625: ;
    POP32(esp, edi);

loc_000CD626: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebx + 0x28);
    if (CMP_EQ(_fa, _fb)) goto loc_000CD63A; /* je: equal / zero */

loc_000CD631: ;
    PUSH32(esp, 0x3263F8);
    PUSH32(esp, 3);
    goto loc_000CD641;

loc_000CD63A: ;
    PUSH32(esp, 0x3263BC);
    PUSH32(esp, 2);

loc_000CD641: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CD64Bu); RECOMP_ABI_CALL(0x002EB05Eu, sub_002EB05E); /* call 0x002EB05E */

loc_000CD64B: ;
    edx = eax;
    PUSH32(esp, 0x000CD652u); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CD652: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD674; /* je: equal / zero */

loc_000CD659: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = 1;
    MEM32(ebx + 0x1C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000CD66E; /* je: equal / zero */

loc_000CD668: ;
    MEM32(0x64D438) = MEM32(0x64D438) + 1;
    _fa = (uint32_t)(MEM32(0x64D438)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000CD66E: ;
    MEM32(0x64D434) = MEM32(0x64D434) + 1;
    _fa = (uint32_t)(MEM32(0x64D434)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000CD674: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CD680
 * Original: 0x000CD680 - 0x000CD6ED (109 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CD680: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD6EB; /* je: equal / zero */

loc_000CD689: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD6EA; /* je: equal / zero */

loc_000CD690: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 0x326398);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CD69Eu); RECOMP_ABI_CALL(0x002EB082u, sub_002EB082); /* call 0x002EB082 */

loc_000CD69E: ;
    edx = eax;
    PUSH32(esp, 0x000CD6A5u); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CD6A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD6EA; /* je: equal / zero */

loc_000CD6AC: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000CD6C0; /* je: equal / zero */

loc_000CD6BA: ;
    MEM32(0x64D438) = MEM32(0x64D438) - 1;
    _fa = (uint32_t)(MEM32(0x64D438)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CD6C0: ;
    esi = MEM32(0x64D434);
    ecx = MEM32(edi);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    MEM32(0x64D434) = esi;
    PUSH32(esp, 0x000CD6D6u); RECOMP_ABI_CALL(0x000CE000u, sub_000CE000); /* call 0x000CE000 */

loc_000CD6D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD6E1; /* je: equal / zero */

loc_000CD6DA: ;
    eax = ecx;
    PUSH32(esp, 0x000CD6E1u); RECOMP_ABI_CALL(0x000CE010u, sub_000CE010); /* call 0x000CE010 */

loc_000CD6E1: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

loc_000CD6EA: ;
    POP32(esp, esi);

loc_000CD6EB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CD6F0
 * Original: 0x000CD6F0 - 0x000CD720 (48 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CD6F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD71F; /* je: equal / zero */

loc_000CD6F8: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD717; /* je: equal / zero */

loc_000CD6FF: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 0x326398);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CD70Du); RECOMP_ABI_CALL(0x002EB082u, sub_002EB082); /* call 0x002EB082 */

loc_000CD70D: ;
    edx = eax;
    PUSH32(esp, 0x000CD714u); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CD714: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CD717: ;
    MEM32(esi + 0x20) = 1;
    POP32(esp, esi);

loc_000CD71F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CD720
 * Original: 0x000CD720 - 0x000CD769 (73 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CD720: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD768; /* je: equal / zero */

loc_000CD728: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD760; /* je: equal / zero */

loc_000CD72F: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esi + 0x28);
    if (CMP_EQ(_fa, _fb)) goto loc_000CD745; /* je: equal / zero */

loc_000CD73C: ;
    PUSH32(esp, 0x326360);
    PUSH32(esp, 1);
    goto loc_000CD74C;

loc_000CD745: ;
    PUSH32(esp, 0x326334);
    PUSH32(esp, 0);

loc_000CD74C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CD756u); RECOMP_ABI_CALL(0x002EB05Eu, sub_002EB05E); /* call 0x002EB05E */

loc_000CD756: ;
    edx = eax;
    PUSH32(esp, 0x000CD75Du); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CD75D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CD760: ;
    MEM32(esi + 0x20) = 0;
    POP32(esp, esi);

loc_000CD768: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CD770
 * Original: 0x000CD770 - 0x000CD7E1 (113 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD770(void)
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

loc_000CD770: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CD7DA; /* je: equal / zero */

loc_000CD786: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD7DA; /* je: equal / zero */

loc_000CD78C: ;
    eax = MEM32(eax + 0x28);
    PUSH32(esp, 0x3262E8);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CD7A4u); RECOMP_ABI_CALL(0x002EB0D6u, sub_002EB0D6); /* call 0x002EB0D6 */

loc_000CD7A4: ;
    edx = eax;
    PUSH32(esp, 0x000CD7ABu); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CD7AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD7DA; /* je: equal / zero */

loc_000CD7B2: ;
    eax = MEM32(esp + 4);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CD7C4; /* jge: greater or equal (signed >=) */

loc_000CD7BE: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000CD7C4: ;
    ecx = MEM32(esi + 4);
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(ecx + 0x64)); /* fidiv dword ptr [ecx + 0x64] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x33381C)); /* fmul dword ptr [0x33381c] */
    PUSH32(esp, 0x000CD7D5u); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_000CD7D5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CD7DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
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
 * sub_000CD7F0
 * Original: 0x000CD7F0 - 0x000CD888 (152 bytes, 44 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD7F0(void)
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

loc_000CD7F0: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(esp + 0x6C);
    fp_push((double)SMEM32(eax)); /* fild */
    MEM32(esp + 0x6C) = ecx;
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333830)); /* fmul dword ptr [0x333830] */
    fp_push((double)SMEM32(esp + 0x70)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000CD81B; /* jge: greater or equal (signed >=) */

loc_000CD815: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000CD81B: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    PUSH32(esp, 0x000CD822u); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_000CD822: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EDEF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2EDEF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000CD834; /* ja: above (unsigned >) */

loc_000CD82C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xBC (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000CD86C; /* jae: above or equal (unsigned >=) */

loc_000CD834: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x70) = esi;
    fp_push((double)SMEM32(esp + 0x70)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000CD846; /* jge: greater or equal (signed >=) */

loc_000CD840: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000CD846: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    edx = esp + 0xC;
    PUSH32(esp, 0x3262B8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CD85Bu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000CD85B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    edx = 0x1C;
    PUSH32(esp, 0x000CD86Cu); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000CD86C: ;
    eax = MEM32(esp + 0x74);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CD87Au); RECOMP_ABI_CALL(0x002EB8ECu, sub_002EB8EC); /* call 0x002EB8EC */

loc_000CD87A: ;
    ecx = MEM32(esp + 0x68);
    POP32(esp, esi);
    PUSH32(esp, 0x000CD884u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CD884: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CD890
 * Original: 0x000CD890 - 0x000CD8E6 (86 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CD890: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x60);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD8DF; /* je: equal / zero */

loc_000CD89C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CD8A2u); RECOMP_ABI_CALL(0x000CDBE0u, sub_000CDBE0); /* call 0x000CDBE0 */

loc_000CD8A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CD8DF; /* je: equal / zero */

loc_000CD8A9: ;
    eax = MEM32(esp + 0x64);
    PUSH32(esp, esi);
    PUSH32(esp, 0x58);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CD8BBu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CD8BB: ;
    eax = MEM32(edi + 4);
    esi = esp + 0x14;
    PUSH32(esp, 0x000CD8C7u); RECOMP_ABI_CALL(0x000CDB20u, sub_000CDB20); /* call 0x000CDB20 */

loc_000CD8C7: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 0x2C);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CD8D6u); RECOMP_ABI_CALL(0x000CD8F0u, sub_000CD8F0); /* call 0x000CD8F0 */

loc_000CD8D6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CD8DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CD8F0
 * Original: 0x000CD8F0 - 0x000CDB14 (548 bytes, 163 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CD8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CD8F0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDAF1; /* je: equal / zero */

loc_000CD900: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CD913; /* jne: not equal / not zero */

loc_000CD904: ;
    PUSH32(esp, 0x657);
    edx = 0x32628C;
    goto loc_000CDAFB;

loc_000CD913: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CD91Fu); RECOMP_ABI_CALL(0x000CD7F0u, sub_000CD7F0); /* call 0x000CD7F0 */

loc_000CD91F: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDAC7; /* je: equal / zero */

loc_000CD92D: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CD937u); RECOMP_ABI_CALL(0x000CBE30u, sub_000CBE30); /* call 0x000CBE30 */

loc_000CD937: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x10);
    ebx = MEM32(0x64D464);
    edi = MEM32(0x64D468);
    MEM32(esp + 0x28) = eax;
    _fb = (uint32_t)(MEM32(0x64D460)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(0x64D460);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x14);
    MEM32(esp + 0x14) = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000CD96Fu); RECOMP_ABI_CALL(0x000DA340u, sub_000DA340); /* call 0x000DA340 */

loc_000CD96F: ;
    edi = eax;
    ebx = esi + 0x3C;
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0x000CD97Du); RECOMP_ABI_CALL(0x000D6560u, sub_000D6560); /* call 0x000D6560 */

loc_000CD97D: ;
    PUSH32(esp, 0x10);
    ecx = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000CD98Eu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CD98E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x28) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    ecx = edi;
    PUSH32(esp, 0x000CD9A7u); RECOMP_ABI_CALL(0x000D6560u, sub_000D6560); /* call 0x000D6560 */

loc_000CD9A7: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    if ((_fas >= 0)) goto loc_000CD9C3; /* jns: not sign (positive) */

loc_000CD9B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CD9B6u); RECOMP_ABI_CALL(0x000CBE30u, sub_000CBE30); /* call 0x000CBE30 */

loc_000CD9B6: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = ecx;

loc_000CD9C3: ;
    ecx = MEM32(esp + 0x20);
    eax = 0xFFFFD8F0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CD9D4; /* jge: greater or equal (signed >=) */

loc_000CD9D0: ;
    MEM32(esp + 0x20) = eax;

loc_000CD9D4: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CD9E2u); RECOMP_ABI_CALL(0x002EB00Au, sub_002EB00A); /* call 0x002EB00A */

loc_000CD9E2: ;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CDA02; /* je: equal / zero */

loc_000CD9E8: ;
    eax = 0x326230;
    edx = 0x1C;
    PUSH32(esp, 0x000CD9F7u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000CD9F7: ;
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CDA02: ;
    xmm0 = XMM_SCALAR(MEMF(0x333830)); /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x14); /* cvtsi2ss */
    ecx = MEM32(ebp + 0x28);
    PUSH32(esp, 1);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x10); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0xC); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CDA44u); RECOMP_ABI_CALL(0x002EB96Cu, sub_002EB96C); /* call 0x002EB96C */

loc_000CDA44: ;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CDA77; /* je: equal / zero */

loc_000CDA4A: ;
    edx = MEM32(0x64D444);
    eax = MEM32(0x64D440);
    ecx = MEM32(0x64D43C);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 1;
    PUSH32(esp, 0x000CDA6Cu); RECOMP_ABI_CALL(0x000CBDB0u, sub_000CBDB0); /* call 0x000CBDB0 */

loc_000CDA6C: ;
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CDA77: ;
    xmm0 = XMM_SCALAR(MEMF(0x333830)); /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x20); /* cvtsi2ss */
    eax = MEM32(ebp + 0x28);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x18); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0x000CDABCu); RECOMP_ABI_CALL(0x000CBDB0u, sub_000CBDB0); /* call 0x000CBDB0 */

loc_000CDABC: ;
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CDAC7: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CDAD0u); RECOMP_ABI_CALL(0x000CBE30u, sub_000CBE30); /* call 0x000CBE30 */

loc_000CDAD0: ;
    edx = MEM32(ebp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CDADDu); RECOMP_ABI_CALL(0x002EB00Au, sub_002EB00A); /* call 0x002EB00A */

loc_000CDADD: ;
    SET_LO8(ebx, MEM8(esi + 8));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CDAE6u); RECOMP_ABI_CALL(0x000D7420u, sub_000D7420); /* call 0x000D7420 */

loc_000CDAE6: ;
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CDAF1: ;
    PUSH32(esp, 0x69A);
    edx = 0x326208;

loc_000CDAFB: ;
    ecx = 0x326C10;
    PUSH32(esp, 0x324878);
    PUSH32(esp, 0x000CDB0Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CDB0A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CDB20
 * Original: 0x000CDB20 - 0x000CDB94 (116 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CDB20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 0x24);
    eax = ~eax;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CDB74; /* je: equal / zero */

loc_000CDB2F: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CDB74; /* jne: not equal / not zero */

loc_000CDB35: ;
    _fa = (uint32_t)(MEM16(edi + 0x32)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x32), 1 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CDB74; /* jbe: below or equal (unsigned <=) */

loc_000CDB3C: ;
    PUSH32(esp, 0);
    eax = esp + 8;
    ecx = esi;
    PUSH32(esp, 0x000CDB49u); RECOMP_ABI_CALL(0x000D7820u, sub_000D7820); /* call 0x000D7820 */

loc_000CDB49: ;
    ecx = MEM32(esi + 0x24);
    ecx = ~ecx;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    eax = edi;
    PUSH32(esp, 0x000CDB5Du); RECOMP_ABI_CALL(0x000CDBA0u, sub_000CDBA0); /* call 0x000CDBA0 */

loc_000CDB5D: ;
    edx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esp + 0x18));
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edx;
    MEM8(esi + 8) = LO8(eax);
    MEM32(esi) = ecx;

loc_000CDB74: ;
    edx = MEM32(edi + 8);
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_000CDB90; /* jge: greater or equal (signed >=) */

loc_000CDB89: ;
    MEM32(esi + 4) = 0xFFA00000u;

loc_000CDB90: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CDBA0
 * Original: 0x000CDBA0 - 0x000CDBD7 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CDBA0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    edx = 0xFFA00000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CDBB0; /* jge: greater or equal (signed >=) */

loc_000CDBAD: ;
    MEM32(ecx + 4) = edx;

loc_000CDBB0: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDBD5; /* je: equal / zero */

loc_000CDBB8: ;
    esi = MEM32(eax + 4);
    edx = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CDBD5; /* jne: not equal / not zero */

loc_000CDBC4: ;
    _fa = (uint32_t)(MEM16(eax + 0x32)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x32), LO16(edx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CDBD5; /* jbe: below or equal (unsigned <=) */

loc_000CDBCA: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CDBD5; /* jne: not equal / not zero */

loc_000CDBD1: ;
    MEM8(ecx + 0xC) = 0x40;

loc_000CDBD5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CDBE0
 * Original: 0x000CDBE0 - 0x000CDC9C (188 bytes, 76 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CDBE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000CDBF7; /* jne: not equal / not zero */

loc_000CDBF1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CDBF7: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDC0E; /* je: equal / zero */

loc_000CDBFF: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDC0E; /* je: equal / zero */

loc_000CDC04: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CDC0E: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 0x3261D4);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDC21u); RECOMP_ABI_CALL(0x002EB0BAu, sub_002EB0BA); /* call 0x002EB0BA */

loc_000CDC21: ;
    edx = eax;
    PUSH32(esp, 0x000CDC28u); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CDC28: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDC42; /* je: equal / zero */

loc_000CDC2F: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 5 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CDC42; /* je: equal / zero */

loc_000CDC36: ;
    POP32(esp, esi);
    ebx = 1;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CDC42: ;
    PUSH32(esp, 0x3261B4);
    eax = esi;
    PUSH32(esp, 0x000CDC4Eu); RECOMP_ABI_CALL(0x000D7330u, sub_000D7330); /* call 0x000D7330 */

loc_000CDC4E: ;
    edx = eax;
    PUSH32(esp, 0x000CDC55u); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CDC55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x000CDC5Fu); RECOMP_ABI_CALL(0x000D74F0u, sub_000D74F0); /* call 0x000D74F0 */

loc_000CDC5F: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDC6A; /* je: equal / zero */

loc_000CDC64: ;
    MEM32(0x64D438) = MEM32(0x64D438) - 1;
    _fa = (uint32_t)(MEM32(0x64D438)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CDC6A: ;
    eax = MEM32(0x64D434);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = ebx;
    ecx = MEM32(edi);
    MEM32(0x64D434) = eax;
    eax = ecx;
    PUSH32(esp, 0x000CDC81u); RECOMP_ABI_CALL(0x000CE000u, sub_000CE000); /* call 0x000CE000 */

loc_000CDC81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDC8E; /* je: equal / zero */

loc_000CDC85: ;
    eax = ecx;
    PUSH32(esp, 0x000CDC8Cu); RECOMP_ABI_CALL(0x000CE010u, sub_000CE010); /* call 0x000CE010 */

loc_000CDC8C: ;
    MEM32(edi) = ebx;

loc_000CDC8E: ;
    eax = edi;
    PUSH32(esp, 0x000CDC95u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CDC95: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CDCA0
 * Original: 0x000CDCA0 - 0x000CDCD1 (49 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDCA0(void)
{

loc_000CDCA0: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333830); /* mulss */
    eax = MEM32(0x64D45C);
    PUSH32(esp, 0x326174);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDCC6u); RECOMP_ABI_CALL(0x002EC70Fu, sub_002EC70F); /* call 0x002EC70F */

loc_000CDCC6: ;
    edx = eax;
    PUSH32(esp, 0x000CDCCDu); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CDCCD: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CDCE0
 * Original: 0x000CDCE0 - 0x000CDD29 (73 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CDCE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0xFFFFFFFFu (32-bit) */
    xmm1.f[0] = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    xmm0 = XMM_SCALAR(MEMF(0x333830)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x64D44C) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDD16; /* je: equal / zero */

loc_000CDD02: ;
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0xC); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x64D448) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_000CDD16: ;
    xmm0 = XMM_SCALAR(MEMF(0x333840)); /* movss */
    MEMF(0x64D448) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CDD30
 * Original: 0x000CDD30 - 0x000CDD71 (65 bytes, 21 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CDD30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDD5A; /* je: equal / zero */

loc_000CDD3A: ;
    PUSH32(esp, 0x767);
    PUSH32(esp, 0x324878);
    edx = 0x32613C;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CDD53u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CDD53: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000CDD5A: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x000CDD66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CDD63u); } /* indirect call */
    }

loc_000CDD66: ;
    MEM32(esi + 0x68) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CDD80
 * Original: 0x000CDD80 - 0x000CDFD3 (595 bytes, 161 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CDD80: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDEE4; /* je: equal / zero */

loc_000CDD90: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x1C);
    MEM32(0x64D460) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebp);
    MEM32(0x64D464) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    MEM32(0x64D468) = eax;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDDBAu); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000CDDBA: ;
    ebp = eax;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDDC6u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000CDDC6: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x18);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x34) = ebp;
    ebp = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 0x2C);
    ebp = (uint32_t)(-(int32_t)ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x000CDDE8u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000CDDE8: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    MEM32(esp + 0x60) = eax;
    PUSH32(esp, 0x000CDDF3u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000CDDF3: ;
    ebp = eax;
    eax = MEM32(esp + 0x60);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDE06u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000CDE06: ;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDE18u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000CDE18: ;
    xmm0 = XMM_SCALAR(MEMF(0x333830)); /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x18); /* cvtsi2ss */
    ecx = MEM32(esp + 0x70);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x54); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 8); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0xC); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x64D43C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x10); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    POP32(esp, edi);
    MEMF(0x64D440) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x14); /* cvtsi2ss */
    POP32(esp, ebp);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x64D444) = xmm1.f[0]; /* movss */
    POP32(esp, ebx);
    goto loc_000CDF3D;

loc_000CDEE4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(0x64D43C) = xmm0.f[0]; /* movss */
    MEMF(0x64D440) = xmm0.f[0]; /* movss */
    MEMF(0x64D444) = xmm0.f[0]; /* movss */

loc_000CDF3D: ;
    eax = MEM32(0x64D45C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000CDFB1; /* je: equal / zero */

loc_000CDF47: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDF5Eu); RECOMP_ABI_CALL(0x002EC77Du, sub_002EC77D); /* call 0x002EC77D */

loc_000CDF5E: ;
    eax = MEM32(0x64D444);
    ecx = MEM32(0x64D440);
    edx = MEM32(0x64D43C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(0x64D45C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDF7Fu); RECOMP_ABI_CALL(0x002EC7D6u, sub_002EC7D6); /* call 0x002EC7D6 */

loc_000CDF7F: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D45C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CDFABu); RECOMP_ABI_CALL(0x002EC733u, sub_002EC733); /* call 0x002EC733 */

loc_000CDFAB: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000CDFB1: ;
    PUSH32(esp, 0x7CD);
    PUSH32(esp, 0x324878);
    edx = 0x326100;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CDFCAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CDFCA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CDFE0
 * Original: 0x000CDFE0 - 0x000CDFF3 (19 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDFE0(void)
{

loc_000CDFE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x000CDFEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CDFE7u); } /* indirect call */
    }

loc_000CDFEA: ;
    MEM32(esi + 0x68) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CE000
 * Original: 0x000CE000 - 0x000CE004 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE000(void)
{

loc_000CE000: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_000CE010
 * Original: 0x000CE010 - 0x000CE0CF (191 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE010: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE0CC; /* je: equal / zero */

loc_000CE01C: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 0x3261D4);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE02Fu); RECOMP_ABI_CALL(0x002EB0BAu, sub_002EB0BA); /* call 0x002EB0BA */

loc_000CE02F: ;
    edx = eax;
    PUSH32(esp, 0x000CE036u); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CE036: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE0CC; /* je: equal / zero */

loc_000CE041: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 5 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE057; /* jne: not equal / not zero */

loc_000CE048: ;
    PUSH32(esp, 0x000CE04Du); RECOMP_ABI_CALL(0x000D72D0u, sub_000D72D0); /* call 0x000D72D0 */

loc_000CE04D: ;
    eax = esi;
    PUSH32(esp, 0x000CE054u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000CE054: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CE057: ;
    PUSH32(esp, edi);
    eax = 0x10;
    PUSH32(esp, 0x000CE062u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CE062: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE07A; /* jne: not equal / not zero */

loc_000CE068: ;
    PUSH32(esp, 0x3260F0);
    edx = 0xA;
    PUSH32(esp, 0x000CE077u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CE077: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE07A: ;
    MEM32(edi + 8) = 0;
    MEM32(edi + 0xC) = 0;
    MEM32(edi + 4) = 0;
    edx = MEM32(0x64D454);
    MEM32(edi + 8) = edx;
    MEM32(edi + 0xC) = 0x64D450;
    eax = MEM32(0x64D450);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE0B0; /* jne: not equal / not zero */

loc_000CE0A8: ;
    MEM32(0x64D450) = edi;
    goto loc_000CE0B8;

loc_000CE0B0: ;
    eax = MEM32(0x64D454);
    MEM32(eax + 4) = edi;

loc_000CE0B8: ;
    eax = MEM32(0x64D458);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D454) = edi;
    MEM32(0x64D458) = eax;
    MEM32(edi) = esi;
    POP32(esp, edi);

loc_000CE0CC: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CE0D0
 * Original: 0x000CE0D0 - 0x000CE190 (192 bytes, 73 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CE0D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x64D450);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE18C; /* je: equal / zero */

loc_000CE0E3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);

loc_000CE0E8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE17C; /* je: equal / zero */

loc_000CE0F0: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, 0x3260A8);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE105u); RECOMP_ABI_CALL(0x002EB0BAu, sub_002EB0BA); /* call 0x002EB0BA */

loc_000CE105: ;
    edx = eax;
    PUSH32(esp, 0x000CE10Cu); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CE10C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE17C; /* je: equal / zero */

loc_000CE113: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 5 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE17C; /* jne: not equal / not zero */

loc_000CE11A: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE12C; /* je: equal / zero */

loc_000CE120: ;
    PUSH32(esp, 0x000CE125u); RECOMP_ABI_CALL(0x000D72D0u, sub_000D72D0); /* call 0x000D72D0 */

loc_000CE125: ;
    eax = esi;
    PUSH32(esp, 0x000CE12Cu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000CE12C: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(edi) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE13B; /* je: equal / zero */

loc_000CE135: ;
    edx = MEM32(edi + 8);
    MEM32(eax + 8) = edx;

loc_000CE13B: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE148; /* je: equal / zero */

loc_000CE142: ;
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;

loc_000CE148: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE16C; /* je: equal / zero */

loc_000CE14F: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE15E; /* jne: not equal / not zero */

loc_000CE159: ;
    edx = MEM32(edi + 4);
    MEM32(eax) = edx;

loc_000CE15E: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE16C; /* jne: not equal / not zero */

loc_000CE166: ;
    ecx = MEM32(edi + 8);
    MEM32(eax + 4) = ecx;

loc_000CE16C: ;
    eax = edi;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 0xC) = ebp;
    PUSH32(esp, 0x000CE17Cu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CE17C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    edi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE18A; /* je: equal / zero */

loc_000CE182: ;
    ebx = MEM32(ebx + 4);
    goto loc_000CE0E8;

loc_000CE18A: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000CE18C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CE190
 * Original: 0x000CE190 - 0x000CE1AA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CE190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE190: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE1A7; /* je: equal / zero */

loc_000CE197: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0x24));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE1A9; /* jne: not equal / not zero */

loc_000CE1A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CE1A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CE1B0
 * Original: 0x000CE1B0 - 0x000CE1B8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE1B0(void)
{

loc_000CE1B0: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CE1C0
 * Original: 0x000CE1C0 - 0x000CE1FA (58 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE1C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000CE1DA; /* jne: not equal / not zero */

loc_000CE1CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CE1CE: ;
    ecx = edi;
    PUSH32(esp, 0x000CE1D5u); RECOMP_ABI_CALL(0x000CE200u, sub_000CE200); /* call 0x000CE200 */

loc_000CE1D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000CE1DA: ;
    PUSH32(esp, 0x000CE1DFu); RECOMP_ABI_CALL(0x000D60C0u, sub_000D60C0); /* call 0x000D60C0 */

loc_000CE1DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE1CE; /* jne: not equal / not zero */

loc_000CE1E3: ;
    PUSH32(esp, 0x32608C);
    edx = 8;
    PUSH32(esp, 0x000CE1F2u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CE1F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CE200
 * Original: 0x000CE200 - 0x000CE56B (875 bytes, 201 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000CE200: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000CE22E; /* jne: not equal / not zero */

loc_000CE208: ;
    edi = esi + 0xA8;
    PUSH32(esp, 0x30);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE21Au); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CE21A: ;
    eax = MEM32(0x64D45C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE22Bu); RECOMP_ABI_CALL(0x002EC80Bu, sub_002EC80B); /* call 0x002EC80B */

loc_000CE22B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000CE22E: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0xD8) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0xDC) = edx;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    ebx = esi + 0xD8;
    MEM32(esi + 0xE0) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esi + 0xE4) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0xE8) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esi + 0xEC) = edx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 0xF0) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(esi + 0xF4) = edx;
    ecx = MEM32(eax + 0x24);
    MEM32(esi + 0xF8) = ecx;
    edx = MEM32(eax + 0x28);
    MEM32(esi + 0xFC) = edx;
    ecx = MEM32(eax + 0x2C);
    MEM32(esi + 0x100) = ecx;
    edx = MEM32(eax + 0x30);
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    MEM32(esi + 0x104) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000CE2AE; /* jl: less (signed <) */

loc_000CE2AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CE2CA; /* jle: less or equal (signed <=) */

loc_000CE2AE: ;
    PUSH32(esp, 0x8B6);
    PUSH32(esp, 0x326008);
    edx = 0x326070;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE2C7u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE2C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE2CA: ;
    eax = MEM32(esi + 0xDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CE2DB; /* jl: less (signed <) */

loc_000CE2D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CE2F7; /* jle: less or equal (signed <=) */

loc_000CE2DB: ;
    PUSH32(esp, 0x8B7);
    PUSH32(esp, 0x325F78);
    edx = 0x325FE8;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE2F4u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE2F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE2F7: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE319; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000CE308: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xE0); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE335; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0xE0)) */

loc_000CE319: ;
    PUSH32(esp, 0x8B8);
    PUSH32(esp, 0x325EB0);
    edx = 0x325F50;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE332u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE332: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE335: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x333854); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE357; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x333854)) */

loc_000CE346: ;
    xmm0 = XMM_SCALAR(MEMF(0x333930)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xE4); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE373; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0xE4)) */

loc_000CE357: ;
    PUSH32(esp, 0x8B9);
    PUSH32(esp, 0x325E10);
    edx = 0x325E90;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE370u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE370: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE373: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x333854); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE395; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x333854)) */

loc_000CE384: ;
    xmm0 = XMM_SCALAR(MEMF(0x333884)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xE8); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE3B1; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0xE8)) */

loc_000CE395: ;
    PUSH32(esp, 0x8BA);
    PUSH32(esp, 0x325D60);
    edx = 0x325DEC;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE3AEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE3AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE3B1: ;
    eax = MEM32(esi + 0xEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CE3C5; /* jl: less (signed <) */

loc_000CE3BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CE3E1; /* jle: less or equal (signed <=) */

loc_000CE3C5: ;
    PUSH32(esp, 0x8BB);
    PUSH32(esp, 0x325CB8);
    edx = 0x325D3C;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE3DEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE3DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE3E1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE403; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000CE3F2: ;
    xmm0 = XMM_SCALAR(MEMF(0x333920)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xF0); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE41F; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0xF0)) */

loc_000CE403: ;
    PUSH32(esp, 0x8BC);
    PUSH32(esp, 0x325BF0);
    edx = 0x325C8C;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE41Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE41C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE41F: ;
    eax = MEM32(esi + 0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CE433; /* jl: less (signed <) */

loc_000CE42C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CE44F; /* jle: less or equal (signed <=) */

loc_000CE433: ;
    PUSH32(esp, 0x8BD);
    PUSH32(esp, 0x325B60);
    edx = 0x325BD0;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE44Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE44C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE44F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE471; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000CE460: ;
    xmm0 = XMM_SCALAR(MEMF(0x333854)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xF8); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE48D; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0xF8)) */

loc_000CE471: ;
    PUSH32(esp, 0x8BE);
    PUSH32(esp, 0x325AB0);
    edx = 0x325B38;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE48Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE48A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE48D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xFC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE4AF; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000CE49E: ;
    xmm0 = XMM_SCALAR(MEMF(0x333834)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xFC); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE4CB; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0xFC)) */

loc_000CE4AF: ;
    PUSH32(esp, 0x8BF);
    PUSH32(esp, 0x325A10);
    edx = 0x325A90;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE4C8u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE4C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE4CB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x100)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE4ED; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000CE4DC: ;
    xmm0 = XMM_SCALAR(MEMF(0x333834)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x100); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE509; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0x100)) */

loc_000CE4ED: ;
    PUSH32(esp, 0x8C0);
    PUSH32(esp, 0x325978);
    edx = 0x3259F0;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE506u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE506: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE509: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x104)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x333930); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE52B; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x333930)) */

loc_000CE51A: ;
    xmm0 = XMM_SCALAR(MEMF(0x333944)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x104); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE547; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0x104)) */

loc_000CE52B: ;
    PUSH32(esp, 0x8C1);
    PUSH32(esp, 0x3258C8);
    edx = 0x325950;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE544u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE544: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE547: ;
    PUSH32(esp, 0x30);
    edi = esi + 0xA8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE556u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CE556: ;
    eax = MEM32(0x64D45C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE568u); RECOMP_ABI_CALL(0x002EC80Bu, sub_002EC80B); /* call 0x002EC80B */

loc_000CE568: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CE570
 * Original: 0x000CE570 - 0x000CE5DB (107 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE570(void)
{

loc_000CE570: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x33383C)); /* movss */
    ecx = 0xFFFFD8F0u;
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333838)); /* movss */
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x7C) = ecx;
    MEMF(eax + 0x84) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x8C) = ecx;
    MEM32(eax + 0x94) = ecx;
    MEMF(eax + 0xA4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000CE5E0
 * Original: 0x000CE5E0 - 0x000CE612 (50 bytes, 15 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CE5E0: ;
    eax = MEM32(0x64D45C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE5F2; /* je: equal / zero */

loc_000CE5EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE5F2u); RECOMP_ABI_CALL(0x002EC2E3u, sub_002EC2E3); /* call 0x002EC2E3 */

loc_000CE5F2: ;
    ecx = MEM32(esi + 0x148);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + 0x148;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000CE608; /* je: equal / zero */

loc_000CE603: ;
    PUSH32(esp, 0x000CE608u); RECOMP_ABI_CALL(0x000D81B0u, sub_000D81B0); /* call 0x000D81B0 */

loc_000CE608: ;
    PUSH32(esp, 0x000CE60Du); RECOMP_ABI_CALL(0x002EB15Au, sub_002EB15A); /* call 0x002EB15A */

loc_000CE60D: ;
    g_seh_ebp = ebp; sub_000CE0D0(); return; /* tail jmp 0x000CE0D0 */

}

/**
 * sub_000CE620
 * Original: 0x000CE620 - 0x000CE655 (53 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE620: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x000CE639u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CE636u); } /* indirect call */
    }

loc_000CE639: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE643; /* jne: not equal / not zero */

loc_000CE63D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 20; return; /* ret 16 */

loc_000CE643: ;
    ecx = MEM32(0x64D46C);
    eax = ecx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D46C) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000CE660
 * Original: 0x000CE660 - 0x000CE668 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE660(void)
{

loc_000CE660: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CE670
 * Original: 0x000CE670 - 0x000CE6A9 (57 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE670: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000CE692; /* je: equal / zero */

loc_000CE67E: ;
    esi = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000CE689u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CE686u); } /* indirect call */
    }

loc_000CE689: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000CE692: ;
    esi = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000CE6A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CE69Du); } /* indirect call */
    }

loc_000CE6A0: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000CE6B0
 * Original: 0x000CE6B0 - 0x000CE885 (469 bytes, 152 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CE6B0: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x114);
    MEM32(esp + 0x10C) = eax;
    eax = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE6F0; /* je: equal / zero */

loc_000CE6D9: ;
    PUSH32(esp, 0x326C10);
    eax = 0x9F6;
    ecx = 0x3258A8;
    PUSH32(esp, 0x000CE6EDu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CE6ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE6F0: ;
    eax = MEM32(esi);
    ebx = MEM32(esp + 0x11C);
    MEM32(ebx) = eax;
    ecx = MEM32(esi + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(ebx + 8) = edx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE716; /* je: equal / zero */

loc_000CE70E: ;
    eax = MEM32(esi + 0x4C);
    MEM32(ebx + 0x70) = eax;
    goto loc_000CE71D;

loc_000CE716: ;
    MEM32(ebx + 0x70) = 0;

loc_000CE71D: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ebx + 0x10) = ecx;
    edx = MEM32(esi + 0x1C);
    MEM32(ebx + 0x14) = edx;
    eax = MEM32(esi + 0x20);
    MEM32(ebx + 0x18) = eax;
    ecx = MEM32(esi + 0x28);
    MEM32(ebx + 0x20) = ecx;
    edx = MEM32(esi + 0x44);
    MEM32(ebx + 0x2C) = edx;
    SET_LO16(eax, MEM16(esi + 0x48));
    MEM16(ebx + 0x30) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x4A));
    MEM16(ebx + 0x32) = LO16(eax);
    SET_LO16(ecx, MEM16(edi + 0x12));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CE77F; /* jbe: below or equal (unsigned <=) */

loc_000CE754: ;
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    edx = ZX16(LO16(eax));
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x325800);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CE76Eu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000CE76E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    edx = 0x1D;
    PUSH32(esp, 0x000CE77Fu); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000CE77F: ;
    _fa = (uint32_t)(MEM16(ebx + 0x30)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x30), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE78C; /* jne: not equal / not zero */

loc_000CE786: ;
    ebp = ZX16(MEM16(ebx + 0x32));
    goto loc_000CE7A3;

loc_000CE78C: ;
    PUSH32(esp, 0x326C10);
    eax = 0xA18;
    ecx = 0x324878;
    PUSH32(esp, 0x000CE7A0u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CE7A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE7A3: ;
    edx = MEM32(esi + 0x2C);
    MEM32(ebx + 0x1C) = edx;
    eax = MEM32(esi + 0x34);
    MEM32(ebx + 0x24) = eax;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE7C0; /* je: equal / zero */

loc_000CE7B5: ;
    ecx = MEM32(esi + 0x3C);
    _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x68) = ecx;
    goto loc_000CE7C6;

loc_000CE7C0: ;
    edx = MEM32(esi + 0x34);
    MEM32(ebx + 0x68) = edx;

loc_000CE7C6: ;
    edi = MEM32(ebx + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE7FB; /* jne: not equal / not zero */

loc_000CE7CD: ;
    ecx = MEM32(ebx + 0x24);
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x38E38E39;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ebp;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x38E38E39;
    MEM32(ebx + 0x28) = edx;
    edx = MEM32(ebx + 0x68);
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 0x6C) = edx;
    goto loc_000CE816;

loc_000CE7FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x30);
    MEM32(ebx + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE810; /* je: equal / zero */

loc_000CE805: ;
    edx = MEM32(esi + 0x38);
    _fb = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x6C) = edx;
    goto loc_000CE816;

loc_000CE810: ;
    eax = MEM32(esi + 0x30);
    MEM32(ebx + 0x6C) = eax;

loc_000CE816: ;
    ecx = MEM32(esi + 0x24);
    MEM32(ebx + 0x34) = ecx;
    edx = MEM32(esi + 0x40);
    MEM32(ebx + 0x64) = edx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE843; /* je: equal / zero */

loc_000CE829: ;
    PUSH32(esp, 0x25);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    ecx = ebx + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CE838u); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_000CE838: ;
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x60) = edx;
    goto loc_000CE86C;

loc_000CE843: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE85F; /* jne: not equal / not zero */

loc_000CE847: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(MEM32(esp + 0x120)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CE85Au); RECOMP_ABI_CALL(0x000CD0A0u, sub_000CD0A0); /* call 0x000CD0A0 */

loc_000CE85A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CE86C;

loc_000CE85F: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(MEM32(esp + 0x120)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 0x120);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x38) = ecx;

loc_000CE86C: ;
    ecx = MEM32(esp + 0x110);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000CE87Cu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CE87C: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000CE890
 * Original: 0x000CE890 - 0x000CE8C5 (53 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE890: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE8BC; /* je: equal / zero */

loc_000CE8A4: ;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x34), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE8BC; /* jne: not equal / not zero */

loc_000CE8A9: ;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE8B3; /* jne: not equal / not zero */

loc_000CE8AE: ;
    PUSH32(esp, 0x000CE8B3u); RECOMP_ABI_CALL(0x000CD410u, sub_000CD410); /* call 0x000CD410 */

loc_000CE8B3: ;
    MEM32(edi + 0x38) = esi;
    MEM32(edi + 0x78) = esi;
    MEM32(edi + 0x7C) = esi;

loc_000CE8BC: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CE8D0
 * Original: 0x000CE8D0 - 0x000CE8F1 (33 bytes, 8 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CE8D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE8D0: ;
    PUSH32(esp, 0xA8F);
    PUSH32(esp, 0x324878);
    edx = 0x3257D8;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE8E9u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE8E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CE900
 * Original: 0x000CE900 - 0x000CE906 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE900(void)
{

loc_000CE900: ;
    eax = MEM32(0x33B53C);
    esp += 4; return; /* ret */

}

/**
 * sub_000CE910
 * Original: 0x000CE910 - 0x000CE96B (91 bytes, 28 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE910: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE925; /* je: equal / zero */

loc_000CE921: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE941; /* jne: not equal / not zero */

loc_000CE925: ;
    PUSH32(esp, 0xAE3);
    PUSH32(esp, 0x325798);
    edx = 0x3257C4;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE93Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE93E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE941: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(0x33B540) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000CE952u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CE94Fu); } /* indirect call */
    }

loc_000CE952: ;
    ecx = MEM32(0x33B540);
    MEM32(0x5F6194) = eax;
    MEM32(edi) = 0x5F6194;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CE970
 * Original: 0x000CE970 - 0x000CE994 (36 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CE970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE970: ;
    eax = MEM32(0x64D430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE97F; /* je: equal / zero */

loc_000CE979: ;
    eax = MEM32(0x64D45C);
    esp += 4; return; /* ret */

loc_000CE97F: ;
    PUSH32(esp, 0x325730);
    edx = 8;
    PUSH32(esp, 0x000CE98Eu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CE98E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CE9A0
 * Original: 0x000CE9A0 - 0x000CEA7E (222 bytes, 83 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CE9A0: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE9BB; /* jne: not equal / not zero */

loc_000CE9A7: ;
    PUSH32(esp, 0x327430);
    edx = 0x2E;
    PUSH32(esp, 0x000CE9B6u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CE9B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000CE9BB: ;
    eax = esi;
    edx = eax + 1;

loc_000CE9C0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE9C0; /* jne: not equal / not zero */

loc_000CE9C7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + 1;
    PUSH32(esp, 0x000CE9D5u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CE9D5: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE9F1; /* jne: not equal / not zero */

loc_000CE9DB: ;
    PUSH32(esp, 0x3273F0);
    edx = 0x2E;
    PUSH32(esp, 0x000CE9EAu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CE9EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000CE9F1: ;
    edx = ebx;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000CE9F7: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE9F7; /* jne: not equal / not zero */

loc_000CEA01: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CEA4A; /* jle: less or equal (signed <=) */

loc_000CEA07: ;
    SET_LO8(eax, MEM8(ecx + ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEA12; /* je: equal / zero */

loc_000CEA0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEA1A; /* jne: not equal / not zero */

loc_000CEA12: ;
    PUSH32(esp, 0x000CEA17u); RECOMP_ABI_CALL(0x000ED680u, sub_000ED680); /* call 0x000ED680 */

loc_000CEA17: ;
    MEM8(ecx + ebx) = LO8(eax);

loc_000CEA1A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CEA07; /* jl: less (signed <) */

loc_000CEA1F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CEA4A; /* jle: less or equal (signed <=) */

loc_000CEA23: ;
    PUSH32(esp, 0x000CEA28u); RECOMP_ABI_CALL(0x000ED680u, sub_000ED680); /* call 0x000ED680 */

loc_000CEA28: ;
    _fa = (uint32_t)(MEM8(edi + ebx + -1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + ebx + -1), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEA4A; /* je: equal / zero */

loc_000CEA2E: ;
    PUSH32(esp, 0x3273A0);
    edx = 0x2E;
    PUSH32(esp, 0x000CEA3Du); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CEA3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

loc_000CEA4A: ;
    PUSH32(esp, 0x000CEA4Fu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CEA4F: ;
    PUSH32(esp, 0x72);
    eax = 0x32736C;
    PUSH32(esp, 0x000CEA5Bu); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CEA5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x100;
    eax = ebx;
    edi = 0x5F69A0;
    PUSH32(esp, 0x000CEA6Fu); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CEA6F: ;
    PUSH32(esp, 0x000CEA74u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CEA74: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

}

/**
 * sub_000CEA80
 * Original: 0x000CEA80 - 0x000CEC05 (389 bytes, 122 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000CEA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CEA80: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEA9C; /* jne: not equal / not zero */

loc_000CEA89: ;
    POP32(esp, ebp);
    MEM32(esp + 4) = 0x327318;
    edx = 0x2E;
    g_seh_ebp = ebp; sub_000ED010(); return; /* tail jmp 0x000ED010 */

loc_000CEA9C: ;
    eax = 0x5F69A0;
    edx = eax + 1;

loc_000CEAA4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEAA4; /* jne: not equal / not zero */

loc_000CEAAB: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = eax;
    if ((_fa != 0)) goto loc_000CEAC6; /* jne: not equal / not zero */

loc_000CEAB3: ;
    POP32(esp, ebp);
    MEM32(esp + 4) = 0x3272C0;
    edx = 0x2E;
    g_seh_ebp = ebp; sub_000ED010(); return; /* tail jmp 0x000ED010 */

loc_000CEAC6: ;
    eax = ebp;
    edx = eax + 1;
    goto loc_000CEAD0;

    /* nop */

loc_000CEAD0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEAD0; /* jne: not equal / not zero */

loc_000CEAD7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + 1;
    PUSH32(esp, 0x000CEAE5u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CEAE5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEB00; /* jne: not equal / not zero */

loc_000CEAEB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(esp + 4) = 0x327280;
    edx = 0x2E;
    g_seh_ebp = ebp; sub_000ED010(); return; /* tail jmp 0x000ED010 */

loc_000CEB00: ;
    edx = esi;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000CEB06: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEB06; /* jne: not equal / not zero */

loc_000CEB10: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CEB59; /* jle: less or equal (signed <=) */

loc_000CEB16: ;
    SET_LO8(eax, MEM8(ecx + esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEB21; /* je: equal / zero */

loc_000CEB1D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEB29; /* jne: not equal / not zero */

loc_000CEB21: ;
    PUSH32(esp, 0x000CEB26u); RECOMP_ABI_CALL(0x000ED680u, sub_000ED680); /* call 0x000ED680 */

loc_000CEB26: ;
    MEM8(ecx + esi) = LO8(eax);

loc_000CEB29: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CEB16; /* jl: less (signed <) */

loc_000CEB2E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CEB59; /* jle: less or equal (signed <=) */

loc_000CEB32: ;
    PUSH32(esp, 0x000CEB37u); RECOMP_ABI_CALL(0x000ED680u, sub_000ED680); /* call 0x000ED680 */

loc_000CEB37: ;
    _fa = (uint32_t)(MEM8(edi + esi + -1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + esi + -1), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEB59; /* je: equal / zero */

loc_000CEB3D: ;
    PUSH32(esp, 0x327230);
    edx = 0x2E;
    PUSH32(esp, 0x000CEB4Cu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CEB4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

loc_000CEB59: ;
    PUSH32(esp, 0x000CEB5Eu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CEB5E: ;
    PUSH32(esp, 0xCF);
    eax = 0x32736C;
    PUSH32(esp, 0x000CEB6Du); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CEB6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CEB73u); RECOMP_ABI_CALL(0x000CEC10u, sub_000CEC10); /* call 0x000CEC10 */

loc_000CEB73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEBF6; /* jne: not equal / not zero */

loc_000CEB7A: ;
    eax = 0x10C;
    PUSH32(esp, 0x000CEB84u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CEB84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEBF6; /* je: equal / zero */

loc_000CEB88: ;
    edi = eax;
    ecx = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_000CEB90: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(edi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEB90; /* jne: not equal / not zero */

loc_000CEB9A: ;
    MEM32(eax + 0x104) = 0;
    MEM32(eax + 0x108) = 0;
    MEM32(eax + 0x100) = 0;
    ecx = MEM32(0x64D474);
    MEM32(eax + 0x104) = ecx;
    MEM32(eax + 0x108) = 0x64D470;
    ecx = MEM32(0x64D470);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEBDF; /* jne: not equal / not zero */

loc_000CEBD8: ;
    MEM32(0x64D470) = eax;
    goto loc_000CEBEB;

loc_000CEBDF: ;
    edx = MEM32(0x64D474);
    MEM32(edx + 0x100) = eax;

loc_000CEBEB: ;
    MEM32(0x64D474) = eax;
    MEM32(0x64D478) = MEM32(0x64D478) + 1;
    _fa = (uint32_t)(MEM32(0x64D478)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000CEBF6: ;
    PUSH32(esp, 0x000CEBFBu); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CEBFB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

}

/**
 * sub_000CEC10
 * Original: 0x000CEC10 - 0x000CEE6B (603 bytes, 189 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CEC10: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x104) = eax;
    PUSH32(esp, 0x000CEC27u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CEC27: ;
    PUSH32(esp, 0x174);
    eax = 0x32736C;
    PUSH32(esp, 0x000CEC36u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CEC36: ;
    eax = MEM32(esp + 0x110);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x5F69A0;
    PUSH32(esp, 0x000CEC4Au); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CEC4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEC6B; /* jne: not equal / not zero */

loc_000CEC4E: ;
    PUSH32(esp, 0x000CEC53u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CEC53: ;
    eax = 1;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x000CEC64u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CEC64: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CEC6B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CEC73u); RECOMP_ABI_CALL(0x000CF540u, sub_000CF540); /* call 0x000CF540 */

loc_000CEC73: ;
    ebp = eax;
    eax = 0x325305;
    edx = ebp;
    MEM32(esp + 0xC) = ebp;
    PUSH32(esp, 0x000CEC85u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CEC85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CED3D; /* je: equal / zero */

loc_000CEC8D: ;
    esi = 0x100;
    eax = 0x5F69A0;
    edi = esp + 0x10;
    PUSH32(esp, 0x000CECA0u); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CECA0: ;
    eax = edi;
    edx = eax + 1;

loc_000CECA5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CECA5; /* jne: not equal / not zero */

loc_000CECAC: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000CEE3C; /* jae: above or equal (unsigned >=) */

loc_000CECBC: ;
    eax = ebp;
    edx = ebp;

loc_000CECC0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CECC0; /* jne: not equal / not zero */

loc_000CECC7: ;
    edi = esp + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000CECD0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CECD0; /* jne: not equal / not zero */

loc_000CECD8: ;
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
    eax = esp + 0x10;
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
    edx = eax + 1;
    /* nop */

loc_000CECF0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CECF0; /* jne: not equal / not zero */

loc_000CECF7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    PUSH32(esp, 0x000CED00u); RECOMP_ABI_CALL(0x000ED680u, sub_000ED680); /* call 0x000ED680 */

loc_000CED00: ;
    MEM8(esp + ecx + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x118);
    edx = esp + 0x10;
    MEM8(esp + ecx + 0x11) = 0;
    PUSH32(esp, 0x000CED19u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CED19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CED3D; /* jne: not equal / not zero */

loc_000CED1D: ;
    PUSH32(esp, 0x000CED22u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CED22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x000CED36u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CED36: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CED3D: ;
    eax = MEM32(0x64D470);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000CEE1F; /* je: equal / zero */

loc_000CED4C: ;
    /* nop */

loc_000CED50: ;
    eax = MEM32(esp + 0x118);
    edx = ebp;
    PUSH32(esp, 0x000CED5Eu); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CED5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CED1D; /* je: equal / zero */

loc_000CED62: ;
    esi = MEM32(esp + 0xC);
    eax = 0x325305;
    edx = esi;
    PUSH32(esp, 0x000CED72u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CED72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEE11; /* je: equal / zero */

loc_000CED7A: ;
    edx = esp + 0x10;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000CED82: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CED82; /* jne: not equal / not zero */

loc_000CED8C: ;
    eax = esp + 0x10;
    edx = eax + 1;

loc_000CED93: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CED93; /* jne: not equal / not zero */

loc_000CED9A: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000CEE3C; /* jae: above or equal (unsigned >=) */

loc_000CEDAA: ;
    eax = esi;
    edx = esi;
    edi = edi;

loc_000CEDB0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEDB0; /* jne: not equal / not zero */

loc_000CEDB7: ;
    edi = esp + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000CEDC0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEDC0; /* jne: not equal / not zero */

loc_000CEDC8: ;
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
    eax = esp + 0x10;
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
    edx = eax + 1;
    /* nop */

loc_000CEDE0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEDE0; /* jne: not equal / not zero */

loc_000CEDE7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    PUSH32(esp, 0x000CEDF0u); RECOMP_ABI_CALL(0x000ED680u, sub_000ED680); /* call 0x000ED680 */

loc_000CEDF0: ;
    MEM8(esp + ecx + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x118);
    edx = esp + 0x10;
    MEM8(esp + ecx + 0x11) = 0;
    PUSH32(esp, 0x000CEE09u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CEE09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CED1D; /* je: equal / zero */

loc_000CEE11: ;
    ebp = MEM32(ebp + 0x100);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CED50; /* jne: not equal / not zero */

loc_000CEE1F: ;
    PUSH32(esp, 0x000CEE24u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CEE24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x000CEE35u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CEE35: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CEE3C: ;
    PUSH32(esp, 0x000CEE41u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CEE41: ;
    PUSH32(esp, 0x327218);
    edx = 0xA;
    PUSH32(esp, 0x000CEE50u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CEE50: ;
    ecx = MEM32(esp + 0x114);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    PUSH32(esp, 0x000CEE64u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CEE64: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CEE70
 * Original: 0x000CEE70 - 0x000CEE76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEE70(void)
{

loc_000CEE70: ;
    eax = 0x64D480;
    esp += 4; return; /* ret */

}

/**
 * sub_000CEE80
 * Original: 0x000CEE80 - 0x000CEEAF (47 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEE80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CEE80: ;
    PUSH32(esp, 0x000CEE85u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CEE85: ;
    PUSH32(esp, 0x1D9);
    eax = 0x32736C;
    PUSH32(esp, 0x000CEE94u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CEE94: ;
    edx = 0x64D480;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000CEEA0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEEA0; /* jne: not equal / not zero */

loc_000CEEAA: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CEEB0
 * Original: 0x000CEEB0 - 0x000CEF11 (97 bytes, 30 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CEEB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CEEB6u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CEEB6: ;
    PUSH32(esp, 0x1EC);
    eax = 0x32736C;
    PUSH32(esp, 0x000CEEC5u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CEEC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000CEECDu); RECOMP_ABI_CALL(0x000CF540u, sub_000CF540); /* call 0x000CF540 */

loc_000CEECD: ;
    esi = eax;
    eax = ebx;
    edx = esi;
    PUSH32(esp, 0x000CEED8u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CEED8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEEE2; /* jne: not equal / not zero */

loc_000CEEDC: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000CEEE2: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x325305;
    ecx = 1;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    eax = ebx;
    if ((_flags == 0)) goto loc_000CEF01; /* jne: not equal / not zero */

loc_000CEEF6: ;
    PUSH32(esp, 0x000CEEFBu); RECOMP_ABI_CALL(0x000CF4F0u, sub_000CF4F0); /* call 0x000CF4F0 */

loc_000CEEFB: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000CEF01: ;
    PUSH32(esp, 0x000CEF06u); RECOMP_ABI_CALL(0x000CF4F0u, sub_000CF4F0); /* call 0x000CF4F0 */

loc_000CEF06: ;
    PUSH32(esp, 0x000CEF0Bu); RECOMP_ABI_CALL(0x000D0210u, sub_000D0210); /* call 0x000D0210 */

loc_000CEF0B: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CEF20
 * Original: 0x000CEF20 - 0x000CEF98 (120 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CEF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CEF20: ;
    eax = MEM32(0x5F6AA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEF95; /* je: equal / zero */

loc_000CEF29: ;
    eax = MEM32(0x5F6998);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEF95; /* je: equal / zero */

loc_000CEF32: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CEF3Cu); RECOMP_ABI_CALL(0x000CF550u, sub_000CF550); /* call 0x000CF550 */

loc_000CEF3C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEF95; /* je: equal / zero */

loc_000CEF44: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax * 8 + 0x5F6198);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000CEF77; /* jle: less or equal (signed <=) */

loc_000CEF55: ;
    ebp = MEM32(eax * 8 + 0x5F619C);
    edi = ebp;
    edi = edi;

loc_000CEF60: ;
    eax = MEM32(esp + 0x14);
    edx = edi;
    PUSH32(esp, 0x000CEF6Bu); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CEF6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEF81; /* je: equal / zero */

loc_000CEF6F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CEF60; /* jl: less (signed <) */

loc_000CEF77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000CEF81: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    edx = MEM32(esi + ebp + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_000CEF95: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CEF44
 * Original: 0x000CEF44 - 0x000CEF98 (84 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CEF44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CEF44: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax * 8 + 0x5F6198);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000CEF77; /* jle: less or equal (signed <=) */

loc_000CEF55: ;
    ebp = MEM32(eax * 8 + 0x5F619C);
    edi = ebp;
    edi = edi;

loc_000CEF60: ;
    eax = MEM32(esp + 0x14);
    edx = edi;
    PUSH32(esp, 0x000CEF6Bu); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CEF6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEF81; /* je: equal / zero */

loc_000CEF6F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CEF60; /* jl: less (signed <) */

loc_000CEF77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000CEF81: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    edx = MEM32(esi + ebp + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000CEFA0
 * Original: 0x000CEFA0 - 0x000CF14B (427 bytes, 161 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CEFA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CF11E; /* je: equal / zero */

loc_000CEFC0: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF11E; /* je: equal / zero */

loc_000CEFCC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF11E; /* je: equal / zero */

loc_000CEFD4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x100;
    edi = ebx;
    PUSH32(esp, 0x000CEFE2u); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CEFE2: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF0AA; /* je: equal / zero */

loc_000CEFEE: ;
    PUSH32(esp, 0x000CEFF3u); RECOMP_ABI_CALL(0x000CF540u, sub_000CF540); /* call 0x000CF540 */

loc_000CEFF3: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_000CF000: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF000; /* jne: not equal / not zero */

loc_000CF00A: ;
    eax = esp + 0x10;
    edx = eax + 1;

loc_000CF011: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF011; /* jne: not equal / not zero */

loc_000CF018: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    MEM8(esp + ecx + 0x11) = 0;
    PUSH32(esp, 0x000CF026u); RECOMP_ABI_CALL(0x000ED680u, sub_000ED680); /* call 0x000ED680 */

loc_000CF026: ;
    MEM8(esp + ecx + 0x10) = LO8(eax);
    eax = ebx;
    edx = eax + 1;
    /* nop */

loc_000CF030: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF030; /* jne: not equal / not zero */

loc_000CF037: ;
    ecx = esp + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx + 1;

loc_000CF040: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF040; /* jne: not equal / not zero */

loc_000CF047: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CF080; /* jbe: below or equal (unsigned <=) */

loc_000CF051: ;
    PUSH32(esp, 0x2B0);

loc_000CF056: ;
    PUSH32(esp, 0x324878);
    edx = 0x3271C8;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF06Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF06A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x000CF07Cu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF07C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CF080: ;
    eax = esp + 0x10;
    edx = eax;

loc_000CF086: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF086; /* jne: not equal / not zero */

loc_000CF08D: ;
    edi = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CF092: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF092; /* jne: not equal / not zero */

loc_000CF09A: ;
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

loc_000CF0AA: ;
    eax = ebx;
    edx = eax + 1;
    /* nop */

loc_000CF0B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF0B0; /* jne: not equal / not zero */

loc_000CF0B7: ;
    edi = MEM32(esp + 0x28);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = edi;
    esi = eax + 1;

loc_000CF0C4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF0C4; /* jne: not equal / not zero */

loc_000CF0CB: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CF0DF; /* jbe: below or equal (unsigned <=) */

loc_000CF0D5: ;
    PUSH32(esp, 0x2B8);
    goto loc_000CF056;

loc_000CF0DF: ;
    eax = edi;
    edx = edi;

loc_000CF0E3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF0E3; /* jne: not equal / not zero */

loc_000CF0EA: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ebx;
    /* nop */

loc_000CF0F0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF0F0; /* jne: not equal / not zero */

loc_000CF0F8: ;
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
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x000CF11Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF11A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CF11E: ;
    PUSH32(esp, 0x2A1);
    PUSH32(esp, 0x324878);
    edx = 0x3271EC;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF137u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF137: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    PUSH32(esp, 0x000CF147u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF147: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF150
 * Original: 0x000CF150 - 0x000CF3C7 (631 bytes, 181 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF150: ;
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x508;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x514);
    MEM32(esp + 0x50C) = eax;
    eax = MEM32(esp + 0x518);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CF17Cu); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000CF17C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF187; /* je: equal / zero */

loc_000CF183: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF19E; /* jne: not equal / not zero */

loc_000CF187: ;
    PUSH32(esp, 0x32736C);
    eax = 0x2DC;
    ecx = 0x327198;
    PUSH32(esp, 0x000CF19Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CF19B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF19E: ;
    eax = ebx;
    edx = eax + 1;

loc_000CF1A3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF1A3; /* jne: not equal / not zero */

loc_000CF1AA: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_000CF1C9; /* jne: not equal / not zero */

loc_000CF1B2: ;
    PUSH32(esp, 0x32736C);
    eax = 0x2DD;
    ecx = 0x3271FC;
    PUSH32(esp, 0x000CF1C6u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CF1C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF1C9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF1CFu); RECOMP_ABI_CALL(0x000CEF20u, sub_000CEF20); /* call 0x000CEF20 */

loc_000CF1CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000CF358; /* ja: above (unsigned >) */

loc_000CF1DB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xCF3C8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000CF1E2u) goto loc_000CF1E2;
    if (_jt == 0x000CF1E9u) goto loc_000CF1E9;
    if (_jt == 0x000CF255u) goto loc_000CF255;
    if (_jt == 0x000CF374u) goto loc_000CF374;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000CF1E2: ;
    ebp = 1;
    goto loc_000CF1EB;

loc_000CF1E9: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CF1EB: ;
    esi = MEM32(0x64D470);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF22C; /* je: equal / zero */

loc_000CF1F5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000CF206u); RECOMP_ABI_CALL(0x000CEFA0u, sub_000CEFA0); /* call 0x000CEFA0 */

loc_000CF206: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF211: ;
    edi = esp + 0x10;
    PUSH32(esp, 0x000CF21Au); RECOMP_ABI_CALL(0x000ED660u, sub_000ED660); /* call 0x000ED660 */

loc_000CF21A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF352; /* jne: not equal / not zero */

loc_000CF222: ;
    esi = MEM32(esi + 0x100);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF1F5; /* jne: not equal / not zero */

loc_000CF22C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F69A0);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000CF241u); RECOMP_ABI_CALL(0x000CEFA0u, sub_000CEFA0); /* call 0x000CEFA0 */

loc_000CF241: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF24C: ;
    eax = esp + 0x10;
    goto loc_000CF39D;

loc_000CF255: ;
    esi = MEM32(0x64D470);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF29E; /* je: equal / zero */

loc_000CF25F: ;
    /* nop */

loc_000CF260: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000CF272u); RECOMP_ABI_CALL(0x000CEFA0u, sub_000CEFA0); /* call 0x000CEFA0 */

loc_000CF272: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF27D: ;
    edi = esp + 0x10;
    PUSH32(esp, 0x000CF286u); RECOMP_ABI_CALL(0x000ED660u, sub_000ED660); /* call 0x000ED660 */

loc_000CF286: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF352; /* jne: not equal / not zero */

loc_000CF28E: ;
    esi = MEM32(esi + 0x100);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF260; /* jne: not equal / not zero */

loc_000CF298: ;
    esi = MEM32(0x64D470);

loc_000CF29E: ;
    PUSH32(esp, 0x000CF2A3u); RECOMP_ABI_CALL(0x000CF540u, sub_000CF540); /* call 0x000CF540 */

loc_000CF2A3: ;
    ebp = eax;
    eax = 0x325305;
    edx = ebp;
    PUSH32(esp, 0x000CF2B1u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CF2B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF2F4; /* je: equal / zero */

loc_000CF2B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF2F4; /* je: equal / zero */

loc_000CF2B9: ;
    /* nop */

loc_000CF2C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000CF2D2u); RECOMP_ABI_CALL(0x000CEFA0u, sub_000CEFA0); /* call 0x000CEFA0 */

loc_000CF2D2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF2DD: ;
    edi = esp + 0x10;
    PUSH32(esp, 0x000CF2E6u); RECOMP_ABI_CALL(0x000ED660u, sub_000ED660); /* call 0x000ED660 */

loc_000CF2E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF352; /* jne: not equal / not zero */

loc_000CF2EA: ;
    esi = MEM32(esi + 0x100);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF2C0; /* jne: not equal / not zero */

loc_000CF2F4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F69A0);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000CF30Au); RECOMP_ABI_CALL(0x000CEFA0u, sub_000CEFA0); /* call 0x000CEFA0 */

loc_000CF30A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF311: ;
    edi = esp + 0x10;
    PUSH32(esp, 0x000CF31Au); RECOMP_ABI_CALL(0x000ED660u, sub_000ED660); /* call 0x000ED660 */

loc_000CF31A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF352; /* jne: not equal / not zero */

loc_000CF31E: ;
    eax = 0x325305;
    edx = ebp;
    PUSH32(esp, 0x000CF32Au); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CF32A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF32E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F69A0);
    ecx = edi;
    PUSH32(esp, 0x000CF342u); RECOMP_ABI_CALL(0x000CEFA0u, sub_000CEFA0); /* call 0x000CEFA0 */

loc_000CF342: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF349: ;
    PUSH32(esp, 0x000CF34Eu); RECOMP_ABI_CALL(0x000ED660u, sub_000ED660); /* call 0x000ED660 */

loc_000CF34E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF352: ;
    eax = esp + 0x10;
    goto loc_000CF39D;

loc_000CF358: ;
    PUSH32(esp, 0x2FC);
    PUSH32(esp, 0x324878);
    edx = 0x327174;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF371u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF371: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF374: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x114;
    PUSH32(esp, 0x327144);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CF387u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000CF387: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x110;
    edx = 0xC;
    PUSH32(esp, 0x000CF39Bu); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000CF39B: ;
    eax = ebx;

loc_000CF39D: ;
    esi = MEM32(esp + 0x51C);
    edi = MEM32(esp + 0x518);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000CF3B1u); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CF3B1: ;
    ecx = MEM32(esp + 0x510);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x000CF3C0u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF3C0: ;
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x508;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF3E0
 * Original: 0x000CF3E0 - 0x000CF4EF (271 bytes, 82 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF3E0: ;
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x508;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x510);
    PUSH32(esp, esi);
    MEM32(esp + 0x50C) = eax;
    eax = MEM32(esp + 0x518);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CF40Cu); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000CF40C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF417; /* je: equal / zero */

loc_000CF413: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF42E; /* jne: not equal / not zero */

loc_000CF417: ;
    PUSH32(esp, 0x32736C);
    eax = 0x378;
    ecx = 0x327198;
    PUSH32(esp, 0x000CF42Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CF42B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF42E: ;
    eax = ebx;
    edx = eax + 1;

loc_000CF433: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF433; /* jne: not equal / not zero */

loc_000CF43A: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_000CF459; /* jne: not equal / not zero */

loc_000CF442: ;
    PUSH32(esp, 0x32736C);
    eax = 0x379;
    ecx = 0x3271FC;
    PUSH32(esp, 0x000CF456u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CF456: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF459: ;
    esi = 0xFF;
    eax = 0x5F69A0;
    edi = esp + 0x10;
    PUSH32(esp, 0x000CF46Cu); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CF46C: ;
    eax = edi;
    edx = eax + 1;

loc_000CF471: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF471; /* jne: not equal / not zero */

loc_000CF478: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0xFF;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CF48Du); RECOMP_ABI_CALL(0x0028C0D0u, sub_0028C0D0); /* call 0x0028C0D0 */

loc_000CF48D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x10;
    PUSH32(esp, 0x000CF499u); RECOMP_ABI_CALL(0x000ED660u, sub_000ED660); /* call 0x000ED660 */

loc_000CF499: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF4A1; /* je: equal / zero */

loc_000CF49D: ;
    eax = edi;
    goto loc_000CF4CA;

loc_000CF4A1: ;
    PUSH32(esp, ebx);
    eax = esp + 0x114;
    PUSH32(esp, 0x327144);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF4B4u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000CF4B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x110;
    edx = 0xC;
    PUSH32(esp, 0x000CF4C8u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000CF4C8: ;
    eax = ebx;

loc_000CF4CA: ;
    esi = MEM32(esp + 0x51C);
    edi = ebp;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000CF4D9u); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CF4D9: ;
    ecx = MEM32(esp + 0x510);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x000CF4E8u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF4E8: ;
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x508;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF4F0
 * Original: 0x000CF4F0 - 0x000CF535 (69 bytes, 24 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF4F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edx = eax + 1;

loc_000CF4F7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF4F7; /* jne: not equal / not zero */

loc_000CF4FE: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000CF521; /* jb: below (unsigned <) */

loc_000CF505: ;
    PUSH32(esp, 0x39A);
    PUSH32(esp, 0x3270F8);
    edx = 0x327128;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF51Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF51E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF521: ;
    eax = edi;
    esi = 9;
    edi = 0x64D580;
    PUSH32(esp, 0x000CF532u); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CF532: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CF540
 * Original: 0x000CF540 - 0x000CF546 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF540(void)
{

loc_000CF540: ;
    eax = 0x64D580;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF550
 * Original: 0x000CF550 - 0x000CF6A1 (337 bytes, 102 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF550: ;
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x42C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x438);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x430) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000CF5A5; /* jne: not equal / not zero */

loc_000CF571: ;
    PUSH32(esp, 0x3CD);
    PUSH32(esp, 0x324878);
    edx = 0x3270BC;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF58Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF58A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x428);
    PUSH32(esp, 0x000CF59Eu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF59E: ;
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x42C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CF5A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x25;
    eax = ebp;
    edi = esp + 0x10;
    PUSH32(esp, 0x000CF5B7u); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CF5B7: ;
    eax = edi;
    PUSH32(esp, 0x000CF5BEu); RECOMP_ABI_CALL(0x000D4C20u, sub_000D4C20); /* call 0x000D4C20 */

loc_000CF5BE: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = eax + 1;
    esi = esp + 0x11;
    if (CMP_L(_fas, _fbs)) goto loc_000CF666; /* jl: less (signed <) */

loc_000CF5D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000CF666; /* jg: greater (signed >) */

loc_000CF5DB: ;
    SET_LO8(ecx, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF611; /* je: equal / zero */

loc_000CF5E3: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CF659; /* jl: less (signed <) */

loc_000CF5E9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7F (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000CF659; /* jg: greater (signed >) */

loc_000CF5EE: ;
    ecx = SX8(LO8(ecx));
    edi = ecx;
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(edi * 4 + 0x33B750);
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(ecx * 4 + 0x33B750);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x24 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF63B; /* je: equal / zero */

loc_000CF60C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF5E3; /* jne: not equal / not zero */

loc_000CF611: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0x800000FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_000CF68A; /* jns: not sign (positive) */

loc_000CF61D: ;
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    eax = eax | 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x428);
    PUSH32(esp, 0x000CF634u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF634: ;
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x42C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CF63B: ;
    PUSH32(esp, 0x3F4);
    PUSH32(esp, 0x324878);
    edx = 0x3270BC;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF654u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF654: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CF687;

loc_000CF659: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x327084);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    goto loc_000CF671;

loc_000CF666: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x327084);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);

loc_000CF671: ;
    PUSH32(esp, 0x000CF676u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000CF676: ;
    edx = 0xC;
    eax = esp + 0x44;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000CF687u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000CF687: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000CF68A: ;
    ecx = MEM32(esp + 0x438);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000CF69Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF69A: ;
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x42C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF687
 * Original: 0x000CF687 - 0x000CF6A1 (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF687(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF687: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x438);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000CF69Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF69A: ;
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x42C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF6B0
 * Original: 0x000CF6B0 - 0x000CF6E6 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF6B0: ;
    eax = MEM32(0x5F6998);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF6E0; /* jne: not equal / not zero */

loc_000CF6BB: ;
    eax = 0x5F619C;

loc_000CF6C0: ;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F699C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F699C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CF6C0; /* jl: less (signed <) */

loc_000CF6CF: ;
    eax = 1;
    MEM32(0x5F6998) = eax;
    MEM32(0x5F6AA0) = ecx;
    esp += 4; return; /* ret */

loc_000CF6E0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF6F0
 * Original: 0x000CF6F0 - 0x000CF72A (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF6F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x5F619C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000CF700: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000CF710; /* je: equal / zero */

loc_000CF709: ;
    PUSH32(esp, 0x000CF70Eu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CF70E: ;
    MEM32(esi) = edi;

loc_000CF710: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F699C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5F699C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CF700; /* jl: less (signed <) */

loc_000CF71B: ;
    MEM32(0x5F6998) = edi;
    MEM32(0x5F6AA0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CF730
 * Original: 0x000CF730 - 0x000CF82D (253 bytes, 82 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF730: ;
    eax = MEM32(0x5F6998);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF75A; /* jne: not equal / not zero */

loc_000CF73C: ;
    PUSH32(esp, 0x44B);
    PUSH32(esp, 0x324878);
    edx = 0x327054;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF755u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF755: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000CF75A: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF78D; /* jne: not equal / not zero */

loc_000CF763: ;
    eax = MEM32(4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF78D; /* jne: not equal / not zero */

loc_000CF76C: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF78D; /* je: equal / zero */

loc_000CF771: ;
    PUSH32(esp, 0x44F);
    PUSH32(esp, 0x326FC8);
    edx = 0x327010;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF78Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF78A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF78D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    esi = 0x5F6198;

loc_000CF797: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000CF7CB; /* je: equal / zero */

loc_000CF7A5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    edi = eax;
    PUSH32(esp, 0x000CF7AFu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CF7AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000CF80C; /* je: equal / zero */

loc_000CF7B6: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF7BEu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CF7BE: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x14);
    goto loc_000CF7D2;

loc_000CF7CB: ;
    MEM32(esi + 4) = 0;

loc_000CF7D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F6998) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5F6998 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CF797; /* jl: less (signed <) */

loc_000CF7DD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF7FD; /* je: equal / zero */

loc_000CF7E1: ;
    PUSH32(esp, 0x468);
    PUSH32(esp, 0x326F4C);
    edx = 0x326F70;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF7FAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF7FA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF7FD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(0x5F6AA0) = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000CF80C: ;
    PUSH32(esp, 0x45E);
    PUSH32(esp, 0x324878);
    edx = 0x326F98;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF825u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF825: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000CF830
 * Original: 0x000CF830 - 0x000CF839 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF830(void)
{

loc_000CF830: ;
    MEM8(eax) = 0x32;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF840
 * Original: 0x000CF840 - 0x000CF88B (75 bytes, 25 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF840: ;
    ecx = MEM32(0x64D58C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF85C; /* jne: not equal / not zero */

loc_000CF84A: ;
    PUSH32(esp, 0x327B68);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CF856u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CF856: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000CF85C: ;
    ecx = MEM32(0x33BB50);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000CF881; /* je: equal / zero */

loc_000CF867: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000CF87C; /* je: equal / zero */

loc_000CF86A: ;
    PUSH32(esp, 0x327B28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CF876u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CF876: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000CF87C: ;
    g_seh_ebp = ebp; sub_000D22E0(); return; /* tail jmp 0x000D22E0 */

loc_000CF881: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF887u); RECOMP_ABI_CALL(0x000C76A0u, sub_000C76A0); /* call 0x000C76A0 */

loc_000CF887: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF890
 * Original: 0x000CF890 - 0x000CF8DB (75 bytes, 25 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF890: ;
    ecx = MEM32(0x64D58C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF8AC; /* jne: not equal / not zero */

loc_000CF89A: ;
    PUSH32(esp, 0x327AE0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CF8A6u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CF8A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000CF8AC: ;
    ecx = MEM32(0x33BB50);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000CF8D1; /* je: equal / zero */

loc_000CF8B7: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000CF8CC; /* je: equal / zero */

loc_000CF8BA: ;
    PUSH32(esp, 0x327AA4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CF8C6u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CF8C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000CF8CC: ;
    g_seh_ebp = ebp; sub_000D2350(); return; /* tail jmp 0x000D2350 */

loc_000CF8D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF8D7u); RECOMP_ABI_CALL(0x000C76D0u, sub_000C76D0); /* call 0x000C76D0 */

loc_000CF8D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF8E0
 * Original: 0x000CF8E0 - 0x000CF9BD (221 bytes, 77 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF8E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 8) = eax;
    eax = MEM32(0x327A9C);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(0x327AA0));
    MEM32(esp + 4) = eax;
    eax = edi;
    MEM8(esp + 8) = LO8(ecx);
    edx = eax + 1;

loc_000CF907: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF907; /* jne: not equal / not zero */

loc_000CF90E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CF937; /* jbe: below or equal (unsigned <=) */

loc_000CF915: ;
    PUSH32(esp, 0x327A7C);
    edx = 8;
    PUSH32(esp, 0x000CF924u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CF924: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF927: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x000CF933u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF933: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CF937: ;
    eax = esp + 4;
    edx = eax + 1;
    edi = edi;

loc_000CF940: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF940; /* jne: not equal / not zero */

loc_000CF947: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF96A; /* je: equal / zero */

loc_000CF94E: ;
    PUSH32(esp, 0xC1);
    PUSH32(esp, 0x3279EC);
    edx = 0x327A58;
    ecx = 0x327A24;
    PUSH32(esp, 0x000CF967u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF967: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF96A: ;
    eax = esp + 7;
    PUSH32(esp, 0x000CF973u); RECOMP_ABI_CALL(0x000CF830u, sub_000CF830); /* call 0x000CF830 */

loc_000CF973: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF927; /* je: equal / zero */

loc_000CF977: ;
    eax = esp + 4;
    edx = eax;
    /* nop */

loc_000CF980: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF980; /* jne: not equal / not zero */

loc_000CF987: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_000CF990: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF990; /* jne: not equal / not zero */

loc_000CF998: ;
    PUSH32(esp, esi);
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
    ecx = MEM32(esp + 0x10);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    PUSH32(esp, 0x000CF9B9u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF9B9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF9C0
 * Original: 0x000CF9C0 - 0x000CFF60 (1440 bytes, 378 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF9C0: ;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x150;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x15C) = eax;
    esi = ecx;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0x000CF9EBu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CF9EB: ;
    PUSH32(esp, 0x16D);
    eax = 0x327A24;
    PUSH32(esp, 0x000CF9FAu); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CF9FA: ;
    eax = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;

loc_000CFA02: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFA02; /* jne: not equal / not zero */

loc_000CFA09: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CFA1F; /* jbe: below or equal (unsigned <=) */

loc_000CFA10: ;
    PUSH32(esp, 0x3279C4);
    edx = 0xC;
    goto loc_000CFED6;

loc_000CFA1F: ;
    eax = esi;
    edx = eax + 1;

loc_000CFA24: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFA24; /* jne: not equal / not zero */

loc_000CFA2B: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = esp + 0x38;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CFA3Au); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_000CFA3A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x34;
    PUSH32(esp, 0x000CFA46u); RECOMP_ABI_CALL(0x000CF8E0u, sub_000CF8E0); /* call 0x000CF8E0 */

loc_000CFA46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFEDE; /* je: equal / zero */

loc_000CFA4E: ;
    ecx = esp + 0x5C;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    ebx = esp + 0x3C;
    PUSH32(esp, 0x000CFA61u); RECOMP_ABI_CALL(0x000CF3E0u, sub_000CF3E0); /* call 0x000CF3E0 */

loc_000CFA61: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x5C;
    PUSH32(esp, 0x000CFA6Du); RECOMP_ABI_CALL(0x000ED460u, sub_000ED460); /* call 0x000ED460 */

loc_000CFA6D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000CFA87; /* jne: not equal / not zero */

loc_000CFA78: ;
    PUSH32(esp, 0x3279A0);
    edx = 0xC;
    goto loc_000CFED6;

loc_000CFA87: ;
    eax = 0xA0;
    PUSH32(esp, 0x000CFA91u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CFA91: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000CFAAA; /* jne: not equal / not zero */

loc_000CFA9B: ;
    PUSH32(esp, 0x327960);
    edx = 0xA;
    goto loc_000CFED6;

loc_000CFAAA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA0);
    esi = edi;
    PUSH32(esp, 0x000CFAB7u); RECOMP_ABI_CALL(0x000ED550u, sub_000ED550); /* call 0x000ED550 */

loc_000CFAB7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFACB; /* je: equal / zero */

loc_000CFAC1: ;
    PUSH32(esp, 0x32792C);
    goto loc_000CFED1;

loc_000CFACB: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F6AA8);
    PUSH32(esp, 0x000CFADBu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CFADB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    PUSH32(esp, 0x000CFAE5u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CFAE5: ;
    eax = esp + 0x30;
    ecx = esp + 0x18;
    ebx = esp + 0x2C;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000CFAFEu); RECOMP_ABI_CALL(0x000CBCB0u, sub_000CBCB0); /* call 0x000CBCB0 */

loc_000CFAFE: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(0x5F6AA8);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFB1E; /* je: equal / zero */

loc_000CFB14: ;
    PUSH32(esp, 0x3278D8);
    goto loc_000CFED1;

loc_000CFB1E: ;
    eax = MEM32(0x5F6AC8);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi;
    PUSH32(esp, 0x000CFB2Du); RECOMP_ABI_CALL(0x000ED5B0u, sub_000ED5B0); /* call 0x000ED5B0 */

loc_000CFB2D: ;
    ecx = MEM32(0x5F6AC8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFB44; /* je: equal / zero */

loc_000CFB3A: ;
    PUSH32(esp, 0x3278A4);
    goto loc_000CFED1;

loc_000CFB44: ;
    eax = MEM32(0x5F6AB4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFB74; /* je: equal / zero */

loc_000CFB4F: ;
    edi = 0x325305;
    PUSH32(esp, 0x000CFB59u); RECOMP_ABI_CALL(0x000CF540u, sub_000CF540); /* call 0x000CF540 */

loc_000CFB59: ;
    esi = eax;
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_000CFB70; /* jne: not equal / not zero */

loc_000CFB66: ;
    PUSH32(esp, 0x327860);
    goto loc_000CFED1;

loc_000CFB70: ;
    edi = MEM32(esp + 0x14);

loc_000CFB74: ;
    eax = MEM32(0x5F6ACC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFBBC; /* je: equal / zero */

loc_000CFB7D: ;
    PUSH32(esp, 0x000CFB82u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CFB82: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFB97; /* jne: not equal / not zero */

loc_000CFB88: ;
    PUSH32(esp, 0x327960);
    edx = 0xA;
    goto loc_000CFED6;

loc_000CFB97: ;
    eax = MEM32(0x5F6ACC);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    esi = edi;
    PUSH32(esp, 0x000CFBA5u); RECOMP_ABI_CALL(0x000ED550u, sub_000ED550); /* call 0x000ED550 */

loc_000CFBA5: ;
    ecx = MEM32(0x5F6ACC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFBBC; /* je: equal / zero */

loc_000CFBB2: ;
    PUSH32(esp, 0x32792C);
    goto loc_000CFED1;

loc_000CFBBC: ;
    _fa = (uint32_t)(MEM32(0x5F6AD8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F6AD8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFBD0; /* je: equal / zero */

loc_000CFBC4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFBD0; /* je: equal / zero */

loc_000CFBC8: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x5F6AD4) = MEM32(0x5F6AD4) + ebp;
    _fa = (uint32_t)(MEM32(0x5F6AD4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CFBD6;

loc_000CFBD0: ;
    MEM32(0x5F6AD4) = ebx;

loc_000CFBD6: ;
    _fa = (uint32_t)(MEM32(0x5F6AE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F6AE0), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFBEA; /* je: equal / zero */

loc_000CFBDE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFBEA; /* je: equal / zero */

loc_000CFBE2: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x5F6ADC) = MEM32(0x5F6ADC) + ebp;
    _fa = (uint32_t)(MEM32(0x5F6ADC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CFBF0;

loc_000CFBEA: ;
    MEM32(0x5F6ADC) = ebx;

loc_000CFBF0: ;
    eax = MEM32(0x5F6AE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFC31; /* je: equal / zero */

loc_000CFBF9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFC31; /* je: equal / zero */

loc_000CFBFD: ;
    esi = MEM32(0x5F6AE4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x5F6AE4) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_000CFC37; /* jle: less or equal (signed <=) */

loc_000CFC11: ;
    eax = esi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CFC16: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFC1F; /* jne: not equal / not zero */

loc_000CFC1B: ;
    MEM32(eax) = ebx;
    goto loc_000CFC21;

loc_000CFC1F: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ebp;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CFC21: ;
    edx = MEM32(0x5F6AE8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CFC16; /* jl: less (signed <) */

loc_000CFC2F: ;
    goto loc_000CFC37;

loc_000CFC31: ;
    MEM32(0x5F6AE4) = ebx;

loc_000CFC37: ;
    _fa = (uint32_t)(MEM32(0x5F6AEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F6AEC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFEC6; /* je: equal / zero */

loc_000CFC43: ;
    ecx = MEM32(0x5F6AF0);
    eax = MEM32(0x5F6AF4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(0x5F6AF0) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000CFC79; /* jne: not equal / not zero */

loc_000CFC5B: ;
    eax = 0x5F6AF8;

loc_000CFC60: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFC6D; /* je: equal / zero */

loc_000CFC65: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFC6D; /* je: equal / zero */

loc_000CFC69: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ebp;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CFC6F;

loc_000CFC6D: ;
    MEM32(eax) = ebx;

loc_000CFC6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F6B08) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F6B08 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CFC60; /* jl: less (signed <) */

loc_000CFC79: ;
    ecx = MEM32(0x5F6AD0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CFC85u); RECOMP_ABI_CALL(0x000D5EE0u, sub_000D5EE0); /* call 0x000D5EE0 */

loc_000CFC85: ;
    eax = 0x5F6AD4;
    PUSH32(esp, 0x000CFC8Fu); RECOMP_ABI_CALL(0x000D60E0u, sub_000D60E0); /* call 0x000D60E0 */

loc_000CFC8F: ;
    eax = 0x5F6ADC;
    PUSH32(esp, 0x000CFC99u); RECOMP_ABI_CALL(0x000D6060u, sub_000D6060); /* call 0x000D6060 */

loc_000CFC99: ;
    eax = 0x5F6AE4;
    PUSH32(esp, 0x000CFCA3u); RECOMP_ABI_CALL(0x000C77F0u, sub_000C77F0); /* call 0x000C77F0 */

loc_000CFCA3: ;
    PUSH32(esp, 0x5F6AEC);
    PUSH32(esp, 0x000CFCADu); RECOMP_ABI_CALL(0x000CF730u, sub_000CF730); /* call 0x000CF730 */

loc_000CFCAD: ;
    edx = MEM32(0x5F6AC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CFCB9u); RECOMP_ABI_CALL(0x000D62E0u, sub_000D62E0); /* call 0x000D62E0 */

loc_000CFCB9: ;
    eax = MEM32(0x5F6AC4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CFCC4u); RECOMP_ABI_CALL(0x000D6300u, sub_000D6300); /* call 0x000D6300 */

loc_000CFCC4: ;
    ecx = MEM32(0x5F6ABC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CFCD0u); RECOMP_ABI_CALL(0x000D5E80u, sub_000D5E80); /* call 0x000D5E80 */

loc_000CFCD0: ;
    edx = MEM32(0x5F6AB8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CFCDCu); RECOMP_ABI_CALL(0x000D5F40u, sub_000D5F40); /* call 0x000D5F40 */

loc_000CFCDC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x5F6AF4;
    PUSH32(esp, 0x000CFCE9u); RECOMP_ABI_CALL(0x000D6170u, sub_000D6170); /* call 0x000D6170 */

loc_000CFCE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFEDE; /* je: equal / zero */

loc_000CFCF1: ;
    eax = MEM32(0x5F6B08);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5F6AD4) = esi;
    MEM32(0x5F6AD8) = esi;
    MEM32(0x5F6ADC) = esi;
    MEM32(0x5F6AE0) = esi;
    MEM32(0x5F6AE4) = esi;
    MEM32(0x5F6AE8) = esi;
    MEM32(0x5F6AF0) = esi;
    MEM32(0x5F6AEC) = esi;
    PUSH32(esp, 0x000CFD2Du); RECOMP_ABI_CALL(0x000D6180u, sub_000D6180); /* call 0x000D6180 */

loc_000CFD2D: ;
    eax = MEM32(0x5F6B0C);
    PUSH32(esp, 0x000CFD37u); RECOMP_ABI_CALL(0x000D61C0u, sub_000D61C0); /* call 0x000D61C0 */

loc_000CFD37: ;
    eax = MEM32(0x5F6B10);
    PUSH32(esp, 0x000CFD41u); RECOMP_ABI_CALL(0x000D6200u, sub_000D6200); /* call 0x000D6200 */

loc_000CFD41: ;
    eax = MEM32(0x5F6B14);
    PUSH32(esp, 0x000CFD4Bu); RECOMP_ABI_CALL(0x000D6220u, sub_000D6220); /* call 0x000D6220 */

loc_000CFD4B: ;
    eax = MEM32(0x5F6B18);
    PUSH32(esp, 0x000CFD55u); RECOMP_ABI_CALL(0x000D6260u, sub_000D6260); /* call 0x000D6260 */

loc_000CFD55: ;
    eax = MEM32(0x5F6B1C);
    PUSH32(esp, 0x000CFD5Fu); RECOMP_ABI_CALL(0x000D62A0u, sub_000D62A0); /* call 0x000D62A0 */

loc_000CFD5F: ;
    eax = MEM32(0x5F6B20);
    PUSH32(esp, 0x000CFD69u); RECOMP_ABI_CALL(0x000D6190u, sub_000D6190); /* call 0x000D6190 */

loc_000CFD69: ;
    eax = MEM32(0x5F6B24);
    PUSH32(esp, 0x000CFD73u); RECOMP_ABI_CALL(0x000D61D0u, sub_000D61D0); /* call 0x000D61D0 */

loc_000CFD73: ;
    eax = MEM32(0x5F6B28);
    PUSH32(esp, 0x000CFD7Du); RECOMP_ABI_CALL(0x000D6210u, sub_000D6210); /* call 0x000D6210 */

loc_000CFD7D: ;
    eax = MEM32(0x5F6B2C);
    PUSH32(esp, 0x000CFD87u); RECOMP_ABI_CALL(0x000D6230u, sub_000D6230); /* call 0x000D6230 */

loc_000CFD87: ;
    eax = MEM32(0x5F6B30);
    PUSH32(esp, 0x000CFD91u); RECOMP_ABI_CALL(0x000D6270u, sub_000D6270); /* call 0x000D6270 */

loc_000CFD91: ;
    eax = MEM32(0x5F6B34);
    PUSH32(esp, 0x000CFD9Bu); RECOMP_ABI_CALL(0x000D62B0u, sub_000D62B0); /* call 0x000D62B0 */

loc_000CFD9B: ;
    xmm1.f[0] = (float)(int32_t)MEM32(0x5F6B38); /* cvtsi2ss */
    xmm0 = XMM_SCALAR(MEMF(0x333830)); /* movss */
    eax = MEM32(0x5F6B3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000CFDCF; /* jne: not equal / not zero */

loc_000CFDC7: ;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    goto loc_000CFDDD;

loc_000CFDCF: ;
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */

loc_000CFDDD: ;
    eax = MEM32(0x5F6B40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFDEF; /* jne: not equal / not zero */

loc_000CFDE7: ;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    goto loc_000CFDFD;

loc_000CFDEF: ;
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */

loc_000CFDFD: ;
    eax = MEM32(0x5F6B44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFE0F; /* je: equal / zero */

loc_000CFE07: ;
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */

loc_000CFE0F: ;
    ecx = esp + 0x1C;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000CFE1Eu); RECOMP_ABI_CALL(0x000CAE40u, sub_000CAE40); /* call 0x000CAE40 */

loc_000CFE1E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFE2B; /* je: equal / zero */

loc_000CFE22: ;
    eax = ebp;
    PUSH32(esp, 0x000CFE29u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CFE29: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CFE2B: ;
    eax = 0x32782C;
    edx = 0x5F6AAC;
    PUSH32(esp, 0x000CFE3Au); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CFE3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFE4F; /* jne: not equal / not zero */

loc_000CFE3E: ;
    MEM32(0x33BB50) = 1;
    PUSH32(esp, 0x000CFE4Du); RECOMP_ABI_CALL(0x000D1F00u, sub_000D1F00); /* call 0x000D1F00 */

loc_000CFE4D: ;
    goto loc_000CFE6D;

loc_000CFE4F: ;
    eax = 0x327824;
    edx = 0x5F6AAC;
    PUSH32(esp, 0x000CFE5Eu); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CFE5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFEA8; /* jne: not equal / not zero */

loc_000CFE62: ;
    MEM32(0x33BB50) = esi;
    PUSH32(esp, 0x000CFE6Du); RECOMP_ABI_CALL(0x000C7520u, sub_000C7520); /* call 0x000C7520 */

loc_000CFE6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFEDE; /* je: equal / zero */

loc_000CFE71: ;
    esi = edi;
    PUSH32(esp, 0x000CFE78u); RECOMP_ABI_CALL(0x000ED620u, sub_000ED620); /* call 0x000ED620 */

loc_000CFE78: ;
    PUSH32(esp, 0x000CFE7Du); RECOMP_ABI_CALL(0x000DB1D0u, sub_000DB1D0); /* call 0x000DB1D0 */

loc_000CFE7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFEDE; /* jne: not equal / not zero */

loc_000CFE82: ;
    MEM32(0x64D58C) = eax;
    PUSH32(esp, 0x000CFE8Cu); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CFE8C: ;
    eax = MEM32(0x64D58C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x14C);
    PUSH32(esp, 0x000CFEA1u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CFEA1: ;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x150;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CFEA8: ;
    PUSH32(esp, 0x279);
    PUSH32(esp, 0x324878);
    edx = 0x327810;
    ecx = 0x327A24;
    PUSH32(esp, 0x000CFEC1u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CFEC1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CFEDE;

loc_000CFEC6: ;
    MEM32(0x5F6AF0) = ebx;
    PUSH32(esp, 0x327834);

loc_000CFED1: ;
    edx = 0xD;

loc_000CFED6: ;
    PUSH32(esp, 0x000CFEDBu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CFEDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CFEDE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3277EC);
    edx = 8;
    MEM32(0x64D58C) = esi;
    PUSH32(esp, 0x000CFEF5u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CFEF5: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFF05; /* je: equal / zero */

loc_000CFF00: ;
    PUSH32(esp, 0x000CFF05u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CFF05: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFF10; /* je: equal / zero */

loc_000CFF09: ;
    eax = ebp;
    PUSH32(esp, 0x000CFF10u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CFF10: ;
    MEM32(0x5F6AD4) = esi;
    MEM32(0x5F6AD8) = esi;
    MEM32(0x5F6ADC) = esi;
    MEM32(0x5F6AE0) = esi;
    MEM32(0x5F6AF0) = esi;
    MEM32(0x5F6AEC) = esi;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFF42; /* je: equal / zero */

loc_000CFF3D: ;
    PUSH32(esp, 0x000CFF42u); RECOMP_ABI_CALL(0x000ED620u, sub_000ED620); /* call 0x000ED620 */

loc_000CFF42: ;
    PUSH32(esp, 0x000CFF47u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CFF47: ;
    ecx = MEM32(esp + 0x15C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    PUSH32(esp, 0x000CFF59u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CFF59: ;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x150;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CFF60
 * Original: 0x000CFF60 - 0x000D0016 (182 bytes, 46 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFF60: ;
    eax = MEM32(0x64D58C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0010; /* je: equal / zero */

loc_000CFF6D: ;
    eax = MEM32(0x5F6AD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFF7F; /* jne: not equal / not zero */

loc_000CFF76: ;
    eax = MEM32(0x5F6AD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFF9B; /* je: equal / zero */

loc_000CFF7F: ;
    PUSH32(esp, 0x2CD);
    PUSH32(esp, 0x327720);
    edx = 0x3277C4;
    ecx = 0x327A24;
    PUSH32(esp, 0x000CFF98u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CFF98: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CFF9B: ;
    eax = 0x5F6AD4;
    PUSH32(esp, 0x000CFFA5u); RECOMP_ABI_CALL(0x000D60E0u, sub_000D60E0); /* call 0x000D60E0 */

loc_000CFFA5: ;
    eax = MEM32(0x5F6AE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFFB7; /* jne: not equal / not zero */

loc_000CFFAE: ;
    eax = MEM32(0x5F6ADC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFFD3; /* je: equal / zero */

loc_000CFFB7: ;
    PUSH32(esp, 0x2D1);
    PUSH32(esp, 0x327650);
    edx = 0x3276F0;
    ecx = 0x327A24;
    PUSH32(esp, 0x000CFFD0u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CFFD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CFFD3: ;
    eax = 0x5F6ADC;
    PUSH32(esp, 0x000CFFDDu); RECOMP_ABI_CALL(0x000D6060u, sub_000D6060); /* call 0x000D6060 */

loc_000CFFDD: ;
    eax = MEM32(0x5F6AE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFFEF; /* jne: not equal / not zero */

loc_000CFFE6: ;
    eax = MEM32(0x5F6AE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D000B; /* je: equal / zero */

loc_000CFFEF: ;
    PUSH32(esp, 0x2D5);
    PUSH32(esp, 0x327598);
    edx = 0x327630;
    ecx = 0x327A24;
    PUSH32(esp, 0x000D0008u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D0008: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D000B: ;
    PUSH32(esp, 0x000D0010u); RECOMP_ABI_CALL(0x000C77C0u, sub_000C77C0); /* call 0x000C77C0 */

loc_000D0010: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0003
 * Original: 0x000D0003 - 0x000D0016 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0003(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0003: ;
    PUSH32(esp, 0x000D0008u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D0008: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D0010u); RECOMP_ABI_CALL(0x000C77C0u, sub_000C77C0); /* call 0x000C77C0 */

loc_000D0010: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D000B
 * Original: 0x000D000B - 0x000D0016 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D000B(void)
{

loc_000D000B: ;
    PUSH32(esp, 0x000D0010u); RECOMP_ABI_CALL(0x000C77C0u, sub_000C77C0); /* call 0x000C77C0 */

loc_000D0010: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0020
 * Original: 0x000D0020 - 0x000D009F (127 bytes, 38 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0020: ;
    PUSH32(esp, 0x000D0025u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000D0025: ;
    PUSH32(esp, 0x2EE);
    eax = 0x327A24;
    PUSH32(esp, 0x000D0034u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000D0034: ;
    eax = MEM32(0x64D58C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0048; /* jne: not equal / not zero */

loc_000D0040: ;
    PUSH32(esp, 0x000D0045u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000D0045: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D0048: ;
    eax = MEM32(0x33BB50);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_000D0086; /* je: equal / zero */

loc_000D0053: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D007F; /* je: equal / zero */

loc_000D0056: ;
    PUSH32(esp, 0x327AA4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D0062u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0062: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D0065: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D0067: ;
    MEM32(0x64D58C) = 0;
    PUSH32(esp, 0x000D0076u); RECOMP_ABI_CALL(0x000DB210u, sub_000DB210); /* call 0x000DB210 */

loc_000D0076: ;
    PUSH32(esp, 0x000D007Bu); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000D007B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D007F: ;
    PUSH32(esp, 0x000D0084u); RECOMP_ABI_CALL(0x000D1F50u, sub_000D1F50); /* call 0x000D1F50 */

loc_000D0084: ;
    goto loc_000D008B;

loc_000D0086: ;
    PUSH32(esp, 0x000D008Bu); RECOMP_ABI_CALL(0x000C75C0u, sub_000C75C0); /* call 0x000C75C0 */

loc_000D008B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0065; /* je: equal / zero */

loc_000D008F: ;
    PUSH32(esp, 0x000D0094u); RECOMP_ABI_CALL(0x000CFF60u, sub_000CFF60); /* call 0x000CFF60 */

loc_000D0094: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0065; /* je: equal / zero */

loc_000D0098: ;
    esi = 1;
    goto loc_000D0067;

}

/**
 * sub_000D00A0
 * Original: 0x000D00A0 - 0x000D00EB (75 bytes, 26 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D00A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D00A0: ;
    ecx = MEM32(0x64D58C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D00BC; /* jne: not equal / not zero */

loc_000D00AA: ;
    PUSH32(esp, 0x327538);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D00B6u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D00B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D00BC: ;
    ecx = MEM32(0x33BB50);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D00E1; /* je: equal / zero */

loc_000D00C7: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D00DC; /* je: equal / zero */

loc_000D00CA: ;
    PUSH32(esp, 0x3274E8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D00D6u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D00D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D00DC: ;
    g_seh_ebp = ebp; sub_000D2090(); return; /* tail jmp 0x000D2090 */

loc_000D00E1: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0x000D00E9u); RECOMP_ABI_CALL(0x000C7700u, sub_000C7700); /* call 0x000C7700 */

loc_000D00E9: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D00F0
 * Original: 0x000D00F0 - 0x000D01E4 (244 bytes, 71 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D00F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D00F0: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D01C8; /* ja: above (unsigned >) */

loc_000D00FD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD01E4); /* switch: 11 entries, 5 targets */
    if (_jt == 0x000D0104u) goto loc_000D0104;
    if (_jt == 0x000D011Du) goto loc_000D011D;
    if (_jt == 0x000D015Fu) goto loc_000D015F;
    if (_jt == 0x000D0188u) goto loc_000D0188;
    if (_jt == 0x000D01BFu) goto loc_000D01BF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D0104: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0178; /* je: equal / zero */

loc_000D010C: ;
    PUSH32(esp, 0x000D0111u); RECOMP_ABI_CALL(0x000CF890u, sub_000CF890); /* call 0x000CF890 */

loc_000D0111: ;
    MEM32(esi + 8) = eax;
    eax = 1;
    MEM32(esi + 0x48) = eax;
    esp += 4; return; /* ret */

loc_000D011D: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D012F; /* je: equal / zero */

loc_000D0125: ;
    PUSH32(esp, 0x000D012Au); RECOMP_ABI_CALL(0x000CF890u, sub_000CF890); /* call 0x000CF890 */

loc_000D012A: ;
    MEM32(esi + 8) = eax;
    goto loc_000D0136;

loc_000D012F: ;
    MEM32(esi + 8) = 0;

loc_000D0136: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D014F; /* je: equal / zero */

loc_000D013E: ;
    PUSH32(esp, 0x000D0143u); RECOMP_ABI_CALL(0x000CF890u, sub_000CF890); /* call 0x000CF890 */

loc_000D0143: ;
    MEM32(esi + 0xC) = eax;
    eax = 1;
    MEM32(esi + 0x48) = eax;
    esp += 4; return; /* ret */

loc_000D014F: ;
    eax = 1;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x48) = eax;
    esp += 4; return; /* ret */

loc_000D015F: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0178; /* je: equal / zero */

loc_000D0167: ;
    PUSH32(esp, 0x000D016Cu); RECOMP_ABI_CALL(0x000CF840u, sub_000CF840); /* call 0x000CF840 */

loc_000D016C: ;
    MEM32(esi + 8) = eax;
    eax = 1;
    MEM32(esi + 0x48) = eax;
    esp += 4; return; /* ret */

loc_000D0178: ;
    eax = 1;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0x48) = eax;
    esp += 4; return; /* ret */

loc_000D0188: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0198; /* je: equal / zero */

loc_000D018F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0198; /* je: equal / zero */

loc_000D0193: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D019F;

loc_000D0198: ;
    MEM32(esi + 0x14) = 0;

loc_000D019F: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D01B8; /* je: equal / zero */

loc_000D01A7: ;
    PUSH32(esp, 0x000D01ACu); RECOMP_ABI_CALL(0x000CF890u, sub_000CF890); /* call 0x000CF890 */

loc_000D01AC: ;
    MEM32(esi + 0x10) = eax;
    eax = 1;
    MEM32(esi + 0x48) = eax;
    esp += 4; return; /* ret */

loc_000D01B8: ;
    MEM32(esi + 0x10) = 0;

loc_000D01BF: ;
    eax = 1;
    MEM32(esi + 0x48) = eax;
    esp += 4; return; /* ret */

loc_000D01C8: ;
    PUSH32(esp, 0x3274AC);
    edx = 0x15;
    PUSH32(esp, 0x000D01D7u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D01D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D0210
 * Original: 0x000D0210 - 0x000D026E (94 bytes, 25 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D0210: ;
    PUSH32(esp, 0x000D0215u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000D0215: ;
    PUSH32(esp, 0x3FE);
    eax = 0x327A24;
    PUSH32(esp, 0x000D0224u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000D0224: ;
    eax = MEM32(0x64D58C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0269; /* je: equal / zero */

loc_000D0230: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0269; /* je: equal / zero */

loc_000D0239: ;
    eax = MEM32(0x33BB50);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D0264; /* je: equal / zero */

loc_000D0243: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D025A; /* je: equal / zero */

loc_000D0246: ;
    PUSH32(esp, 0x3274E8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D0252u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0252: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000D025A: ;
    PUSH32(esp, 0x000D025Fu); RECOMP_ABI_CALL(0x000D20E0u, sub_000D20E0); /* call 0x000D20E0 */

loc_000D025F: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000D0264: ;
    PUSH32(esp, 0x000D0269u); RECOMP_ABI_CALL(0x000C7750u, sub_000C7750); /* call 0x000C7750 */

loc_000D0269: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000D0270
 * Original: 0x000D0270 - 0x000D0292 (34 bytes, 11 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0270: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D028F; /* jne: not equal / not zero */

loc_000D0274: ;
    PUSH32(esp, 0x327A24);
    eax = 0x478;
    ecx = 0x324878;
    PUSH32(esp, 0x000D0288u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D0288: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000D028F: ;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000D02A0
 * Original: 0x000D02A0 - 0x000D0326 (134 bytes, 47 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D02A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D02A0: ;
    edx = MEM32(0x328B5C);
    eax = ecx;
    MEM32(eax) = edx;
    SET_LO8(edx, MEM8(0x328B60));
    PUSH32(esp, esi);
    MEM8(eax + 4) = LO8(edx);
    esi = eax + 1;

loc_000D02B7: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D02B7; /* jne: not equal / not zero */

loc_000D02BE: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(eax + ecx) = 0x2E;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D02D4; /* je: equal / zero */

loc_000D02CE: ;
    MEM8(eax + ecx) = 0x4C;
    goto loc_000D02D8;

loc_000D02D4: ;
    MEM8(eax + ecx) = 0x53;

loc_000D02D8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax + ecx + 1;
    MEM8(eax + ecx) = 0x4D;
    eax = edx;
    PUSH32(esp, 0x000D02E8u); RECOMP_ABI_CALL(0x000CF830u, sub_000CF830); /* call 0x000CF830 */

loc_000D02E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D02ED; /* jne: not equal / not zero */

loc_000D02EC: ;
    esp += 4; return; /* ret */

loc_000D02ED: ;
    eax = ecx;
    MEM8(edx + 1) = 0;
    edx = eax + 1;

loc_000D02F6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D02F6; /* jne: not equal / not zero */

loc_000D02FD: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D0320; /* jbe: below or equal (unsigned <=) */

loc_000D0304: ;
    PUSH32(esp, 0x86);
    PUSH32(esp, 0x328ADC);
    edx = 0x328B40;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D031Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D031D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D0320: ;
    eax = 1;
    esp += 4; return; /* ret */

}
