/**
 * PoP SoT xbox-demo - sound, chunk 2
 * Ubisoft Dare sound engine and Jade's glue to it
 * Functions: 250 (0x000D6770 - 0x000DB7F0)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_000D6770
 * Original: 0x000D6770 - 0x000D6866 (246 bytes, 90 insns)
 * Folder: sound (source: sndspace.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6770: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_000D67A5; /* jne: not equal / not zero */

loc_000D6780: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D67A5; /* jne: not equal / not zero */

loc_000D6787: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D67A5; /* jne: not equal / not zero */

loc_000D678E: ;
    PUSH32(esp, 0x32A284);
    eax = 0x248;
    ecx = 0x32A18C;
    PUSH32(esp, 0x000D67A2u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D67A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D67A5: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D67CF; /* jne: not equal / not zero */

loc_000D67AA: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D67CF; /* jne: not equal / not zero */

loc_000D67B1: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D67CF; /* jne: not equal / not zero */

loc_000D67B8: ;
    PUSH32(esp, 0x32A284);
    eax = 0x249;
    ecx = 0x32A158;
    PUSH32(esp, 0x000D67CCu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D67CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D67CF: ;
    eax = MEM32(edi);
    ecx = MEM32(esi);
    edx = MEM32(edi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi + 4);
    edi = MEM32(esi + 8);
    MEM32(esp + 8) = eax;
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp + 8;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x000D67F8u); RECOMP_ABI_CALL(0x000DA340u, sub_000DA340); /* call 0x000DA340 */

loc_000D67F8: ;
    edx = ebx;
    esi = esp + 8;
    edi = eax;
    PUSH32(esp, 0x000D6805u); RECOMP_ABI_CALL(0x000DA3B0u, sub_000DA3B0); /* call 0x000DA3B0 */

loc_000D6805: ;
    esi = eax;
    eax = edi + edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6827; /* jne: not equal / not zero */

loc_000D681C: ;
    POP32(esp, edi);
    eax = 0x40;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6827: ;
    eax = edi;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D684C; /* jle: less or equal (signed <=) */

loc_000D682F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D685B; /* jge: greater or equal (signed >=) */

loc_000D6833: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_000D6854; /* jns: not sign (positive) */

loc_000D684C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6854: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D6860; /* jle: less or equal (signed <=) */

loc_000D685B: ;
    eax = 0x80;

loc_000D6860: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6870
 * Original: 0x000D6870 - 0x000D6947 (215 bytes, 83 insns)
 * Folder: sound (source: sndspace.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6870: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000D68A3; /* jne: not equal / not zero */

loc_000D687E: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D68A3; /* jne: not equal / not zero */

loc_000D6885: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D68A3; /* jne: not equal / not zero */

loc_000D688C: ;
    PUSH32(esp, 0x32A284);
    eax = 0x27D;
    ecx = 0x32A18C;
    PUSH32(esp, 0x000D68A0u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D68A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D68A3: ;
    eax = MEM32(edi);
    ecx = MEM32(esi);
    edx = MEM32(edi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi + 4);
    edi = MEM32(esi + 8);
    MEM32(esp + 8) = eax;
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp + 8;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x000D68CCu); RECOMP_ABI_CALL(0x000DA340u, sub_000DA340); /* call 0x000DA340 */

loc_000D68CC: ;
    edx = ebx;
    esi = esp + 8;
    edi = eax;
    PUSH32(esp, 0x000D68D9u); RECOMP_ABI_CALL(0x000DA3B0u, sub_000DA3B0); /* call 0x000DA3B0 */

loc_000D68D9: ;
    esi = eax;
    eax = edi + edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D68FB; /* jne: not equal / not zero */

loc_000D68F0: ;
    POP32(esp, edi);
    eax = 0x40;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D68FB: ;
    eax = edi;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D6934; /* jle: less or equal (signed <=) */

loc_000D6903: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6924; /* jge: greater or equal (signed >=) */

loc_000D6907: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0x40;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_000D692C; /* jns: not sign (positive) */

loc_000D6924: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D692C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D693F; /* jle: less or equal (signed <=) */

loc_000D6934: ;
    POP32(esp, edi);
    eax = 0x80;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D693F: ;
    POP32(esp, edi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6950
 * Original: 0x000D6950 - 0x000D6A00 (176 bytes, 48 insns)
 * Folder: sound (source: sndspace.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D6950: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_000D6975; /* jle: less or equal (signed <=) */

loc_000D6959: ;
    PUSH32(esp, 0x2BF);
    PUSH32(esp, 0x32A120);
    edx = 0x32A140;
    ecx = 0x32A284;
    PUSH32(esp, 0x000D6972u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6972: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6975: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFA00000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6999; /* jge: greater or equal (signed >=) */

loc_000D697D: ;
    PUSH32(esp, 0x2C0);
    PUSH32(esp, 0x32A100);
    edx = 0x32A140;
    ecx = 0x32A284;
    PUSH32(esp, 0x000D6996u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6996: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6999: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x80 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D69BA; /* jbe: below or equal (unsigned <=) */

loc_000D699E: ;
    PUSH32(esp, 0x2C1);
    PUSH32(esp, 0x32A0CC);
    edx = 0x32A0E8;
    ecx = 0x32A284;
    PUSH32(esp, 0x000D69B7u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D69B7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D69BA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D69FE; /* je: equal / zero */

loc_000D69BE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D69FE; /* je: equal / zero */

loc_000D69C2: ;
    eax = ZX8(LO8(ebx));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + 0x33D080);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x33D280;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi) = ecx;
    eax = MEM32(edx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xFFA00000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D69EE; /* jge: greater or equal (signed >=) */

loc_000D69E8: ;
    MEM32(edi) = 0xFFA00000u;

loc_000D69EE: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0xFFA00000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D69FE; /* jge: greater or equal (signed >=) */

loc_000D69F7: ;
    MEM32(ebp) = 0xFFA00000u;

loc_000D69FE: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6A00
 * Original: 0x000D6A00 - 0x000D6ACA (202 bytes, 62 insns)
 * Folder: sound (source: sndspace.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6A00: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x168) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x168 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6A0F; /* jge: greater or equal (signed >=) */

loc_000D6A0B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6A2B; /* jge: greater or equal (signed >=) */

loc_000D6A0F: ;
    PUSH32(esp, 0x2FE);
    PUSH32(esp, 0x32A04C);
    edx = 0x32A088;
    ecx = 0x32A284;
    PUSH32(esp, 0x000D6A28u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6A28: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6A2B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2D0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6A37; /* jge: greater or equal (signed >=) */

loc_000D6A33: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6A53; /* jge: greater or equal (signed >=) */

loc_000D6A37: ;
    PUSH32(esp, 0x2FF);
    PUSH32(esp, 0x329FD0);
    edx = 0x32A008;
    ecx = 0x32A284;
    PUSH32(esp, 0x000D6A50u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6A50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6A53: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x168;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_000D6A65; /* jns: not sign (positive) */

loc_000D6A63: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000D6A65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D6A7B; /* jle: less or equal (signed <=) */

loc_000D6A6C: ;
    ecx = 0x168;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    eax = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_000D6A81; /* jle: less or equal (signed <=) */

loc_000D6A79: ;
    goto loc_000D6A7F;

loc_000D6A7B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6A81; /* jge: greater or equal (signed >=) */

loc_000D6A7F: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000D6A81: ;
    esi = eax + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2D0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6A94; /* jl: less (signed <) */

loc_000D6A8C: ;
    _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x2D0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000D6A9E;

loc_000D6A94: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6A9E; /* jge: greater or equal (signed >=) */

loc_000D6A98: ;
    _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2D0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6A9E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2D0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6AAA; /* jge: greater or equal (signed >=) */

loc_000D6AA6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6AC6; /* jge: greater or equal (signed >=) */

loc_000D6AAA: ;
    PUSH32(esp, 0x31B);
    PUSH32(esp, 0x329F60);
    edx = 0x329F90;
    ecx = 0x32A284;
    PUSH32(esp, 0x000D6AC3u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6AC3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6AC6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6AD0
 * Original: 0x000D6AD0 - 0x000D6B3B (107 bytes, 43 insns)
 * Folder: sound (between: 0x000D6A00 and 0x000D6B50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D6AD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D6AE1u); RECOMP_ABI_CALL(0x000D6C70u, sub_000D6C70); /* call 0x000D6C70 */

loc_000D6AE1: ;
    edx = eax;
    eax = ebp;
    PUSH32(esp, 0x000D6AEAu); RECOMP_ABI_CALL(0x000D6C70u, sub_000D6C70); /* call 0x000D6C70 */

loc_000D6AEA: ;
    esi = eax;
    edi = edx;
    ecx = eax;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_000D6B3A; /* je: equal / zero */

loc_000D6B38: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000D6B3A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6B40
 * Original: 0x000D6B40 - 0x000D6B4A (10 bytes, 4 insns)
 * Folder: sound (between: 0x000D6A00 and 0x000D6B50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6B40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6B40: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6B50
 * Original: 0x000D6B50 - 0x000D6C2D (221 bytes, 74 insns)
 * Folder: sound (source: sndreal.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6B50: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6B70; /* jne: not equal / not zero */

loc_000D6B57: ;
    PUSH32(esp, 0x72);
    PUSH32(esp, 0x32A2D4);
    edx = 0x32A2DC;
    ecx = 0x32A2F0;
    PUSH32(esp, 0x000D6B6Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6B6D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6B70: ;
    eax = edi;
    PUSH32(esp, 0x000D6B77u); RECOMP_ABI_CALL(0x000D6C70u, sub_000D6C70); /* call 0x000D6C70 */

loc_000D6B77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6BA3; /* jge: greater or equal (signed >=) */

loc_000D6B7E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6B99; /* jne: not equal / not zero */

loc_000D6B82: ;
    PUSH32(esp, 0x32A2F0);
    eax = 0x7E;
    ecx = 0x32A2D0;
    PUSH32(esp, 0x000D6B96u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D6B96: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6B99: ;
    eax = edi;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D6BA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6BD2; /* jge: greater or equal (signed >=) */

loc_000D6BAA: ;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((8) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6BC8; /* jne: not equal / not zero */

loc_000D6BB1: ;
    PUSH32(esp, 0x32A2F0);
    eax = 0x84;
    ecx = 0x32A2C8;
    PUSH32(esp, 0x000D6BC5u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D6BC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6BC8: ;
    eax = edi;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D6BD2: ;
    eax = esi;
    PUSH32(esp, 0x000D6BD9u); RECOMP_ABI_CALL(0x000D6C70u, sub_000D6C70); /* call 0x000D6C70 */

loc_000D6BD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D6C08; /* jle: less or equal (signed <=) */

loc_000D6BE0: ;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((8) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6BFE; /* jne: not equal / not zero */

loc_000D6BE7: ;
    PUSH32(esp, 0x32A2F0);
    eax = 0x8A;
    ecx = 0x32A2C8;
    PUSH32(esp, 0x000D6BFBu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D6BFB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6BFE: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

loc_000D6C08: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6C23; /* jne: not equal / not zero */

loc_000D6C0C: ;
    PUSH32(esp, 0x32A2F0);
    eax = 0x8E;
    ecx = 0x32A2D0;
    PUSH32(esp, 0x000D6C20u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D6C20: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6C23: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6C30
 * Original: 0x000D6C30 - 0x000D6C6B (59 bytes, 14 insns)
 * Folder: sound (source: sndreal.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6C30: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6C50; /* jne: not equal / not zero */

loc_000D6C34: ;
    PUSH32(esp, 0x9B);
    PUSH32(esp, 0x32A2D4);
    edx = 0x32A2DC;
    ecx = 0x32A2F0;
    PUSH32(esp, 0x000D6C4Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6C4D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6C50: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33381C); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6C70
 * Original: 0x000D6C70 - 0x000D6C77 (7 bytes, 4 insns)
 * Folder: sound (between: 0x000D6C30 and 0x000D6CA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6C70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6C76; /* jge: greater or equal (signed >=) */

loc_000D6C74: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000D6C76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6C80
 * Original: 0x000D6C80 - 0x000D6CA0 (32 bytes, 14 insns)
 * Folder: sound (between: 0x000D6C30 and 0x000D6CA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6C80: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6C93; /* je: equal / zero */

loc_000D6C84: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((8) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = esi & 0xFFFFFF00u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = esi;
    POP32(esp, esi);

loc_000D6C93: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6C9F; /* je: equal / zero */

loc_000D6C97: ;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edx) = eax;

loc_000D6C9F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6CA0
 * Original: 0x000D6CA0 - 0x000D6D89 (233 bytes, 78 insns)
 * Folder: sound (source: sndtimer.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000D6CA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6D6A; /* je: equal / zero */

loc_000D6CAB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000D6D6A; /* je: equal / zero */

loc_000D6CB4: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6CBEu); RECOMP_ABI_CALL(0x00293043u, sub_00293043); /* call 0x00293043 */

loc_000D6CBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D6CE1; /* jne: not equal / not zero */

loc_000D6CC2: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 0x324878);
    edx = 0x32A374;
    ecx = 0x32A398;
    PUSH32(esp, 0x000D6CD8u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6CD8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6CE1: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D6CF0; /* je: equal / zero */

loc_000D6CE8: ;
    esi = MEM32(ebx + 0x10);
    edi = MEM32(ebx + 0x14);
    goto loc_000D6D27;

loc_000D6CF0: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D6CFAu); RECOMP_ABI_CALL(0x00293032u, sub_00293032); /* call 0x00293032 */

loc_000D6CFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D6D1F; /* jne: not equal / not zero */

loc_000D6CFE: ;
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x324878);
    edx = 0x32A374;
    ecx = 0x32A398;
    PUSH32(esp, 0x000D6D14u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6D14: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D6D19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6D1F: ;
    esi = MEM32(esp + 8);
    edi = MEM32(esp + 0xC);

loc_000D6D27: ;
    ecx = MEM32(ebx + 8);
    eax = MEM32(ebx + 0xC);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, 0x10);
    PUSH32(esp, 0x000D6D40u); RECOMP_ABI_CALL(0x0028A970u, sub_0028A970); /* call 0x0028A970 */

loc_000D6D40: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D6D49u); RECOMP_ABI_CALL(0x0028AE80u, sub_0028AE80); /* call 0x0028AE80 */

loc_000D6D49: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFF0000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000D6D19; /* jl: less (signed <) */

loc_000D6D55: ;
    if (CMP_G(_fas, _fbs)) goto loc_000D6D5F; /* jg: greater (signed >) */

loc_000D6D57: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFF0000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000D6D19; /* jbe: below or equal (unsigned <=) */

loc_000D6D5F: ;
    POP32(esp, edi);
    eax = 0xFFFFFFFEu;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6D6A: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x324878);
    edx = 0x32A3C8;
    ecx = 0x32A398;
    PUSH32(esp, 0x000D6D80u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6D80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6CFE
 * Original: 0x000D6CFE - 0x000D6D89 (139 bytes, 47 insns)
 * Folder: sound (source: sndtimer.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6CFE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000D6CFE: ;
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x324878);
    edx = 0x32A374;
    ecx = 0x32A398;
    PUSH32(esp, 0x000D6D14u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6D14: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D6D19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D6D49u); RECOMP_ABI_CALL(0x0028AE80u, sub_0028AE80); /* call 0x0028AE80 */

loc_000D6D49: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFF0000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000D6D19; /* jl: less (signed <) */

loc_000D6D55: ;
    if (CMP_G(_fas, _fbs)) goto loc_000D6D5F; /* jg: greater (signed >) */

loc_000D6D57: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFF0000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000D6D19; /* jbe: below or equal (unsigned <=) */

loc_000D6D5F: ;
    POP32(esp, edi);
    eax = 0xFFFFFFFEu;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6D90
 * Original: 0x000D6D90 - 0x000D6DBF (47 bytes, 18 insns)
 * Folder: sound (between: 0x000D6CFE and 0x000D6DC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6D90: ;
    PUSH32(esp, esi);
    eax = 0x18;
    PUSH32(esp, 0x000D6D9Bu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D6D9B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6DA8; /* jne: not equal / not zero */

loc_000D6DA1: ;
    eax = 0xFFFFFFFEu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D6DA8: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6DB1u); RECOMP_ABI_CALL(0x00293032u, sub_00293032); /* call 0x00293032 */

loc_000D6DB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6DA1; /* je: equal / zero */

loc_000D6DB5: ;
    MEM32(esi) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6DC0
 * Original: 0x000D6DC0 - 0x000D6E1C (92 bytes, 27 insns)
 * Folder: sound (source: sndtimer.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6DC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6DFF; /* je: equal / zero */

loc_000D6DC4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6DFF; /* je: equal / zero */

loc_000D6DC9: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6E1B; /* jne: not equal / not zero */

loc_000D6DCE: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6DD7u); RECOMP_ABI_CALL(0x00293032u, sub_00293032); /* call 0x00293032 */

loc_000D6DD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6DF8; /* jne: not equal / not zero */

loc_000D6DDB: ;
    PUSH32(esp, 0x9A);
    edx = 0x32A33C;
    ecx = 0x32A398;
    PUSH32(esp, 0x324878);
    PUSH32(esp, 0x000D6DF4u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6DF4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6DF8: ;
    MEM32(esi) = 1;
    esp += 4; return; /* ret */

loc_000D6DFF: ;
    PUSH32(esp, 0x91);
    edx = 0x32A35C;
    ecx = 0x32A398;
    PUSH32(esp, 0x324878);
    PUSH32(esp, 0x000D6E18u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6E18: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6E1B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6E20
 * Original: 0x000D6E20 - 0x000D6E9A (122 bytes, 38 insns)
 * Folder: sound (source: sndtimer.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000D6E20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6E7F; /* je: equal / zero */

loc_000D6E27: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000D6E7F; /* je: equal / zero */

loc_000D6E2C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6E96; /* je: equal / zero */

loc_000D6E31: ;
    eax = esp;
    PUSH32(esp, eax);
    MEM32(esi) = 0;
    PUSH32(esp, 0x000D6E40u); RECOMP_ABI_CALL(0x00293032u, sub_00293032); /* call 0x00293032 */

loc_000D6E40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D6E64; /* jne: not equal / not zero */

loc_000D6E44: ;
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x324878);
    edx = 0x32A33C;
    ecx = 0x32A398;
    PUSH32(esp, 0x000D6E5Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6E5D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6E64: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esp);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 4);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 8)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(esi + 8) = MEM32(esi + 8) + ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(esi + 0xC)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 0xC) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6E7F: ;
    PUSH32(esp, 0x32A398);
    eax = 0xB5;
    ecx = 0x324878;
    PUSH32(esp, 0x000D6E93u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D6E93: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6E96: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6EA0
 * Original: 0x000D6EA0 - 0x000D6ECB (43 bytes, 12 insns)
 * Folder: sound (source: sndtimer.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D6EA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6EAE; /* je: equal / zero */

loc_000D6EA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6EAE; /* je: equal / zero */

loc_000D6EA9: ;
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

loc_000D6EAE: ;
    PUSH32(esp, 0xDB);
    PUSH32(esp, 0x324878);
    edx = 0x32A320;
    ecx = 0x32A398;
    PUSH32(esp, 0x000D6EC7u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6EC7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6ED0
 * Original: 0x000D6ED0 - 0x000D6EFD (45 bytes, 19 insns)
 * Folder: sound (between: 0x000D6EA0 and 0x000D6F30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6ED0: ;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x7F;

loc_000D6ED8: ;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax * 4 + 0x33D288)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x33D288), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) esi = eax; /* cmovl */
    if (CMP_GE(_fas, _fbs)) ecx = eax; /* cmovge */
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D6ED8; /* jg: greater (signed >) */

loc_000D6EF9: ;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6F00
 * Original: 0x000D6F00 - 0x000D6F28 (40 bytes, 15 insns)
 * Folder: sound (between: 0x000D6EA0 and 0x000D6F30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6F00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x000D6F09u); RECOMP_ABI_CALL(0x000D6ED0u, sub_000D6ED0); /* call 0x000D6ED0 */

loc_000D6F09: ;
    esi = eax;
    eax = MEM32(esi * 8 + 0x33D488);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6F19u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000D6F19: ;
    ecx = MEM32(esi * 8 + 0x33D48C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6F30
 * Original: 0x000D6F30 - 0x000D6F6E (62 bytes, 20 insns)
 * Folder: sound (source: sndVolume.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6F30: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFA00000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6F3F; /* jl: less (signed <) */

loc_000D6F3B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D6F58; /* jle: less or equal (signed <=) */

loc_000D6F3F: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 0x32A648);
    edx = 0x32A6C0;
    ecx = 0x32A68C;
    PUSH32(esp, 0x000D6F55u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6F55: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6F58: ;
    eax = esi;
    PUSH32(esp, 0x000D6F5Fu); RECOMP_ABI_CALL(0x000D6F00u, sub_000D6F00); /* call 0x000D6F00 */

loc_000D6F5F: ;
    esi = MEM32(esp + 8);
    ecx = 0x19;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6F70
 * Original: 0x000D6F70 - 0x000D6FA0 (48 bytes, 14 insns)
 * Folder: sound (source: sndVolume.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6F70: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFA00000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6F7C; /* jl: less (signed <) */

loc_000D6F78: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D6F95; /* jle: less or equal (signed <=) */

loc_000D6F7C: ;
    PUSH32(esp, 0x4B);
    PUSH32(esp, 0x32A648);
    edx = 0x32A604;
    ecx = 0x32A68C;
    PUSH32(esp, 0x000D6F92u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6F92: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6F95: ;
    eax = esi;
    PUSH32(esp, 0x000D6F9Cu); RECOMP_ABI_CALL(0x000D6F00u, sub_000D6F00); /* call 0x000D6F00 */

loc_000D6F9C: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6FA0
 * Original: 0x000D6FA0 - 0x000D6FCD (45 bytes, 19 insns)
 * Folder: sound (between: 0x000D6F70 and 0x000D7010)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6FA0: ;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x80;

loc_000D6FA8: ;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax * 4 + 0x33D888)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x33D888), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) esi = eax; /* cmovle */
    if (CMP_G(_fas, _fbs)) ecx = eax; /* cmovg */
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D6FA8; /* jg: greater (signed >) */

loc_000D6FC9: ;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6FD0
 * Original: 0x000D6FD0 - 0x000D7004 (52 bytes, 18 insns)
 * Folder: sound (between: 0x000D6F70 and 0x000D7010)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6FD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x000D6FD9u); RECOMP_ABI_CALL(0x000D6FA0u, sub_000D6FA0); /* call 0x000D6FA0 */

loc_000D6FD9: ;
    esi = eax;
    eax = MEM32(esi * 8 + 0x33DA88);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6FE9u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000D6FE9: ;
    edx = MEM32(esi * 8 + 0x33DA8C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_000D7003; /* jge: greater or equal (signed >=) */

loc_000D6FFE: ;
    eax = 0xFFA00000u;

loc_000D7003: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7010
 * Original: 0x000D7010 - 0x000D703F (47 bytes, 12 insns)
 * Folder: sound (source: sndVolume.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7010: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D701C; /* jl: less (signed <) */

loc_000D7014: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x640000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x640000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D7038; /* jle: less or equal (signed <=) */

loc_000D701C: ;
    PUSH32(esp, 0x179);
    PUSH32(esp, 0x32A578);
    edx = 0x32A5C8;
    ecx = 0x32A68C;
    PUSH32(esp, 0x000D7035u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7035: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7038: ;
    eax = esi;
    g_seh_ebp = ebp; sub_000D6FD0(); return; /* tail jmp 0x000D6FD0 */

}

/**
 * sub_000D7040
 * Original: 0x000D7040 - 0x000D715D (285 bytes, 102 insns)
 * Folder: sound (source: sndVolume.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7040: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000D7058; /* jl: less (signed <) */

loc_000D7050: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D7074; /* jle: less or equal (signed <=) */

loc_000D7058: ;
    PUSH32(esp, 0x196);
    PUSH32(esp, 0x32A520);
    edx = 0x32A540;
    ecx = 0x32A68C;
    PUSH32(esp, 0x000D7071u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7071: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7074: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFA00000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D7084; /* jl: less (signed <) */

loc_000D7080: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D70A0; /* jle: less or equal (signed <=) */

loc_000D7084: ;
    PUSH32(esp, 0x197);
    PUSH32(esp, 0x32A4A0);
    edx = 0x32A4E0;
    ecx = 0x32A68C;
    PUSH32(esp, 0x000D709Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D709D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D70A0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFA00000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D70AC; /* jl: less (signed <) */

loc_000D70A8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D70C8; /* jle: less or equal (signed <=) */

loc_000D70AC: ;
    PUSH32(esp, 0x198);
    PUSH32(esp, 0x32A428);
    edx = 0x32A464;
    ecx = 0x32A68C;
    PUSH32(esp, 0x000D70C5u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D70C5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D70C8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D70D3; /* jne: not equal / not zero */

loc_000D70CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D70D3: ;
    if (CMP_GE(_fas, _fbs)) goto loc_000D70D9; /* jge: greater or equal (signed >=) */

loc_000D70D5: ;
    eax = ebx;
    goto loc_000D70E0;

loc_000D70D9: ;
    eax = 0x10000;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000D70E0: ;
    PUSH32(esp, 0x000D70E5u); RECOMP_ABI_CALL(0x000D7160u, sub_000D7160); /* call 0x000D7160 */

loc_000D70E5: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x000D70ECu); RECOMP_ABI_CALL(0x000D6F30u, sub_000D6F30); /* call 0x000D6F30 */

loc_000D70EC: ;
    ebx = eax;
    PUSH32(esp, 0x11);
    eax = esi;
    PUSH32(esp, 0x000D70F7u); RECOMP_ABI_CALL(0x000D6F30u, sub_000D6F30); /* call 0x000D6F30 */

loc_000D70F7: ;
    esi = eax;
    PUSH32(esp, 0x11);
    eax = ebp;
    PUSH32(esp, 0x000D7102u); RECOMP_ABI_CALL(0x000D6F30u, sub_000D6F30); /* call 0x000D6F30 */

loc_000D7102: ;
    edi = eax;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D711F; /* jge: greater or equal (signed >=) */

loc_000D710F: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D7118u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000D7118: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D712D;

loc_000D711F: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D7128u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000D7128: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D712D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D7142; /* jge: greater or equal (signed >=) */

loc_000D7131: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x64);
    PUSH32(esp, 0x000D713Du); RECOMP_ABI_CALL(0x000D7010u, sub_000D7010); /* call 0x000D7010 */

loc_000D713D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D7142: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D714E; /* jle: less or equal (signed <=) */

loc_000D7149: ;
    eax = 0x10000;

loc_000D714E: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x64);
    PUSH32(esp, 0x000D7158u); RECOMP_ABI_CALL(0x000D7010u, sub_000D7010); /* call 0x000D7010 */

loc_000D7158: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7160
 * Original: 0x000D7160 - 0x000D7223 (195 bytes, 51 insns)
 * Folder: sound (source: sndVolume.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7160: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D7183; /* jge: greater or equal (signed >=) */

loc_000D7167: ;
    PUSH32(esp, 0x1D1);
    PUSH32(esp, 0x32A3FC);
    edx = 0x32A410;
    ecx = 0x32A68C;
    PUSH32(esp, 0x000D7180u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7180: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7183: ;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((9) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_000D7195; /* jl: less (signed <) */

loc_000D7190: ;
    eax = 0x7F;

loc_000D7195: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D7201; /* ja: above (unsigned >) */

loc_000D719A: ;
    { uint32_t _jt = MEM32(edi * 4 + 0xD7224); /* switch: 12 entries, 12 targets */
    if (_jt == 0x000D71A1u) goto loc_000D71A1;
    if (_jt == 0x000D71A9u) goto loc_000D71A9;
    if (_jt == 0x000D71B1u) goto loc_000D71B1;
    if (_jt == 0x000D71B9u) goto loc_000D71B9;
    if (_jt == 0x000D71C1u) goto loc_000D71C1;
    if (_jt == 0x000D71C9u) goto loc_000D71C9;
    if (_jt == 0x000D71D1u) goto loc_000D71D1;
    if (_jt == 0x000D71D9u) goto loc_000D71D9;
    if (_jt == 0x000D71E1u) goto loc_000D71E1;
    if (_jt == 0x000D71E9u) goto loc_000D71E9;
    if (_jt == 0x000D71F1u) goto loc_000D71F1;
    if (_jt == 0x000D71F9u) goto loc_000D71F9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D71A1: ;
    eax = MEM32(eax * 4 + 0x33DE88);
    esp += 4; return; /* ret */

loc_000D71A9: ;
    eax = MEM32(eax * 4 + 0x33E088);
    esp += 4; return; /* ret */

loc_000D71B1: ;
    eax = MEM32(eax * 4 + 0x33E288);
    esp += 4; return; /* ret */

loc_000D71B9: ;
    eax = MEM32(eax * 4 + 0x33E488);
    esp += 4; return; /* ret */

loc_000D71C1: ;
    eax = MEM32(eax * 4 + 0x33E688);
    esp += 4; return; /* ret */

loc_000D71C9: ;
    eax = MEM32(eax * 4 + 0x33E888);
    esp += 4; return; /* ret */

loc_000D71D1: ;
    eax = MEM32(eax * 4 + 0x33EA88);
    esp += 4; return; /* ret */

loc_000D71D9: ;
    eax = MEM32(eax * 4 + 0x33EC88);
    esp += 4; return; /* ret */

loc_000D71E1: ;
    eax = MEM32(eax * 4 + 0x33EE88);
    esp += 4; return; /* ret */

loc_000D71E9: ;
    eax = MEM32(eax * 4 + 0x33F088);
    esp += 4; return; /* ret */

loc_000D71F1: ;
    eax = MEM32(eax * 4 + 0x33F288);
    esp += 4; return; /* ret */

loc_000D71F9: ;
    eax = MEM32(eax * 4 + 0x33F488);
    esp += 4; return; /* ret */

loc_000D7201: ;
    PUSH32(esp, 0x1FD);
    PUSH32(esp, 0x324878);
    edx = 0x32A3E4;
    ecx = 0x32A68C;
    PUSH32(esp, 0x000D721Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D721A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFA00000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7260
 * Original: 0x000D7260 - 0x000D7271 (17 bytes, 6 insns)
 * Folder: sound (between: 0x000D7160 and 0x000D72F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7260: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D7267u); RECOMP_ABI_CALL(0x0028C2DEu, sub_0028C2DE); /* call 0x0028C2DE */

loc_000D7267: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D726Du); RECOMP_ABI_CALL(0x0028B459u, sub_0028B459); /* call 0x0028B459 */

loc_000D726D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7280
 * Original: 0x000D7280 - 0x000D729E (30 bytes, 9 insns)
 * Folder: sound (between: 0x000D7160 and 0x000D72F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7280: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D7286u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000D7286: ;
    PUSH32(esp, eax);
    esi = 0x7FFF;
    PUSH32(esp, 0x000D7291u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000D7291: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D6B40(); return; /* tail jmp 0x000D6B40 */

}

/**
 * sub_000D72A0
 * Original: 0x000D72A0 - 0x000D72CA (42 bytes, 13 insns)
 * Folder: sound (between: 0x000D7160 and 0x000D72F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D72A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D72A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x333818)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x28) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 4) = ecx;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000D72D0
 * Original: 0x000D72D0 - 0x000D72E5 (21 bytes, 7 insns)
 * Folder: sound (between: 0x000D7160 and 0x000D72F0)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D72D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D72D0: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D72E4; /* je: equal / zero */

loc_000D72D7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D72DDu); RECOMP_ABI_CALL(0x002EA19Du, sub_002EA19D); /* call 0x002EA19D */

loc_000D72DD: ;
    MEM32(esi + 0x28) = 0;

loc_000D72E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D72F0
 * Original: 0x000D72F0 - 0x000D732A (58 bytes, 21 insns)
 * Folder: sound (source: DSBufferEx.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D72F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D72F0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D730D; /* je: equal / zero */

loc_000D72F4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D730D; /* jbe: below or equal (unsigned <=) */

loc_000D72F8: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D730D; /* je: equal / zero */

loc_000D72FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = esi;
    PUSH32(esp, 0x000D730Cu); RECOMP_ABI_CALL(0x002EBF0Cu, sub_002EBF0C); /* call 0x002EBF0C */

loc_000D730C: ;
    esp += 4; return; /* ret */

loc_000D730D: ;
    PUSH32(esp, 0x32A770);
    eax = 0x4B;
    ecx = 0x324878;
    PUSH32(esp, 0x000D7321u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D7321: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x80004005u;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7330
 * Original: 0x000D7330 - 0x000D7380 (80 bytes, 31 insns)
 * Folder: sound (source: DSBufferEx.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7330: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7362; /* je: equal / zero */

loc_000D7338: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D7362; /* jbe: below or equal (unsigned <=) */

loc_000D733F: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7362; /* je: equal / zero */

loc_000D7346: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7350u); RECOMP_ABI_CALL(0x002EBF0Cu, sub_002EBF0C); /* call 0x002EBF0C */

loc_000D7350: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    esi = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D7360u); RECOMP_ABI_CALL(0x002EBF0Cu, sub_002EBF0C); /* call 0x002EBF0C */

loc_000D7360: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D7362: ;
    PUSH32(esp, 0x32A770);
    eax = 0x59;
    ecx = 0x324878;
    PUSH32(esp, 0x000D7376u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D7376: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x80004005u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7380
 * Original: 0x000D7380 - 0x000D7414 (148 bytes, 65 insns)
 * Folder: sound (source: DSBufferEx.cpp)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7380: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D73F0; /* ja: above (unsigned >) */

loc_000D7392: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D73F0; /* jbe: below or equal (unsigned <=) */

loc_000D7396: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D73F0; /* ja: above (unsigned >) */

loc_000D739A: ;
    ebp = MEM32(esi + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D73F0; /* je: equal / zero */

loc_000D73A1: ;
    esi = MEM32(esi);
    ebp = esi + edx;
    MEM32(esp + 0x10) = ebp;
    ebp = edx + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D73BB; /* jbe: below or equal (unsigned <=) */

loc_000D73B1: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esi;
    ebx = ecx;
    goto loc_000D73BD;

loc_000D73BB: ;
    eax = ecx;

loc_000D73BD: ;
    esi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = esi + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D73D4u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D73D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D73E6; /* je: equal / zero */

loc_000D73DB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D73E3u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D73E3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D73E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D73F0: ;
    PUSH32(esp, 0x32A770);
    eax = 0x7D;
    ecx = 0x324878;
    PUSH32(esp, 0x000D7404u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D7404: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x80004005u;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D7420
 * Original: 0x000D7420 - 0x000D7462 (66 bytes, 24 insns)
 * Folder: sound (between: 0x000D7380 and 0x000D7650)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7420: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edi = esp + 0xC;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D7435u); RECOMP_ABI_CALL(0x000D6950u, sub_000D6950); /* call 0x000D6950 */

loc_000D7435: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D743Fu); RECOMP_ABI_CALL(0x000CBE30u, sub_000CBE30); /* call 0x000CBE30 */

loc_000D743F: ;
    edx = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D744Bu); RECOMP_ABI_CALL(0x000CBE30u, sub_000CBE30); /* call 0x000CBE30 */

loc_000D744B: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000D745Au); RECOMP_ABI_CALL(0x000D7580u, sub_000D7580); /* call 0x000D7580 */

loc_000D745A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D7470
 * Original: 0x000D7470 - 0x000D7482 (18 bytes, 8 insns)
 * Folder: sound (between: 0x000D7380 and 0x000D7650)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7470(void)
{

loc_000D7470: ;
    PUSH32(esp, ecx);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(eax + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7481u); RECOMP_ABI_CALL(0x002EB09Au, sub_002EB09A); /* call 0x002EB09A */

loc_000D7481: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7490
 * Original: 0x000D7490 - 0x000D74E3 (83 bytes, 25 insns)
 * Folder: sound (between: 0x000D7380 and 0x000D7650)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000D7490: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x10) = ecx;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(esp + 0x14) = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x251C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFD8F0u)) >> 32) & 1);
    eax = eax + 0xFFFFD8F0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x2C);
    edx = esp + 4;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D74DDu); RECOMP_ABI_CALL(0x002EB9D6u, sub_002EB9D6); /* call 0x002EB9D6 */

loc_000D74DD: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D74F0
 * Original: 0x000D74F0 - 0x000D750A (26 bytes, 12 insns)
 * Folder: sound (between: 0x000D7380 and 0x000D7650)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D74F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D74F0: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7509; /* je: equal / zero */

loc_000D74F7: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7509; /* je: equal / zero */

loc_000D74FE: ;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7509u); RECOMP_ABI_CALL(0x002EB09Au, sub_002EB09A); /* call 0x002EB09A */

loc_000D7509: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7510
 * Original: 0x000D7510 - 0x000D757B (107 bytes, 30 insns)
 * Folder: sound (between: 0x000D7380 and 0x000D7650)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7510: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = 1;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D755A; /* je: equal / zero */

loc_000D752D: ;
    MEM32(esp + 0x1C) = eax;
    eax = esp + 8;
    edx = esp;
    MEM32(esp + 4) = eax;
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 8) = 3;
    MEM32(esp + 0x20) = 0xA;
    PUSH32(esp, 0x000D7556u); RECOMP_ABI_CALL(0x002EB908u, sub_002EB908); /* call 0x002EB908 */

loc_000D7556: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D755A: ;
    ecx = MEM32(ecx + 0x28);
    eax = esp;
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = 2;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x000D7577u); RECOMP_ABI_CALL(0x002EB908u, sub_002EB908); /* call 0x002EB908 */

loc_000D7577: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7580
 * Original: 0x000D7580 - 0x000D75C2 (66 bytes, 16 insns)
 * Folder: sound (between: 0x000D7380 and 0x000D7650)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7580: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 8;
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 0x28);
    MEM32(esp + 0xC) = ecx;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 8) = 2;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x18) = 1;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x000D75BCu); RECOMP_ABI_CALL(0x002EB042u, sub_002EB042); /* call 0x002EB042 */

loc_000D75BC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D75D0
 * Original: 0x000D75D0 - 0x000D7641 (113 bytes, 37 insns)
 * Folder: sound (between: 0x000D7380 and 0x000D7650)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D75D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D75D0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca >= _fcb)) goto loc_000D7615; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_000D75DC: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x333818); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000D7615; /* jnp: not parity */

loc_000D75E9: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D75F8u); RECOMP_ABI_CALL(0x002EB924u, sub_002EB924); /* call 0x002EB924 */

loc_000D75F8: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7607u); RECOMP_ABI_CALL(0x002EB948u, sub_002EB948); /* call 0x002EB948 */

loc_000D7607: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D7615: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D7624u); RECOMP_ABI_CALL(0x002EB948u, sub_002EB948); /* call 0x002EB948 */

loc_000D7624: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D7633u); RECOMP_ABI_CALL(0x002EB924u, sub_002EB924); /* call 0x002EB924 */

loc_000D7633: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D7650
 * Original: 0x000D7650 - 0x000D7817 (455 bytes, 139 insns)
 * Folder: sound (source: sndxdmic.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D7650: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5F8C9C);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(MEM32(0x64D810)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D810), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D767D; /* je: equal / zero */

loc_000D7664: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x32AC14);
    edx = 0x32AC5C;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D767Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D767A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D767D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D76A1; /* jne: not equal / not zero */

loc_000D7681: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x32ABF8);
    edx = 0x32AC00;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D7697u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7697: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D76A1: ;
    eax = MEM32(edi);
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(0x333830)); /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    xmm4.f[0] = (float)(int32_t)MEM32(esi + 0x20); /* cvtsi2ss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(edi + 8);
    edi = MEM32(esi + 8);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm4.f[0] = (float)(int32_t)MEM32(esi + 0x18); /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm4.f[0] = (float)(int32_t)MEM32(esi + 0x28); /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3.f[0] = (float)(int32_t)MEM32(esi + 0x2C); /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = (float)(int32_t)MEM32(esi + 0x24); /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D7773; /* jp: parity */

loc_000D7741: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000D7781; /* jnp: not parity */

loc_000D774A: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D7761; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm5.f[0]) */

loc_000D774F: ;
    xmm0 = XMM_SCALAR(MEMF(0x33382C)); /* movss */
    POP32(esp, edi);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D7761: ;
    xmm0 = XMM_SCALAR(MEMF(0x333828)); /* movss */
    POP32(esp, edi);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D7773: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D77A0; /* jp: parity */

loc_000D777C: ;
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D778E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm5.f[0]) */

loc_000D7781: ;
    POP32(esp, edi);
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D778E: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    POP32(esp, edi);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D77A0: ;
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    PUSH32(esp, 0x000D77ACu); RECOMP_ABI_CALL(0x000DD370u, sub_000DD370); /* call 0x000DD370 */

loc_000D77AC: ;
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D77CA; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm0.f[0]) */

loc_000D77BF: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000D77D9; /* ja: above (unsigned >) (xmm4.f[0] vs xmm5.f[0]) */

loc_000D77C4: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    goto loc_000D77E1;

loc_000D77CA: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D77D4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_000D77CF: ;
    _fca = xmm5.f[0]; _fcb = xmm4.f[0]; /* comiss */
    goto loc_000D77D7;

loc_000D77D4: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */

loc_000D77D7: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D77E7; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm5.f[0]) */

loc_000D77D9: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3337D8); /* addss */

loc_000D77E1: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_000D77E7: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D77F1; /* jb: below (unsigned <) (xmm0.f[0] vs xmm5.f[0]) */

loc_000D77EC: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000D780D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D77F1: ;
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x32ABC4);
    edx = 0x32ABE8;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D780Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D780A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D780D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7820
 * Original: 0x000D7820 - 0x000D78DB (187 bytes, 60 insns)
 * Folder: sound (source: sndxdmic.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7820: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D7846; /* jne: not equal / not zero */

loc_000D782A: ;
    PUSH32(esp, 0xBE);
    PUSH32(esp, 0x32AB68);
    edx = 0x32AB80;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D7843u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7843: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7846: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7866; /* jne: not equal / not zero */

loc_000D784A: ;
    PUSH32(esp, 0xBF);
    PUSH32(esp, 0x32AB04);
    edx = 0x32AB20;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D7863u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7863: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7866: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D78A5; /* je: equal / zero */

loc_000D786F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D789C; /* je: equal / zero */

loc_000D7872: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D7893; /* je: equal / zero */

loc_000D7875: ;
    PUSH32(esp, 0xCE);
    PUSH32(esp, 0x324878);
    edx = 0x32AAD0;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D788Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D788E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D78AC;

loc_000D7893: ;
    MEM32(esi + 8) = 2;
    goto loc_000D78AC;

loc_000D789C: ;
    MEM32(esi + 8) = 1;
    goto loc_000D78AC;

loc_000D78A5: ;
    MEM32(esi + 8) = 0;

loc_000D78AC: ;
    _fa = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x24), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D78BA; /* je: equal / zero */

loc_000D78B2: ;
    PUSH32(esp, 0x000D78B7u); RECOMP_ABI_CALL(0x000D7990u, sub_000D7990); /* call 0x000D7990 */

loc_000D78B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D78BA: ;
    eax = MEM32(0x64D810);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D78CD; /* jne: not equal / not zero */

loc_000D78C3: ;
    eax = edi;
    PUSH32(esp, 0x000D78CAu); RECOMP_ABI_CALL(0x000D7A40u, sub_000D7A40); /* call 0x000D7A40 */

loc_000D78CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D78CD: ;
    PUSH32(esp, esi);
    esi = edi;
    PUSH32(esp, 0x000D78D5u); RECOMP_ABI_CALL(0x000D7B10u, sub_000D7B10); /* call 0x000D7B10 */

loc_000D78D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D78E0
 * Original: 0x000D78E0 - 0x000D7984 (164 bytes, 54 insns)
 * Folder: sound (source: sndxdmic.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D78E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D78E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000D7908; /* jne: not equal / not zero */

loc_000D78EC: ;
    PUSH32(esp, 0x112);
    PUSH32(esp, 0x32AA74);
    edx = 0x32AA88;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D7905u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7905: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7908: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D792C; /* jne: not equal / not zero */

loc_000D7910: ;
    PUSH32(esp, 0x113);
    PUSH32(esp, 0x32AA14);
    edx = 0x32AA28;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D7929u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7929: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D792C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7945; /* je: equal / zero */

loc_000D7930: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7945; /* jne: not equal / not zero */

loc_000D7936: ;
    ecx = esi;
    PUSH32(esp, 0x000D793Du); RECOMP_ABI_CALL(0x000D5D70u, sub_000D5D70); /* call 0x000D5D70 */

loc_000D793D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D7945; /* jbe: below or equal (unsigned <=) */

loc_000D7943: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D7945: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7952; /* jne: not equal / not zero */

loc_000D794A: ;
    _fa = (uint32_t)(MEM8(ebp + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x24), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D7952; /* je: equal / zero */

loc_000D7950: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D7952: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000D795Eu); RECOMP_ABI_CALL(0x000D7820u, sub_000D7820); /* call 0x000D7820 */

loc_000D795E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_000D7983; /* je: equal / zero */

loc_000D7967: ;
    ecx = esi;
    PUSH32(esp, 0x000D796Eu); RECOMP_ABI_CALL(0x000D5D70u, sub_000D5D70); /* call 0x000D5D70 */

loc_000D796E: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D7983; /* jbe: below or equal (unsigned <=) */

loc_000D7974: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7983; /* jne: not equal / not zero */

loc_000D797B: ;
    eax = MEM32(esp + 8);
    MEM8(eax + 0xC) = 0x40;

loc_000D7983: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7990
 * Original: 0x000D7990 - 0x000D7A37 (167 bytes, 49 insns)
 * Folder: sound (source: sndxdmic.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7990: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D79AB; /* jne: not equal / not zero */

loc_000D7994: ;
    PUSH32(esp, 0x32AC28);
    eax = 0x208;
    ecx = 0x32AB68;
    PUSH32(esp, 0x000D79A8u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D79A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D79AB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D79C6; /* jne: not equal / not zero */

loc_000D79AF: ;
    PUSH32(esp, 0x32AC28);
    eax = 0x209;
    ecx = 0x32AB04;
    PUSH32(esp, 0x000D79C3u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D79C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D79C6: ;
    _fa = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x24), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D79E8; /* jne: not equal / not zero */

loc_000D79CC: ;
    PUSH32(esp, 0x20A);
    PUSH32(esp, 0x32A9A0);
    edx = 0x32A9D8;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D79E5u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D79E5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D79E8: ;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi);
    MEM32(esi) = ecx;
    if ((_fa == 0)) goto loc_000D7A30; /* je: equal / zero */

loc_000D79FA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D7A25; /* je: equal / zero */

loc_000D79FD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D7A1D; /* je: equal / zero */

loc_000D7A00: ;
    PUSH32(esp, 0x21C);
    PUSH32(esp, 0x324878);
    edx = 0x32A960;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D7A19u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7A19: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D7A1D: ;
    MEM32(esi + 0xC) = 0;
    esp += 4; return; /* ret */

loc_000D7A25: ;
    SET_LO8(edx, MEM8(edi + 8));
    MEM8(esi + 0xC) = LO8(edx);
    MEM8(esi + 0xD) = 0;
    esp += 4; return; /* ret */

loc_000D7A30: ;
    SET_LO8(eax, MEM8(edi + 8));
    MEM8(esi + 0xC) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7A40
 * Original: 0x000D7A40 - 0x000D7B09 (201 bytes, 52 insns)
 * Folder: sound (source: sndxdmic.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7A40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7A5B; /* jne: not equal / not zero */

loc_000D7A44: ;
    PUSH32(esp, 0x32AC28);
    eax = 0x239;
    ecx = 0x32AB68;
    PUSH32(esp, 0x000D7A58u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D7A58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7A5B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7A76; /* jne: not equal / not zero */

loc_000D7A5F: ;
    PUSH32(esp, 0x32AC28);
    eax = 0x23A;
    ecx = 0x32AB04;
    PUSH32(esp, 0x000D7A73u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D7A73: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7A76: ;
    eax = MEM32(0x64D810);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7A9B; /* je: equal / zero */

loc_000D7A7F: ;
    PUSH32(esp, 0x23B);
    PUSH32(esp, 0x32A918);
    edx = 0x32A928;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D7A98u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7A98: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7A9B: ;
    eax = MEM32(0x64EE74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x10000;
    if (CMP_NE(_fa, _fb)) goto loc_000D7ACD; /* jne: not equal / not zero */

loc_000D7AB1: ;
    PUSH32(esp, 0x32A8E4);
    edx = 8;
    MEM32(0x64EE74) = 1;
    PUSH32(esp, 0x000D7ACAu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D7ACA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7ACD: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D7B04; /* je: equal / zero */

loc_000D7AD5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D7B00; /* je: equal / zero */

loc_000D7AD8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D7AF8; /* je: equal / zero */

loc_000D7ADB: ;
    PUSH32(esp, 0x254);
    PUSH32(esp, 0x324878);
    edx = 0x32A8A4;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D7AF4u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7AF4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D7AF8: ;
    MEM32(esi + 0xC) = 0;
    esp += 4; return; /* ret */

loc_000D7B00: ;
    MEM8(esi + 0xD) = 0;

loc_000D7B04: ;
    MEM8(esi + 0xC) = 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7B10
 * Original: 0x000D7B10 - 0x000D7D72 (610 bytes, 191 insns)
 * Folder: sound (source: sndxdmic.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7B10: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7B32; /* jne: not equal / not zero */

loc_000D7B1B: ;
    PUSH32(esp, 0x32AC28);
    eax = 0x271;
    ecx = 0x32AB68;
    PUSH32(esp, 0x000D7B2Fu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D7B2F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7B32: ;
    ebx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7B51; /* jne: not equal / not zero */

loc_000D7B3A: ;
    PUSH32(esp, 0x32AC28);
    eax = 0x272;
    ecx = 0x32AB04;
    PUSH32(esp, 0x000D7B4Eu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D7B4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7B51: ;
    eax = MEM32(0x64D810);
    PUSH32(esp, edi);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7B7C; /* je: equal / zero */

loc_000D7B60: ;
    PUSH32(esp, 0x273);
    PUSH32(esp, 0x32AC14);
    edx = 0x32A86C;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D7B79u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7B79: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7B7C: ;
    _fa = (uint32_t)(MEM32(0x5F8CA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F8CA4), edi (32-bit) */
    MEM8(esp + 0xE) = 0x40;
    MEM8(esp + 0xF) = 0;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = 0x10000;
    MEM32(esp + 0x18) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_000D7BBA; /* jle: less or equal (signed <=) */

loc_000D7B9E: ;
    PUSH32(esp, 0x27E);
    PUSH32(esp, 0x32A800);
    edx = 0x32A840;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D7BB7u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7BB7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7BBA: ;
    ebp = MEM32(0x5F8C9C);
    eax = MEM32(ebp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7CE7; /* jne: not equal / not zero */

loc_000D7BCB: ;
    ecx = MEM32(esi + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D7BE3; /* jle: less or equal (signed <=) */

loc_000D7BD4: ;
    edx = esi + 0x2C;

loc_000D7BD7: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7BE3; /* je: equal / zero */

loc_000D7BDB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D7BD7; /* jl: less (signed <) */

loc_000D7BE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D7CE7; /* jge: greater or equal (signed >=) */

loc_000D7BEB: ;
    ecx = MEM32(esi + eax * 8 + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7CE7; /* je: equal / zero */

loc_000D7BF7: ;
    ecx = MEM32(ebp);
    eax = MEM32(esi + 0xC);
    edx = MEM32(ebp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x10);
    edi = esi + 0xC;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x14);
    MEM32(esp + 0x20) = ecx;
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x000D7C25u); RECOMP_ABI_CALL(0x000DA340u, sub_000DA340); /* call 0x000DA340 */

loc_000D7C25: ;
    ecx = eax;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D7C37; /* je: equal / zero */

loc_000D7C2D: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0x000D7C35u); RECOMP_ABI_CALL(0x000D6560u, sub_000D6560); /* call 0x000D6560 */

loc_000D7C35: ;
    goto loc_000D7C40;

loc_000D7C37: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D7C3Du); RECOMP_ABI_CALL(0x000D6460u, sub_000D6460); /* call 0x000D6460 */

loc_000D7C3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7C40: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D7CB0; /* je: equal / zero */

loc_000D7C4C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D7C89; /* je: equal / zero */

loc_000D7C4F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D7C70; /* je: equal / zero */

loc_000D7C52: ;
    PUSH32(esp, 0x2AA);
    PUSH32(esp, 0x324878);
    edx = 0x32A7C0;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D7C6Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7C6B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D7CC9;

loc_000D7C70: ;
    eax = edi;
    PUSH32(esp, 0x000D7C77u); RECOMP_ABI_CALL(0x000D7650u, sub_000D7650); /* call 0x000D7650 */

loc_000D7C77: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333B60); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esp + 0x18) = eax;
    goto loc_000D7CC9;

loc_000D7C89: ;
    eax = ebp + 0x18;
    ebx = ebp + 0x24;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000D7C97u); RECOMP_ABI_CALL(0x000D6770u, sub_000D6770); /* call 0x000D6770 */

loc_000D7C97: ;
    MEM8(esp + 0x12) = LO8(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebp + 0x18;
    eax = ebp;
    ecx = edi;
    PUSH32(esp, 0x000D7CAAu); RECOMP_ABI_CALL(0x000D6870u, sub_000D6870); /* call 0x000D6870 */

loc_000D7CAA: ;
    MEM8(esp + 0xF) = LO8(eax);
    goto loc_000D7CC5;

loc_000D7CB0: ;
    ebx = ebp + 0x24;
    eax = ebp + 0x18;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000D7CBEu); RECOMP_ABI_CALL(0x000D6770u, sub_000D6770); /* call 0x000D6770 */

loc_000D7CBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0xE) = LO8(eax);

loc_000D7CC5: ;
    ebx = MEM32(esp + 0x2C);

loc_000D7CC9: ;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D7CE7; /* jne: not equal / not zero */

loc_000D7CCF: ;
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    eax = ebp;
    ecx = edi;
    PUSH32(esp, 0x000D7CE0u); RECOMP_ABI_CALL(0x000D6670u, sub_000D6670); /* call 0x000D6670 */

loc_000D7CE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;

loc_000D7CE7: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D7CF4u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000D7CF4: ;
    MEM32(ebx) = eax;
    edx = MEM32(esi + 4);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    MEM32(ebx + 4) = eax;
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_000D7D14; /* jge: greater or equal (signed >=) */

loc_000D7D0D: ;
    MEM32(ebx + 4) = 0xFFA00000u;

loc_000D7D14: ;
    eax = MEM32(ebx + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D7D65; /* je: equal / zero */

loc_000D7D1C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D7D51; /* je: equal / zero */

loc_000D7D1F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D7D44; /* je: equal / zero */

loc_000D7D22: ;
    PUSH32(esp, 0x2C8);
    PUSH32(esp, 0x324878);
    edx = 0x32A7C0;
    ecx = 0x32AC28;
    PUSH32(esp, 0x000D7D3Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D7D3B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D7D44: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, ebp);
    MEM32(ebx + 0xC) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D7D51: ;
    SET_LO8(edx, MEM8(esp + 0xA));
    SET_LO8(eax, MEM8(esp + 0xB));
    POP32(esp, ebp);
    MEM8(ebx + 0xC) = LO8(edx);
    MEM8(ebx + 0xD) = LO8(eax);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D7D65: ;
    SET_LO8(ecx, MEM8(esp + 0xA));
    POP32(esp, ebp);
    MEM8(ebx + 0xC) = LO8(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7D80
 * Original: 0x000D7D80 - 0x000D7E47 (199 bytes, 72 insns)
 * Folder: sound (between: 0x000D7B10 and 0x000D8030)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7D80: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, ebx);
    ebx = 0xFFA00000u;
    if (TEST_Z(_fa, _fb)) goto loc_000D7D97; /* je: equal / zero */

loc_000D7D90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D7D97: ;
    eax = MEM32(0x64D810);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7E40; /* je: equal / zero */

loc_000D7DA4: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x5F8C9C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7E3F; /* je: equal / zero */

loc_000D7DB3: ;
    PUSH32(esp, edi);

loc_000D7DB4: ;
    ecx = MEM32(ebp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = 0xFFA00000u;
    if (CMP_NE(_fa, _fb)) goto loc_000D7E2E; /* jne: not equal / not zero */

loc_000D7DC0: ;
    edx = MEM32(esi + 0x28);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D7DDC; /* jle: less or equal (signed <=) */

loc_000D7DC9: ;
    edi = esi + 0x2C;
    /* nop */

loc_000D7DD0: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7DDC; /* je: equal / zero */

loc_000D7DD4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D7DD0; /* jl: less (signed <) */

loc_000D7DDC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D7E2E; /* jge: greater or equal (signed >=) */

loc_000D7DE0: ;
    edx = MEM32(esi + ecx * 8 + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7E2E; /* je: equal / zero */

loc_000D7DE8: ;
    edx = MEM32(ebp + 4);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0xC);
    edi = MEM32(ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x14);
    MEM32(esp + 0x10) = ecx;
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x000D7E13u); RECOMP_ABI_CALL(0x000DA340u, sub_000DA340); /* call 0x000DA340 */

loc_000D7E13: ;
    ecx = eax;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D7E25; /* je: equal / zero */

loc_000D7E1B: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0x000D7E23u); RECOMP_ABI_CALL(0x000D6560u, sub_000D6560); /* call 0x000D6560 */

loc_000D7E23: ;
    goto loc_000D7E2E;

loc_000D7E25: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D7E2Bu); RECOMP_ABI_CALL(0x000D6460u, sub_000D6460); /* call 0x000D6460 */

loc_000D7E2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7E2E: ;
    ebp = MEM32(ebp + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) ebx = eax; /* cmovl */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7DB4; /* jne: not equal / not zero */

loc_000D7E3E: ;
    POP32(esp, edi);

loc_000D7E3F: ;
    POP32(esp, ebp);

loc_000D7E40: ;
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7E50
 * Original: 0x000D7E50 - 0x000D7E56 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D7B10 and 0x000D8030)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7E50(void)
{

loc_000D7E50: ;
    eax = MEM32(0x64D810);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7E60
 * Original: 0x000D7E60 - 0x000D7E7C (28 bytes, 7 insns)
 * Folder: sound (between: 0x000D7B10 and 0x000D8030)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7E60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64D810) = eax;
    MEM32(0x5F8C9C) = eax;
    MEM32(0x5F8CA0) = eax;
    MEM32(0x5F8CA4) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7E80
 * Original: 0x000D7E80 - 0x000D7F36 (182 bytes, 61 insns)
 * Folder: sound (between: 0x000D7B10 and 0x000D8030)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = 0x44;
    PUSH32(esp, 0x000D7E8Eu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D7E8E: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x38) = eax;
    ecx = MEM32(0x5F8CA0);
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x40) = 0x5F8C9C;
    _fa = (uint32_t)(MEM32(0x5F8C9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F8C9C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7EBB; /* jne: not equal / not zero */

loc_000D7EB3: ;
    MEM32(0x5F8C9C) = esi;
    goto loc_000D7EC4;

loc_000D7EBB: ;
    edx = MEM32(0x5F8CA0);
    MEM32(edx + 0x38) = esi;

loc_000D7EC4: ;
    edx = MEM32(0x5F8CA4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(0x5F8CA0) = esi;
    MEM32(0x5F8CA4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000D7EED; /* jne: not equal / not zero */

loc_000D7EDB: ;
    MEM32(0x64D810) = MEM32(0x64D810) + 1;
    _fa = (uint32_t)(MEM32(0x64D810)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x30) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D7EED: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D7EF6u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D7EF6: ;
    PUSH32(esp, 0xC);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D7F05u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D7F05: ;
    PUSH32(esp, 0xC);
    edx = edi + 0x18;
    PUSH32(esp, edx);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7F14u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D7F14: ;
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D7F23u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D7F23: ;
    eax = MEM32(0x64D810);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D810) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7F40
 * Original: 0x000D7F40 - 0x000D7FA5 (101 bytes, 44 insns)
 * Folder: sound (between: 0x000D7B10 and 0x000D8030)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7F40: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5F8C9C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D7FA2; /* je: equal / zero */

loc_000D7F4E: ;
    edi = edi;

loc_000D7F50: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7F5E; /* je: equal / zero */

loc_000D7F54: ;
    esi = MEM32(esi + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7F50; /* jne: not equal / not zero */

loc_000D7F5B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D7F5E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7FA2; /* je: equal / zero */

loc_000D7F62: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esi + 0x30) = 0;
    PUSH32(esp, 0x000D7F72u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D7F72: ;
    PUSH32(esp, 0xC);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D7F81u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D7F81: ;
    PUSH32(esp, 0xC);
    edx = edi + 0x18;
    PUSH32(esp, edx);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7F90u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D7F90: ;
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D7F9Fu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D7F9F: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7FA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7FB0
 * Original: 0x000D7FB0 - 0x000D800B (91 bytes, 35 insns)
 * Folder: sound (between: 0x000D7B10 and 0x000D8030)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7FB0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D800A; /* je: equal / zero */

loc_000D7FB6: ;
    ecx = MEM32(eax + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D7FC4; /* je: equal / zero */

loc_000D7FBE: ;
    esi = MEM32(eax + 0x3C);
    MEM32(ecx + 0x3C) = esi;

loc_000D7FC4: ;
    ecx = MEM32(eax + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7FD1; /* je: equal / zero */

loc_000D7FCB: ;
    esi = MEM32(eax + 0x38);
    MEM32(ecx + 0x38) = esi;

loc_000D7FD1: ;
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7FF5; /* je: equal / zero */

loc_000D7FD8: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7FE7; /* jne: not equal / not zero */

loc_000D7FE2: ;
    esi = MEM32(eax + 0x38);
    MEM32(ecx) = esi;

loc_000D7FE7: ;
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7FF5; /* jne: not equal / not zero */

loc_000D7FEF: ;
    esi = MEM32(eax + 0x3C);
    MEM32(ecx + 4) = esi;

loc_000D7FF5: ;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = edx;
    PUSH32(esp, 0x000D8003u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D8003: ;
    MEM32(0x64D810) = MEM32(0x64D810) - 1;
    _fa = (uint32_t)(MEM32(0x64D810)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_000D800A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8010
 * Original: 0x000D8010 - 0x000D801E (14 bytes, 3 insns)
 * Folder: sound (between: 0x000D7B10 and 0x000D8030)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8010(void)
{

loc_000D8010: ;
    MEM32(eax) = 0x32AC80;
    MEM32(eax + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8020
 * Original: 0x000D8020 - 0x000D8027 (7 bytes, 2 insns)
 * Folder: sound (between: 0x000D7B10 and 0x000D8030)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8020(void)
{

loc_000D8020: ;
    MEM32(eax) = 0x32AC80;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8030
 * Original: 0x000D8030 - 0x000D804E (30 bytes, 8 insns)
 * Folder: sound (source: CRenderer.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D8030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8030: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x324878);
    edx = 0x32AD38;
    ecx = 0x32ACF8;
    PUSH32(esp, 0x000D8046u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8046: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D8050
 * Original: 0x000D8050 - 0x000D806E (30 bytes, 8 insns)
 * Folder: sound (source: CRenderer.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D8050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8050: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x324878);
    edx = 0x32AD38;
    ecx = 0x32ACF8;
    PUSH32(esp, 0x000D8066u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8066: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D8070
 * Original: 0x000D8070 - 0x000D808F (31 bytes, 8 insns)
 * Folder: sound (source: CRenderer.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8070: ;
    PUSH32(esp, 0x56);
    PUSH32(esp, 0x324878);
    edx = 0x32AD38;
    ecx = 0x32ACF8;
    PUSH32(esp, 0x000D8086u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8086: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8090
 * Original: 0x000D8090 - 0x000D80B9 (41 bytes, 14 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8090: ;
    edx = MEM32(esp + 4);
    eax = edx;
    PUSH32(esp, 0x000D809Bu); RECOMP_ABI_CALL(0x000D80D0u, sub_000D80D0); /* call 0x000D80D0 */

loc_000D809B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D80A2; /* jne: not equal / not zero */

loc_000D809F: ;
    esp += 8; return; /* ret 4 */

loc_000D80A2: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D80AEu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D80AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D80C0
 * Original: 0x000D80C0 - 0x000D80D0 (16 bytes, 7 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D80C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D80C0: ;
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D80CCu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D80CC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D80D0
 * Original: 0x000D80D0 - 0x000D80F9 (41 bytes, 15 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D80D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D80D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D80F0; /* je: equal / zero */

loc_000D80D4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D80F0; /* je: equal / zero */

loc_000D80D9: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D80F0; /* jne: not equal / not zero */

loc_000D80E0: ;
    SET_LO16(eax, MEM16(eax + 6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D80F3; /* je: equal / zero */

loc_000D80EA: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D80F3; /* je: equal / zero */

loc_000D80F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D80F3: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8100
 * Original: 0x000D8100 - 0x000D8121 (33 bytes, 11 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8100: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x18) = 0xFFFFFFFFu;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8130
 * Original: 0x000D8130 - 0x000D816D (61 bytes, 24 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8130: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8147; /* je: equal / zero */

loc_000D813A: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x000D8140u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D813Du); } /* indirect call */
    }

loc_000D8140: ;
    MEM32(esi + 0x20) = 0;

loc_000D8147: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D815B; /* je: equal / zero */

loc_000D814E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D8154u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8151u); } /* indirect call */
    }

loc_000D8154: ;
    MEM32(esi + 0x1C) = 0;

loc_000D815B: ;
    esi = MEM32(esi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D816B; /* je: equal / zero */

loc_000D8162: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D8168u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000D8168: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D816B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D8170
 * Original: 0x000D8170 - 0x000D81A9 (57 bytes, 22 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8170: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8183; /* je: equal / zero */

loc_000D817A: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x000D8180u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D817Du); } /* indirect call */
    }

loc_000D8180: ;
    MEM32(esi + 0x1C) = edi;

loc_000D8183: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8198; /* je: equal / zero */

loc_000D818B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D8191u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000D8191: ;
    MEM32(esi + 0x18) = 0xFFFFFFFFu;

loc_000D8198: ;
    MEM32(esi + 0x10) = edi;
    edi = MEM32(esi + 0x28);
    ecx = 0x2000;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D81B0
 * Original: 0x000D81B0 - 0x000D8246 (150 bytes, 63 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D81B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D81B0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D823D; /* je: equal / zero */

loc_000D81BF: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x000D81C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D81C2u); } /* indirect call */
    }

loc_000D81C5: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    edi = esi + 0xC;
    if (TEST_NZ(_fa, _fb)) goto loc_000D81EE; /* jne: not equal / not zero */

loc_000D81CF: ;
    eax = MEM32(esi + 0x1C);
    edx = MEM32(eax);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000D81D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D81D6u); } /* indirect call */
    }

loc_000D81D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D81E9; /* jge: greater or equal (signed >=) */

loc_000D81DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x80004005u;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D81E9: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D823D; /* je: equal / zero */

loc_000D81EE: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D823D; /* jne: not equal / not zero */

loc_000D81F4: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D823D; /* je: equal / zero */

loc_000D81FB: ;
    goto loc_000D8200;

    /* nop */

loc_000D8200: ;
    edx = esp + 0xC;
    ecx = esi;
    PUSH32(esp, 0x000D820Bu); RECOMP_ABI_CALL(0x000D8250u, sub_000D8250); /* call 0x000D8250 */

loc_000D820B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D823D; /* je: equal / zero */

loc_000D820F: ;
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + ebx * 8 + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + ebx * 8 + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8227; /* jne: not equal / not zero */

loc_000D821A: ;
    edi = esp + 0x10;
    eax = esi;
    PUSH32(esp, 0x000D8225u); RECOMP_ABI_CALL(0x000D8280u, sub_000D8280); /* call 0x000D8280 */

loc_000D8225: ;
    goto loc_000D8232;

loc_000D8227: ;
    eax = esp + 0x10;
    edi = ebx;
    PUSH32(esp, 0x000D8232u); RECOMP_ABI_CALL(0x000D8330u, sub_000D8330); /* call 0x000D8330 */

loc_000D8232: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D823F; /* jl: less (signed <) */

loc_000D8236: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8200; /* jne: not equal / not zero */

loc_000D823D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D823F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D8250
 * Original: 0x000D8250 - 0x000D8275 (37 bytes, 15 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8250: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8255: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x8000000Au (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8269; /* jne: not equal / not zero */

loc_000D825D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000D8255; /* jb: below (unsigned <) */

loc_000D8266: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D8269: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D826F; /* je: equal / zero */

loc_000D826D: ;
    MEM32(edx) = eax;

loc_000D826F: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8280
 * Original: 0x000D8280 - 0x000D8326 (166 bytes, 61 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8280: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esi + 0x28);
    edx = ebx;
    edx = edx << 0xD;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + ebx * 8 + 0x2C;
    MEM32(edi + 0xC) = ecx;
    eax = esp + 4;
    MEM32(edi) = edx;
    MEM32(edi + 4) = 0x2000;
    MEM32(edi + 8) = eax;
    eax = MEM32(esi + 0x1C);
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000D82CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D82C7u); } /* indirect call */
    }

loc_000D82CA: ;
    eax = MEM32(esi + 0x1C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000D82D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D82D3u); } /* indirect call */
    }

loc_000D82D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8321; /* jl: less (signed <) */

loc_000D82DA: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + ebx * 8 + 0x30) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000D8318; /* jne: not equal / not zero */

loc_000D82EA: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x000D82F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D82F0u); } /* indirect call */
    }

loc_000D82F3: ;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D8302u); RECOMP_ABI_CALL(0x002EB142u, sub_002EB142); /* call 0x002EB142 */

loc_000D8302: ;
    PUSH32(esp, 0x000D8307u); RECOMP_ABI_CALL(0x000D8170u, sub_000D8170); /* call 0x000D8170 */

loc_000D8307: ;
    eax = MEM32(esi + 0x24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = 0;
    MEM32(esi + 0x24) = eax;

loc_000D8318: ;
    ecx = MEM32(esp + 4);
    MEM32(edi + 4) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D8321: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D8330
 * Original: 0x000D8330 - 0x000D835F (47 bytes, 16 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D8330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8330: ;
    ecx = esi + edi * 8 + 0x2C;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = 0;
    edx = MEM32(esi + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000D8350u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D834Du); } /* indirect call */
    }

loc_000D8350: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D835E; /* jl: less (signed <) */

loc_000D8354: ;
    MEM32(esi + edi * 8 + 0x30) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D835E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8360
 * Original: 0x000D8360 - 0x000D83AF (79 bytes, 31 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8360: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8368; /* jne: not equal / not zero */

loc_000D8364: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000D8368: ;
    PUSH32(esp, esi);
    eax = 0xA0;
    PUSH32(esp, 0x000D8373u); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000D8373: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D83A0; /* je: equal / zero */

loc_000D8377: ;
    esi = eax;
    PUSH32(esp, 0x000D837Eu); RECOMP_ABI_CALL(0x000D8430u, sub_000D8430); /* call 0x000D8430 */

loc_000D837E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D83A0; /* je: equal / zero */

loc_000D8384: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000D8390u); RECOMP_ABI_CALL(0x000D85E0u, sub_000D85E0); /* call 0x000D85E0 */

loc_000D8390: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D83A5; /* je: equal / zero */

loc_000D8394: ;
    PUSH32(esp, 0x000D8399u); RECOMP_ABI_CALL(0x000D84D0u, sub_000D84D0); /* call 0x000D84D0 */

loc_000D8399: ;
    eax = esi;
    PUSH32(esp, 0x000D83A0u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000D83A0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D83A5: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D83B0
 * Original: 0x000D83B0 - 0x000D83D4 (36 bytes, 14 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D83B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D83B0: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D83D2; /* je: equal / zero */

loc_000D83B7: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x000D83BFu); RECOMP_ABI_CALL(0x000D8750u, sub_000D8750); /* call 0x000D8750 */

loc_000D83BF: ;
    PUSH32(esp, 0x000D83C4u); RECOMP_ABI_CALL(0x000D84D0u, sub_000D84D0); /* call 0x000D84D0 */

loc_000D83C4: ;
    eax = esi;
    PUSH32(esp, 0x000D83CBu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000D83CB: ;
    MEM32(ebx) = 0;
    POP32(esp, edi);

loc_000D83D2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D83E0
 * Original: 0x000D83E0 - 0x000D83EC (12 bytes, 4 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D83E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D83E0: ;
    PUSH32(esp, 0x000D83E5u); RECOMP_ABI_CALL(0x000D85B0u, sub_000D85B0); /* call 0x000D85B0 */

loc_000D83E5: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_000D83F0
 * Original: 0x000D83F0 - 0x000D8422 (50 bytes, 18 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D83F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D83F0: ;
    ecx = MEM32(0x64D814);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8421; /* je: equal / zero */

loc_000D83FC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D8402u); RECOMP_ABI_CALL(0x000D85B0u, sub_000D85B0); /* call 0x000D85B0 */

loc_000D8402: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000D8409u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8406u); } /* indirect call */
    }

loc_000D8409: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D841E; /* jne: not equal / not zero */

loc_000D840F: ;
    eax = 0x32B3B0;
    edx = 8;
    PUSH32(esp, 0x000D841Eu); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D841E: ;
    eax = esi;
    POP32(esp, esi);

loc_000D8421: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8430
 * Original: 0x000D8430 - 0x000D84C7 (151 bytes, 29 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8430: ;
    eax = esi;
    PUSH32(esp, 0x000D8437u); RECOMP_ABI_CALL(0x000DE1E0u, sub_000DE1E0); /* call 0x000DE1E0 */

loc_000D8437: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64D814) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    eax = 1;
    MEM32(esi + 0x60) = 0x10000;
    PUSH32(esp, 0x000D8482u); RECOMP_ABI_CALL(0x000D8530u, sub_000D8530); /* call 0x000D8530 */

loc_000D8482: ;
    MEM32(0x33F6B8) = 1;
    MEM32(esi + 0x24) = 0xCD450;
    MEM32(esi + 0x28) = 0xCD890;
    MEM32(esi + 0x2C) = 0xCD6F0;
    MEM32(esi + 0x30) = 0xCD720;
    MEM32(esi + 0x34) = 0xCD680;
    MEM32(esi + 0x38) = 0xCD770;
    MEM32(esi + 0x3C) = 0xCDBE0;
    MEM32(esi + 0x40) = 0xF8010;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_000D84D0
 * Original: 0x000D84D0 - 0x000D84D5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D84D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D84D0: ;
    g_seh_ebp = ebp; sub_000DE200(); return; /* tail jmp 0x000DE200 */

}

/**
 * sub_000D84E0
 * Original: 0x000D84E0 - 0x000D8522 (66 bytes, 22 insns)
 * Folder: sound (between: 0x000D8070 and 0x000D8530)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D84E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D84E0: ;
    eax = MEM32(0x64D814);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D850F; /* je: equal / zero */

loc_000D84E9: ;
    PUSH32(esp, 0x000D84EEu); RECOMP_ABI_CALL(0x000D85B0u, sub_000D85B0); /* call 0x000D85B0 */

loc_000D84EE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000D84F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D84F3u); } /* indirect call */
    }

loc_000D84F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D850F; /* je: equal / zero */

loc_000D84FA: ;
    PUSH32(esp, 0x000D84FFu); RECOMP_ABI_CALL(0x000D85B0u, sub_000D85B0); /* call 0x000D85B0 */

loc_000D84FF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000D8506u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8503u); } /* indirect call */
    }

loc_000D8506: ;
    PUSH32(esp, 0x000D850Bu); RECOMP_ABI_CALL(0x000D8530u, sub_000D8530); /* call 0x000D8530 */

loc_000D850B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8514; /* jne: not equal / not zero */

loc_000D850F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000D8514: ;
    MEM32(0x33F6B8) = esi;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D8530
 * Original: 0x000D8530 - 0x000D8595 (101 bytes, 22 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8530: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D8580; /* je: equal / zero */

loc_000D8533: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D8566; /* je: equal / zero */

loc_000D8538: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, 0x324878);
    edx = 0x32B330;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8551u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8551: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x33F6BC) = 1;
    MEM32(0x64D818) = eax;
    esp += 4; return; /* ret */

loc_000D8566: ;
    MEM32(0x64D818) = 2;
    MEM32(0x33F6BC) = 3;
    eax = 1;
    esp += 4; return; /* ret */

loc_000D8580: ;
    eax = 1;
    MEM32(0x33F6BC) = eax;
    MEM32(0x64D818) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D85A0
 * Original: 0x000D85A0 - 0x000D85A6 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D8530 and 0x000D85B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D85A0(void)
{

loc_000D85A0: ;
    eax = MEM32(0x64D818);
    esp += 4; return; /* ret */

}

/**
 * sub_000D85B0
 * Original: 0x000D85B0 - 0x000D85DB (43 bytes, 11 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D85B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D85B0: ;
    eax = MEM32(0x64D814);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D85DA; /* jne: not equal / not zero */

loc_000D85B9: ;
    PUSH32(esp, 0x1D3);
    PUSH32(esp, 0x32B30C);
    edx = 0x32B318;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D85D2u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D85D2: ;
    eax = MEM32(0x64D814);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D85DA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D85E0
 * Original: 0x000D85E0 - 0x000D874E (366 bytes, 127 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D85E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D85E0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = eax;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = ebx;
    _fa = (uint32_t)(MEM32(0x64D814)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D814), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8629; /* jne: not equal / not zero */

loc_000D8609: ;
    PUSH32(esp, 0x64D814);
    PUSH32(esp, 0x000D8613u); RECOMP_ABI_CALL(0x000CBE50u, sub_000CBE50); /* call 0x000CBE50 */

loc_000D8613: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8629; /* je: equal / zero */

loc_000D861A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D814) = ebx;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000D8629: ;
    PUSH32(esp, 0x000D862Eu); RECOMP_ABI_CALL(0x000D83F0u, sub_000D83F0); /* call 0x000D83F0 */

loc_000D862E: ;
    ebx = esi + 0x24;
    PUSH32(esp, 0x000D8636u); RECOMP_ABI_CALL(0x000DE220u, sub_000DE220); /* call 0x000DE220 */

loc_000D8636: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D864D; /* jne: not equal / not zero */

loc_000D863A: ;
    esi = 0x64D814;
    PUSH32(esp, 0x000D8644u); RECOMP_ABI_CALL(0x000CBEB0u, sub_000CBEB0); /* call 0x000CBEB0 */

loc_000D8644: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000D864D: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, ebp);
    MEM32(esi + 0x5C) = eax;
    ebp = esi + 0x64;
    PUSH32(esp, 0x000D865Cu); RECOMP_ABI_CALL(0x000D85B0u, sub_000D85B0); /* call 0x000D85B0 */

loc_000D865C: ;
    ecx = ebp;
    PUSH32(esp, 0x000D8663u); RECOMP_ABI_CALL(0x000D80C0u, sub_000D80C0); /* call 0x000D80C0 */

loc_000D8663: ;
    edi = esi + 0x50;
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0x000D866Eu); RECOMP_ABI_CALL(0x000DD480u, sub_000DD480); /* call 0x000DD480 */

loc_000D866E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D868D; /* jne: not equal / not zero */

loc_000D8675: ;
    ebx = esi + 0x48;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D867Fu); RECOMP_ABI_CALL(0x000DFA10u, sub_000DFA10); /* call 0x000DFA10 */

loc_000D867F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D86A8; /* je: equal / zero */

loc_000D8686: ;
    esi = ebx;
    PUSH32(esp, 0x000D868Du); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000D868D: ;
    esi = edi;
    PUSH32(esp, 0x000D8694u); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000D8694: ;
    esi = 0x64D814;
    PUSH32(esp, 0x000D869Eu); RECOMP_ABI_CALL(0x000CBEB0u, sub_000CBEB0); /* call 0x000CBEB0 */

loc_000D869E: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000D86A8: ;
    eax = MEM32(0x64D814);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D86BB; /* je: equal / zero */

loc_000D86B1: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D86BB; /* je: equal / zero */

loc_000D86B6: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D86D7; /* jne: not equal / not zero */

loc_000D86BB: ;
    PUSH32(esp, 0x208);
    PUSH32(esp, 0x32B2BC);
    edx = 0x32B2EC;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D86D4u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D86D4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D86D7: ;
    PUSH32(esp, 0x000D86DCu); RECOMP_ABI_CALL(0x000D85B0u, sub_000D85B0); /* call 0x000D85B0 */

loc_000D86DC: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D86E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D86E3u); } /* indirect call */
    }

loc_000D86E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x44) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D8715; /* je: equal / zero */

loc_000D86ED: ;
    ecx = MEM32(edi);
    eax = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D86F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D86F4u); } /* indirect call */
    }

loc_000D86F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8715; /* je: equal / zero */

loc_000D86FB: ;
    PUSH32(esp, 0x000D8700u); RECOMP_ABI_CALL(0x000D85B0u, sub_000D85B0); /* call 0x000D85B0 */

loc_000D8700: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000D8707u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8704u); } /* indirect call */
    }

loc_000D8707: ;
    PUSH32(esp, 0x000D870Cu); RECOMP_ABI_CALL(0x000D8530u, sub_000D8530); /* call 0x000D8530 */

loc_000D870C: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000D8715: ;
    esi = ebx;
    PUSH32(esp, 0x000D871Cu); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000D871C: ;
    esi = edi;
    PUSH32(esp, 0x000D8723u); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000D8723: ;
    esi = 0x64D814;
    PUSH32(esp, 0x000D872Du); RECOMP_ABI_CALL(0x000CBEB0u, sub_000CBEB0); /* call 0x000CBEB0 */

loc_000D872D: ;
    PUSH32(esp, 0x32B368);
    eax = 0x211;
    ecx = 0x324878;
    PUSH32(esp, 0x000D8741u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D8741: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D8750
 * Original: 0x000D8750 - 0x000D877D (45 bytes, 15 insns)
 * Folder: sound (between: 0x000D85E0 and 0x000D87D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8750(void)
{

loc_000D8750: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D8756u); RECOMP_ABI_CALL(0x000D85B0u, sub_000D85B0); /* call 0x000D85B0 */

loc_000D8756: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D8761u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D875Eu); } /* indirect call */
    }

loc_000D8761: ;
    esi = edi + 0x48;
    PUSH32(esp, 0x000D8769u); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000D8769: ;
    esi = edi + 0x50;
    PUSH32(esp, 0x000D8771u); RECOMP_ABI_CALL(0x000E2090u, sub_000E2090); /* call 0x000E2090 */

loc_000D8771: ;
    esi = 0x64D814;
    PUSH32(esp, 0x000D877Bu); RECOMP_ABI_CALL(0x000CBEB0u, sub_000CBEB0); /* call 0x000CBEB0 */

loc_000D877B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D8780
 * Original: 0x000D8780 - 0x000D8792 (18 bytes, 5 insns)
 * Folder: sound (between: 0x000D85E0 and 0x000D87D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8780: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8791; /* je: equal / zero */

loc_000D8784: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;

loc_000D8791: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D87A0
 * Original: 0x000D87A0 - 0x000D87BD (29 bytes, 9 insns)
 * Folder: sound (between: 0x000D85E0 and 0x000D87D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D87A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D87A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D87BC; /* je: equal / zero */

loc_000D87A4: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D87B5; /* je: equal / zero */

loc_000D87AA: ;
    PUSH32(esp, 0x000D87AFu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D87AF: ;
    MEM32(esi) = 0;

loc_000D87B5: ;
    MEM32(esi + 4) = 0;

loc_000D87BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D87C0
 * Original: 0x000D87C0 - 0x000D87C5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000D85E0 and 0x000D87D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D87C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D87C0: ;
    g_seh_ebp = ebp; sub_000CCEA0(); return; /* tail jmp 0x000CCEA0 */

}

/**
 * sub_000D87D0
 * Original: 0x000D87D0 - 0x000D8807 (55 bytes, 19 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D87D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D87D0: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D8803; /* je: equal / zero */

loc_000D87D6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D87FF; /* je: equal / zero */

loc_000D87DB: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D87FC; /* je: equal / zero */

loc_000D87E0: ;
    PUSH32(esp, 0x28D);
    PUSH32(esp, 0x324878);
    edx = 0x32B290;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D87F9u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D87F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D87FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D87FF: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

loc_000D8803: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_000D8810
 * Original: 0x000D8810 - 0x000D8847 (55 bytes, 19 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8810: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D8843; /* je: equal / zero */

loc_000D8816: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D883F; /* je: equal / zero */

loc_000D881B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D883C; /* je: equal / zero */

loc_000D8820: ;
    PUSH32(esp, 0x2A6);
    PUSH32(esp, 0x324878);
    edx = 0x32B264;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8839u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8839: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D883C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D883F: ;
    eax = ecx + 0x24;
    esp += 4; return; /* ret */

loc_000D8843: ;
    eax = ecx + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8850
 * Original: 0x000D8850 - 0x000D88DF (143 bytes, 46 insns)
 * Folder: sound (between: 0x000D8810 and 0x000D8940)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D8850: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    eax = 0x28;
    PUSH32(esp, 0x000D8861u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D8861: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D88D7; /* je: equal / zero */

loc_000D8869: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    eax = MEM32(esp + 0x14);
    MEM32(esi + 4) = ebp;
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D8894; /* je: equal / zero */

loc_000D8876: ;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x000D8885u); RECOMP_ABI_CALL(0x000D87D0u, sub_000D87D0); /* call 0x000D87D0 */

loc_000D8885: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = 0xFFFFFFFFu;
    MEM32(esi + 0x14) = ebx;
    goto loc_000D889B;

loc_000D8894: ;
    MEM32(esi + 8) = 0xFFFFFFFFu;

loc_000D889B: ;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x1C) = ebx;
    ecx = MEM32(edi + 0x80);
    eax = edi + 0x7C;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x24) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D88BB; /* jne: not equal / not zero */

loc_000D88B7: ;
    MEM32(eax) = esi;
    goto loc_000D88C4;

loc_000D88BB: ;
    edx = MEM32(edi + 0x80);
    MEM32(edx + 0x1C) = esi;

loc_000D88C4: ;
    eax = MEM32(edi + 0x84);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x80) = esi;
    MEM32(edi + 0x84) = eax;

loc_000D88D7: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000D88E0
 * Original: 0x000D88E0 - 0x000D8932 (82 bytes, 32 insns)
 * Folder: sound (between: 0x000D8810 and 0x000D8940)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D88E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D88E0: ;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D88F2; /* je: equal / zero */

loc_000D88EC: ;
    esi = MEM32(eax + 0x20);
    MEM32(ecx + 0x20) = esi;

loc_000D88F2: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D88FF; /* je: equal / zero */

loc_000D88F9: ;
    esi = MEM32(eax + 0x1C);
    MEM32(ecx + 0x1C) = esi;

loc_000D88FF: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8923; /* je: equal / zero */

loc_000D8906: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8915; /* jne: not equal / not zero */

loc_000D8910: ;
    esi = MEM32(eax + 0x1C);
    MEM32(ecx) = esi;

loc_000D8915: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8923; /* jne: not equal / not zero */

loc_000D891D: ;
    esi = MEM32(eax + 0x20);
    MEM32(ecx + 4) = esi;

loc_000D8923: ;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

}

/**
 * sub_000D8940
 * Original: 0x000D8940 - 0x000D8A53 (275 bytes, 98 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D8940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D8971; /* jne: not equal / not zero */

loc_000D8955: ;
    PUSH32(esp, 0x2F3);
    PUSH32(esp, 0x32B214);
    edx = 0x32B22C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D896Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D896E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8971: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D8991; /* jne: not equal / not zero */

loc_000D8975: ;
    PUSH32(esp, 0x2F6);
    PUSH32(esp, 0x32B1F0);
    edx = 0x32B1F8;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D898Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D898E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8991: ;
    PUSH32(esp, esi);
    ecx = esi;
    PUSH32(esp, 0x000D8999u); RECOMP_ABI_CALL(0x000D5CD0u, sub_000D5CD0); /* call 0x000D5CD0 */

loc_000D8999: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D89A7u); RECOMP_ABI_CALL(0x000D87C0u, sub_000D87C0); /* call 0x000D87C0 */

loc_000D89A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D89ADu); RECOMP_ABI_CALL(0x000D8850u, sub_000D8850); /* call 0x000D8850 */

loc_000D89AD: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000D89D3; /* jne: not equal / not zero */

loc_000D89B7: ;
    PUSH32(esp, 0x3260F0);
    edx = 0xA;
    PUSH32(esp, 0x000D89C6u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D89C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_000D89D3: ;
    SET_LO8(eax, MEM8(ebp + 0x24));
    ecx = 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000D8A09; /* jne: not equal / not zero */

loc_000D89DF: ;
    PUSH32(esp, 0x000D89E4u); RECOMP_ABI_CALL(0x000D7E50u, sub_000D7E50); /* call 0x000D7E50 */

loc_000D89E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D8A09; /* jne: not equal / not zero */

loc_000D89E8: ;
    eax = MEM32(0x64EE78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D8A09; /* jne: not equal / not zero */

loc_000D89F1: ;
    PUSH32(esp, 0x32B1BC);
    edx = 8;
    MEM32(0x64EE78) = ecx;
    PUSH32(esp, 0x000D8A06u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D8A06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8A09: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8A22; /* je: equal / zero */

loc_000D8A10: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp;
    eax = ebx;
    PUSH32(esp, 0x000D8A20u); RECOMP_ABI_CALL(0x000D8A60u, sub_000D8A60); /* call 0x000D8A60 */

loc_000D8A20: ;
    goto loc_000D8A32;

loc_000D8A22: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D8A2Fu); RECOMP_ABI_CALL(0x000DE4E0u, sub_000DE4E0); /* call 0x000DE4E0 */

loc_000D8A2F: ;
    MEM32(ebx + 8) = eax;

loc_000D8A32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000D8A4A; /* jne: not equal / not zero */

loc_000D8A37: ;
    eax = esp + 0x18;
    PUSH32(esp, 0x000D8A40u); RECOMP_ABI_CALL(0x000D88E0u, sub_000D88E0); /* call 0x000D88E0 */

loc_000D8A40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_000D8A4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000D8A60
 * Original: 0x000D8A60 - 0x000D8A93 (51 bytes, 24 insns)
 * Folder: sound (between: 0x000D8940 and 0x000D8AA0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D8A60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x000D8A74u); RECOMP_ABI_CALL(0x000D5CD0u, sub_000D5CD0); /* call 0x000D5CD0 */

loc_000D8A74: ;
    PUSH32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    eax = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_000D8A88; /* jne: not equal / not zero */

loc_000D8A7C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D8A82u); RECOMP_ABI_CALL(0x000D8AA0u, sub_000D8AA0); /* call 0x000D8AA0 */

loc_000D8A82: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000D8A88: ;
    PUSH32(esp, 0x000D8A8Du); RECOMP_ABI_CALL(0x000D8BC0u, sub_000D8BC0); /* call 0x000D8BC0 */

loc_000D8A8D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000D8AA0
 * Original: 0x000D8AA0 - 0x000D8BB7 (279 bytes, 93 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D8AA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8AD7; /* je: equal / zero */

loc_000D8AB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8AD7; /* je: equal / zero */

loc_000D8ABB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8AD7; /* je: equal / zero */

loc_000D8AC0: ;
    PUSH32(esp, 0x32B368);
    eax = 0x33C;
    ecx = 0x32B148;
    PUSH32(esp, 0x000D8AD4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D8AD4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8AD7: ;
    ecx = esi;
    PUSH32(esp, 0x000D8ADEu); RECOMP_ABI_CALL(0x000D5CD0u, sub_000D5CD0); /* call 0x000D5CD0 */

loc_000D8ADE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8AF9; /* je: equal / zero */

loc_000D8AE2: ;
    PUSH32(esp, 0x32B368);
    eax = 0x33D;
    ecx = 0x32B11C;
    PUSH32(esp, 0x000D8AF6u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D8AF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8AF9: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8B17; /* jne: not equal / not zero */

loc_000D8B00: ;
    PUSH32(esp, 0x32B368);
    eax = 0x33E;
    ecx = 0x32B108;
    PUSH32(esp, 0x000D8B14u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D8B14: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8B17: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x000D8B26u); RECOMP_ABI_CALL(0x000D8810u, sub_000D8810); /* call 0x000D8810 */

loc_000D8B26: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    edx = edi + 0x64;
    ebx = eax;
    esi = esp + 0x18;
    PUSH32(esp, 0x000D8B39u); RECOMP_ABI_CALL(0x000E04C0u, sub_000E04C0); /* call 0x000E04C0 */

loc_000D8B39: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8B8E; /* jne: not equal / not zero */

loc_000D8B40: ;
    eax = MEM32(esp + 0x14);
    ebx = ebp + 0x14;
    esi = ebp;
    MEM32(ebx) = eax;
    MEM32(ebp + 8) = 1;
    PUSH32(esp, 0x000D8B57u); RECOMP_ABI_CALL(0x000D9BF0u, sub_000D9BF0); /* call 0x000D9BF0 */

loc_000D8B57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8B8E; /* jne: not equal / not zero */

loc_000D8B5B: ;
    PUSH32(esp, 0x34B);
    PUSH32(esp, 0x324878);
    edx = 0x32B0D4;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8B74u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8B74: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8B84; /* je: equal / zero */

loc_000D8B7D: ;
    esi = ebx;
    PUSH32(esp, 0x000D8B84u); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000D8B84: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000D8B8E: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8BAE; /* jne: not equal / not zero */

loc_000D8B95: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ebp + 0x14;
    if (CMP_EQ(_fa, _fb)) goto loc_000D8BA4; /* je: equal / zero */

loc_000D8B9F: ;
    PUSH32(esp, 0x000D8BA4u); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000D8BA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000D8BAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000D8BC0
 * Original: 0x000D8BC0 - 0x000D8CD0 (272 bytes, 89 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D8BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8BC0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8BED; /* je: equal / zero */

loc_000D8BD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8BED; /* je: equal / zero */

loc_000D8BD6: ;
    PUSH32(esp, 0x32B368);
    eax = 0x36F;
    ecx = 0x32B088;
    PUSH32(esp, 0x000D8BEAu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D8BEA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8BED: ;
    ecx = ebp;
    PUSH32(esp, 0x000D8BF4u); RECOMP_ABI_CALL(0x000D5CD0u, sub_000D5CD0); /* call 0x000D5CD0 */

loc_000D8BF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8C0F; /* jne: not equal / not zero */

loc_000D8BF8: ;
    PUSH32(esp, 0x32B368);
    eax = 0x370;
    ecx = 0x32B058;
    PUSH32(esp, 0x000D8C0Cu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D8C0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8C0F: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8C2D; /* jne: not equal / not zero */

loc_000D8C16: ;
    PUSH32(esp, 0x32B368);
    eax = 0x371;
    ecx = 0x32B108;
    PUSH32(esp, 0x000D8C2Au); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D8C2A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8C2D: ;
    ecx = ebp;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000D8C3Cu); RECOMP_ABI_CALL(0x000D8810u, sub_000D8810); /* call 0x000D8810 */

loc_000D8C3C: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = edi + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0x000D8C53u); RECOMP_ABI_CALL(0x000DF150u, sub_000DF150); /* call 0x000DF150 */

loc_000D8C53: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8CA9; /* jne: not equal / not zero */

loc_000D8C5A: ;
    eax = MEM32(esp + 0x10);
    ebp = ebx + 0x14;
    esi = ebx;
    MEM32(ebp) = eax;
    MEM32(ebx + 8) = 1;
    PUSH32(esp, 0x000D8C72u); RECOMP_ABI_CALL(0x000D9BF0u, sub_000D9BF0); /* call 0x000D9BF0 */

loc_000D8C72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8CA9; /* jne: not equal / not zero */

loc_000D8C76: ;
    PUSH32(esp, 0x37E);
    PUSH32(esp, 0x324878);
    edx = 0x32B0D4;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8C8Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8C8F: ;
    eax = MEM32(ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8CA0; /* je: equal / zero */

loc_000D8C99: ;
    esi = ebp;
    PUSH32(esp, 0x000D8CA0u); RECOMP_ABI_CALL(0x000DF1F0u, sub_000DF1F0); /* call 0x000DF1F0 */

loc_000D8CA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D8CA9: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8CC8; /* jne: not equal / not zero */

loc_000D8CB0: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ebx + 0x14;
    if (CMP_EQ(_fa, _fb)) goto loc_000D8CBF; /* je: equal / zero */

loc_000D8CBA: ;
    PUSH32(esp, 0x000D8CBFu); RECOMP_ABI_CALL(0x000DF1F0u, sub_000DF1F0); /* call 0x000DF1F0 */

loc_000D8CBF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D8CC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D8CD0
 * Original: 0x000D8CD0 - 0x000D8CE5 (21 bytes, 7 insns)
 * Folder: sound (between: 0x000D8BC0 and 0x000D8CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D8CD0: ;
    PUSH32(esp, 0x000D8CD5u); RECOMP_ABI_CALL(0x000DE910u, sub_000DE910); /* call 0x000DE910 */

loc_000D8CD5: ;
    ecx = MEM32(0x64D814);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8CE4; /* je: equal / zero */

loc_000D8CDF: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x34)); return; /* indirect tail jmp */

loc_000D8CE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8CF0
 * Original: 0x000D8CF0 - 0x000D8D5E (110 bytes, 36 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8CF0: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8D15; /* jne: not equal / not zero */

loc_000D8CF7: ;
    PUSH32(esp, 0x3BE);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8D10u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8D10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D8D15: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8D54; /* je: equal / zero */

loc_000D8D1C: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8D3F; /* jne: not equal / not zero */

loc_000D8D23: ;
    PUSH32(esp, 0x3C4);
    PUSH32(esp, 0x32B014);
    edx = 0x32B038;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8D3Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8D3C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8D3F: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8D5C; /* je: equal / zero */

loc_000D8D46: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D8D4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8D48u); } /* indirect call */
    }

loc_000D8D4B: ;
    MEM32(esi + 0xC) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D8D54: ;
    esi = MEM32(esi + 8);
    PUSH32(esp, 0x000D8D5Cu); RECOMP_ABI_CALL(0x000DE840u, sub_000DE840); /* call 0x000DE840 */

loc_000D8D5C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D8D60
 * Original: 0x000D8D60 - 0x000D8DCE (110 bytes, 36 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8D60: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8D85; /* jne: not equal / not zero */

loc_000D8D67: ;
    PUSH32(esp, 0x3E0);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8D80u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8D80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D8D85: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8DC4; /* je: equal / zero */

loc_000D8D8C: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8DAF; /* jne: not equal / not zero */

loc_000D8D93: ;
    PUSH32(esp, 0x3E6);
    PUSH32(esp, 0x32B014);
    edx = 0x32B038;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8DACu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8DAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8DAF: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8DCC; /* je: equal / zero */

loc_000D8DB6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000D8DBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8DB8u); } /* indirect call */
    }

loc_000D8DBB: ;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D8DC4: ;
    esi = MEM32(esi + 8);
    PUSH32(esp, 0x000D8DCCu); RECOMP_ABI_CALL(0x000DE880u, sub_000DE880); /* call 0x000DE880 */

loc_000D8DCC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D8DD0
 * Original: 0x000D8DD0 - 0x000D8EB2 (226 bytes, 82 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8DD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000D8DFF; /* jne: not equal / not zero */

loc_000D8DDF: ;
    PUSH32(esp, 0x402);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8DF8u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8DF8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D8DFF: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000D8E9A; /* je: equal / zero */

loc_000D8E0B: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = esi + 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_000D8E37; /* jne: not equal / not zero */

loc_000D8E15: ;
    PUSH32(esp, 0x408);
    PUSH32(esp, 0x32B014);
    edx = 0x32B038;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8E2Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8E2E: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8EA4; /* je: equal / zero */

loc_000D8E37: ;
    PUSH32(esp, 0x000D8E3Cu); RECOMP_ABI_CALL(0x000D9CA0u, sub_000D9CA0); /* call 0x000D9CA0 */

loc_000D8E3C: ;
    esi = MEM32(esi);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D8E85; /* je: equal / zero */

loc_000D8E43: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D8E70; /* je: equal / zero */

loc_000D8E46: ;
    PUSH32(esp, 0x411);
    PUSH32(esp, 0x324878);
    edx = 0x32B000;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8E5Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8E5F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, 0x000D8E6Bu); RECOMP_ABI_CALL(0x000D88E0u, sub_000D88E0); /* call 0x000D88E0 */

loc_000D8E6B: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D8E70: ;
    esi = ebx;
    PUSH32(esp, 0x000D8E77u); RECOMP_ABI_CALL(0x000DF1F0u, sub_000DF1F0); /* call 0x000DF1F0 */

loc_000D8E77: ;
    eax = esp + 0xC;
    PUSH32(esp, 0x000D8E80u); RECOMP_ABI_CALL(0x000D88E0u, sub_000D88E0); /* call 0x000D88E0 */

loc_000D8E80: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D8E85: ;
    esi = ebx;
    PUSH32(esp, 0x000D8E8Cu); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000D8E8C: ;
    eax = esp + 0xC;
    PUSH32(esp, 0x000D8E95u); RECOMP_ABI_CALL(0x000D88E0u, sub_000D88E0); /* call 0x000D88E0 */

loc_000D8E95: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D8E9A: ;
    eax = MEM32(esi + 8);
    ecx = edi;
    PUSH32(esp, 0x000D8EA4u); RECOMP_ABI_CALL(0x000DE800u, sub_000DE800); /* call 0x000DE800 */

loc_000D8EA4: ;
    eax = esp + 0xC;
    PUSH32(esp, 0x000D8EADu); RECOMP_ABI_CALL(0x000D88E0u, sub_000D88E0); /* call 0x000D88E0 */

loc_000D8EAD: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D8EC0
 * Original: 0x000D8EC0 - 0x000D8F3A (122 bytes, 39 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8EC0: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8EEC; /* jne: not equal / not zero */

loc_000D8EC7: ;
    PUSH32(esp, 0x486);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8EE0u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8EE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8EE3: ;
    eax = 0xFFFF0000u;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D8EEC: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8F29; /* je: equal / zero */

loc_000D8EF3: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8F1D; /* jne: not equal / not zero */

loc_000D8EFA: ;
    PUSH32(esp, 0x48C);
    PUSH32(esp, 0x32B014);
    edx = 0x32B038;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8F13u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8F13: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8EE3; /* je: equal / zero */

loc_000D8F1D: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000D8F25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8F22u); } /* indirect call */
    }

loc_000D8F25: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D8F29: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D8F36u); RECOMP_ABI_CALL(0x000DE8C0u, sub_000DE8C0); /* call 0x000DE8C0 */

loc_000D8F36: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D8F40
 * Original: 0x000D8F40 - 0x000D8F99 (89 bytes, 34 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8F40: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D8F6D; /* jne: not equal / not zero */

loc_000D8F4C: ;
    PUSH32(esp, 0x4A8);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8F65u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8F65: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D8F6D: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D8F7C; /* je: equal / zero */

loc_000D8F75: ;
    PUSH32(esp, 0x000D8F7Au); RECOMP_ABI_CALL(0x000D9AF0u, sub_000D9AF0); /* call 0x000D9AF0 */

loc_000D8F7A: ;
    goto loc_000D8F84;

loc_000D8F7C: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x000D8F84u); RECOMP_ABI_CALL(0x000DE780u, sub_000DE780); /* call 0x000DE780 */

loc_000D8F84: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8F93; /* jne: not equal / not zero */

loc_000D8F8A: ;
    eax = esp + 8;
    PUSH32(esp, 0x000D8F93u); RECOMP_ABI_CALL(0x000D88E0u, sub_000D88E0); /* call 0x000D88E0 */

loc_000D8F93: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D8FA0
 * Original: 0x000D8FA0 - 0x000D900F (111 bytes, 46 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8FA0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = eax;
    edi = ecx;
    MEM32(esp + 8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000D8FD1; /* jne: not equal / not zero */

loc_000D8FAF: ;
    PUSH32(esp, 0x4CA);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D8FC8u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D8FC8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D8FD1: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8FF0; /* je: equal / zero */

loc_000D8FD8: ;
    eax = esi;
    PUSH32(esp, 0x000D8FDFu); RECOMP_ABI_CALL(0x000D9AF0u, sub_000D9AF0); /* call 0x000D9AF0 */

loc_000D8FDF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9000; /* je: equal / zero */

loc_000D8FE5: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000D8FEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8FEBu); } /* indirect call */
    }

loc_000D8FEE: ;
    goto loc_000D8FFC;

loc_000D8FF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D8FFAu); RECOMP_ABI_CALL(0x000DE690u, sub_000DE690); /* call 0x000DE690 */

loc_000D8FFA: ;
    edi = eax;

loc_000D8FFC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9009; /* jne: not equal / not zero */

loc_000D9000: ;
    eax = esp + 8;
    PUSH32(esp, 0x000D9009u); RECOMP_ABI_CALL(0x000D88E0u, sub_000D88E0); /* call 0x000D88E0 */

loc_000D9009: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9010
 * Original: 0x000D9010 - 0x000D9021 (17 bytes, 7 insns)
 * Folder: sound (between: 0x000D8FA0 and 0x000D9050)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9010: ;
    ecx = MEM32(0x64D814);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9020; /* je: equal / zero */

loc_000D901A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D9020u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D901Du); } /* indirect call */
    }

loc_000D9020: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9030
 * Original: 0x000D9030 - 0x000D9041 (17 bytes, 7 insns)
 * Folder: sound (between: 0x000D8FA0 and 0x000D9050)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9030: ;
    ecx = MEM32(0x64D814);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9040; /* je: equal / zero */

loc_000D903A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000D9040u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D903Du); } /* indirect call */
    }

loc_000D9040: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9050
 * Original: 0x000D9050 - 0x000D90AA (90 bytes, 25 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9050: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9070; /* jne: not equal / not zero */

loc_000D9054: ;
    PUSH32(esp, 0x50F);
    PUSH32(esp, 0x32AFD4);
    edx = 0x32AFE0;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D906Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D906D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9070: ;
    ecx = MEM32(0x64D814);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9089; /* je: equal / zero */

loc_000D907A: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000D9084u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9081u); } /* indirect call */
    }

loc_000D9084: ;
    eax = esi;
    esp += 8; return; /* ret 4 */

loc_000D9089: ;
    PUSH32(esp, 0x514);
    PUSH32(esp, 0x324878);
    edx = 0x32AFB4;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D90A2u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D90A2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D90B0
 * Original: 0x000D90B0 - 0x000D90C1 (17 bytes, 7 insns)
 * Folder: sound (between: 0x000D9050 and 0x000D9120)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D90B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D90B0: ;
    ecx = MEM32(0x64D814);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D90C0; /* je: equal / zero */

loc_000D90BA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x000D90C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D90BDu); } /* indirect call */
    }

loc_000D90C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D90D0
 * Original: 0x000D90D0 - 0x000D90E0 (16 bytes, 6 insns)
 * Folder: sound (between: 0x000D9050 and 0x000D9120)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D90D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D90D0: ;
    ecx = MEM32(0x64D814);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D90DF; /* je: equal / zero */

loc_000D90DA: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x48)); return; /* indirect tail jmp */

loc_000D90DF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D90E0
 * Original: 0x000D90E0 - 0x000D9102 (34 bytes, 12 insns)
 * Folder: sound (between: 0x000D9050 and 0x000D9120)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D90E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D90E0: ;
    ecx = MEM32(0x64D814);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D90F1; /* je: equal / zero */

loc_000D90EA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x000D90F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D90EDu); } /* indirect call */
    }

loc_000D90F0: ;
    esp += 4; return; /* ret */

loc_000D90F1: ;
    PUSH32(esp, 0x32AF7C);
    edx = 8;
    PUSH32(esp, 0x000D9100u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D9100: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9110
 * Original: 0x000D9110 - 0x000D911F (15 bytes, 7 insns)
 * Folder: sound (between: 0x000D9050 and 0x000D9120)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9110(void)
{

loc_000D9110: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = 0x64DA48;
    PUSH32(esp, 0x000D911Du); RECOMP_ABI_CALL(0x000D9F40u, sub_000D9F40); /* call 0x000D9F40 */

loc_000D911D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9120
 * Original: 0x000D9120 - 0x000D916E (78 bytes, 24 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9120: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000D9128u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000D9128: ;
    PUSH32(esp, 0x5AA);
    eax = 0x32B368;
    PUSH32(esp, 0x000D9137u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000D9137: ;
    eax = MEM32(0x64DA50);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9165; /* je: equal / zero */

loc_000D9143: ;
    eax = esp;
    PUSH32(esp, eax);
    eax = 0x64DA48;
    PUSH32(esp, 0x000D9151u); RECOMP_ABI_CALL(0x000E6CB0u, sub_000E6CB0); /* call 0x000E6CB0 */

loc_000D9151: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x000D9159u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9157u); } /* indirect call */
    }

loc_000D9159: ;
    eax = MEM32(0x64DA50);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9143; /* jne: not equal / not zero */

loc_000D9165: ;
    PUSH32(esp, 0x000D916Au); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000D916A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D9170
 * Original: 0x000D9170 - 0x000D91A6 (54 bytes, 22 insns)
 * Folder: sound (between: 0x000D9120 and 0x000D91D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9170: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x64DA48);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D91A1; /* je: equal / zero */

loc_000D917E: ;
    PUSH32(esp, edi);
    /* nop */

loc_000D9180: ;
    eax = esi;
    ecx = MEM32(eax + 8);
    MEM32(esp + 8) = ecx;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ebx (32-bit) */
    edi = esi;
    esi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_000D919C; /* jne: not equal / not zero */

loc_000D9192: ;
    eax = 0x64DA48;
    PUSH32(esp, 0x000D919Cu); RECOMP_ABI_CALL(0x000D9FD0u, sub_000D9FD0); /* call 0x000D9FD0 */

loc_000D919C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9180; /* jne: not equal / not zero */

loc_000D91A0: ;
    POP32(esp, edi);

loc_000D91A1: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D91B0
 * Original: 0x000D91B0 - 0x000D91B5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000D9120 and 0x000D91D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D91B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D91B0: ;
    g_seh_ebp = ebp; sub_000DDC20(); return; /* tail jmp 0x000DDC20 */

}

/**
 * sub_000D91C0
 * Original: 0x000D91C0 - 0x000D91C5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000D9120 and 0x000D91D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D91C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D91C0: ;
    g_seh_ebp = ebp; sub_000DDC10(); return; /* tail jmp 0x000DDC10 */

}

/**
 * sub_000D91D0
 * Original: 0x000D91D0 - 0x000D9397 (455 bytes, 140 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D91D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D91D0: ;
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x414);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x410) = eax;
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D9234; /* je: equal / zero */

loc_000D91F1: ;
    ecx = MEM32(esi + 4);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D924E; /* jne: not equal / not zero */

loc_000D91FD: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D924E; /* jne: not equal / not zero */

loc_000D9204: ;
    esi = MEM32(esi);
    eax = esi;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x32AEF8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D9222u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D9222: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = 0x1F;
    PUSH32(esp, 0x000D9231u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D9231: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9234: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x408);
    PUSH32(esp, 0x000D9245u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D9245: ;
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_000D924E: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x420);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D92B2; /* je: equal / zero */

loc_000D925A: ;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D92B2; /* jne: not equal / not zero */

loc_000D925F: ;
    ecx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D92B2; /* jne: not equal / not zero */

loc_000D9266: ;
    ebp = MEM32(ebp);
    eax = ebp;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ebp = ebp & 0xFFFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x32AE70);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D9285u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D9285: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = 0x1F;
    PUSH32(esp, 0x000D9294u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D9294: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x408);
    PUSH32(esp, 0x000D92A9u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D92A9: ;
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_000D92B2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D92BCu); RECOMP_ABI_CALL(0x000D8850u, sub_000D8850); /* call 0x000D8850 */

loc_000D92BC: ;
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000D92E2; /* jne: not equal / not zero */

loc_000D92C8: ;
    PUSH32(esp, 0x3260F0);
    edx = 0xA;
    PUSH32(esp, 0x000D92D7u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D92D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000D937E;

loc_000D92E2: ;
    MEM32(ebx + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x428);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D9300u); RECOMP_ABI_CALL(0x000DD7D0u, sub_000DD7D0); /* call 0x000DD7D0 */

loc_000D9300: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9356; /* jne: not equal / not zero */

loc_000D9307: ;
    ecx = MEM32(esp + 0x430);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x000D9317u); RECOMP_ABI_CALL(0x000DDC00u, sub_000DDC00); /* call 0x000DDC00 */

loc_000D9317: ;
    MEM32(ebx + 0x14) = eax;
    esi = ebx;
    MEM32(ebx + 8) = 1;
    PUSH32(esp, 0x000D9328u); RECOMP_ABI_CALL(0x000D9BF0u, sub_000D9BF0); /* call 0x000D9BF0 */

loc_000D9328: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9356; /* jne: not equal / not zero */

loc_000D932C: ;
    PUSH32(esp, 0x614);
    PUSH32(esp, 0x324878);
    edx = 0x32B0D4;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9345u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9345: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, 0x000D9351u); RECOMP_ABI_CALL(0x000D88E0u, sub_000D88E0); /* call 0x000D88E0 */

loc_000D9351: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000D937E;

loc_000D9356: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D937C; /* jne: not equal / not zero */

loc_000D935D: ;
    eax = MEM32(ebx + 0x14);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D936E; /* je: equal / zero */

loc_000D9367: ;
    esi = ebx;
    PUSH32(esp, 0x000D936Eu); RECOMP_ABI_CALL(0x000DD840u, sub_000DD840); /* call 0x000DD840 */

loc_000D936E: ;
    eax = esp + 0x10;
    PUSH32(esp, 0x000D9377u); RECOMP_ABI_CALL(0x000D88E0u, sub_000D88E0); /* call 0x000D88E0 */

loc_000D9377: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000D937E;

loc_000D937C: ;
    eax = ebx;

loc_000D937E: ;
    ecx = MEM32(esp + 0x418);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000D938Eu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D938E: ;
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000D93A0
 * Original: 0x000D93A0 - 0x000D943B (155 bytes, 56 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D93A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D93A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000D93CF; /* jne: not equal / not zero */

loc_000D93AC: ;
    PUSH32(esp, 0x636);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D93C5u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D93C5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D93CF: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D93F2; /* jne: not equal / not zero */

loc_000D93D6: ;
    PUSH32(esp, 0x639);
    PUSH32(esp, 0x32B108);
    edx = 0x32AE60;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D93EFu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D93EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D93F2: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = esi;
    PUSH32(esp, 0x000D93FEu); RECOMP_ABI_CALL(0x000D9AF0u, sub_000D9AF0); /* call 0x000D9AF0 */

loc_000D93FE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9419; /* je: equal / zero */

loc_000D9404: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000D9411u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D940Eu); } /* indirect call */
    }

loc_000D9411: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000D9419: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D942A; /* je: equal / zero */

loc_000D9420: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x28);
    PUSH32(esp, 0x000D9429u); RECOMP_ABI_CALL(0x000D9170u, sub_000D9170); /* call 0x000D9170 */

loc_000D9429: ;
    POP32(esp, ebx);

loc_000D942A: ;
    eax = esp + 8;
    PUSH32(esp, 0x000D9433u); RECOMP_ABI_CALL(0x000D88E0u, sub_000D88E0); /* call 0x000D88E0 */

loc_000D9433: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D9440
 * Original: 0x000D9440 - 0x000D9497 (87 bytes, 25 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9440: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9466; /* jne: not equal / not zero */

loc_000D9444: ;
    PUSH32(esp, 0x676);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D945Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D945D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9460: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

loc_000D9466: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9489; /* jne: not equal / not zero */

loc_000D946D: ;
    PUSH32(esp, 0x679);
    PUSH32(esp, 0x32B108);
    edx = 0x32AE60;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9486u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9486: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9489: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9460; /* je: equal / zero */

loc_000D9490: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_000D94A0
 * Original: 0x000D94A0 - 0x000D95CF (303 bytes, 77 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D94A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D94A0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x400) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D94EC; /* jne: not equal / not zero */

loc_000D94B6: ;
    PUSH32(esp, 0x691);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D94CFu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D94CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFF0000u;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D94E3u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D94E3: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D94EC: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D950F; /* jne: not equal / not zero */

loc_000D94F3: ;
    PUSH32(esp, 0x694);
    PUSH32(esp, 0x32B108);
    edx = 0x32AE60;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D950Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D950C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D950F: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9530; /* je: equal / zero */

loc_000D9514: ;
    PUSH32(esp, 0x695);
    PUSH32(esp, 0x32AE28);
    edx = 0x32AE48;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D952Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D952D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9530: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9553; /* jne: not equal / not zero */

loc_000D9537: ;
    PUSH32(esp, 0x696);
    PUSH32(esp, 0x32B014);
    edx = 0x32B038;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9550u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9550: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9553: ;
    ecx = MEM32(esp + 0x408);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D95AD; /* jne: not equal / not zero */

loc_000D9560: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D95AD; /* jne: not equal / not zero */

loc_000D9567: ;
    eax = MEM32(ecx);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, 0x32AE70);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D9584u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D9584: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edx = 0x1F;
    PUSH32(esp, 0x000D9593u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D9593: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9596: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D95A4u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D95A4: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D95AD: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9596; /* je: equal / zero */

loc_000D95B4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D95BAu); RECOMP_ABI_CALL(0x000DDC30u, sub_000DDC30); /* call 0x000DDC30 */

loc_000D95BA: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D95C6u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D95C6: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D95D0
 * Original: 0x000D95D0 - 0x000D9690 (192 bytes, 59 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D95D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D95D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000D95FB; /* jne: not equal / not zero */

loc_000D95DC: ;
    PUSH32(esp, 0x6D6);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D95F5u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D95F5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D95FB: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D961E; /* jne: not equal / not zero */

loc_000D9602: ;
    PUSH32(esp, 0x6D9);
    PUSH32(esp, 0x32B108);
    edx = 0x32AE60;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D961Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D961B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D961E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D963F; /* je: equal / zero */

loc_000D9623: ;
    PUSH32(esp, 0x6DA);
    PUSH32(esp, 0x32AE28);
    edx = 0x32AE48;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D963Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D963C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D963F: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = esi + 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_000D9666; /* jne: not equal / not zero */

loc_000D964A: ;
    PUSH32(esp, 0x6DB);
    PUSH32(esp, 0x32B014);
    edx = 0x32B038;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9663u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9663: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9666: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9683; /* je: equal / zero */

loc_000D966D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x28);
    PUSH32(esp, 0x000D9676u); RECOMP_ABI_CALL(0x000D9170u, sub_000D9170); /* call 0x000D9170 */

loc_000D9676: ;
    PUSH32(esp, 0x000D967Bu); RECOMP_ABI_CALL(0x000D9CA0u, sub_000D9CA0); /* call 0x000D9CA0 */

loc_000D967B: ;
    esi = ebp;
    PUSH32(esp, 0x000D9682u); RECOMP_ABI_CALL(0x000DD840u, sub_000DD840); /* call 0x000DD840 */

loc_000D9682: ;
    POP32(esp, ebx);

loc_000D9683: ;
    eax = esp + 8;
    PUSH32(esp, 0x000D968Cu); RECOMP_ABI_CALL(0x000D88E0u, sub_000D88E0); /* call 0x000D88E0 */

loc_000D968C: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9690
 * Original: 0x000D9690 - 0x000D9727 (151 bytes, 41 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9690: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D96B1; /* jne: not equal / not zero */

loc_000D9694: ;
    PUSH32(esp, 0x6F8);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D96ADu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D96AD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D96B0: ;
    esp += 4; return; /* ret */

loc_000D96B1: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D96D4; /* jne: not equal / not zero */

loc_000D96B8: ;
    PUSH32(esp, 0x6FB);
    PUSH32(esp, 0x32B108);
    edx = 0x32AE60;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D96D1u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D96D1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D96D4: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D96F5; /* je: equal / zero */

loc_000D96D9: ;
    PUSH32(esp, 0x6FC);
    PUSH32(esp, 0x32AE28);
    edx = 0x32AE48;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D96F2u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D96F2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D96F5: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D971F; /* jne: not equal / not zero */

loc_000D96FC: ;
    PUSH32(esp, 0x6FD);
    PUSH32(esp, 0x32B014);
    edx = 0x32B038;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9715u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9715: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D96B0; /* je: equal / zero */

loc_000D971F: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_000D9730
 * Original: 0x000D9730 - 0x000D97C7 (151 bytes, 41 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9730: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9751; /* jne: not equal / not zero */

loc_000D9734: ;
    PUSH32(esp, 0x712);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D974Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D974D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9750: ;
    esp += 4; return; /* ret */

loc_000D9751: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9774; /* jne: not equal / not zero */

loc_000D9758: ;
    PUSH32(esp, 0x715);
    PUSH32(esp, 0x32B108);
    edx = 0x32AE60;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9771u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9771: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9774: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9795; /* je: equal / zero */

loc_000D9779: ;
    PUSH32(esp, 0x716);
    PUSH32(esp, 0x32AE28);
    edx = 0x32AE48;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9792u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9792: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9795: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D97BF; /* jne: not equal / not zero */

loc_000D979C: ;
    PUSH32(esp, 0x717);
    PUSH32(esp, 0x32B014);
    edx = 0x32B038;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D97B5u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D97B5: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9750; /* je: equal / zero */

loc_000D97BF: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_000D9788
 * Original: 0x000D9788 - 0x000D97C7 (63 bytes, 18 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9788(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9788: ;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9792u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9792: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D97BF; /* jne: not equal / not zero */

loc_000D979C: ;
    PUSH32(esp, 0x717);
    PUSH32(esp, 0x32B014);
    edx = 0x32B038;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D97B5u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D97B5: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000D9750(); return; } /* je: equal / zero */

loc_000D97BF: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_000D97D0
 * Original: 0x000D97D0 - 0x000D97D5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000D9788 and 0x000D9820)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D97D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D97D0: ;
    g_seh_ebp = ebp; sub_000CCDE0(); return; /* tail jmp 0x000CCDE0 */

}

/**
 * sub_000D97E0
 * Original: 0x000D97E0 - 0x000D97E5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000D9788 and 0x000D9820)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D97E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D97E0: ;
    g_seh_ebp = ebp; sub_000CCE50(); return; /* tail jmp 0x000CCE50 */

}

/**
 * sub_000D97F0
 * Original: 0x000D97F0 - 0x000D97F5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000D9788 and 0x000D9820)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D97F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D97F0: ;
    g_seh_ebp = ebp; sub_000E3000(); return; /* tail jmp 0x000E3000 */

}

/**
 * sub_000D9800
 * Original: 0x000D9800 - 0x000D9805 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000D9788 and 0x000D9820)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9800: ;
    g_seh_ebp = ebp; sub_000CCE10(); return; /* tail jmp 0x000CCE10 */

}

/**
 * sub_000D9810
 * Original: 0x000D9810 - 0x000D9815 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000D9788 and 0x000D9820)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9810: ;
    g_seh_ebp = ebp; sub_000CCE60(); return; /* tail jmp 0x000CCE60 */

}

/**
 * sub_000D9820
 * Original: 0x000D9820 - 0x000D9859 (57 bytes, 17 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D9820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9820: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9830; /* jne: not equal / not zero */

loc_000D9824: ;
    PUSH32(esp, 0x745);
    edx = 0x326938;
    goto loc_000D9844;

loc_000D9830: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D983A; /* jne: not equal / not zero */

loc_000D9836: ;
    eax = MEM32(eax + 0x20);
    esp += 4; return; /* ret */

loc_000D983A: ;
    PUSH32(esp, 0x74F);
    edx = 0x32AE08;

loc_000D9844: ;
    ecx = 0x32B368;
    PUSH32(esp, 0x324878);
    PUSH32(esp, 0x000D9853u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9853: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D9860
 * Original: 0x000D9860 - 0x000D98BB (91 bytes, 32 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9860: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9870; /* jne: not equal / not zero */

loc_000D9864: ;
    PUSH32(esp, 0x758);
    edx = 0x326938;
    goto loc_000D98A5;

loc_000D9870: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D989B; /* jne: not equal / not zero */

loc_000D9876: ;
    edx = MEM32(ecx + 0x60);
    ecx = MEM32(ecx + 0x64);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D98BA; /* jle: less or equal (signed <=) */

loc_000D9882: ;
    PUSH32(esp, esi);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx;

loc_000D9888: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000D9888; /* jne: not equal / not zero */

loc_000D9899: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D989B: ;
    PUSH32(esp, 0x76A);
    edx = 0x32AE08;

loc_000D98A5: ;
    ecx = 0x32B368;
    PUSH32(esp, 0x324878);
    PUSH32(esp, 0x000D98B4u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D98B4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */

loc_000D98BA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D98C0
 * Original: 0x000D98C0 - 0x000D98E5 (37 bytes, 16 insns)
 * Folder: sound (between: 0x000D9860 and 0x000D9970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D98C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D98C0: ;
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x60) = ecx;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    MEM32(edi + 0x64) = edx;
    PUSH32(esp, 0x000D98DAu); RECOMP_ABI_CALL(0x000D9A60u, sub_000D9A60); /* call 0x000D9A60 */

loc_000D98DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D98F0
 * Original: 0x000D98F0 - 0x000D9911 (33 bytes, 13 insns)
 * Folder: sound (between: 0x000D9860 and 0x000D9970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D98F0(void)
{

loc_000D98F0: ;
    PUSH32(esp, 0x000D98F5u); RECOMP_ABI_CALL(0x000D85B0u, sub_000D85B0); /* call 0x000D85B0 */

loc_000D98F5: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000D9910u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D990Du); } /* indirect call */
    }

loc_000D9910: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9920
 * Original: 0x000D9920 - 0x000D9932 (18 bytes, 7 insns)
 * Folder: sound (between: 0x000D9860 and 0x000D9970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9920(void)
{

loc_000D9920: ;
    PUSH32(esp, 0x000D9925u); RECOMP_ABI_CALL(0x000D85B0u, sub_000D85B0); /* call 0x000D85B0 */

loc_000D9925: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000D9931u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D992Eu); } /* indirect call */
    }

loc_000D9931: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9940
 * Original: 0x000D9940 - 0x000D9957 (23 bytes, 9 insns)
 * Folder: sound (between: 0x000D9860 and 0x000D9970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9940(void)
{

loc_000D9940: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9960
 * Original: 0x000D9960 - 0x000D996B (11 bytes, 3 insns)
 * Folder: sound (between: 0x000D9860 and 0x000D9970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9960(void)
{

loc_000D9960: ;
    PUSH32(esp, 0x000D9965u); RECOMP_ABI_CALL(0x000D9940u, sub_000D9940); /* call 0x000D9940 */

loc_000D9965: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9970
 * Original: 0x000D9970 - 0x000D99C4 (84 bytes, 33 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9970: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D99C2; /* je: equal / zero */

loc_000D9977: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D99B9; /* je: equal / zero */

loc_000D997D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D99AD; /* je: equal / zero */

loc_000D9982: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D99A5; /* je: equal / zero */

loc_000D9987: ;
    PUSH32(esp, 0x81E);
    PUSH32(esp, 0x324878);
    edx = 0x32ADDC;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D99A0u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D99A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D99A5: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D9A50(); return; /* tail jmp 0x000D9A50 */

loc_000D99AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D99B4u); RECOMP_ABI_CALL(0x000D9A10u, sub_000D9A10); /* call 0x000D9A10 */

loc_000D99B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D99B9: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D99C1u); RECOMP_ABI_CALL(0x000D99D0u, sub_000D99D0); /* call 0x000D99D0 */

loc_000D99C1: ;
    POP32(esp, edi);

loc_000D99C2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D99D0
 * Original: 0x000D99D0 - 0x000D9A03 (51 bytes, 22 insns)
 * Folder: sound (between: 0x000D9970 and 0x000D9A60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D99D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D99D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D99D6u); RECOMP_ABI_CALL(0x000D85B0u, sub_000D85B0); /* call 0x000D85B0 */

loc_000D99D6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x000D99DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D99DCu); } /* indirect call */
    }

loc_000D99DF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D99FE; /* je: equal / zero */

loc_000D99E5: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D99FE; /* je: equal / zero */

loc_000D99EA: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D99FE; /* jne: not equal / not zero */

loc_000D99EF: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D99FE; /* je: equal / zero */

loc_000D99F6: ;
    PUSH32(esp, 0x000D99FBu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D99FB: ;
    MEM32(esi + 0x38) = ebx;

loc_000D99FE: ;
    MEM32(esi + 0x38) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9A10
 * Original: 0x000D9A10 - 0x000D9A41 (49 bytes, 16 insns)
 * Folder: sound (between: 0x000D9970 and 0x000D9A60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9A10: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9A32; /* je: equal / zero */

loc_000D9A17: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9A32; /* je: equal / zero */

loc_000D9A1F: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9A32; /* jne: not equal / not zero */

loc_000D9A26: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9A32; /* je: equal / zero */

loc_000D9A2D: ;
    PUSH32(esp, 0x000D9A32u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D9A32: ;
    MEM32(esi + 0x28) = 0;
    MEM32(esi + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9A50
 * Original: 0x000D9A50 - 0x000D9A58 (8 bytes, 2 insns)
 * Folder: sound (between: 0x000D9970 and 0x000D9A60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9A50(void)
{

loc_000D9A50: ;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9A60
 * Original: 0x000D9A60 - 0x000D9AEB (139 bytes, 47 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9A60: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9A7D; /* je: equal / zero */

loc_000D9A66: ;
    PUSH32(esp, 0x32B368);
    eax = 0x868;
    ecx = 0x32ADB8;
    PUSH32(esp, 0x000D9A7Au); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D9A7A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9A7D: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(edi + 8) = edx;
    eax = MEM32(esi + 0x18);
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(esi + 0x1C);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(esi + 0x20);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(esi + 0x24);
    MEM32(edi + 0x1C) = eax;
    ecx = MEM32(esi + 0x28);
    MEM32(edi + 0x20) = ecx;
    edx = MEM32(esi + 0x60);
    MEM32(edi + 0x58) = edx;
    eax = MEM32(esi + 0x64);
    MEM32(edi + 0x5C) = eax;
    ecx = MEM32(esi + 0x2C);
    MEM32(edi + 0x24) = ecx;
    edx = MEM32(esi + 0x1C);
    MEM32(edi + 0x54) = edx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9AE3; /* je: equal / zero */

loc_000D9ACA: ;
    PUSH32(esp, 0x25);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    ecx = edi + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D9AD9u); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_000D9AD9: ;
    edx = MEM32(esi + 0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x50) = edx;
    esp += 4; return; /* ret */

loc_000D9AE3: ;
    eax = MEM32(esp + 4);
    MEM32(edi + 0x28) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9AF0
 * Original: 0x000D9AF0 - 0x000D9BE2 (242 bytes, 94 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9AF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 8) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000D9B25; /* jne: not equal / not zero */

loc_000D9B03: ;
    PUSH32(esp, 0x89B);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9B1Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9B1C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9B1F: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D9B25: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9B4D; /* jne: not equal / not zero */

loc_000D9B2A: ;
    PUSH32(esp, 0x89E);
    PUSH32(esp, 0x32B108);
    edx = 0x32B000;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9B43u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9B43: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9B1F; /* je: equal / zero */

loc_000D9B4D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9B64; /* je: equal / zero */

loc_000D9B52: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9B64; /* je: equal / zero */

loc_000D9B59: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000D9B60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9B5Du); } /* indirect call */
    }

loc_000D9B60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9BDA; /* je: equal / zero */

loc_000D9B64: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebp);
    ebp = esi + 0x14;
    MEM32(esp + 0xC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D9BD9; /* je: equal / zero */

loc_000D9B73: ;
    PUSH32(esp, 0x000D9B78u); RECOMP_ABI_CALL(0x000D9CA0u, sub_000D9CA0); /* call 0x000D9CA0 */

loc_000D9B78: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9BD9; /* je: equal / zero */

loc_000D9B7D: ;
    esi = MEM32(esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D9BD2; /* je: equal / zero */

loc_000D9B83: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D9BC2; /* je: equal / zero */

loc_000D9B86: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D9BA7; /* je: equal / zero */

loc_000D9B89: ;
    PUSH32(esp, 0x32B368);
    eax = 0x8BA;
    ecx = 0x324878;
    PUSH32(esp, 0x000D9B9Du); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D9B9D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D9BA7: ;
    ecx = MEM32(ebp);
    ebx = MEM32(ecx + 0x28);
    PUSH32(esp, 0x000D9BB2u); RECOMP_ABI_CALL(0x000D9170u, sub_000D9170); /* call 0x000D9170 */

loc_000D9BB2: ;
    esi = ebp;
    PUSH32(esp, 0x000D9BB9u); RECOMP_ABI_CALL(0x000DD840u, sub_000DD840); /* call 0x000DD840 */

loc_000D9BB9: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D9BC2: ;
    esi = ebp;
    PUSH32(esp, 0x000D9BC9u); RECOMP_ABI_CALL(0x000DF1F0u, sub_000DF1F0); /* call 0x000DF1F0 */

loc_000D9BC9: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D9BD2: ;
    esi = ebp;
    PUSH32(esp, 0x000D9BD9u); RECOMP_ABI_CALL(0x000E0520u, sub_000E0520); /* call 0x000E0520 */

loc_000D9BD9: ;
    POP32(esp, ebp);

loc_000D9BDA: ;
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9BF0
 * Original: 0x000D9BF0 - 0x000D9C97 (167 bytes, 52 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D9BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9BF0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9C13; /* jne: not equal / not zero */

loc_000D9BF4: ;
    PUSH32(esp, 0x8C7);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9C0Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9C0D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D9C13: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9C3D; /* jne: not equal / not zero */

loc_000D9C1A: ;
    PUSH32(esp, 0x8CA);
    PUSH32(esp, 0x32B108);
    edx = 0x32B000;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9C33u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9C33: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9C94; /* je: equal / zero */

loc_000D9C3D: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000D9C45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9C42u); } /* indirect call */
    }

loc_000D9C45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9C78; /* je: equal / zero */

loc_000D9C49: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9C62; /* je: equal / zero */

loc_000D9C50: ;
    ecx = MEM32(edi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9C62; /* je: equal / zero */

loc_000D9C5A: ;
    ecx = MEM32(edi + 0x90);
    goto loc_000D9C65;

loc_000D9C62: ;
    ecx = MEM32(edi + 0x48);

loc_000D9C65: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D9C6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9C68u); } /* indirect call */
    }

loc_000D9C6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D9C78; /* je: equal / zero */

loc_000D9C72: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000D9C78: ;
    PUSH32(esp, 0x8E0);
    PUSH32(esp, 0x324878);
    edx = 0x32AD90;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9C91u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9C91: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9C94: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D9CA0
 * Original: 0x000D9CA0 - 0x000D9D47 (167 bytes, 52 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D9CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9CA0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9CC3; /* jne: not equal / not zero */

loc_000D9CA4: ;
    PUSH32(esp, 0x8E9);
    PUSH32(esp, 0x32B050);
    edx = 0x329D1C;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9CBDu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9CBD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D9CC3: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9CED; /* jne: not equal / not zero */

loc_000D9CCA: ;
    PUSH32(esp, 0x8EC);
    PUSH32(esp, 0x32B108);
    edx = 0x32B000;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9CE3u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9CE3: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9D44; /* je: equal / zero */

loc_000D9CED: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000D9CF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9CF2u); } /* indirect call */
    }

loc_000D9CF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9D28; /* je: equal / zero */

loc_000D9CF9: ;
    eax = MEM32(edi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9D12; /* je: equal / zero */

loc_000D9D03: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9D12; /* je: equal / zero */

loc_000D9D0A: ;
    ecx = MEM32(edi + 0x90);
    goto loc_000D9D15;

loc_000D9D12: ;
    ecx = MEM32(edi + 0x48);

loc_000D9D15: ;
    eax = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D9D1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9D1Bu); } /* indirect call */
    }

loc_000D9D1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9D28; /* je: equal / zero */

loc_000D9D22: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000D9D28: ;
    PUSH32(esp, 0x8FF);
    PUSH32(esp, 0x324878);
    edx = 0x32AD64;
    ecx = 0x32B368;
    PUSH32(esp, 0x000D9D41u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D9D41: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9D44: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D9D50
 * Original: 0x000D9D50 - 0x000D9D9F (79 bytes, 36 insns)
 * Folder: sound (between: 0x000D9CA0 and 0x000D9F10)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9D50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0x000D9D61u); RECOMP_ABI_CALL(0x000D9DE0u, sub_000D9DE0); /* call 0x000D9DE0 */

loc_000D9D61: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(eax + 0x7C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9D99; /* je: equal / zero */

loc_000D9D6C: ;
    /* nop */

loc_000D9D70: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9D92; /* je: equal / zero */

loc_000D9D77: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9D92; /* je: equal / zero */

loc_000D9D7E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    eax = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000D9D92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9D8Fu); } /* indirect call */
    }

loc_000D9D92: ;
    esi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9D70; /* jne: not equal / not zero */

loc_000D9D99: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000D9DA0
 * Original: 0x000D9DA0 - 0x000D9DDE (62 bytes, 29 insns)
 * Folder: sound (between: 0x000D9CA0 and 0x000D9F10)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D9DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9DA0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x7C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9DD9; /* je: equal / zero */

loc_000D9DAD: ;
    /* nop */

loc_000D9DB0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9DD2; /* je: equal / zero */

loc_000D9DB7: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9DD2; /* je: equal / zero */

loc_000D9DBE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    eax = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000D9DD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9DCFu); } /* indirect call */
    }

loc_000D9DD2: ;
    esi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9DB0; /* jne: not equal / not zero */

loc_000D9DD9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000D9DE0
 * Original: 0x000D9DE0 - 0x000D9E41 (97 bytes, 40 insns)
 * Folder: sound (between: 0x000D9CA0 and 0x000D9F10)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9DE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x000D9DE9u); RECOMP_ABI_CALL(0x000D6070u, sub_000D6070); /* call 0x000D6070 */

loc_000D9DE9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9E3C; /* je: equal / zero */

loc_000D9DEF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D9E3C; /* jl: less (signed <) */

loc_000D9DF3: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D9E33; /* jl: less (signed <) */

loc_000D9DFA: ;
    ecx = MEM32(esi);
    eax = ebx + 1;
    MEM32(esi + 4) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9E10; /* jne: not equal / not zero */

loc_000D9E09: ;
    PUSH32(esp, 0x000D9E0Eu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D9E0E: ;
    goto loc_000D9E15;

loc_000D9E10: ;
    PUSH32(esp, 0x000D9E15u); RECOMP_ABI_CALL(0x000ED260u, sub_000ED260); /* call 0x000ED260 */

loc_000D9E15: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(esi) = eax;
    eax = edi;
    if (CMP_AE(_fa, _fb)) goto loc_000D9E33; /* jae: above or equal (unsigned >=) */

loc_000D9E21: ;
    edx = MEM32(esi);
    MEM32(edx + eax * 4) = 0;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000D9E21; /* jb: below (unsigned <) */

loc_000D9E33: ;
    edx = MEM32(esi);
    eax = MEM32(esp + 0xC);
    MEM32(edx + ebx * 4) = eax;

loc_000D9E3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D9E50
 * Original: 0x000D9E50 - 0x000D9E62 (18 bytes, 7 insns)
 * Folder: sound (between: 0x000D9CA0 and 0x000D9F10)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D9E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9E50: ;
    ecx = MEM32(0x64D814);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9E5F; /* je: equal / zero */

loc_000D9E5A: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

loc_000D9E5F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D9E70
 * Original: 0x000D9E70 - 0x000D9ECE (94 bytes, 33 insns)
 * Folder: sound (between: 0x000D9CA0 and 0x000D9F10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9E70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x000D9E81u); RECOMP_ABI_CALL(0x000D85B0u, sub_000D85B0); /* call 0x000D85B0 */

loc_000D9E81: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000D9E92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9E8Fu); } /* indirect call */
    }

loc_000D9E92: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D9E9Cu); RECOMP_ABI_CALL(0x000D83F0u, sub_000D83F0); /* call 0x000D83F0 */

loc_000D9E9C: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D9EA6u); RECOMP_ABI_CALL(0x000DE3A0u, sub_000DE3A0); /* call 0x000DE3A0 */

loc_000D9EA6: ;
    PUSH32(esp, 0x000D9EABu); RECOMP_ABI_CALL(0x000DF630u, sub_000DF630); /* call 0x000DF630 */

loc_000D9EAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D9EC8; /* je: equal / zero */

loc_000D9EB0: ;
    ecx = MEM32(0x64D814);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9EC8; /* je: equal / zero */

loc_000D9EBA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000D9EBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9EBCu); } /* indirect call */
    }

loc_000D9EBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9EC8; /* jne: not equal / not zero */

loc_000D9EC4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D9EC8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D9ED0
 * Original: 0x000D9ED0 - 0x000D9EE4 (20 bytes, 6 insns)
 * Folder: sound (between: 0x000D9CA0 and 0x000D9F10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9ED0: ;
    ecx = MEM32(0x64D814);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9EDF; /* je: equal / zero */

loc_000D9EDA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x000D9EDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9EDCu); } /* indirect call */
    }

loc_000D9EDF: ;
    g_seh_ebp = ebp; sub_000DF650(); return; /* tail jmp 0x000DF650 */

}

/**
 * sub_000D9EF0
 * Original: 0x000D9EF0 - 0x000D9F04 (20 bytes, 9 insns)
 * Folder: sound (between: 0x000D9CA0 and 0x000D9F10)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D9EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9EF0: ;
    ecx = MEM32(0x64D814);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9F01; /* je: equal / zero */

loc_000D9EFA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x000D9F00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9EFDu); } /* indirect call */
    }

loc_000D9F00: ;
    esp += 4; return; /* ret */

loc_000D9F01: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D9F10
 * Original: 0x000D9F10 - 0x000D9F36 (38 bytes, 13 insns)
 * Folder: sound (source: sndclist.hpp)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9F10: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000D9F18u); RECOMP_ABI_CALL(0x000E6C70u, sub_000E6C70); /* call 0x000E6C70 */

loc_000D9F18: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D9F35; /* je: equal / zero */

loc_000D9F20: ;
    PUSH32(esp, 0x324394);
    eax = 0xDC;
    ecx = 0x324384;
    PUSH32(esp, 0x000D9F34u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D9F34: ;
    POP32(esp, ecx);

loc_000D9F35: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9F40
 * Original: 0x000D9F40 - 0x000D9FC2 (130 bytes, 43 insns)
 * Folder: sound (source: sndclist.hpp)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9F40: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9F5B; /* jne: not equal / not zero */

loc_000D9F44: ;
    PUSH32(esp, 0x324394);
    eax = 0xF1;
    ecx = 0x324368;
    PUSH32(esp, 0x000D9F58u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D9F58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9F5B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    eax = 0x10;
    PUSH32(esp, 0x000D9F6Au); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D9F6A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9F95; /* je: equal / zero */

loc_000D9F70: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = ebx;
    MEM32(edi + 8) = MEM32(edi + 8) + 1;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000D9F95; /* jne: not equal / not zero */

loc_000D9F7E: ;
    PUSH32(esp, 0x324394);
    eax = 0x65;
    ecx = 0x324318;
    PUSH32(esp, 0x000D9F92u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D9F92: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9F95: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9FB6; /* je: equal / zero */

loc_000D9FAA: ;
    MEM32(eax) = esi;
    MEM32(edi + 4) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D9FB6: ;
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D9FD0
 * Original: 0x000D9FD0 - 0x000DA044 (116 bytes, 40 insns)
 * Folder: sound (source: sndclist.hpp)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9FD0: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9FEE; /* jne: not equal / not zero */

loc_000D9FD7: ;
    PUSH32(esp, 0x324394);
    eax = 0x178;
    ecx = 0x324368;
    PUSH32(esp, 0x000D9FEBu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D9FEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9FEE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA00E; /* jne: not equal / not zero */

loc_000D9FF2: ;
    PUSH32(esp, 0x17B);
    PUSH32(esp, 0x324328);
    edx = 0x324334;
    ecx = 0x324394;
    PUSH32(esp, 0x000DA00Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DA00B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DA00E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA018; /* jne: not equal / not zero */

loc_000DA012: ;
    eax = MEM32(edi);
    MEM32(esi) = eax;
    goto loc_000DA01F;

loc_000DA018: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(edi);
    MEM32(ecx) = edx;

loc_000DA01F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA033; /* jne: not equal / not zero */

loc_000DA024: ;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    eax = edi;
    PUSH32(esp, 0x000DA031u); RECOMP_ABI_CALL(0x000C7C20u, sub_000C7C20); /* call 0x000C7C20 */

loc_000DA031: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DA033: ;
    ecx = MEM32(edi);
    edx = MEM32(edi + 4);
    eax = edi;
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0x000DA042u); RECOMP_ABI_CALL(0x000C7C20u, sub_000C7C20); /* call 0x000C7C20 */

loc_000DA042: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DA033
 * Original: 0x000DA033 - 0x000DA044 (17 bytes, 7 insns)
 * Folder: sound (between: 0x000D9FD0 and 0x000DA050)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA033(void)
{

loc_000DA033: ;
    ecx = MEM32(edi);
    edx = MEM32(edi + 4);
    eax = edi;
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0x000DA042u); RECOMP_ABI_CALL(0x000C7C20u, sub_000C7C20); /* call 0x000C7C20 */

loc_000DA042: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DA050
 * Original: 0x000DA050 - 0x000DA068 (24 bytes, 6 insns)
 * Folder: sound (source: CTool.hpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA050(void)
{

loc_000DA050: ;
    PUSH32(esp, 0x32B4C4);
    eax = 0x72;
    ecx = 0x324878;
    PUSH32(esp, 0x000DA064u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DA064: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DA070
 * Original: 0x000DA070 - 0x000DA088 (24 bytes, 6 insns)
 * Folder: sound (source: CTool.hpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA070(void)
{

loc_000DA070: ;
    PUSH32(esp, 0x32B4C4);
    eax = 0x76;
    ecx = 0x324878;
    PUSH32(esp, 0x000DA084u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DA084: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DA090
 * Original: 0x000DA090 - 0x000DA0AD (29 bytes, 7 insns)
 * Folder: sound (source: CTool.hpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA090: ;
    PUSH32(esp, 0x32B4C4);
    eax = 0x78;
    ecx = 0x324878;
    PUSH32(esp, 0x000DA0A4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DA0A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA0B0
 * Original: 0x000DA0B0 - 0x000DA0C8 (24 bytes, 6 insns)
 * Folder: sound (source: CTool.hpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA0B0(void)
{

loc_000DA0B0: ;
    PUSH32(esp, 0x32B4C4);
    eax = 0x7A;
    ecx = 0x324878;
    PUSH32(esp, 0x000DA0C4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DA0C4: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DA0D0
 * Original: 0x000DA0D0 - 0x000DA0ED (29 bytes, 7 insns)
 * Folder: sound (source: CTool.hpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA0D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA0D0: ;
    PUSH32(esp, 0x32B4C4);
    eax = 0x7C;
    ecx = 0x324878;
    PUSH32(esp, 0x000DA0E4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DA0E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA0F0
 * Original: 0x000DA0F0 - 0x000DA10D (29 bytes, 7 insns)
 * Folder: sound (source: CTool.hpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA0F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA0F0: ;
    PUSH32(esp, 0x32B4C4);
    eax = 0x89;
    ecx = 0x324878;
    PUSH32(esp, 0x000DA104u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DA104: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000DA110
 * Original: 0x000DA110 - 0x000DA12D (29 bytes, 7 insns)
 * Folder: sound (source: CTool.hpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA110: ;
    PUSH32(esp, 0x32B4C4);
    eax = 0x8B;
    ecx = 0x324878;
    PUSH32(esp, 0x000DA124u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DA124: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000DA130
 * Original: 0x000DA130 - 0x000DA138 (8 bytes, 2 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA130(void)
{

loc_000DA130: ;
    MEM32(ecx + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA140
 * Original: 0x000DA140 - 0x000DA211 (209 bytes, 73 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * Category: game_debug
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DA140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esp + 8) = 0;
    ecx = 0xFF;
    edi = esp + 0xA;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA1D4; /* je: equal / zero */

loc_000DA176: ;
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000DA18D; /* je: equal / zero */

loc_000DA17C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000DA1B1; /* jne: not equal / not zero */

loc_000DA181: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA1B1; /* je: equal / zero */

loc_000DA188: ;
    ecx = eax + 0x28;
    goto loc_000DA19A;

loc_000DA18D: ;
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA1B1; /* je: equal / zero */

loc_000DA194: ;
    eax = MEM32(esi + 4);
    ecx = eax + 0x38;

loc_000DA19A: ;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, 0x32B48C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DA1AEu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000DA1AE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DA1B1: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA1E7; /* jne: not equal / not zero */

loc_000DA1B9: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    PUSH32(esp, 0x32B460);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DA1CFu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000DA1CF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000DA1E7;

loc_000DA1D4: ;
    PUSH32(esp, ebx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x32B42C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DA1E4u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000DA1E4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DA1E7: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DA1FBu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DA1FB: ;
    ecx = MEM32(esp + 0x414);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DA20Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000DA20A: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000DA220
 * Original: 0x000DA220 - 0x000DA232 (18 bytes, 6 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA220: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x32B3E8;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA240
 * Original: 0x000DA240 - 0x000DA25C (28 bytes, 10 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA240: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000DA248u); RECOMP_ABI_CALL(0x000DA260u, sub_000DA260); /* call 0x000DA260 */

loc_000DA248: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000DA258; /* je: equal / zero */

loc_000DA251: ;
    PUSH32(esp, 0x000DA256u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000DA256: ;
    eax = esi;

loc_000DA258: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DA260
 * Original: 0x000DA260 - 0x000DA267 (7 bytes, 2 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA260(void)
{

loc_000DA260: ;
    MEM32(ecx) = 0x32B3E8;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA270
 * Original: 0x000DA270 - 0x000DA27F (15 bytes, 5 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA270: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA27E; /* jne: not equal / not zero */

loc_000DA277: ;
    MEM32(eax + 8) = 1;

loc_000DA27E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA280
 * Original: 0x000DA280 - 0x000DA28E (14 bytes, 4 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA280: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA28D; /* jne: not equal / not zero */

loc_000DA286: ;
    MEM32(eax + 8) = 0;

loc_000DA28D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA290
 * Original: 0x000DA290 - 0x000DA2C0 (48 bytes, 22 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA290: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000DA29Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DA29Bu); } /* indirect call */
    }

loc_000DA29E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA2A7; /* jne: not equal / not zero */

loc_000DA2A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000DA2A7: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DA2B3u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000DA2B3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DA2C0
 * Original: 0x000DA2C0 - 0x000DA2E9 (41 bytes, 14 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DA2C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA2C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA2E4; /* je: equal / zero */

loc_000DA2C8: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA2E4; /* je: equal / zero */

loc_000DA2CD: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA2E4; /* jne: not equal / not zero */

loc_000DA2D4: ;
    SET_LO16(eax, MEM16(eax + 6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000DA2E9(); return; } /* je: equal / zero */

loc_000DA2DE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000DA2E9(); return; } /* je: equal / zero */

loc_000DA2E4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DA2E9
 * Original: 0x000DA2E9 - 0x000DA2F1 (8 bytes, 2 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA2E9(void)
{

loc_000DA2E9: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DA300
 * Original: 0x000DA300 - 0x000DA310 (16 bytes, 7 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA300: ;
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DA30Cu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000DA30C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DA310
 * Original: 0x000DA310 - 0x000DA334 (36 bytes, 15 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA310: ;
    PUSH32(esp, 0x000DA315u); RECOMP_ABI_CALL(0x000D6C70u, sub_000D6C70); /* call 0x000D6C70 */

loc_000DA315: ;
    ecx = eax;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x000DA320u); RECOMP_ABI_CALL(0x000D6C70u, sub_000D6C70); /* call 0x000D6C70 */

loc_000DA320: ;
    edx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000DA32D; /* jge: greater or equal (signed >=) */

loc_000DA326: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DA32D: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DA340
 * Original: 0x000DA340 - 0x000DA36A (42 bytes, 13 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA340: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, 0x000DA348u); RECOMP_ABI_CALL(0x000D6C70u, sub_000D6C70); /* call 0x000D6C70 */

loc_000DA348: ;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x000DA351u); RECOMP_ABI_CALL(0x000D6C70u, sub_000D6C70); /* call 0x000D6C70 */

loc_000DA351: ;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, 0x000DA359u); RECOMP_ABI_CALL(0x000D6C70u, sub_000D6C70); /* call 0x000D6C70 */

loc_000DA359: ;
    PUSH32(esp, 0x000DA35Eu); RECOMP_ABI_CALL(0x000DA310u, sub_000DA310); /* call 0x000DA310 */

loc_000DA35E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DA366u); RECOMP_ABI_CALL(0x000DA310u, sub_000DA310); /* call 0x000DA310 */

loc_000DA366: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DA370
 * Original: 0x000DA370 - 0x000DA3A1 (49 bytes, 22 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA370: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DA37Eu); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000DA37E: ;
    edx = MEM32(esi + 4);
    ebx = eax;
    eax = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DA38Du); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000DA38D: ;
    ecx = MEM32(esi);
    edx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DA39Au); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000DA39A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DA3B0
 * Original: 0x000DA3B0 - 0x000DA3D8 (40 bytes, 15 insns)
 * Folder: sound (between: 0x000DA110 and 0x000DA3E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA3B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA3B0: ;
    ecx = MEM32(edx + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DA3BCu); RECOMP_ABI_CALL(0x000D6B40u, sub_000D6B40); /* call 0x000D6B40 */

loc_000DA3BC: ;
    ecx = MEM32(edx + 4);
    edi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x000DA3C9u); RECOMP_ABI_CALL(0x000D6B40u, sub_000D6B40); /* call 0x000D6B40 */

loc_000DA3C9: ;
    ecx = MEM32(edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    PUSH32(esp, 0x000DA3D4u); RECOMP_ABI_CALL(0x000D6B40u, sub_000D6B40); /* call 0x000D6B40 */

loc_000DA3D4: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DA3E0
 * Original: 0x000DA3E0 - 0x000DA446 (102 bytes, 27 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA3E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = 1;
    MEM32(esp + 0xC) = 0xBB80;
    MEM16(esp + 0xA) = 2;
    MEM16(esp + 8) = 0x10;
    PUSH32(esp, 0x000DA409u); RECOMP_ABI_CALL(0x000D7E60u, sub_000D7E60); /* call 0x000D7E60 */

loc_000DA409: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA43F; /* jne: not equal / not zero */

loc_000DA40E: ;
    PUSH32(esp, 0x000DA413u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA413: ;
    PUSH32(esp, 0x43);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA41Fu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA41F: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F8CA8);
    PUSH32(esp, 0x000DA42Eu); RECOMP_ABI_CALL(0x000D8360u, sub_000D8360); /* call 0x000D8360 */

loc_000DA42E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA43A; /* jne: not equal / not zero */

loc_000DA435: ;
    esi = 1;

loc_000DA43A: ;
    PUSH32(esp, 0x000DA43Fu); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DA43F: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DA450
 * Original: 0x000DA450 - 0x000DA475 (37 bytes, 10 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000DA456u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA456: ;
    PUSH32(esp, 0x4E);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA462u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA462: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0x5F8CA8;
    PUSH32(esp, 0x000DA46Fu); RECOMP_ABI_CALL(0x000D83B0u, sub_000D83B0); /* call 0x000D83B0 */

loc_000DA46F: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DA480
 * Original: 0x000DA480 - 0x000DA4BB (59 bytes, 20 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DA480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA480: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA4B8; /* je: equal / zero */

loc_000DA489: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DA48Fu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA48F: ;
    PUSH32(esp, 0x59);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA49Bu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA49B: ;
    eax = MEM32(0x5F8CA8);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DA4ADu); RECOMP_ABI_CALL(0x000D84E0u, sub_000D84E0); /* call 0x000D84E0 */

loc_000DA4AD: ;
    esi = eax;
    PUSH32(esp, 0x000DA4B4u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DA4B4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DA4B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DA4C0
 * Original: 0x000DA4C0 - 0x000DA4F3 (51 bytes, 16 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA4C0: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA4ED; /* je: equal / zero */

loc_000DA4C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DA4CFu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA4CF: ;
    PUSH32(esp, 0x68);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA4DBu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA4DB: ;
    esi = MEM32(0x33F6B8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DA4E9u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DA4E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DA4ED: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA500
 * Original: 0x000DA500 - 0x000DA553 (83 bytes, 28 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA500: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA54F; /* je: equal / zero */

loc_000DA509: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DA50Fu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA50F: ;
    PUSH32(esp, 0xA4);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA51Eu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA51E: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x5F8CA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DA544u); RECOMP_ABI_CALL(0x000D8940u, sub_000D8940); /* call 0x000D8940 */

loc_000DA544: ;
    esi = eax;
    PUSH32(esp, 0x000DA54Bu); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DA54B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DA54F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DA560
 * Original: 0x000DA560 - 0x000DA591 (49 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA560: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DA566u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA566: ;
    PUSH32(esp, 0xB0);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA575u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA575: ;
    edi = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA58B; /* je: equal / zero */

loc_000DA582: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x000DA58Bu); RECOMP_ABI_CALL(0x000D8CF0u, sub_000D8CF0); /* call 0x000D8CF0 */

loc_000DA58B: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DA5A0
 * Original: 0x000DA5A0 - 0x000DA5D1 (49 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA5A0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DA5A6u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA5A6: ;
    PUSH32(esp, 0xB8);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA5B5u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA5B5: ;
    edi = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA5CB; /* je: equal / zero */

loc_000DA5C2: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x000DA5CBu); RECOMP_ABI_CALL(0x000D8D60u, sub_000D8D60); /* call 0x000D8D60 */

loc_000DA5CB: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DA5E0
 * Original: 0x000DA5E0 - 0x000DA60F (47 bytes, 11 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA5E0: ;
    PUSH32(esp, 0x000DA5E5u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA5E5: ;
    PUSH32(esp, 0xC0);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA5F4u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA5F4: ;
    ecx = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA60A; /* je: equal / zero */

loc_000DA601: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x000DA60Au); RECOMP_ABI_CALL(0x000D8DD0u, sub_000D8DD0); /* call 0x000D8DD0 */

loc_000DA60A: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DA610
 * Original: 0x000DA610 - 0x000DA64E (62 bytes, 19 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DA610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA610: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA64B; /* je: equal / zero */

loc_000DA619: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DA61Fu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA61F: ;
    PUSH32(esp, 0xCB);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA62Eu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA62E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DA640u); RECOMP_ABI_CALL(0x000D8F40u, sub_000D8F40); /* call 0x000D8F40 */

loc_000DA640: ;
    esi = eax;
    PUSH32(esp, 0x000DA647u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DA647: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DA64B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DA650
 * Original: 0x000DA650 - 0x000DA692 (66 bytes, 20 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DA650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA650: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA68F; /* je: equal / zero */

loc_000DA659: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DA65Fu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA65F: ;
    PUSH32(esp, 0xD9);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA66Eu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA66E: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DA684u); RECOMP_ABI_CALL(0x000D8FA0u, sub_000D8FA0); /* call 0x000D8FA0 */

loc_000DA684: ;
    esi = eax;
    PUSH32(esp, 0x000DA68Bu); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DA68B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DA68F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DA6A0
 * Original: 0x000DA6A0 - 0x000DA6B1 (17 bytes, 8 insns)
 * Folder: sound (between: 0x000DA650 and 0x000DA700)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA6A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA6A0: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DA6ADu); RECOMP_ABI_CALL(0x000D98F0u, sub_000D98F0); /* call 0x000D98F0 */

loc_000DA6AD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DA6C0
 * Original: 0x000DA6C0 - 0x000DA6CA (10 bytes, 4 insns)
 * Folder: sound (between: 0x000DA650 and 0x000DA700)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA6C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA6C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DA6C6u); RECOMP_ABI_CALL(0x000D9920u, sub_000D9920); /* call 0x000D9920 */

loc_000DA6C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DA6D0
 * Original: 0x000DA6D0 - 0x000DA6D5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000DA650 and 0x000DA700)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA6D0: ;
    g_seh_ebp = ebp; sub_000D98C0(); return; /* tail jmp 0x000D98C0 */

}

/**
 * sub_000DA6E0
 * Original: 0x000DA6E0 - 0x000DA6E5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000DA650 and 0x000DA700)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA6E0: ;
    g_seh_ebp = ebp; sub_000D9960(); return; /* tail jmp 0x000D9960 */

}

/**
 * sub_000DA6F0
 * Original: 0x000DA6F0 - 0x000DA6F5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000DA650 and 0x000DA700)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA6F0: ;
    g_seh_ebp = ebp; sub_000D9970(); return; /* tail jmp 0x000D9970 */

}

/**
 * sub_000DA700
 * Original: 0x000DA700 - 0x000DA72E (46 bytes, 11 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA700: ;
    PUSH32(esp, 0x000DA705u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA705: ;
    PUSH32(esp, 0x113);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA714u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA714: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA729; /* je: equal / zero */

loc_000DA720: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x000DA729u); RECOMP_ABI_CALL(0x000D9010u, sub_000D9010); /* call 0x000D9010 */

loc_000DA729: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DA730
 * Original: 0x000DA730 - 0x000DA75E (46 bytes, 11 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA730: ;
    PUSH32(esp, 0x000DA735u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA735: ;
    PUSH32(esp, 0x11C);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA744u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA744: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA759; /* je: equal / zero */

loc_000DA750: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x000DA759u); RECOMP_ABI_CALL(0x000D9030u, sub_000D9030); /* call 0x000D9030 */

loc_000DA759: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DA760
 * Original: 0x000DA760 - 0x000DA798 (56 bytes, 18 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DA760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA760: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA795; /* je: equal / zero */

loc_000DA769: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DA76Fu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA76F: ;
    PUSH32(esp, 0x127);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA77Eu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA77E: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DA78Au); RECOMP_ABI_CALL(0x000D9EF0u, sub_000D9EF0); /* call 0x000D9EF0 */

loc_000DA78A: ;
    esi = eax;
    PUSH32(esp, 0x000DA791u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DA791: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DA795: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DA7A0
 * Original: 0x000DA7A0 - 0x000DA7E5 (69 bytes, 16 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA7A0: ;
    PUSH32(esp, 0x000DA7A5u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA7A5: ;
    PUSH32(esp, 0x13E);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA7B4u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA7B4: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA7CE; /* je: equal / zero */

loc_000DA7C0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x000DA7C9u); RECOMP_ABI_CALL(0x000D90E0u, sub_000D90E0); /* call 0x000D90E0 */

loc_000DA7C9: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

loc_000DA7CE: ;
    PUSH32(esp, 0x32B500);
    edx = 8;
    PUSH32(esp, 0x000DA7DDu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000DA7DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DA7F0
 * Original: 0x000DA7F0 - 0x000DA82F (63 bytes, 20 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA7F0: ;
    ecx = MEM32(0x5F8CA8);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA82E; /* je: equal / zero */

loc_000DA7FD: ;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x000DA805u); RECOMP_ABI_CALL(0x000D7E80u, sub_000D7E80); /* call 0x000D7E80 */

loc_000DA805: ;
    esi = eax;
    PUSH32(esp, 0x000DA80Cu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA80C: ;
    PUSH32(esp, 0x14F);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA81Bu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA81B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DA824u); RECOMP_ABI_CALL(0x000D9050u, sub_000D9050); /* call 0x000D9050 */

loc_000DA824: ;
    esi = eax;
    PUSH32(esp, 0x000DA82Bu); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DA82B: ;
    eax = esi;
    POP32(esp, esi);

loc_000DA82E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA830
 * Original: 0x000DA830 - 0x000DA868 (56 bytes, 15 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA830: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA867; /* je: equal / zero */

loc_000DA839: ;
    eax = MEM32(esp + 4);
    ecx = esi;
    PUSH32(esp, 0x000DA844u); RECOMP_ABI_CALL(0x000D7F40u, sub_000D7F40); /* call 0x000D7F40 */

loc_000DA844: ;
    PUSH32(esp, 0x000DA849u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA849: ;
    PUSH32(esp, 0x15C);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA858u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA858: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi;
    PUSH32(esp, 0x000DA862u); RECOMP_ABI_CALL(0x000D90B0u, sub_000D90B0); /* call 0x000D90B0 */

loc_000DA862: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

loc_000DA867: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA870
 * Original: 0x000DA870 - 0x000DA8A4 (52 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA870: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA8A3; /* je: equal / zero */

loc_000DA879: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x000DA882u); RECOMP_ABI_CALL(0x000D7FB0u, sub_000D7FB0); /* call 0x000D7FB0 */

loc_000DA882: ;
    PUSH32(esp, 0x000DA887u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA887: ;
    PUSH32(esp, 0x167);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA896u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA896: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DA89Eu); RECOMP_ABI_CALL(0x000D90D0u, sub_000D90D0); /* call 0x000D90D0 */

loc_000DA89E: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

loc_000DA8A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA8B0
 * Original: 0x000DA8B0 - 0x000DA8F1 (65 bytes, 20 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA8B0: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA8EB; /* je: equal / zero */

loc_000DA8B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DA8BFu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA8BF: ;
    PUSH32(esp, 0x172);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA8CEu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA8CE: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x000DA8E0u); RECOMP_ABI_CALL(0x000D8EC0u, sub_000D8EC0); /* call 0x000D8EC0 */

loc_000DA8E0: ;
    esi = eax;
    PUSH32(esp, 0x000DA8E7u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DA8E7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DA8EB: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000DA900
 * Original: 0x000DA900 - 0x000DA92D (45 bytes, 14 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA900: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DA906u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA906: ;
    PUSH32(esp, 0x186);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA915u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA915: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DA91Fu); RECOMP_ABI_CALL(0x000D97D0u, sub_000D97D0); /* call 0x000D97D0 */

loc_000DA91F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x000DA929u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DA929: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DA930
 * Original: 0x000DA930 - 0x000DA95F (47 bytes, 11 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA930: ;
    PUSH32(esp, 0x000DA935u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA935: ;
    PUSH32(esp, 0x1A6);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA944u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA944: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA955; /* je: equal / zero */

loc_000DA950: ;
    PUSH32(esp, 0x000DA955u); RECOMP_ABI_CALL(0x000D8CD0u, sub_000D8CD0); /* call 0x000D8CD0 */

loc_000DA955: ;
    PUSH32(esp, 0x000DA95Au); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DA95A: ;
    g_seh_ebp = ebp; sub_000DC260(); return; /* tail jmp 0x000DC260 */

}

/**
 * sub_000DA960
 * Original: 0x000DA960 - 0x000DA98E (46 bytes, 11 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA960: ;
    PUSH32(esp, 0x000DA965u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA965: ;
    PUSH32(esp, 0x1BF);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA974u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA974: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA989; /* je: equal / zero */

loc_000DA980: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x000DA989u); RECOMP_ABI_CALL(0x000D91B0u, sub_000D91B0); /* call 0x000D91B0 */

loc_000DA989: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DA990
 * Original: 0x000DA990 - 0x000DA9BE (46 bytes, 11 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA990: ;
    PUSH32(esp, 0x000DA995u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA995: ;
    PUSH32(esp, 0x1C7);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA9A4u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA9A4: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA9B9; /* je: equal / zero */

loc_000DA9B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x000DA9B9u); RECOMP_ABI_CALL(0x000D91C0u, sub_000D91C0); /* call 0x000D91C0 */

loc_000DA9B9: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DA9C0
 * Original: 0x000DA9C0 - 0x000DAA14 (84 bytes, 28 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA9C0: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAA10; /* je: equal / zero */

loc_000DA9C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DA9CFu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DA9CF: ;
    PUSH32(esp, 0x1D2);
    eax = 0x32B538;
    PUSH32(esp, 0x000DA9DEu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DA9DE: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x5F8CA8);
    PUSH32(esp, 0x000DAA05u); RECOMP_ABI_CALL(0x000D91D0u, sub_000D91D0); /* call 0x000D91D0 */

loc_000DAA05: ;
    esi = eax;
    PUSH32(esp, 0x000DAA0Cu); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DAA0C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DAA10: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DAA20
 * Original: 0x000DAA20 - 0x000DAA64 (68 bytes, 22 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DAA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DAA20: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAA61; /* je: equal / zero */

loc_000DAA29: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DAA2Fu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAA2F: ;
    PUSH32(esp, 0x1E0);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAA3Eu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAA3E: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DAA56u); RECOMP_ABI_CALL(0x000D93A0u, sub_000D93A0); /* call 0x000D93A0 */

loc_000DAA56: ;
    esi = eax;
    PUSH32(esp, 0x000DAA5Du); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DAA5D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DAA61: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DAA70
 * Original: 0x000DAA70 - 0x000DAAAB (59 bytes, 18 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DAA70: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAAA5; /* je: equal / zero */

loc_000DAA79: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DAA7Fu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAA7F: ;
    PUSH32(esp, 0x1FC);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAA8Eu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAA8E: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DAA9Au); RECOMP_ABI_CALL(0x000D9440u, sub_000D9440); /* call 0x000D9440 */

loc_000DAA9A: ;
    esi = eax;
    PUSH32(esp, 0x000DAAA1u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DAAA1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DAAA5: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000DAAB0
 * Original: 0x000DAAB0 - 0x000DAAED (61 bytes, 20 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DAAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DAAB0: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAAEA; /* je: equal / zero */

loc_000DAAB9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DAABFu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAABF: ;
    PUSH32(esp, 0x20A);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAACEu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAACE: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DAADFu); RECOMP_ABI_CALL(0x000D94A0u, sub_000D94A0); /* call 0x000D94A0 */

loc_000DAADF: ;
    esi = eax;
    PUSH32(esp, 0x000DAAE6u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DAAE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DAAEA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DAAF0
 * Original: 0x000DAAF0 - 0x000DAB29 (57 bytes, 16 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DAAF0: ;
    PUSH32(esp, 0x000DAAF5u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAAF5: ;
    PUSH32(esp, 0x224);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAB04u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAB04: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAB24; /* je: equal / zero */

loc_000DAB10: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DAB24u); RECOMP_ABI_CALL(0x000D9DA0u, sub_000D9DA0); /* call 0x000D9DA0 */

loc_000DAB24: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DAB30
 * Original: 0x000DAB30 - 0x000DAB61 (49 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DAB30: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DAB36u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAB36: ;
    PUSH32(esp, 0x22C);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAB45u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAB45: ;
    edi = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAB5B; /* je: equal / zero */

loc_000DAB52: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x000DAB5Bu); RECOMP_ABI_CALL(0x000D95D0u, sub_000D95D0); /* call 0x000D95D0 */

loc_000DAB5B: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DAB70
 * Original: 0x000DAB70 - 0x000DAB9A (42 bytes, 10 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DAB70: ;
    PUSH32(esp, 0x000DAB75u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAB75: ;
    PUSH32(esp, 0x234);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAB84u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAB84: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAB95; /* je: equal / zero */

loc_000DAB90: ;
    PUSH32(esp, 0x000DAB95u); RECOMP_ABI_CALL(0x000D9690u, sub_000D9690); /* call 0x000D9690 */

loc_000DAB95: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DABA0
 * Original: 0x000DABA0 - 0x000DABCA (42 bytes, 10 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DABA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DABA0: ;
    PUSH32(esp, 0x000DABA5u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DABA5: ;
    PUSH32(esp, 0x23C);
    eax = 0x32B538;
    PUSH32(esp, 0x000DABB4u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DABB4: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DABC5; /* je: equal / zero */

loc_000DABC0: ;
    PUSH32(esp, 0x000DABC5u); RECOMP_ABI_CALL(0x000D9730u, sub_000D9730); /* call 0x000D9730 */

loc_000DABC5: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DABD0
 * Original: 0x000DABD0 - 0x000DABFE (46 bytes, 11 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DABD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DABD0: ;
    PUSH32(esp, 0x000DABD5u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DABD5: ;
    PUSH32(esp, 0x24C);
    eax = 0x32B538;
    PUSH32(esp, 0x000DABE4u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DABE4: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DABF9; /* je: equal / zero */

loc_000DABF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x000DABF9u); RECOMP_ABI_CALL(0x000D8780u, sub_000D8780); /* call 0x000D8780 */

loc_000DABF9: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DAC00
 * Original: 0x000DAC00 - 0x000DAC2A (42 bytes, 10 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DAC00: ;
    PUSH32(esp, 0x000DAC05u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAC05: ;
    PUSH32(esp, 0x254);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAC14u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAC14: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAC25; /* je: equal / zero */

loc_000DAC20: ;
    PUSH32(esp, 0x000DAC25u); RECOMP_ABI_CALL(0x000D87A0u, sub_000D87A0); /* call 0x000D87A0 */

loc_000DAC25: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DAC30
 * Original: 0x000DAC30 - 0x000DAC86 (86 bytes, 28 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DAC30: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAC82; /* je: equal / zero */

loc_000DAC39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DAC3Fu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAC3F: ;
    PUSH32(esp, 0x25F);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAC4Eu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAC4E: ;
    eax = MEM32(0x33BB58);
    ecx = MEM32(0x33BB54);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x5F8CA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DAC77u); RECOMP_ABI_CALL(0x000D8940u, sub_000D8940); /* call 0x000D8940 */

loc_000DAC77: ;
    esi = eax;
    PUSH32(esp, 0x000DAC7Eu); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DAC7E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DAC82: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DAC90
 * Original: 0x000DAC90 - 0x000DACA8 (24 bytes, 10 insns)
 * Folder: sound (between: 0x000DAC30 and 0x000DACB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAC90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DAC90: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x60);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DACA3u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000DACA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DACB0
 * Original: 0x000DACB0 - 0x000DACE1 (49 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DACB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DACB0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DACB6u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DACB6: ;
    PUSH32(esp, 0x273);
    eax = 0x32B538;
    PUSH32(esp, 0x000DACC5u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DACC5: ;
    edi = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DACDB; /* je: equal / zero */

loc_000DACD2: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x000DACDBu); RECOMP_ABI_CALL(0x000D8CF0u, sub_000D8CF0); /* call 0x000D8CF0 */

loc_000DACDB: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DACF0
 * Original: 0x000DACF0 - 0x000DAD21 (49 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DACF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DACF0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DACF6u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DACF6: ;
    PUSH32(esp, 0x27B);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAD05u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAD05: ;
    edi = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAD1B; /* je: equal / zero */

loc_000DAD12: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x000DAD1Bu); RECOMP_ABI_CALL(0x000D8D60u, sub_000D8D60); /* call 0x000D8D60 */

loc_000DAD1B: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DAD30
 * Original: 0x000DAD30 - 0x000DAD5F (47 bytes, 11 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAD30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DAD30: ;
    PUSH32(esp, 0x000DAD35u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAD35: ;
    PUSH32(esp, 0x283);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAD44u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAD44: ;
    ecx = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAD5A; /* je: equal / zero */

loc_000DAD51: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x000DAD5Au); RECOMP_ABI_CALL(0x000D8DD0u, sub_000D8DD0); /* call 0x000D8DD0 */

loc_000DAD5A: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DAD60
 * Original: 0x000DAD60 - 0x000DAD9E (62 bytes, 19 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DAD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DAD60: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAD9B; /* je: equal / zero */

loc_000DAD69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DAD6Fu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAD6F: ;
    PUSH32(esp, 0x28E);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAD7Eu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAD7E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DAD90u); RECOMP_ABI_CALL(0x000D8F40u, sub_000D8F40); /* call 0x000D8F40 */

loc_000DAD90: ;
    esi = eax;
    PUSH32(esp, 0x000DAD97u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DAD97: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DAD9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DADA0
 * Original: 0x000DADA0 - 0x000DADE2 (66 bytes, 20 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DADA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DADA0: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DADDF; /* je: equal / zero */

loc_000DADA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DADAFu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DADAF: ;
    PUSH32(esp, 0x29C);
    eax = 0x32B538;
    PUSH32(esp, 0x000DADBEu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DADBE: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DADD4u); RECOMP_ABI_CALL(0x000D8FA0u, sub_000D8FA0); /* call 0x000D8FA0 */

loc_000DADD4: ;
    esi = eax;
    PUSH32(esp, 0x000DADDBu); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DADDB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DADDF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DADF0
 * Original: 0x000DADF0 - 0x000DAE31 (65 bytes, 20 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DADF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DADF0: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAE2B; /* je: equal / zero */

loc_000DADF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DADFFu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DADFF: ;
    PUSH32(esp, 0x2AA);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAE0Eu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAE0E: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x000DAE20u); RECOMP_ABI_CALL(0x000D8EC0u, sub_000D8EC0); /* call 0x000D8EC0 */

loc_000DAE20: ;
    esi = eax;
    PUSH32(esp, 0x000DAE27u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DAE27: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DAE2B: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000DAE40
 * Original: 0x000DAE40 - 0x000DAE96 (86 bytes, 28 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DAE40: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAE92; /* je: equal / zero */

loc_000DAE49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DAE4Fu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAE4F: ;
    PUSH32(esp, 0x2B8);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAE5Eu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAE5E: ;
    eax = MEM32(0x33BB58);
    ecx = MEM32(0x33BB54);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x5F8CA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DAE87u); RECOMP_ABI_CALL(0x000D8940u, sub_000D8940); /* call 0x000D8940 */

loc_000DAE87: ;
    esi = eax;
    PUSH32(esp, 0x000DAE8Eu); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DAE8E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DAE92: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DAEA0
 * Original: 0x000DAEA0 - 0x000DAEA8 (8 bytes, 3 insns)
 * Folder: sound (between: 0x000DAE40 and 0x000DAEB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAEA0(void)
{

loc_000DAEA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_000DAEB0
 * Original: 0x000DAEB0 - 0x000DAEE1 (49 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DAEB0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DAEB6u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAEB6: ;
    PUSH32(esp, 0x2C8);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAEC5u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAEC5: ;
    edi = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAEDB; /* je: equal / zero */

loc_000DAED2: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x000DAEDBu); RECOMP_ABI_CALL(0x000D8CF0u, sub_000D8CF0); /* call 0x000D8CF0 */

loc_000DAEDB: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DAEF0
 * Original: 0x000DAEF0 - 0x000DAF21 (49 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DAEF0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DAEF6u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAEF6: ;
    PUSH32(esp, 0x2D0);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAF05u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAF05: ;
    edi = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAF1B; /* je: equal / zero */

loc_000DAF12: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x000DAF1Bu); RECOMP_ABI_CALL(0x000D8D60u, sub_000D8D60); /* call 0x000D8D60 */

loc_000DAF1B: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DAF30
 * Original: 0x000DAF30 - 0x000DAF5F (47 bytes, 11 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DAF30: ;
    PUSH32(esp, 0x000DAF35u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAF35: ;
    PUSH32(esp, 0x2D8);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAF44u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAF44: ;
    ecx = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAF5A; /* je: equal / zero */

loc_000DAF51: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x000DAF5Au); RECOMP_ABI_CALL(0x000D8DD0u, sub_000D8DD0); /* call 0x000D8DD0 */

loc_000DAF5A: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DAF60
 * Original: 0x000DAF60 - 0x000DAF9E (62 bytes, 19 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DAF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DAF60: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAF9B; /* je: equal / zero */

loc_000DAF69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DAF6Fu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAF6F: ;
    PUSH32(esp, 0x2E5);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAF7Eu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAF7E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DAF90u); RECOMP_ABI_CALL(0x000D8F40u, sub_000D8F40); /* call 0x000D8F40 */

loc_000DAF90: ;
    esi = eax;
    PUSH32(esp, 0x000DAF97u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DAF97: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DAF9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DAFA0
 * Original: 0x000DAFA0 - 0x000DAFE2 (66 bytes, 20 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DAFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DAFA0: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAFDF; /* je: equal / zero */

loc_000DAFA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DAFAFu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAFAF: ;
    PUSH32(esp, 0x2F3);
    eax = 0x32B538;
    PUSH32(esp, 0x000DAFBEu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DAFBE: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DAFD4u); RECOMP_ABI_CALL(0x000D8FA0u, sub_000D8FA0); /* call 0x000D8FA0 */

loc_000DAFD4: ;
    esi = eax;
    PUSH32(esp, 0x000DAFDBu); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DAFDB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DAFDF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DAFF0
 * Original: 0x000DAFF0 - 0x000DB031 (65 bytes, 20 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DAFF0: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB02B; /* je: equal / zero */

loc_000DAFF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DAFFFu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DAFFF: ;
    PUSH32(esp, 0x301);
    eax = 0x32B538;
    PUSH32(esp, 0x000DB00Eu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DB00E: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x000DB020u); RECOMP_ABI_CALL(0x000D8EC0u, sub_000D8EC0); /* call 0x000D8EC0 */

loc_000DB020: ;
    esi = eax;
    PUSH32(esp, 0x000DB027u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DB027: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DB02B: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB040
 * Original: 0x000DB040 - 0x000DB07E (62 bytes, 18 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DB040: ;
    PUSH32(esp, 0x000DB045u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DB045: ;
    PUSH32(esp, 0x36D);
    eax = 0x32B538;
    PUSH32(esp, 0x000DB054u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DB054: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB079; /* je: equal / zero */

loc_000DB060: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x000DB079u); RECOMP_ABI_CALL(0x000D9D50u, sub_000D9D50); /* call 0x000D9D50 */

loc_000DB079: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DB080
 * Original: 0x000DB080 - 0x000DB0AC (44 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB080: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DB086u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DB086: ;
    PUSH32(esp, 0x384);
    eax = 0x32B538;
    PUSH32(esp, 0x000DB095u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DB095: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DB0A1u); RECOMP_ABI_CALL(0x000D9810u, sub_000D9810); /* call 0x000D9810 */

loc_000DB0A1: ;
    esi = eax;
    PUSH32(esp, 0x000DB0A8u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DB0A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB0B0
 * Original: 0x000DB0B0 - 0x000DB0DD (45 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB0B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB0B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DB0B6u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DB0B6: ;
    PUSH32(esp, 0x38D);
    eax = 0x32B538;
    PUSH32(esp, 0x000DB0C5u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DB0C5: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DB0D1u); RECOMP_ABI_CALL(0x000D9800u, sub_000D9800); /* call 0x000D9800 */

loc_000DB0D1: ;
    esi = eax;
    PUSH32(esp, 0x000DB0D8u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DB0D8: ;
    SET_LO16(eax, LO16(esi));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB0E0
 * Original: 0x000DB0E0 - 0x000DB101 (33 bytes, 7 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB0E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DB0E0: ;
    PUSH32(esp, 0x000DB0E5u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DB0E5: ;
    PUSH32(esp, 0x396);
    eax = 0x32B538;
    PUSH32(esp, 0x000DB0F4u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DB0F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DB0FCu); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DB0FC: ;
    g_seh_ebp = ebp; sub_000D97F0(); return; /* tail jmp 0x000D97F0 */

}

/**
 * sub_000DB110
 * Original: 0x000DB110 - 0x000DB13C (44 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB110: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DB116u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DB116: ;
    PUSH32(esp, 0x39F);
    eax = 0x32B538;
    PUSH32(esp, 0x000DB125u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DB125: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DB131u); RECOMP_ABI_CALL(0x000D97E0u, sub_000D97E0); /* call 0x000D97E0 */

loc_000DB131: ;
    esi = eax;
    PUSH32(esp, 0x000DB138u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DB138: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB140
 * Original: 0x000DB140 - 0x000DB16C (44 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB140: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DB146u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DB146: ;
    PUSH32(esp, 0x3AD);
    eax = 0x32B538;
    PUSH32(esp, 0x000DB155u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DB155: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DB161u); RECOMP_ABI_CALL(0x000D9820u, sub_000D9820); /* call 0x000D9820 */

loc_000DB161: ;
    esi = eax;
    PUSH32(esp, 0x000DB168u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DB168: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB170
 * Original: 0x000DB170 - 0x000DB191 (33 bytes, 7 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DB170: ;
    PUSH32(esp, 0x000DB175u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DB175: ;
    PUSH32(esp, 0x3B6);
    eax = 0x32B538;
    PUSH32(esp, 0x000DB184u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DB184: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DB18Cu); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DB18C: ;
    g_seh_ebp = ebp; sub_000E3000(); return; /* tail jmp 0x000E3000 */

}

/**
 * sub_000DB1A0
 * Original: 0x000DB1A0 - 0x000DB1CD (45 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB1A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB1A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DB1A6u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DB1A6: ;
    PUSH32(esp, 0x3BF);
    eax = 0x32B538;
    PUSH32(esp, 0x000DB1B5u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DB1B5: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DB1C1u); RECOMP_ABI_CALL(0x000D9860u, sub_000D9860); /* call 0x000D9860 */

loc_000DB1C1: ;
    esi = eax;
    PUSH32(esp, 0x000DB1C8u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DB1C8: ;
    SET_LO16(eax, LO16(esi));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB1D0
 * Original: 0x000DB1D0 - 0x000DB20D (61 bytes, 18 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB1D0: ;
    eax = MEM32(0x5F8CA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB207; /* je: equal / zero */

loc_000DB1D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DB1DFu); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DB1DF: ;
    PUSH32(esp, 0x408);
    eax = 0x32B538;
    PUSH32(esp, 0x000DB1EEu); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DB1EE: ;
    esi = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DB1FCu); RECOMP_ABI_CALL(0x000D9E70u, sub_000D9E70); /* call 0x000D9E70 */

loc_000DB1FC: ;
    esi = eax;
    PUSH32(esp, 0x000DB203u); RECOMP_ABI_CALL(0x000D47C0u, sub_000D47C0); /* call 0x000D47C0 */

loc_000DB203: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DB207: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB210
 * Original: 0x000DB210 - 0x000DB23A (42 bytes, 10 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DB210: ;
    PUSH32(esp, 0x000DB215u); RECOMP_ABI_CALL(0x000D46D0u, sub_000D46D0); /* call 0x000D46D0 */

loc_000DB215: ;
    PUSH32(esp, 0x41E);
    eax = 0x32B538;
    PUSH32(esp, 0x000DB224u); RECOMP_ABI_CALL(0x000D47E0u, sub_000D47E0); /* call 0x000D47E0 */

loc_000DB224: ;
    eax = MEM32(0x5F8CA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB235; /* je: equal / zero */

loc_000DB230: ;
    PUSH32(esp, 0x000DB235u); RECOMP_ABI_CALL(0x000D9ED0u, sub_000D9ED0); /* call 0x000D9ED0 */

loc_000DB235: ;
    g_seh_ebp = ebp; sub_000D47C0(); return; /* tail jmp 0x000D47C0 */

}

/**
 * sub_000DB240
 * Original: 0x000DB240 - 0x000DB27C (60 bytes, 17 insns)
 * Folder: sound (between: 0x000DB210 and 0x000DB2D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB240: ;
    eax = 0x14;
    PUSH32(esp, 0x000DB24Au); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000DB24A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB260; /* jne: not equal / not zero */

loc_000DB24E: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000DB25Du); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000DB25D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000DB260: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0x112233;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB280
 * Original: 0x000DB280 - 0x000DB2C9 (73 bytes, 23 insns)
 * Folder: sound (between: 0x000DB210 and 0x000DB2D0)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DB280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB280: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB2B4; /* je: equal / zero */

loc_000DB284: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x112233) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x112233 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB2B4; /* jne: not equal / not zero */

loc_000DB28D: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DB29Du); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000DB29D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    MEM32(esi + 0xC) = 0x44556677;
    PUSH32(esp, 0x000DB2AEu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000DB2AE: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_000DB2B4: ;
    PUSH32(esp, 0x32B5C4);
    edx = 8;
    PUSH32(esp, 0x000DB2C3u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000DB2C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DB2D0
 * Original: 0x000DB2D0 - 0x000DB315 (69 bytes, 17 insns)
 * Folder: sound (source: sndsubblock.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DB2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DB2D0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000DB2F6; /* ja: above (unsigned >) */

loc_000DB2D9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xDB318); /* switch: 4 entries, 2 targets */
    if (_jt == 0x000DB2E0u) goto loc_000DB2E0;
    if (_jt == 0x000DB2EDu) goto loc_000DB2ED;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000DB2E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000DB5E0(); return; /* tail jmp 0x000DB5E0 */

loc_000DB2ED: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000ED250(); return; /* tail jmp 0x000ED250 */

loc_000DB2F6: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, 0x324878);
    edx = 0x32B5AC;
    ecx = 0x32B578;
    PUSH32(esp, 0x000DB30Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DB30F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DB330
 * Original: 0x000DB330 - 0x000DB390 (96 bytes, 28 insns)
 * Folder: sound (source: sndsubblock.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DB330: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000DB356; /* ja: above (unsigned >) */

loc_000DB339: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xDB378); /* switch: 4 entries, 2 targets */
    if (_jt == 0x000DB340u) goto loc_000DB340;
    if (_jt == 0x000DB349u) goto loc_000DB349;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000DB340: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000DB5F0(); return; /* tail jmp 0x000DB5F0 */

loc_000DB349: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB375; /* je: equal / zero */

loc_000DB351: ;
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

loc_000DB356: ;
    MEM32(esp + 8) = 0xAC;
    MEM32(esp + 4) = 0x324878;
    edx = 0x32B5AC;
    ecx = 0x32B578;
    g_seh_ebp = ebp; sub_000ED1C0(); return; /* tail jmp 0x000ED1C0 */

loc_000DB375: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB390
 * Original: 0x000DB390 - 0x000DB41C (140 bytes, 50 insns)
 * Folder: sound (source: sndsubblock.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DB390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB390: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = 0xC;
    PUSH32(esp, 0x000DB3A0u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000DB3A0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB3BA; /* jne: not equal / not zero */

loc_000DB3A6: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000DB3B5u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000DB3B5: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000DB3BA: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esi) = 0x11223344;
    MEM32(esi + 4) = eax;
    if (CMP_A(_fa, _fb)) goto loc_000DB3F4; /* ja: above (unsigned >) */

loc_000DB3CC: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xDB41C); /* switch: 4 entries, 2 targets */
    if (_jt == 0x000DB3D3u) goto loc_000DB3D3;
    if (_jt == 0x000DB3DDu) goto loc_000DB3DD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000DB3D3: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000DB3DBu); RECOMP_ABI_CALL(0x000DB600u, sub_000DB600); /* call 0x000DB600 */

loc_000DB3DB: ;
    goto loc_000DB3E5;

loc_000DB3DD: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000DB3E5u); RECOMP_ABI_CALL(0x000DB240u, sub_000DB240); /* call 0x000DB240 */

loc_000DB3E5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000DB412; /* je: equal / zero */

loc_000DB3F1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000DB3F4: ;
    PUSH32(esp, 0xDF);
    PUSH32(esp, 0x324878);
    edx = 0x32B5AC;
    ecx = 0x32B578;
    PUSH32(esp, 0x000DB40Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DB40D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;

loc_000DB412: ;
    PUSH32(esp, 0x000DB417u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000DB417: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB430
 * Original: 0x000DB430 - 0x000DB4C7 (151 bytes, 49 insns)
 * Folder: sound (source: sndsubblock.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DB430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DB430: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB4B2; /* je: equal / zero */

loc_000DB434: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11223344) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0x11223344 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB4B2; /* jne: not equal / not zero */

loc_000DB43C: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_000DB483; /* ja: above (unsigned >) */

loc_000DB445: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xDB4C8); /* switch: 4 entries, 2 targets */
    if (_jt == 0x000DB44Cu) goto loc_000DB44C;
    if (_jt == 0x000DB477u) goto loc_000DB477;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000DB44C: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 8);
    PUSH32(esp, 0x000DB455u); RECOMP_ABI_CALL(0x000DB660u, sub_000DB660); /* call 0x000DB660 */

loc_000DB455: ;
    esi = eax;
    POP32(esp, edi);

loc_000DB458: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB466; /* je: equal / zero */

loc_000DB45D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB466; /* je: equal / zero */

loc_000DB461: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB473; /* jne: not equal / not zero */

loc_000DB466: ;
    eax = ebx;
    MEM32(ebx) = 0x55667788;
    PUSH32(esp, 0x000DB473u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000DB473: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DB477: ;
    esi = MEM32(ebx + 8);
    PUSH32(esp, 0x000DB47Fu); RECOMP_ABI_CALL(0x000DB280u, sub_000DB280); /* call 0x000DB280 */

loc_000DB47F: ;
    esi = eax;
    goto loc_000DB458;

loc_000DB483: ;
    PUSH32(esp, 0x11D);
    PUSH32(esp, 0x324878);
    edx = 0x32B5AC;
    ecx = 0x32B578;
    PUSH32(esp, 0x000DB49Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DB49C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx) = 0x55667788;
    PUSH32(esp, 0x000DB4AEu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000DB4AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DB4B2: ;
    PUSH32(esp, 0x32B5C4);
    edx = 8;
    PUSH32(esp, 0x000DB4C1u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000DB4C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DB4E0
 * Original: 0x000DB4E0 - 0x000DB542 (98 bytes, 31 insns)
 * Folder: sound (between: 0x000DB430 and 0x000DB528)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DB4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DB4E0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000DB523; /* ja: above (unsigned >) */

loc_000DB4E9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xDB544); /* switch: 4 entries, 2 targets */
    if (_jt == 0x000DB4F0u) goto loc_000DB4F0;
    if (_jt == 0x000DB501u) goto loc_000DB501;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000DB4F0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000DB6B0(); return; /* tail jmp 0x000DB6B0 */

loc_000DB501: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB50F; /* jne: not equal / not zero */

loc_000DB50B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DB50F: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DB51Eu); RECOMP_ABI_CALL(0x000ED550u, sub_000ED550); /* call 0x000ED550 */

loc_000DB51E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DB523: ;
    PUSH32(esp, 0x150);
    PUSH32(esp, 0x324878);
    edx = 0x32B5AC;
    ecx = 0x32B578;
    PUSH32(esp, 0x000DB53Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DB53C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DB528
 * Original: 0x000DB528 - 0x000DB542 (26 bytes, 7 insns)
 * Folder: sound (source: sndsubblock.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DB528(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB528: ;
    PUSH32(esp, 0x324878);
    edx = 0x32B5AC;
    ecx = 0x32B578;
    PUSH32(esp, 0x000DB53Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DB53C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DB542
 * Original: 0x000DB542 - 0x000DB560 (30 bytes, 1 insns)
 * Folder: sound (between: 0x000DB528 and 0x000DB560)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB542(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DB542: ;
    edi = edi;

    g_seh_ebp = ebp; sub_000DB560(); return; /* fallthrough 0x000DB560 */

}

/**
 * sub_000DB560
 * Original: 0x000DB560 - 0x000DB5BD (93 bytes, 33 insns)
 * Folder: sound (source: sndsubblockhw.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB560: ;
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000DB5A0; /* je: equal / zero */

loc_000DB566: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000DB58A; /* je: equal / zero */

loc_000DB56B: ;
    PUSH32(esp, 0x2C);
    edx = 0x32B600;

loc_000DB572: ;
    PUSH32(esp, 0x324878);
    ecx = 0x32B624;
    PUSH32(esp, 0x000DB581u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000DB581: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

loc_000DB58A: ;
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB59A; /* je: equal / zero */

loc_000DB591: ;
    PUSH32(esp, 0x26);
    edx = 0x32B658;
    goto loc_000DB572;

loc_000DB59A: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000DB5A0: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB5B0; /* je: equal / zero */

loc_000DB5A7: ;
    PUSH32(esp, 0x1A);
    edx = 0x32B658;
    goto loc_000DB572;

loc_000DB5B0: ;
    edx = MEM32(eax + 0x28);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB5C0
 * Original: 0x000DB5C0 - 0x000DB5DB (27 bytes, 10 insns)
 * Folder: sound (between: 0x000DB560 and 0x000DB6C0)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DB5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB5C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DB5C9; /* jl: less (signed <) */

loc_000DB5C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DB5D8; /* jle: less or equal (signed <=) */

loc_000DB5C9: ;
    PUSH32(esp, 0x32B5E4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000DB5D5u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000DB5D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DB5D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DB5E0
 * Original: 0x000DB5E0 - 0x000DB5ED (13 bytes, 6 insns)
 * Folder: sound (between: 0x000DB560 and 0x000DB6C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB5E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB5E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DB5E9u); RECOMP_ABI_CALL(0x000DB2D0u, sub_000DB2D0); /* call 0x000DB2D0 */

loc_000DB5E9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DB5F0
 * Original: 0x000DB5F0 - 0x000DB5FC (12 bytes, 5 insns)
 * Folder: sound (between: 0x000DB560 and 0x000DB6C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB5F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB5F0: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DB5F8u); RECOMP_ABI_CALL(0x000DB330u, sub_000DB330); /* call 0x000DB330 */

loc_000DB5F8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DB600
 * Original: 0x000DB600 - 0x000DB653 (83 bytes, 29 insns)
 * Folder: sound (between: 0x000DB560 and 0x000DB6C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB600: ;
    PUSH32(esp, esi);
    eax = 8;
    PUSH32(esp, 0x000DB60Bu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000DB60B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB624; /* jne: not equal / not zero */

loc_000DB611: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000DB620u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000DB620: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DB624: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esi) = 0x11223344;
    PUSH32(esp, 0x000DB63Eu); RECOMP_ABI_CALL(0x000DB240u, sub_000DB240); /* call 0x000DB240 */

loc_000DB63E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000DB651; /* jne: not equal / not zero */

loc_000DB64A: ;
    PUSH32(esp, 0x000DB64Fu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000DB64F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000DB651: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB660
 * Original: 0x000DB660 - 0x000DB6AB (75 bytes, 26 insns)
 * Folder: sound (between: 0x000DB560 and 0x000DB6C0)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DB660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB660: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB696; /* je: equal / zero */

loc_000DB664: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11223344) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x11223344 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB696; /* jne: not equal / not zero */

loc_000DB66C: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    PUSH32(esp, 0x000DB675u); RECOMP_ABI_CALL(0x000DB280u, sub_000DB280); /* call 0x000DB280 */

loc_000DB675: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB685; /* je: equal / zero */

loc_000DB67C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB685; /* je: equal / zero */

loc_000DB680: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB692; /* jne: not equal / not zero */

loc_000DB685: ;
    eax = edi;
    MEM32(edi) = 0x55667788;
    PUSH32(esp, 0x000DB692u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000DB692: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DB696: ;
    PUSH32(esp, 0x32B5C4);
    edx = 8;
    PUSH32(esp, 0x000DB6A5u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000DB6A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DB6B0
 * Original: 0x000DB6B0 - 0x000DB6BE (14 bytes, 7 insns)
 * Folder: sound (between: 0x000DB560 and 0x000DB6C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB6B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB6B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DB6BAu); RECOMP_ABI_CALL(0x000DB4E0u, sub_000DB4E0); /* call 0x000DB4E0 */

loc_000DB6BA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DB6C0
 * Original: 0x000DB6C0 - 0x000DB7C8 (264 bytes, 90 insns)
 * Folder: sound (source: sndseq.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB6C0: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB6DE; /* jne: not equal / not zero */

loc_000DB6C7: ;
    PUSH32(esp, 0x32B794);
    eax = 0x8D;
    ecx = 0x32B780;
    PUSH32(esp, 0x000DB6DBu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DB6DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DB6DE: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x14) = eax;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB764; /* je: equal / zero */

loc_000DB6EE: ;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB764; /* jne: not equal / not zero */

loc_000DB6F5: ;
    ecx = MEM32(ecx + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000DB714; /* jbe: below or equal (unsigned <=) */

loc_000DB6FD: ;
    PUSH32(esp, 0x32B794);
    eax = 0x95;
    ecx = 0x32B728;
    PUSH32(esp, 0x000DB711u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DB711: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DB714: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(esi + 0x14);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB769; /* jne: not equal / not zero */

loc_000DB721: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB72B; /* je: equal / zero */

loc_000DB728: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000DB72B: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(esi + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000DB74D; /* jbe: below or equal (unsigned <=) */

loc_000DB736: ;
    PUSH32(esp, 0x32B794);
    eax = 0x9E;
    ecx = 0x32B6D0;
    PUSH32(esp, 0x000DB74Au); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DB74A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DB74D: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(esi + 0x18);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB7AE; /* jne: not equal / not zero */

loc_000DB75A: ;
    eax = MEM32(esi + 0x14);
    MEM32(esi + 0x1C) = 1;

loc_000DB764: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000DB7B9; /* jae: above or equal (unsigned >=) */

loc_000DB769: ;
    PUSH32(esp, 0x000DB76Eu); RECOMP_ABI_CALL(0x000F8010u, sub_000F8010); /* call 0x000F8010 */

loc_000DB76E: ;
    edx = MEM32(esi + 0x7C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DB773: ;
    eax = MEM32(esi + 0x14);
    MEM32(esi + 0x7C) = edx;
    ecx = MEM32(ecx + 0x2C);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    eax = ecx + eax * 4;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DB79Bu); RECOMP_ABI_CALL(0x000D5230u, sub_000D5230); /* call 0x000D5230 */

loc_000DB79B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000DB7C7; /* jne: not equal / not zero */

loc_000DB7A6: ;
    MEM32(esi + 0x20) = 0;
    esp += 4; return; /* ret */

loc_000DB7AE: ;
    eax = MEM32(ecx + 0x14);
    MEM32(esi + 0x14) = eax;
    edx = MEM32(ecx + 0x28);
    goto loc_000DB773;

loc_000DB7B9: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    MEM32(esi + 0x20) = 0;

loc_000DB7C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB7D0
 * Original: 0x000DB7D0 - 0x000DB7E2 (18 bytes, 5 insns)
 * Folder: sound (between: 0x000DB6C0 and 0x000DB7F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB7D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB7D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5F8CAC) = eax;
    MEM32(0x5F8CB0) = eax;
    MEM32(0x5F8CB4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB7F0
 * Original: 0x000DB7F0 - 0x000DB80F (31 bytes, 9 insns)
 * Folder: sound (source: sndseq.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB7F0: ;
    eax = MEM32(0x5F8CB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB80E; /* je: equal / zero */

loc_000DB7F9: ;
    PUSH32(esp, 0x32B794);
    eax = 0x103;
    ecx = 0x32B68C;
    PUSH32(esp, 0x000DB80Du); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000DB80D: ;
    POP32(esp, ecx);

loc_000DB80E: ;
    esp += 4; return; /* ret */

}
