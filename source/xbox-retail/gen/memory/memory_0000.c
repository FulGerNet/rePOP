/**
 * PoP SoT xbox-retail - memory, chunk 0
 * Memory allocators (Ubisoft Base memory)
 * Functions: 44 (0x0003AC70 - 0x000DB620)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_0003AC70
 * Original: 0x0003AC70 - 0x0003ACA7 (55 bytes, 17 insns)
 * Folder: memory (match: xbox-demo 0x0027B300, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003AC70: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003AC7E; /* jne: not equal / not zero */

loc_0003AC79: ;
    PUSH32(esp, 0x0003AC7Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0003AC7E: ;
    edx = 0xC;
    ecx = eax;
    PUSH32(esp, 0x0003AC8Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0003AC8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003ACA4; /* je: equal / zero */

loc_0003AC8E: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;

loc_0003ACA4: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00096210
 * Original: 0x00096210 - 0x00096490 (640 bytes, 182 insns)
 * Folder: memory (match: xbox-demo 0x00279A50, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00096210: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3690BC);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(esp + 4) = 0;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x41FB2C);
    ecx = edi;
    MEM32(esp + 0x120) = 0;
    PUSH32(esp, 0x00096250u); RECOMP_ABI_CALL(0x000938B0u, sub_000938B0); /* call 0x000938B0 */

loc_00096250: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000962AD; /* jne: not equal / not zero */

loc_00096255: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096263; /* jne: not equal / not zero */

loc_0009625E: ;
    PUSH32(esp, 0x00096263u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00096263: ;
    edx = 0x50;
    ecx = eax;
    PUSH32(esp, 0x0009626Fu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0009626F: ;
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x118) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00096287; /* je: equal / zero */

loc_0009627F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096285u); RECOMP_ABI_CALL(0x00099780u, sub_00099780); /* call 0x00099780 */

loc_00096285: ;
    goto loc_00096289;

loc_00096287: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096289: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ecx);
    MEM8(esp + 0x11C) = 0;
    ecx = esp;
    MEM32(esp + 0xC) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000962A1; /* je: equal / zero */

loc_0009629E: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000962A1: ;
    PUSH32(esp, 0x41FB2C);
    ebx = edi;
    PUSH32(esp, 0x000962ADu); RECOMP_ABI_CALL(0x00093AA0u, sub_00093AA0); /* call 0x00093AA0 */

loc_000962AD: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x41FB24);
    ecx = edi;
    PUSH32(esp, 0x000962BEu); RECOMP_ABI_CALL(0x000938B0u, sub_000938B0); /* call 0x000938B0 */

loc_000962BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009631B; /* jne: not equal / not zero */

loc_000962C3: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000962D1; /* jne: not equal / not zero */

loc_000962CC: ;
    PUSH32(esp, 0x000962D1u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000962D1: ;
    edx = 0x50;
    ecx = eax;
    PUSH32(esp, 0x000962DDu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000962DD: ;
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x118) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_000962F5; /* je: equal / zero */

loc_000962ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000962F3u); RECOMP_ABI_CALL(0x00099780u, sub_00099780); /* call 0x00099780 */

loc_000962F3: ;
    goto loc_000962F7;

loc_000962F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000962F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ecx);
    MEM8(esp + 0x11C) = 0;
    ecx = esp;
    MEM32(esp + 0xC) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0009630F; /* je: equal / zero */

loc_0009630C: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009630F: ;
    PUSH32(esp, 0x41FB24);
    ebx = edi;
    PUSH32(esp, 0x0009631Bu); RECOMP_ABI_CALL(0x00093AA0u, sub_00093AA0); /* call 0x00093AA0 */

loc_0009631B: ;
    MEM32(esp + 0x118) = 0xFFFFFFFFu;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096339; /* je: equal / zero */

loc_0009632E: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00096339; /* jne: not equal / not zero */

loc_00096333: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00096339u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096337u); } /* indirect call */
    }

loc_00096339: ;
    MEM32(esp + 4) = 0x5C3A20;
    MEM32(esp + 0xC) = 0x2F202F;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00096350;

    /* nop */

loc_00096350: ;
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ebx));
    _fb = (uint32_t)(0x61) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x61);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esp + 0xD) = LO8(ecx);
    edx = eax;
    edx = edx & 0x3BC0018;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009641E; /* jne: not equal / not zero */

loc_00096372: ;
    eax = SX8(LO8(ecx));
    _fb = (uint32_t)(0xFFFFFF9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF9Cu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    MEM8(esp + 4) = LO8(ecx);
    if (CMP_A(_fa, _fb)) goto loc_00096470; /* ja: above (unsigned >) */

loc_00096385: ;
    eax = ZX8(MEM8(eax + 0x96498));
    { uint32_t _jt = MEM32(eax * 4 + 0x96490); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00096393u) goto loc_00096393;
    if (_jt == 0x00096470u) goto loc_00096470;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00096393: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = 0x100;
    edx = 0xFF;
    ecx = 0x41FB24;
    PUSH32(esp, 0x000963ACu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_000963AC: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_000963C8; /* je: equal / zero */

loc_000963BB: ;
    goto loc_000963C0;

    /* nop */

loc_000963C0: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000963C0; /* jne: not equal / not zero */

loc_000963C8: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = 0x100;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp + ecx + 0x10;
    PUSH32(esp, ecx);
    edx = 0xFF;
    ecx = esp + 8;
    PUSH32(esp, 0x000963EAu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_000963EA: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_00096408; /* je: equal / zero */

loc_000963F9: ;
    /* nop */

loc_00096400: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096400; /* jne: not equal / not zero */

loc_00096408: ;
    edx = esp + 0x10;
    MEM8(eax + -1) = 0x2F;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009641Cu); RECOMP_ABI_CALL(0x00093CA0u, sub_00093CA0); /* call 0x00093CA0 */

loc_0009641C: ;
    goto loc_00096470;

loc_0009641E: ;
    MEM32(esp + 8) = 0;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x120) = 3;
    PUSH32(esp, 0x00096442u); RECOMP_ABI_CALL(0x000938B0u, sub_000938B0); /* call 0x000938B0 */

loc_00096442: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096452; /* jne: not equal / not zero */

loc_00096446: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00096452u); RECOMP_ABI_CALL(0x00094040u, sub_00094040); /* call 0x00094040 */

loc_00096452: ;
    MEM32(esp + 0x118) = 0xFFFFFFFFu;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096470; /* je: equal / zero */

loc_00096465: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00096470; /* jne: not equal / not zero */

loc_0009646A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00096470u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009646Eu); } /* indirect call */
    }

loc_00096470: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00096350; /* jb: below (unsigned <) */

loc_0009647A: ;
    ecx = MEM32(esp + 0x110);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009621D
 * Original: 0x0009621D - 0x00096490 (627 bytes, 179 insns)
 * Folder: memory (between: 0x00096210 and 0x000964B0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009621D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009621D: ;
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(esp + 4) = 0;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x41FB2C);
    ecx = edi;
    MEM32(esp + 0x120) = 0;
    PUSH32(esp, 0x00096250u); RECOMP_ABI_CALL(0x000938B0u, sub_000938B0); /* call 0x000938B0 */

loc_00096250: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000962AD; /* jne: not equal / not zero */

loc_00096255: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096263; /* jne: not equal / not zero */

loc_0009625E: ;
    PUSH32(esp, 0x00096263u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00096263: ;
    edx = 0x50;
    ecx = eax;
    PUSH32(esp, 0x0009626Fu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0009626F: ;
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x118) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00096287; /* je: equal / zero */

loc_0009627F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096285u); RECOMP_ABI_CALL(0x00099780u, sub_00099780); /* call 0x00099780 */

loc_00096285: ;
    goto loc_00096289;

loc_00096287: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096289: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ecx);
    MEM8(esp + 0x11C) = 0;
    ecx = esp;
    MEM32(esp + 0xC) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000962A1; /* je: equal / zero */

loc_0009629E: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000962A1: ;
    PUSH32(esp, 0x41FB2C);
    ebx = edi;
    PUSH32(esp, 0x000962ADu); RECOMP_ABI_CALL(0x00093AA0u, sub_00093AA0); /* call 0x00093AA0 */

loc_000962AD: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x41FB24);
    ecx = edi;
    PUSH32(esp, 0x000962BEu); RECOMP_ABI_CALL(0x000938B0u, sub_000938B0); /* call 0x000938B0 */

loc_000962BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009631B; /* jne: not equal / not zero */

loc_000962C3: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000962D1; /* jne: not equal / not zero */

loc_000962CC: ;
    PUSH32(esp, 0x000962D1u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000962D1: ;
    edx = 0x50;
    ecx = eax;
    PUSH32(esp, 0x000962DDu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000962DD: ;
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x118) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_000962F5; /* je: equal / zero */

loc_000962ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000962F3u); RECOMP_ABI_CALL(0x00099780u, sub_00099780); /* call 0x00099780 */

loc_000962F3: ;
    goto loc_000962F7;

loc_000962F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000962F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ecx);
    MEM8(esp + 0x11C) = 0;
    ecx = esp;
    MEM32(esp + 0xC) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0009630F; /* je: equal / zero */

loc_0009630C: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009630F: ;
    PUSH32(esp, 0x41FB24);
    ebx = edi;
    PUSH32(esp, 0x0009631Bu); RECOMP_ABI_CALL(0x00093AA0u, sub_00093AA0); /* call 0x00093AA0 */

loc_0009631B: ;
    MEM32(esp + 0x118) = 0xFFFFFFFFu;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096339; /* je: equal / zero */

loc_0009632E: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00096339; /* jne: not equal / not zero */

loc_00096333: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00096339u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096337u); } /* indirect call */
    }

loc_00096339: ;
    MEM32(esp + 4) = 0x5C3A20;
    MEM32(esp + 0xC) = 0x2F202F;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00096350;

    /* nop */

loc_00096350: ;
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ebx));
    _fb = (uint32_t)(0x61) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x61);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esp + 0xD) = LO8(ecx);
    edx = eax;
    edx = edx & 0x3BC0018;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009641E; /* jne: not equal / not zero */

loc_00096372: ;
    eax = SX8(LO8(ecx));
    _fb = (uint32_t)(0xFFFFFF9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF9Cu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    MEM8(esp + 4) = LO8(ecx);
    if (CMP_A(_fa, _fb)) goto loc_00096470; /* ja: above (unsigned >) */

loc_00096385: ;
    eax = ZX8(MEM8(eax + 0x96498));
    { uint32_t _jt = MEM32(eax * 4 + 0x96490); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00096393u) goto loc_00096393;
    if (_jt == 0x00096470u) goto loc_00096470;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00096393: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = 0x100;
    edx = 0xFF;
    ecx = 0x41FB24;
    PUSH32(esp, 0x000963ACu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_000963AC: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_000963C8; /* je: equal / zero */

loc_000963BB: ;
    goto loc_000963C0;

    /* nop */

loc_000963C0: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000963C0; /* jne: not equal / not zero */

loc_000963C8: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = 0x100;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp + ecx + 0x10;
    PUSH32(esp, ecx);
    edx = 0xFF;
    ecx = esp + 8;
    PUSH32(esp, 0x000963EAu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_000963EA: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_00096408; /* je: equal / zero */

loc_000963F9: ;
    /* nop */

loc_00096400: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096400; /* jne: not equal / not zero */

loc_00096408: ;
    edx = esp + 0x10;
    MEM8(eax + -1) = 0x2F;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009641Cu); RECOMP_ABI_CALL(0x00093CA0u, sub_00093CA0); /* call 0x00093CA0 */

loc_0009641C: ;
    goto loc_00096470;

loc_0009641E: ;
    MEM32(esp + 8) = 0;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x120) = 3;
    PUSH32(esp, 0x00096442u); RECOMP_ABI_CALL(0x000938B0u, sub_000938B0); /* call 0x000938B0 */

loc_00096442: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096452; /* jne: not equal / not zero */

loc_00096446: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00096452u); RECOMP_ABI_CALL(0x00094040u, sub_00094040); /* call 0x00094040 */

loc_00096452: ;
    MEM32(esp + 0x118) = 0xFFFFFFFFu;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096470; /* je: equal / zero */

loc_00096465: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00096470; /* jne: not equal / not zero */

loc_0009646A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00096470u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009646Eu); } /* indirect call */
    }

loc_00096470: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00096350; /* jb: below (unsigned <) */

loc_0009647A: ;
    ecx = MEM32(esp + 0x110);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000964B0
 * Original: 0x000964B0 - 0x00096526 (118 bytes, 51 insns)
 * Folder: memory (match: xbox-demo 0x00279CF0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000964B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000964B0: ;
    PUSH32(esp, ecx);
    edx = esi + -1;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x000964BCu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_000964BC: ;
    MEM8(esp + 4) = 0;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = esi;
    eax = edi;
    edx = edi;
    PUSH32(esp, 0x000964D1u); RECOMP_ABI_CALL(0x00096530u, sub_00096530); /* call 0x00096530 */

loc_000964D1: ;
    SET_LO8(ecx, MEM8(edi));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000964ED; /* je: equal / zero */

loc_000964DC: ;
    /* nop */

loc_000964E0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000964EF; /* je: equal / zero */

loc_000964E5: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000964E0; /* jne: not equal / not zero */

loc_000964ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000964EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096512; /* je: equal / zero */

loc_000964F3: ;
    MEM8(eax) = 0x2F;
    ecx = eax;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009650C; /* je: equal / zero */

loc_000964FE: ;
    edi = edi;

loc_00096500: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096522; /* je: equal / zero */

loc_00096504: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096500; /* jne: not equal / not zero */

loc_0009650C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009650E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000964F3; /* jne: not equal / not zero */

loc_00096512: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096520; /* jne: not equal / not zero */

loc_00096518: ;
    SET_LO8(ecx, MEM8(edi));
    MEM8(edi + 1) = LO8(ecx);
    MEM8(edi) = 0x2F;

loc_00096520: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00096522: ;
    eax = ecx;
    goto loc_0009650E;

}

/**
 * sub_00096530
 * Original: 0x00096530 - 0x00096565 (53 bytes, 26 insns)
 * Folder: memory (match: xbox-demo 0x00279D70, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096530: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00096559; /* je: equal / zero */

loc_0009653C: ;
    /* nop */

loc_00096540: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096560; /* je: equal / zero */

loc_00096544: ;
    ecx = ZX8(LO8(ecx));
    SET_LO8(ecx, MEM8(ecx + 0x431078));
    MEM8(edx) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096540; /* jne: not equal / not zero */

loc_00096559: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096560; /* je: equal / zero */

loc_0009655D: ;
    MEM8(edx) = 0;

loc_00096560: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097840
 * Original: 0x00097840 - 0x000978AB (107 bytes, 33 insns)
 * Folder: memory (match: xbox-demo 0x00279DB0, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097840: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368FAB);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x418154); PUSH32(esp, 0x00097862u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009785Cu); } /* indirect call */
    }

loc_00097862: ;
    PUSH32(esp, 0x00097867u); RECOMP_ABI_CALL(0x00098990u, sub_00098990); /* call 0x00098990 */

loc_00097867: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = edi;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x00097878u); RECOMP_ABI_CALL(0x000348A0u, sub_000348A0); /* call 0x000348A0 */

loc_00097878: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x2C) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 0x2C);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(eax) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(eax + 8) = eax;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000978B0
 * Original: 0x000978B0 - 0x00097963 (179 bytes, 63 insns)
 * Folder: memory (between: 0x00097840 and 0x000979E0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000978B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000978B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368EE6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = 1;
    PUSH32(esp, 0x000978E1u); RECOMP_ABI_CALL(0x00097B20u, sub_00097B20); /* call 0x00097B20 */

loc_000978E1: ;
    MEM8(esp + 0x1C) = LO8(ebx);
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(eax);
    esi = edi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000978F9u); RECOMP_ABI_CALL(0x000987F0u, sub_000987F0); /* call 0x000987F0 */

loc_000978F9: ;
    ebp = MEM32(esi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097916; /* je: equal / zero */

loc_00097900: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009790E; /* jne: not equal / not zero */

loc_00097909: ;
    PUSH32(esp, 0x0009790Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0009790E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00097916u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097913u); } /* indirect call */
    }

loc_00097916: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    ebx = edi + 0x1C;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0009792Cu); RECOMP_ABI_CALL(0x00032470u, sub_00032470); /* call 0x00032470 */

loc_0009792C: ;
    esi = MEM32(ebx + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009794B; /* je: equal / zero */

loc_00097935: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097943; /* jne: not equal / not zero */

loc_0009793E: ;
    PUSH32(esp, 0x00097943u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00097943: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0009794Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097948u); } /* indirect call */
    }

loc_0009794B: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ebx + 4) = edi;
    POP32(esp, edi);
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
 * sub_00097970
 * Original: 0x00097970 - 0x0009798B (27 bytes, 11 insns)
 * Folder: memory (between: 0x00097840 and 0x000979E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097970: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009798A; /* je: equal / zero */

loc_00097974: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097982; /* jne: not equal / not zero */

loc_0009797D: ;
    PUSH32(esp, 0x00097982u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00097982: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0009798Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097987u); } /* indirect call */
    }

loc_0009798A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00097990
 * Original: 0x00097990 - 0x000979D1 (65 bytes, 31 insns)
 * Folder: memory (between: 0x00097840 and 0x000979E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097990: ;
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
    PUSH32(esp, 0x000979A7u); RECOMP_ABI_CALL(0x000987F0u, sub_000987F0); /* call 0x000987F0 */

loc_000979A7: ;
    edi = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000979C6; /* je: equal / zero */

loc_000979B0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000979BE; /* jne: not equal / not zero */

loc_000979B9: ;
    PUSH32(esp, 0x000979BEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000979BE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000979C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000979C3u); } /* indirect call */
    }

loc_000979C6: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000979E0
 * Original: 0x000979E0 - 0x00097A37 (87 bytes, 23 insns)
 * Folder: memory (match: xbox-demo 0x00279F00, between)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000979E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000979E0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368C58);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(ebx) = 0x41FC2C;
    MEM32(esp + 0x10) = 0;
    eax = MEM32(0x46B1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097A17; /* jne: not equal / not zero */

loc_00097A12: ;
    PUSH32(esp, 0x00097A17u); RECOMP_ABI_CALL(0x00097A70u, sub_00097A70); /* call 0x00097A70 */

loc_00097A17: ;
    edi = eax;
    PUSH32(esp, 0x00097A1Eu); RECOMP_ABI_CALL(0x00097F90u, sub_00097F90); /* call 0x00097F90 */

loc_00097A1E: ;
    ecx = MEM32(esp + 8);
    MEM32(ebx) = 0x41FC28;
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097A40
 * Original: 0x00097A40 - 0x00097A70 (48 bytes, 19 insns)
 * Folder: memory (between: 0x000979E0 and 0x00097F90)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00097A49u); RECOMP_ABI_CALL(0x000979E0u, sub_000979E0); /* call 0x000979E0 */

loc_00097A49: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00097A6A; /* je: equal / zero */

loc_00097A50: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097A6A; /* je: equal / zero */

loc_00097A54: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097A62; /* jne: not equal / not zero */

loc_00097A5D: ;
    PUSH32(esp, 0x00097A62u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00097A62: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00097A6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097A67u); } /* indirect call */
    }

loc_00097A6A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097A70
 * Original: 0x00097A70 - 0x00097B1D (173 bytes, 47 insns)
 * Folder: memory (between: 0x000979E0 and 0x00097F90)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097A70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x369086);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x46B1A8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097A99; /* jne: not equal / not zero */

loc_00097A92: ;
    PUSH32(esp, 0x00097A97u); RECOMP_ABI_CALL(0x00096160u, sub_00096160); /* call 0x00096160 */

loc_00097A97: ;
    edi = eax;

loc_00097A99: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00097AA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097A9Eu); } /* indirect call */
    }

loc_00097AA4: ;
    MEM32(esp + 0x14) = 0;
    SET_LO8(ecx, MEM8(0x76BCE0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00097AE1; /* jne: not equal / not zero */

loc_00097ABB: ;
    MEM32(0x76BCE0) = MEM32(0x76BCE0) | eax;
    _fa = (uint32_t)(MEM32(0x76BCE0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x46B1B8);
    esi = 0x76BCDC;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0x00097AD4u); RECOMP_ABI_CALL(0x00098510u, sub_00098510); /* call 0x00098510 */

loc_00097AD4: ;
    PUSH32(esp, 0x369BD0);
    PUSH32(esp, 0x00097ADEu); RECOMP_ABI_CALL(0x003472BDu, sub_003472BD); /* call 0x003472BD */

loc_00097ADE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00097AE1: ;
    eax = MEM32(0x46B1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097AFD; /* jne: not equal / not zero */

loc_00097AEA: ;
    SET_LO8(eax, MEM8(0x758648));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097AFD; /* je: equal / zero */

loc_00097AF3: ;
    ecx = 0x10;
    PUSH32(esp, 0x00097AFDu); RECOMP_ABI_CALL(0x00098D40u, sub_00098D40); /* call 0x00098D40 */

loc_00097AFD: ;
    esi = MEM32(0x46B1B8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00097B0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097B04u); } /* indirect call */
    }

loc_00097B0A: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00097B20
 * Original: 0x00097B20 - 0x00097CA9 (393 bytes, 130 insns)
 * Folder: memory (between: 0x000979E0 and 0x00097F90)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097B20: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM32(0x758640) = eax;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(0x758644) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00097B64; /* je: equal / zero */

loc_00097B40: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097B5D; /* je: equal / zero */

loc_00097B47: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097B55; /* jne: not equal / not zero */

loc_00097B50: ;
    PUSH32(esp, 0x00097B55u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00097B55: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00097B5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097B5Au); } /* indirect call */
    }

loc_00097B5D: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097B40; /* jne: not equal / not zero */

loc_00097B64: ;
    ebx = ebp + 0x1C;
    PUSH32(esp, 0x00097B6Cu); RECOMP_ABI_CALL(0x00032470u, sub_00032470); /* call 0x00032470 */

loc_00097B6C: ;
    eax = MEM32(ebp + 0x2C);
    ecx = MEM32(eax + 4);
    esi = ebp + 0x28;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00097B7Du); RECOMP_ABI_CALL(0x00098870u, sub_00098870); /* call 0x00098870 */

loc_00097B7D: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(eax) = eax;
    esi = MEM32(esi + 4);
    MEM32(esi + 8) = esi;
    eax = MEM32(ebp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097BB5; /* je: equal / zero */

loc_00097B9C: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097BAA; /* jne: not equal / not zero */

loc_00097BA5: ;
    PUSH32(esp, 0x00097BAAu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00097BAA: ;
    ecx = MEM32(ebp + 0x34);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00097BB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097BB2u); } /* indirect call */
    }

loc_00097BB5: ;
    ecx = MEM32(0x758640);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097CA2; /* je: equal / zero */

loc_00097BC3: ;
    eax = MEM32(0x758644);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097CA2; /* je: equal / zero */

loc_00097BD0: ;
    eax = MEM32(esp + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097CA2; /* je: equal / zero */

loc_00097BE2: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097BF6; /* jne: not equal / not zero */

loc_00097BEB: ;
    PUSH32(esp, 0x00097BF0u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00097BF0: ;
    ecx = MEM32(0x758640);

loc_00097BF6: ;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x00097C05u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00097C05: ;
    edi = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(edi + 0x34) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00097CA2; /* jbe: below or equal (unsigned <=) */

loc_00097C16: ;
    goto loc_00097C20;

loc_00097C18: ;
    edi = MEM32(esp + 0x14);
    /* nop */

loc_00097C20: ;
    edx = MEM32(0x758640);
    eax = MEM32(edi + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    esi = edx + eax + 0x3F;
    eax = MEM32(0x46B1A4);
    esi = esi & 0xFFFFFFC0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097C41; /* jne: not equal / not zero */

loc_00097C3C: ;
    PUSH32(esp, 0x00097C41u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00097C41: ;
    edx = 0x14;
    ecx = eax;
    PUSH32(esp, 0x00097C4Du); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00097C4D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097C63; /* je: equal / zero */

loc_00097C53: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = ecx;
    goto loc_00097C65;

loc_00097C63: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00097C65: ;
    esi = MEM32(edi + 0x20);
    edx = MEM32(esi + 4);
    MEM32(esp + 0x18) = eax;
    eax = edi + 0x1C;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00097C7Eu); RECOMP_ABI_CALL(0x0003AC70u, sub_0003AC70); /* call 0x0003AC70 */

loc_00097C7E: ;
    edx = MEM32(esp + 0x14);
    ecx = 1;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x00097C91u); RECOMP_ABI_CALL(0x000DB310u, sub_000DB310); /* call 0x000DB310 */

loc_00097C91: ;
    MEM32(esi + 4) = edi;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(eax) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00097C18; /* jb: below (unsigned <) */

loc_00097CA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00097CB0
 * Original: 0x00097CB0 - 0x00097DC4 (276 bytes, 87 insns)
 * Folder: memory (between: 0x000979E0 and 0x00097F90)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097CB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368C98);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 8) = esi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00097CD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097CCEu); } /* indirect call */
    }

loc_00097CD4: ;
    MEM32(esp + 0x18) = 0;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    edx = esp + 8;
    ecx = esi + 0x28;
    eax = esp + 0x20;
    ebx = esp + 0x24;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x00097D04u); RECOMP_ABI_CALL(0x00098270u, sub_00098270); /* call 0x00098270 */

loc_00097D04: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097DA9; /* je: equal / zero */

loc_00097D11: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x20) (32-bit) */
    MEM32(esp + 0x28) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00097D4A; /* je: equal / zero */

loc_00097D22: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    eax = MEM32(edi + 4);
    edx = MEM32(edi);
    MEM32(edx + 4) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097D3F; /* jne: not equal / not zero */

loc_00097D3A: ;
    PUSH32(esp, 0x00097D3Fu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00097D3F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00097D47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097D44u); } /* indirect call */
    }

loc_00097D47: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00097D4A: ;
    edi = MEM32(esi + 0x20);
    ecx = MEM32(edi + 4);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00097D5Cu); RECOMP_ABI_CALL(0x0003AC70u, sub_0003AC70); /* call 0x0003AC70 */

loc_00097D5C: ;
    ecx = 1;
    edx = esi + 0x1C;
    ebx = eax;
    PUSH32(esp, 0x00097D6Bu); RECOMP_ABI_CALL(0x000DB310u, sub_000DB310); /* call 0x000DB310 */

loc_00097D6B: ;
    MEM32(edi + 4) = ebx;
    edx = MEM32(ebx + 4);
    MEM32(edx) = ebx;
    edi = MEM32(edi + 4);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ebx = esp + 0x2C;
    PUSH32(esp, 0x00097D83u); RECOMP_ABI_CALL(0x000981B0u, sub_000981B0); /* call 0x000981B0 */

loc_00097D83: ;
    MEM32(eax) = edi;
    eax = MEM32(ebp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(ebp + 0xC) = eax;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00097D93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097D8Du); } /* indirect call */
    }

loc_00097D93: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00097DA9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00097DB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097DAAu); } /* indirect call */
    }

loc_00097DB0: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00097DD0
 * Original: 0x00097DD0 - 0x00097F7B (427 bytes, 142 insns)
 * Folder: memory (between: 0x000979E0 and 0x00097F90)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097DD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368C98);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = esi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00097DF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097DF0u); } /* indirect call */
    }

loc_00097DF6: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    edx = esp + 0x1C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x28;
    eax = esp + 0x10;
    ebx = esp + 0x14;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x00097E2Cu); RECOMP_ABI_CALL(0x00098270u, sub_00098270); /* call 0x00098270 */

loc_00097E2C: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097EE5; /* jne: not equal / not zero */

loc_00097E39: ;
    eax = MEM32(esi + 0x20);
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097EB4; /* je: equal / zero */

loc_00097E42: ;
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00097E59; /* je: equal / zero */

loc_00097E50: ;
    ebp = MEM32(ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097E42; /* jne: not equal / not zero */

loc_00097E57: ;
    goto loc_00097EB4;

loc_00097E59: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097E88; /* je: equal / zero */

loc_00097E5E: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(ebp);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 4);
    edx = MEM32(ebp);
    MEM32(edx + 4) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097E7D; /* jne: not equal / not zero */

loc_00097E78: ;
    PUSH32(esp, 0x00097E7Du); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00097E7D: ;
    edx = MEM32(eax);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00097E85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097E82u); } /* indirect call */
    }

loc_00097E85: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00097E88: ;
    eax = esp + 0x14;
    ebx = esp + 0x10;
    ecx = esi + 0x28;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x00097E9Cu); RECOMP_ABI_CALL(0x00098270u, sub_00098270); /* call 0x00098270 */

loc_00097E9C: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097EB4; /* je: equal / zero */

loc_00097EA5: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00097EB4u); RECOMP_ABI_CALL(0x000E38A0u, sub_000E38A0); /* call 0x000E38A0 */

loc_00097EB4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097ED6; /* jne: not equal / not zero */

loc_00097EB9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00097EC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097EBAu); } /* indirect call */
    }

loc_00097EC0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x18);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00097ED6: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    goto loc_00097F1C;

loc_00097EE5: ;
    edi = MEM32(eax + 0xC);
    ebx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x20) (32-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00097F1C; /* je: equal / zero */

loc_00097EF4: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    MEM32(eax) = ecx;
    eax = MEM32(ebx + 4);
    edx = MEM32(ebx);
    MEM32(edx + 4) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097F11; /* jne: not equal / not zero */

loc_00097F0C: ;
    PUSH32(esp, 0x00097F11u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00097F11: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00097F19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097F16u); } /* indirect call */
    }

loc_00097F19: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00097F1C: ;
    ebx = MEM32(esi + 0x20);
    ecx = MEM32(ebx + 4);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00097F2Eu); RECOMP_ABI_CALL(0x0003AC70u, sub_0003AC70); /* call 0x0003AC70 */

loc_00097F2E: ;
    ecx = 1;
    edx = esi + 0x1C;
    ebp = eax;
    PUSH32(esp, 0x00097F3Du); RECOMP_ABI_CALL(0x000DB310u, sub_000DB310); /* call 0x000DB310 */

loc_00097F3D: ;
    MEM32(ebx + 4) = ebp;
    edx = MEM32(ebp + 4);
    MEM32(edx) = ebp;
    ebp = MEM32(ebx + 4);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ebx = esp + 0x10;
    PUSH32(esp, 0x00097F55u); RECOMP_ABI_CALL(0x000981B0u, sub_000981B0); /* call 0x000981B0 */

loc_00097F55: ;
    MEM32(eax) = ebp;
    eax = MEM32(edi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(edi + 0xC) = eax;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00097F65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097F5Fu); } /* indirect call */
    }

loc_00097F65: ;
    ecx = MEM32(esp + 0x24);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00097F80
 * Original: 0x00097F80 - 0x00097F8F (15 bytes, 5 insns)
 * Folder: memory (between: 0x000979E0 and 0x00097F90)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097F80(void)
{

loc_00097F80: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00097F87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097F81u); } /* indirect call */
    }

loc_00097F87: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00097F8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097F88u); } /* indirect call */
    }

loc_00097F8E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00097F90
 * Original: 0x00097F90 - 0x00097FD0 (64 bytes, 23 insns)
 * Folder: memory (match: xbox-demo 0x0027A520, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097F90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi + 0x2C);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00097FCC; /* je: equal / zero */

loc_00097F9F: ;
    PUSH32(esp, esi);

loc_00097FA0: ;
    edx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x00097FABu); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00097FAB: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    MEM32(esp + 8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00097FC2; /* jne: not equal / not zero */

loc_00097FB6: ;
    ecx = edi + 0x28;
    eax = esp + 8;
    PUSH32(esp, 0x00097FC2u); RECOMP_ABI_CALL(0x00098210u, sub_00098210); /* call 0x00098210 */

loc_00097FC2: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097FA0; /* jne: not equal / not zero */

loc_00097FCB: ;
    POP32(esp, esi);

loc_00097FCC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00097FD0
 * Original: 0x00097FD0 - 0x000980D1 (257 bytes, 93 insns)
 * Folder: memory (between: 0x00097F90 and 0x00098140)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097FD0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = esp + 0x20;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM8(esp + 0x30) = LO8(eax);
    PUSH32(esp, 0x00097FF2u); RECOMP_ABI_CALL(0x000191C0u, sub_000191C0); /* call 0x000191C0 */

loc_00097FF2: ;
    ebp = MEM32(esp + 0x2C);
    ebx = MEM32(0x46B190);
    /* nop */

loc_00098000: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000980C5; /* je: equal / zero */

loc_0009800F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000980C5; /* je: equal / zero */

loc_00098018: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000980C5; /* je: equal / zero */

loc_00098021: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00098000; /* je: equal / zero */

loc_00098029: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009807B; /* je: equal / zero */

loc_00098031: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009803A; /* jne: not equal / not zero */

loc_00098035: ;
    PUSH32(esp, 0x0009803Au); RECOMP_ABI_CALL(0x00095420u, sub_00095420); /* call 0x00095420 */

loc_0009803A: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    ebx = MEM32(esp + 0x24);
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = edx;
    POP32(esp, edx);
    POP32(esp, ecx);
    POP32(esp, ebx);
    POP32(esp, eax);
    edi = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ebx = MEM32(0x46B190);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edi));
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ebp;
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edi) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_00098081;

loc_0009807B: ;
    esi = MEM32(esp + 0x28);
    edi = ebp;

loc_00098081: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00098089; /* je: equal / zero */

loc_00098085: ;
    eax = ebx;
    goto loc_00098094;

loc_00098089: ;
    PUSH32(esp, 0x0009808Eu); RECOMP_ABI_CALL(0x00095420u, sub_00095420); /* call 0x00095420 */

loc_0009808E: ;
    ebx = MEM32(0x46B190);

loc_00098094: ;
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000980A3u); RECOMP_ABI_CALL(0x00347AA0u, sub_00347AA0); /* call 0x00347AA0 */

loc_000980A3: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00098000; /* jb: below (unsigned <) */

loc_000980AD: ;
    if (CMP_A(_fa, _fb)) goto loc_000980B9; /* ja: above (unsigned >) */

loc_000980AF: ;
    _fa = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x3C), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00098000; /* jb: below (unsigned <) */

loc_000980B9: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000980C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000980E0
 * Original: 0x000980E0 - 0x0009813B (91 bytes, 38 insns)
 * Folder: memory (between: 0x00097F90 and 0x00098140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000980E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000980E0: ;
    PUSH32(esp, ecx);
    SET_LO8(edx, MEM8(eax + 0x34));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00098107; /* je: equal / zero */

loc_000980EB: ;
    edx = MEM32(eax + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098107; /* je: equal / zero */

loc_000980F2: ;
    edx = MEM32(eax + 0x2C);
    edx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00098107; /* jae: above or equal (unsigned >=) */

loc_00098103: ;
    MEM8(eax + 0x34) = 0;

loc_00098107: ;
    esi = MEM32(eax + 0x2C);
    ebx = eax + 0x28;
    eax = esp + 0xC;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098120u); RECOMP_ABI_CALL(0x0003AC70u, sub_0003AC70); /* call 0x0003AC70 */

loc_00098120: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0x0009812Eu); RECOMP_ABI_CALL(0x000DB310u, sub_000DB310); /* call 0x000DB310 */

loc_0009812E: ;
    MEM32(esi + 4) = edi;
    edx = MEM32(edi + 4);
    MEM32(edx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00098140
 * Original: 0x00098140 - 0x000981AF (111 bytes, 34 insns)
 * Folder: memory (match: xbox-demo 0x0027A600, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098140: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = esi + 0xC;
    PUSH32(esp, edi);
    MEM32(esp + 8) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00098165u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009815Fu); } /* indirect call */
    }

loc_00098165: ;
    MEM32(esp + 0x10) = 0;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098181; /* jne: not equal / not zero */

loc_00098174: ;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009817Du); RECOMP_ABI_CALL(0x00098300u, sub_00098300); /* call 0x00098300 */

loc_0009817D: ;
    MEM8(esi + 0x34) = 1;

loc_00098181: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098191; /* je: equal / zero */

loc_00098188: ;
    ecx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0009818Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0009818Cu); } /* indirect call */
    }

loc_0009818E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00098191: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esi + 0x38) = 0;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x0009819Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098199u); } /* indirect call */
    }

loc_0009819F: ;
    ecx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00098186
 * Original: 0x00098186 - 0x000981AF (41 bytes, 13 insns)
 * Folder: memory (between: 0x00098140 and 0x000981B0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098186(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098186: ;
    if (_flags /* je: equal / zero */) goto loc_00098191;

loc_00098188: ;
    ecx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0009818Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0009818Cu); } /* indirect call */
    }

loc_0009818E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00098191: ;
    PUSH32(esp, edi);
    MEM32(esi + 0x38) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x0009819Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098199u); } /* indirect call */
    }

loc_0009819F: ;
    ecx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000981B0
 * Original: 0x000981B0 - 0x0009820D (93 bytes, 37 insns)
 * Folder: memory (match: xbox-demo 0x0027A670, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000981B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000981B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0x000981C0u); RECOMP_ABI_CALL(0x00098AC0u, sub_00098AC0); /* call 0x00098AC0 */

loc_000981C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000981E3; /* je: equal / zero */

loc_000981C5: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000981DA; /* jne: not equal / not zero */

loc_000981D4: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */

loc_000981DA: ;
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00098203; /* je: equal / zero */

loc_000981E3: ;
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00098201u); RECOMP_ABI_CALL(0x00098610u, sub_00098610); /* call 0x00098610 */

loc_00098201: ;
    eax = MEM32(eax);

loc_00098203: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098210
 * Original: 0x00098210 - 0x00098264 (84 bytes, 38 insns)
 * Folder: memory (match: xbox-demo 0x0027A9A0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098210: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00098221u); RECOMP_ABI_CALL(0x00098AC0u, sub_00098AC0); /* call 0x00098AC0 */

loc_00098221: ;
    ebx = eax;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0009822Bu); RECOMP_ABI_CALL(0x00098B10u, sub_00098B10); /* call 0x00098B10 */

loc_0009822B: ;
    edi = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00098250; /* je: equal / zero */

loc_00098237: ;
    goto loc_00098240;

    /* nop */

loc_00098240: ;
    edx = esp + 0x10;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0009824Au); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_0009824A: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098240; /* jne: not equal / not zero */

loc_00098250: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009825Cu); RECOMP_ABI_CALL(0x000987F0u, sub_000987F0); /* call 0x000987F0 */

loc_0009825C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00098270
 * Original: 0x00098270 - 0x000982CA (90 bytes, 40 insns)
 * Folder: memory (match: xbox-demo 0x0027AA00, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098270: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x00098281u); RECOMP_ABI_CALL(0x00098AC0u, sub_00098AC0); /* call 0x00098AC0 */

loc_00098281: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000982B6; /* je: equal / zero */

loc_0009828C: ;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(esi);
    edx = MEM32(eax);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009829F; /* jne: not equal / not zero */

loc_00098299: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */

loc_0009829F: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000982B6; /* jne: not equal / not zero */

loc_000982A6: ;
    eax = esp + 8;
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(ebx) = edx;
    eax = ebx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000982B6: ;
    eax = esp + 0xC;
    MEM32(esp + 0xC) = edi;
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(ebx) = edx;
    eax = ebx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000982D0
 * Original: 0x000982D0 - 0x00098300 (48 bytes, 19 insns)
 * Folder: memory (between: 0x00098270 and 0x00098610)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000982D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000982D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x000982D9u); RECOMP_ABI_CALL(0x00032470u, sub_00032470); /* call 0x00032470 */

loc_000982D9: ;
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000982F6; /* je: equal / zero */

loc_000982E0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000982EE; /* jne: not equal / not zero */

loc_000982E9: ;
    PUSH32(esp, 0x000982EEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000982EE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000982F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000982F3u); } /* indirect call */
    }

loc_000982F6: ;
    POP32(esp, esi);
    MEM32(ebx + 4) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00098300
 * Original: 0x00098300 - 0x0009850A (522 bytes, 160 insns)
 * Folder: memory (between: 0x00098270 and 0x00098610)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098300: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368EC1);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x158);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000984F2; /* jb: below (unsigned <) */

loc_0009832D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00098335u); RECOMP_ABI_CALL(0x00098990u, sub_00098990); /* call 0x00098990 */

loc_00098335: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x982D0);
    PUSH32(esp, 0x988C0);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0xC);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEM32(esp + 0x170) = ebx;
    PUSH32(esp, 0x0009835Eu); RECOMP_ABI_CALL(0x00348893u, sub_00348893); /* call 0x00348893 */

loc_0009835E: ;
    MEM8(esp + 0x15C) = 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098466; /* je: equal / zero */

loc_0009836F: ;
    /* nop */

loc_00098370: ;
    eax = MEM32(ebp + 4);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    ecx = MEM32(esp + 0x14);
    edi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000983DA; /* je: equal / zero */

loc_0009837F: ;
    eax = MEM32(esp + 0x164);
    ebp = MEM32(esi);
    edx = esp + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009839A; /* jne: not equal / not zero */

loc_00098390: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000983D3; /* je: equal / zero */

loc_00098394: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000983D3; /* je: equal / zero */

loc_00098398: ;
    goto loc_000983B2;

loc_0009839A: ;
    ecx = 1;
    edx = esp + 0x10;
    PUSH32(esp, 0x000983A8u); RECOMP_ABI_CALL(0x000DB310u, sub_000DB310); /* call 0x000DB310 */

loc_000983A8: ;
    eax = MEM32(esp + 0x164);
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000983B2: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = ebp;
    eax = MEM32(ebp + 4);
    MEM32(eax) = edi;
    eax = MEM32(edi + 4);
    MEM32(eax) = esi;
    ecx = MEM32(ebp + 4);
    eax = MEM32(edi + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 4);
    MEM32(ebp + 4) = edx;
    MEM32(esi + 4) = eax;

loc_000983D3: ;
    ebp = MEM32(esp + 0x164);

loc_000983DA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00098432; /* jbe: below or equal (unsigned <=) */

loc_000983E0: ;
    esi = esp + 0x24;

loc_000983E4: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098419; /* je: equal / zero */

loc_000983E9: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000983F7u); RECOMP_ABI_CALL(0x000988E0u, sub_000988E0); /* call 0x000988E0 */

loc_000983F7: ;
    eax = MEM32(esi + -4);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(esi + -4) = edx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    MEM32(esi) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000983E4; /* jb: below (unsigned <) */

loc_00098419: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x19 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098432; /* jne: not equal / not zero */

loc_0009841E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x140;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098430u); RECOMP_ABI_CALL(0x000988E0u, sub_000988E0); /* call 0x000988E0 */

loc_00098430: ;
    goto loc_0009845B;

loc_00098432: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    edx = MEM32(esp + 0x14);
    eax = edi + edi * 2;
    ecx = MEM32(esp + eax * 4 + 0x20);
    eax = esp + eax * 4 + 0x1C;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(eax + 8) = edx;
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0009845B; /* jne: not equal / not zero */

loc_0009845A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009845B: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098370; /* jne: not equal / not zero */

loc_00098466: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00098482; /* jbe: below or equal (unsigned <=) */

loc_0009846B: ;
    esi = esp + 0x28;
    edi = ebx + -1;

loc_00098472: ;
    eax = esi + -12;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009847Cu); RECOMP_ABI_CALL(0x000988E0u, sub_000988E0); /* call 0x000988E0 */

loc_0009847C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00098472; /* jne: not equal / not zero */

loc_00098482: ;
    ecx = MEM32(ebp + 4);
    eax = ebx + ebx * 2;
    edx = MEM32(esp + eax * 4 + 0x14);
    eax = esp + eax * 4 + 0x10;
    MEM32(eax + 4) = ecx;
    MEM32(ebp + 4) = edx;
    ecx = MEM32(ebp + 8);
    edx = MEM32(eax + 8);
    PUSH32(esp, 0x982D0);
    PUSH32(esp, 0x1A);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0xC);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM32(ebp + 8) = edx;
    MEM8(esp + 0x16C) = 0;
    PUSH32(esp, 0x000984BDu); RECOMP_ABI_CALL(0x00348953u, sub_00348953); /* call 0x00348953 */

loc_000984BD: ;
    ebx = esp + 0x10;
    MEM32(esp + 0x15C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000984D1u); RECOMP_ABI_CALL(0x00032470u, sub_00032470); /* call 0x00032470 */

loc_000984D1: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000984EF; /* je: equal / zero */

loc_000984D9: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000984E7; /* jne: not equal / not zero */

loc_000984E2: ;
    PUSH32(esp, 0x000984E7u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000984E7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000984EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000984ECu); } /* indirect call */
    }

loc_000984EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000984F2: ;
    ecx = MEM32(esp + 0x148);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x150;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098510
 * Original: 0x00098510 - 0x00098575 (101 bytes, 29 insns)
 * Folder: memory (between: 0x00098270 and 0x00098610)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098510: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x369058);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    MEM32(esi) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098539; /* jne: not equal / not zero */

loc_00098534: ;
    PUSH32(esp, 0x00098539u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00098539: ;
    edx = 0x38;
    ecx = eax;
    PUSH32(esp, 0x00098545u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00098545: ;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0009855D; /* je: equal / zero */

loc_00098555: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009855Bu); RECOMP_ABI_CALL(0x00097840u, sub_00097840); /* call 0x00097840 */

loc_0009855B: ;
    goto loc_0009855F;

loc_0009855D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009855F: ;
    ecx = MEM32(esi);
    MEM32(ecx) = eax;
    ecx = MEM32(esp);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098580
 * Original: 0x00098580 - 0x0009860A (138 bytes, 44 insns)
 * Folder: memory (between: 0x00098270 and 0x00098610)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098580: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(0x46B1A8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000985A8; /* jne: not equal / not zero */

loc_000985A1: ;
    PUSH32(esp, 0x000985A6u); RECOMP_ABI_CALL(0x00096160u, sub_00096160); /* call 0x00096160 */

loc_000985A6: ;
    edi = eax;

loc_000985A8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 8) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000985B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000985ADu); } /* indirect call */
    }

loc_000985B3: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000985F1; /* je: equal / zero */

loc_000985C7: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(eax) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000985F0; /* je: equal / zero */

loc_000985D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000985DAu); RECOMP_ABI_CALL(0x000978B0u, sub_000978B0); /* call 0x000978B0 */

loc_000985DA: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000985E8; /* jne: not equal / not zero */

loc_000985E3: ;
    PUSH32(esp, 0x000985E8u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000985E8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000985F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000985EDu); } /* indirect call */
    }

loc_000985F0: ;
    POP32(esp, esi);

loc_000985F1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000985F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000985F2u); } /* indirect call */
    }

loc_000985F8: ;
    ecx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098610
 * Original: 0x00098610 - 0x000987EB (475 bytes, 203 insns)
 * Folder: memory (match: xbox-demo 0x0027ADD0, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098610: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0009863F; /* jne: not equal / not zero */

loc_00098629: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x00098635u); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_00098635: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0009863F: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00098683; /* jne: not equal / not zero */

loc_0009864B: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(edi);
    edx = MEM32(eax);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009865E; /* jne: not equal / not zero */

loc_00098658: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */

loc_0009865E: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000987CB; /* je: equal / zero */

loc_00098669: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00098677u); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_00098677: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00098683: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000986C2; /* jne: not equal / not zero */

loc_00098687: ;
    ebx = MEM32(ecx + 8);
    eax = MEM32(edi);
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(eax);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009869D; /* jne: not equal / not zero */

loc_00098697: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */

loc_0009869D: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000987CB; /* je: equal / zero */

loc_000986A8: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000986B6u); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_000986B6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000986C2: ;
    eax = MEM32(ebx + 0xC);
    esi = MEM32(edi);
    ecx = MEM32(esi);
    edx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000986D5; /* jne: not equal / not zero */

loc_000986CF: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */

loc_000986D5: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098742; /* je: equal / zero */

loc_000986DC: ;
    edx = esp + 0x20;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x000986E9u); RECOMP_ABI_CALL(0x000CEA70u, sub_000CEA70); /* call 0x000CEA70 */

loc_000986E9: ;
    eax = MEM32(esp + 0x20);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(esi);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000986FE; /* jne: not equal / not zero */

loc_000986F8: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */

loc_000986FE: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098742; /* je: equal / zero */

loc_00098705: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(eax + 8);
    SET_LO8(ecx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_0009872D; /* je: equal / zero */

loc_00098718: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00098721u); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_00098721: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0009872D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00098736u); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_00098736: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00098742: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(esi);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098753; /* jne: not equal / not zero */

loc_0009874D: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */

loc_00098753: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000987CB; /* je: equal / zero */

loc_0009875A: ;
    edx = esp + 0x20;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x00098767u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00098767: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098792; /* je: equal / zero */

loc_00098774: ;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098787; /* jne: not equal / not zero */

loc_0009877F: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */

loc_00098787: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000987CB; /* je: equal / zero */

loc_0009878E: ;
    eax = MEM32(esp + 0x20);

loc_00098792: ;
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_000987B6; /* je: equal / zero */

loc_000987A1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000987AAu); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_000987AA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000987B6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000987BFu); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_000987BF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000987CB: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ebx = esp + 0x18;
    PUSH32(esp, 0x000987DAu); RECOMP_ABI_CALL(0x000989C0u, sub_000989C0); /* call 0x000989C0 */

loc_000987DA: ;
    eax = MEM32(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ebp) = eax;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000987F0
 * Original: 0x000987F0 - 0x0009886A (122 bytes, 48 insns)
 * Folder: memory (between: 0x00098610 and 0x000988E0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000987F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000987F0: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0009883B; /* jne: not equal / not zero */

loc_00098805: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009883B; /* jne: not equal / not zero */

loc_00098809: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00098814u); RECOMP_ABI_CALL(0x00098870u, sub_00098870); /* call 0x00098870 */

loc_00098814: ;
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

loc_0009883B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098860; /* je: equal / zero */

loc_0009883F: ;
    PUSH32(esp, edi);

loc_00098840: ;
    edx = esp + 0x14;
    edi = eax;
    PUSH32(esp, 0x0009884Bu); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_0009884B: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098857u); RECOMP_ABI_CALL(0x000E38A0u, sub_000E38A0); /* call 0x000E38A0 */

loc_00098857: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098840; /* jne: not equal / not zero */

loc_0009885F: ;
    POP32(esp, edi);

loc_00098860: ;
    MEM32(ebp) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00098870
 * Original: 0x00098870 - 0x000988B8 (72 bytes, 32 insns)
 * Folder: memory (between: 0x00098610 and 0x000988E0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000988B2; /* jne: not equal / not zero */

loc_00098882: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0009888Du); RECOMP_ABI_CALL(0x00098870u, sub_00098870); /* call 0x00098870 */

loc_0009888D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000988A9; /* je: equal / zero */

loc_00098893: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000988A1; /* jne: not equal / not zero */

loc_0009889C: ;
    PUSH32(esp, 0x000988A1u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000988A1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000988A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000988A6u); } /* indirect call */
    }

loc_000988A9: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00098882; /* je: equal / zero */

loc_000988B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000988C0
 * Original: 0x000988C0 - 0x000988D6 (22 bytes, 8 insns)
 * Folder: memory (between: 0x00098610 and 0x000988E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000988C0(void)
{

loc_000988C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000988C8u); RECOMP_ABI_CALL(0x00098990u, sub_00098990); /* call 0x00098990 */

loc_000988C8: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000988E0
 * Original: 0x000988E0 - 0x00098985 (165 bytes, 65 insns)
 * Folder: memory (match: xbox-demo 0x0027B0B0, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000988E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000988E0: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098980; /* je: equal / zero */

loc_000988F2: ;
    eax = MEM32(edx + 4);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0009896C; /* je: equal / zero */

loc_0009890B: ;
    goto loc_00098910;

    /* nop */

loc_00098910: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009897D; /* je: equal / zero */

loc_00098914: ;
    edx = MEM32(esi + 8);
    edi = MEM32(ebx + 8);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00098962; /* jae: above or equal (unsigned >=) */

loc_00098922: ;
    edx = MEM32(esp + 0x18);
    edi = MEM32(esi);
    ecx = 1;
    PUSH32(esp, 0x00098932u); RECOMP_ABI_CALL(0x000DB310u, sub_000DB310); /* call 0x000DB310 */

loc_00098932: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 4);
    MEM32(eax) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ecx) = ebx;
    edx = MEM32(ebx + 4);
    MEM32(edx) = esi;
    ecx = MEM32(edi + 4);
    eax = MEM32(ebx + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(esi + 4);
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 4) = edx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x10);
    esi = edi;
    goto loc_00098964;

loc_00098962: ;
    ebx = MEM32(ebx);

loc_00098964: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098910; /* jne: not equal / not zero */

loc_00098968: ;
    edx = MEM32(esp + 0x18);

loc_0009896C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009897D; /* je: equal / zero */

loc_00098970: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = ebp;
    PUSH32(esp, 0x0009897Du); RECOMP_ABI_CALL(0x000DB620u, sub_000DB620); /* call 0x000DB620 */

loc_0009897D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00098980: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00098990
 * Original: 0x00098990 - 0x000989BA (42 bytes, 15 insns)
 * Folder: memory (between: 0x000988E0 and 0x000989C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098990: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009899E; /* jne: not equal / not zero */

loc_00098999: ;
    PUSH32(esp, 0x0009899Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0009899E: ;
    edx = 0xC;
    ecx = eax;
    PUSH32(esp, 0x000989AAu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000989AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000989B0; /* je: equal / zero */

loc_000989AE: ;
    MEM32(eax) = eax;

loc_000989B0: ;
    ecx = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000989B9; /* je: equal / zero */

loc_000989B7: ;
    MEM32(ecx) = eax;

loc_000989B9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000989C0
 * Original: 0x000989C0 - 0x00098AB5 (245 bytes, 98 insns)
 * Folder: memory (match: xbox-demo 0x0027B160, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000989C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000989C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, 1);
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00098A15; /* jne: not equal / not zero */

loc_000989DE: ;
    ecx = MEM32(esp + 0x1C);
    ebp = MEM32(ecx);
    edi = MEM32(ebp);

loc_000989E7: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000989F8; /* jne: not equal / not zero */

loc_000989F2: ;
    edx = MEM32(ebp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */

loc_000989F8: ;
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(esp + 0x10) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00098A07; /* je: equal / zero */

loc_00098A03: ;
    eax = MEM32(eax);
    goto loc_00098A0A;

loc_00098A07: ;
    eax = MEM32(eax + 8);

loc_00098A0A: ;
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000989E7; /* je: equal / zero */

loc_00098A11: ;
    edx = MEM32(esp + 0x18);

loc_00098A15: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edi = esi;
    MEM32(esp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00098A5A; /* je: equal / zero */

loc_00098A1F: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098A4D; /* jne: not equal / not zero */

loc_00098A26: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edi = edx;
    PUSH32(esp, 0x00098A3Au); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_00098A3A: ;
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = ecx;
    MEM8(ebx + 4) = 1;
    eax = ebx;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00098A4D: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x00098A56u); RECOMP_ABI_CALL(0x000CEA70u, sub_000CEA70); /* call 0x000CEA70 */

loc_00098A56: ;
    edi = MEM32(esp + 0xC);

loc_00098A5A: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx);
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    ebp = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098A71; /* jne: not equal / not zero */

loc_00098A6B: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */

loc_00098A71: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098AA4; /* je: equal / zero */

loc_00098A78: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00098A91u); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_00098A91: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = edx;
    MEM8(ebx + 4) = 1;
    eax = ebx;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00098AA4: ;
    MEM32(ebx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 4) = 0;
    eax = ebx;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00098AC0
 * Original: 0x00098AC0 - 0x00098B04 (68 bytes, 31 insns)
 * Folder: memory (match: xbox-demo 0x0027B260, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098AC0: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098B01; /* jne: not equal / not zero */

loc_00098ACD: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx);

loc_00098AD8: ;
    edx = MEM32(ecx + 0xC);
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098AE7; /* jne: not equal / not zero */

loc_00098AE1: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 4) (32-bit) */

loc_00098AE7: ;
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098AF3; /* je: equal / zero */

loc_00098AEE: ;
    ecx = MEM32(ecx + 8);
    goto loc_00098AF7;

loc_00098AF3: ;
    eax = ecx;
    ecx = MEM32(ecx);

loc_00098AF7: ;
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098AD8; /* je: equal / zero */

loc_00098AFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00098B01: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098B10
 * Original: 0x00098B10 - 0x00098B54 (68 bytes, 31 insns)
 * Folder: memory (match: xbox-demo 0x0027B340, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098B10: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098B51; /* jne: not equal / not zero */

loc_00098B1D: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx);

loc_00098B28: ;
    edx = MEM32(ecx + 0xC);
    esi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098B37; /* jne: not equal / not zero */

loc_00098B31: ;
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 4) (32-bit) */

loc_00098B37: ;
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098B44; /* je: equal / zero */

loc_00098B3E: ;
    eax = ecx;
    ecx = MEM32(ecx);
    goto loc_00098B47;

loc_00098B44: ;
    ecx = MEM32(ecx + 8);

loc_00098B47: ;
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098B28; /* je: equal / zero */

loc_00098B4E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00098B51: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098BB0
 * Original: 0x00098BB0 - 0x00098BEC (60 bytes, 30 insns)
 * Folder: memory (match: xbox-demo 0x0027B3F0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00098BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098BB0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098BDF; /* je: equal / zero */

loc_00098BC3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);

loc_00098BC8: ;
    eax = esi;
    esi = MEM32(esi);
    ecx = eax + 8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00098BD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098BCFu); } /* indirect call */
    }

loc_00098BD1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098BC8; /* jne: not equal / not zero */

loc_00098BD5: ;
    MEM32(ebp) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00098BDF: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(ebp) = eax;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00098BC3
 * Original: 0x00098BC3 - 0x00098BEC (41 bytes, 22 insns)
 * Folder: memory (between: 0x00098BB0 and 0x00098C20)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098BC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098BC3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);

loc_00098BC8: ;
    eax = esi;
    esi = MEM32(esi);
    ecx = eax + 8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00098BD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098BCFu); } /* indirect call */
    }

loc_00098BD1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098BC8; /* jne: not equal / not zero */

loc_00098BD5: ;
    MEM32(ebp) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00098BF0
 * Original: 0x00098BF0 - 0x00098C0F (31 bytes, 11 insns)
 * Folder: memory (between: 0x00098BB0 and 0x00098C20)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098BF0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41FC28;
    if (TEST_Z(_fa, _fb)) goto loc_00098C09; /* je: equal / zero */

loc_00098C00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098C06u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_00098C06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00098C09: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098C10
 * Original: 0x00098C10 - 0x00098C17 (7 bytes, 2 insns)
 * Folder: memory (between: 0x00098BB0 and 0x00098C20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098C10(void)
{

loc_00098C10: ;
    MEM32(ecx) = 0x41FC28;
    esp += 4; return; /* ret */

}

/**
 * sub_00098C20
 * Original: 0x00098C20 - 0x00098C81 (97 bytes, 30 insns)
 * Folder: memory (match: xbox-demo 0x0027B460, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098C20: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368E8B);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM32(esi) = ebx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x18) = ecx;
    MEM8(esi + 0x24) = LO8(ebx);
    PUSH32(esp, 0x00098C57u); RECOMP_ABI_CALL(0x00098990u, sub_00098990); /* call 0x00098990 */

loc_00098C57: ;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = ebx;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x00098C66u); RECOMP_ABI_CALL(0x00098990u, sub_00098990); /* call 0x00098990 */

loc_00098C66: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = ebx;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CEA70
 * Original: 0x000CEA70 - 0x000CEACD (93 bytes, 43 insns)
 * Folder: memory (match: xbox-demo 0x0027B390, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CEA70: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEA7F; /* je: equal / zero */

loc_000CEA79: ;
    eax = MEM32(eax + 8);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_000CEA7F: ;
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEAA3; /* jne: not equal / not zero */

loc_000CEA89: ;
    eax = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEA9F; /* jne: not equal / not zero */

loc_000CEA93: ;
    ecx = eax;
    eax = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEA93; /* je: equal / zero */

loc_000CEA9F: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000CEAA3: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEACB; /* jne: not equal / not zero */

loc_000CEAAD: ;
    /* nop */

loc_000CEAB0: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEAC2; /* jne: not equal / not zero */

loc_000CEAB6: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEAB0; /* je: equal / zero */

loc_000CEAC2: ;
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEACB; /* jne: not equal / not zero */

loc_000CEAC9: ;
    MEM32(edx) = eax;

loc_000CEACB: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB620
 * Original: 0x000DB620 - 0x000DB666 (70 bytes, 27 insns)
 * Folder: memory (match: xbox-demo 0x0027B2B0, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB620: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000DB634; /* je: equal / zero */

loc_000DB62A: ;
    ecx = edi;
    PUSH32(esp, 0x000DB631u); RECOMP_ABI_CALL(0x000DB310u, sub_000DB310); /* call 0x000DB310 */

loc_000DB631: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 8) = MEM32(esi + 8) - edi;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000DB634: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x14);
    MEM32(edx) = ecx;
    esi = MEM32(ecx + 4);
    edx = MEM32(esp + 0xC);
    MEM32(esi) = edx;
    esi = MEM32(edx + 4);
    MEM32(esi) = eax;
    esi = MEM32(edx + 4);
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    MEM32(eax + 4) = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}
