/**
 * PoP SoT xbox-demo - objects, chunk 0
 * Game objects and their modifiers (Jade ENGine OBJects, MoDiFier)
 * Functions: 14 (0x00014DE0 - 0x00079C60)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00014DE0
 * Original: 0x00014DE0 - 0x00014E5A (122 bytes, 52 insns)
 * Folder: objects (source: MDFstruct.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014DE0: ;
    eax = MEM32(eax + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014DF2; /* jne: not equal / not zero */

loc_00014DEF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00014DF2: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014E4E; /* je: equal / zero */

loc_00014DFA: ;
    /* nop */

loc_00014E00: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014E47; /* jne: not equal / not zero */

loc_00014E08: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014E17; /* je: equal / zero */

loc_00014E10: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014E54; /* je: equal / zero */

loc_00014E14: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00014E47;

loc_00014E17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014E3F; /* je: equal / zero */

loc_00014E1C: ;
    PUSH32(esp, 0x3230E8);
    PUSH32(esp, 0x3230E0);
    PUSH32(esp, 0x406);
    PUSH32(esp, 0x3230A8);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x00014E3Au); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_00014E3A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00014E47;

loc_00014E3F: ;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(edx + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x60), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014E54; /* je: equal / zero */

loc_00014E47: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014E00; /* jne: not equal / not zero */

loc_00014E4E: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00014E54: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0001D398
 * Original: 0x0001D398 - 0x0001D477 (223 bytes, 71 insns)
 * Folder: objects (source: OBJBoundingvolume.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D398(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001D398: ;
    edx = MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D3A7; /* jne: not equal / not zero */

loc_0001D3A0: ;
    edx = 1;
    goto loc_0001D3B5;

loc_0001D3A7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ecx;

loc_0001D3B5: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001D3DF; /* je: equal / zero */

loc_0001D3BA: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0001D3D1; /* je: equal / zero */

loc_0001D3BD: ;
    PUSH32(esp, 0x3231A0);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0xD8);
    goto loc_0001D45A;

loc_0001D3D1: ;
    edx = MEM32(eax + 0xC);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

loc_0001D3DF: ;
    g_seh_ebp = ebp; sub_0001D170(); return; /* tail jmp 0x0001D170 */

    edx = MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D3F3; /* jne: not equal / not zero */

loc_0001D3EC: ;
    edx = 1;
    goto loc_0001D401;

loc_0001D3F3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ecx;

loc_0001D401: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001D423; /* je: equal / zero */

loc_0001D406: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001D41C; /* je: equal / zero */

loc_0001D40B: ;
    PUSH32(esp, 0x323234);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0xBC);
    goto loc_0001D45A;

loc_0001D41C: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0001D290(); return; /* tail jmp 0x0001D290 */

loc_0001D423: ;
    g_seh_ebp = ebp; sub_0001D0D0(); return; /* tail jmp 0x0001D0D0 */

    edx = MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D437; /* jne: not equal / not zero */

loc_0001D430: ;
    edx = 1;
    goto loc_0001D445;

loc_0001D437: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ecx;

loc_0001D445: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0001D472; /* je: equal / zero */

loc_0001D448: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0001D46D; /* je: equal / zero */

loc_0001D44B: ;
    PUSH32(esp, 0x3231CC);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0xCA);

loc_0001D45A: ;
    PUSH32(esp, 0x3231F4);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0001D469u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0001D469: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001D46D: ;
    g_seh_ebp = ebp; sub_0001D2F0(); return; /* tail jmp 0x0001D2F0 */

loc_0001D472: ;
    g_seh_ebp = ebp; sub_0001D210(); return; /* tail jmp 0x0001D210 */

}

/**
 * sub_0001D480
 * Original: 0x0001D480 - 0x0001D4D4 (84 bytes, 29 insns)
 * Folder: objects (between: 0x0001D398 and 0x0001D6B0)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0001D480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0001D480: ;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D490; /* je: equal / zero */

loc_0001D48B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D49E; /* jne: not equal / not zero */

loc_0001D490: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    goto loc_0001D4C5;

loc_0001D49E: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001D4D1; /* jp: parity */

loc_0001D4AF: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001D4D1; /* jp: parity */

loc_0001D4BD: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */

loc_0001D4C5: ;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001D4D1; /* jp: parity */

loc_0001D4CB: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0001D4D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001D4E0
 * Original: 0x0001D4E0 - 0x0001D5BA (218 bytes, 55 insns)
 * Folder: objects (between: 0x0001D398 and 0x0001D6B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001D4E0: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D4F0; /* je: equal / zero */

loc_0001D4EB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D52C; /* jne: not equal / not zero */

loc_0001D4F0: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0001D4FCu); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_0001D4FC: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0001D52C: ;
    eax = MEM32(ecx + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm3 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    eax = MEM32(ecx + 0xC);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi) = xmm3.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0001D5C0
 * Original: 0x0001D5C0 - 0x0001D62C (108 bytes, 29 insns)
 * Folder: objects (between: 0x0001D398 and 0x0001D6B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001D5C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D606; /* je: equal / zero */

loc_0001D5C7: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 8); /* mulss */
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    goto loc_0001D613;

loc_0001D606: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);

loc_0001D613: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = 0xFFFFFFFFu;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001D630
 * Original: 0x0001D630 - 0x0001D6AD (125 bytes, 39 insns)
 * Folder: objects (between: 0x0001D398 and 0x0001D6B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001D630: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D687; /* je: equal / zero */

loc_0001D637: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 8); /* mulss */
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(eax + 0x38) = esi;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x44) = esi;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001D687: ;
    edx = MEM32(ecx);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x40) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x44) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001D6B0
 * Original: 0x0001D6B0 - 0x0001D921 (625 bytes, 189 insns)
 * Folder: objects (source: OBJBoundingvolume.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0001D6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0001D6B0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    edx = MEM32(ebp + 0x10);
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D6C7; /* jne: not equal / not zero */

loc_0001D6C0: ;
    eax = 1;
    goto loc_0001D6D5;

loc_0001D6C7: ;
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
    eax = ecx;

loc_0001D6D5: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001D7F1; /* je: equal / zero */

loc_0001D6DE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0001D758; /* je: equal / zero */

loc_0001D6E1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0001D6F5; /* je: equal / zero */

loc_0001D6E4: ;
    PUSH32(esp, 0x323190);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x29B);
    goto loc_0001D744;

loc_0001D6F5: ;
    eax = MEM32(edi + 0x10);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D707; /* jne: not equal / not zero */

loc_0001D700: ;
    eax = 1;
    goto loc_0001D715;

loc_0001D707: ;
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
    eax = edx;

loc_0001D715: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x323178);
    PUSH32(esp, 0x32316C);
    if ((_fa == 0)) goto loc_0001D73F; /* je: equal / zero */

loc_0001D724: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0001D738; /* je: equal / zero */

loc_0001D727: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0001D731; /* je: equal / zero */

loc_0001D72A: ;
    PUSH32(esp, 0x296);
    goto loc_0001D744;

loc_0001D731: ;
    PUSH32(esp, 0x293);
    goto loc_0001D744;

loc_0001D738: ;
    PUSH32(esp, 0x290);
    goto loc_0001D744;

loc_0001D73F: ;
    PUSH32(esp, 0x28D);

loc_0001D744: ;
    PUSH32(esp, 0x3231F4);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0001D753u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0001D753: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0001D758: ;
    eax = MEM32(edi + 0x10);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D76A; /* jne: not equal / not zero */

loc_0001D763: ;
    eax = 1;
    goto loc_0001D778;

loc_0001D76A: ;
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
    eax = ecx;

loc_0001D778: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x323178);
    PUSH32(esp, 0x32316C);
    if ((_fa == 0)) goto loc_0001D7D8; /* je: equal / zero */

loc_0001D787: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0001D7BF; /* je: equal / zero */

loc_0001D78A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0001D7A6; /* je: equal / zero */

loc_0001D78D: ;
    PUSH32(esp, 0x284);
    PUSH32(esp, 0x3231F4);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0001D7A1u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0001D7A1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0001D7A6: ;
    PUSH32(esp, 0x281);
    PUSH32(esp, 0x3231F4);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0001D7BAu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0001D7BA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0001D7BF: ;
    PUSH32(esp, 0x27E);
    PUSH32(esp, 0x3231F4);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0001D7D3u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0001D7D3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0001D7D8: ;
    PUSH32(esp, 0x27B);
    PUSH32(esp, 0x3231F4);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0001D7ECu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0001D7EC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0001D7F1: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D804; /* jne: not equal / not zero */

loc_0001D7FD: ;
    eax = 1;
    goto loc_0001D810;

loc_0001D804: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0001D810: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    if ((_fa == 0)) goto loc_0001D85C; /* je: equal / zero */

loc_0001D816: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0001D91F; /* je: equal / zero */

loc_0001D81D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x323178);
    PUSH32(esp, 0x32316C);
    if ((_fa == 0)) goto loc_0001D843; /* je: equal / zero */

loc_0001D82A: ;
    PUSH32(esp, 0x271);
    PUSH32(esp, 0x3231F4);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0001D83Eu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0001D83E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0001D843: ;
    PUSH32(esp, 0x259);
    PUSH32(esp, 0x3231F4);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0001D857u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0001D857: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0001D85C: ;
    eax = MEM32(edi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x34); /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x38); /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0x30); /* subss */
    xmm6 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 4); /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(ecx + 8); /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 0x34); /* subss */
    xmm5.f[0] = xmm5.f[0] - MEMF(eax + 0x38); /* subss */
    if ((_fca > _fcb)) goto loc_0001D8C7; /* ja: above (unsigned >) (xmm6.f[0] vs xmm3.f[0]) */

loc_0001D8C4: ;
    xmm3 = xmm6; /* movaps */

loc_0001D8C7: ;
    MEMF(edx) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0001D8D8; /* ja: above (unsigned >) (xmm3.f[0] vs xmm4.f[0]) */

loc_0001D8D5: ;
    xmm4 = xmm3; /* movaps */

loc_0001D8D8: ;
    xmm3 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* comiss */
    MEMF(edx + 4) = xmm4.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0001D8EA; /* ja: above (unsigned >) (xmm3.f[0] vs xmm5.f[0]) */

loc_0001D8E7: ;
    xmm5 = xmm3; /* movaps */

loc_0001D8EA: ;
    MEMF(edx + 8) = xmm5.f[0]; /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0xC); /* comiss */
    if ((_fca > _fcb)) goto loc_0001D8FA; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx + 0xC)) */

loc_0001D8F5: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */

loc_0001D8FA: ;
    _fca = xmm1.f[0]; _fcb = MEMF(edx + 0x10); /* comiss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0001D90A; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(edx + 0x10)) */

loc_0001D905: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */

loc_0001D90A: ;
    _fca = xmm2.f[0]; _fcb = MEMF(edx + 0x14); /* comiss */
    MEMF(edx + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0001D91A; /* ja: above (unsigned >) (xmm2.f[0] vs MEMF(edx + 0x14)) */

loc_0001D915: ;
    xmm2 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */

loc_0001D91A: ;
    MEMF(edx + 0x14) = xmm2.f[0]; /* movss */

loc_0001D91F: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0001D7B5
 * Original: 0x0001D7B5 - 0x0001D921 (364 bytes, 102 insns)
 * Folder: objects (source: OBJBoundingvolume.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D7B5(void)
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

loc_0001D7B5: ;
    PUSH32(esp, 0x0001D7BAu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0001D7BA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    eax = 1;
    goto loc_0001D810;

loc_0001D804: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0001D810: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    if ((_fa == 0)) goto loc_0001D85C; /* je: equal / zero */

loc_0001D816: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0001D91F; /* je: equal / zero */

loc_0001D81D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x323178);
    PUSH32(esp, 0x32316C);
    if ((_fa == 0)) goto loc_0001D843; /* je: equal / zero */

loc_0001D82A: ;
    PUSH32(esp, 0x271);
    PUSH32(esp, 0x3231F4);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0001D83Eu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0001D83E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0001D843: ;
    PUSH32(esp, 0x259);
    PUSH32(esp, 0x3231F4);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0001D857u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0001D857: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0001D85C: ;
    eax = MEM32(edi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x34); /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x38); /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0x30); /* subss */
    xmm6 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 4); /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(ecx + 8); /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 0x34); /* subss */
    xmm5.f[0] = xmm5.f[0] - MEMF(eax + 0x38); /* subss */
    if ((_fca > _fcb)) goto loc_0001D8C7; /* ja: above (unsigned >) (xmm6.f[0] vs xmm3.f[0]) */

loc_0001D8C4: ;
    xmm3 = xmm6; /* movaps */

loc_0001D8C7: ;
    MEMF(edx) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0001D8D8; /* ja: above (unsigned >) (xmm3.f[0] vs xmm4.f[0]) */

loc_0001D8D5: ;
    xmm4 = xmm3; /* movaps */

loc_0001D8D8: ;
    xmm3 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* comiss */
    MEMF(edx + 4) = xmm4.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0001D8EA; /* ja: above (unsigned >) (xmm3.f[0] vs xmm5.f[0]) */

loc_0001D8E7: ;
    xmm5 = xmm3; /* movaps */

loc_0001D8EA: ;
    MEMF(edx + 8) = xmm5.f[0]; /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0xC); /* comiss */
    if ((_fca > _fcb)) goto loc_0001D8FA; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx + 0xC)) */

loc_0001D8F5: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */

loc_0001D8FA: ;
    _fca = xmm1.f[0]; _fcb = MEMF(edx + 0x10); /* comiss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0001D90A; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(edx + 0x10)) */

loc_0001D905: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */

loc_0001D90A: ;
    _fca = xmm2.f[0]; _fcb = MEMF(edx + 0x14); /* comiss */
    MEMF(edx + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0001D91A; /* ja: above (unsigned >) (xmm2.f[0] vs MEMF(edx + 0x14)) */

loc_0001D915: ;
    xmm2 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */

loc_0001D91A: ;
    MEMF(edx + 0x14) = xmm2.f[0]; /* movss */

loc_0001D91F: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0003BB90
 * Original: 0x0003BB90 - 0x0003BC8E (254 bytes, 87 insns)
 * Folder: objects (source: MDFmodifier_GEN.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003BB90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x64D398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0003BBD1; /* je: equal / zero */

loc_0003BBA8: ;
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esp + 0x10));
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

loc_0003BBD1: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0x10A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BC03; /* je: equal / zero */

loc_0003BBDB: ;
    PUSH32(esp, 0x3235FC);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x418);
    PUSH32(esp, 0x3235C0);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0003BBF9u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0003BBF9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003BC03: ;
    eax = MEM32(0x64D33C);
    ecx = MEM32(0x64D3A4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BC1A; /* je: equal / zero */

loc_0003BC15: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BC1D; /* je: equal / zero */

loc_0003BC1A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003BC1D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BC29; /* je: equal / zero */

loc_0003BC24: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BC2C; /* je: equal / zero */

loc_0003BC29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003BC2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BC35; /* je: equal / zero */

loc_0003BC30: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BC38; /* je: equal / zero */

loc_0003BC35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003BC38: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BC44; /* je: equal / zero */

loc_0003BC3F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BC47; /* je: equal / zero */

loc_0003BC44: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003BC47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BC50; /* je: equal / zero */

loc_0003BC4B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BC53; /* je: equal / zero */

loc_0003BC50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003BC53: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x38;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003BC75; /* je: equal / zero */

loc_0003BC5A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003BC75; /* jne: not equal / not zero */

loc_0003BC5F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    MEM32(eax + 4) = 0x4000000;
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003BC75: ;
    eax = 0x40;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    MEM32(eax + 4) = 0x4000000;
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00078620
 * Original: 0x00078620 - 0x00079A88 (5224 bytes, 1584 insns)
 * Folder: objects (source: OBJload.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00078620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007863Cu); RECOMP_ABI_CALL(0x000BFDB0u, sub_000BFDB0); /* call 0x000BFDB0 */

loc_0007863C: ;
    esi = eax;
    edx = MEM32(esi);
    PUSH32(esp, 4);
    eax = esp + 0x2C;
    PUSH32(esp, 0x323984);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078658u); RECOMP_ABI_CALL(0x0028B420u, sub_0028B420); /* call 0x0028B420 */

loc_00078658: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078668; /* je: equal / zero */

loc_0007865F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00078668: ;
    ecx = MEM32(esi);
    eax = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007869F; /* je: equal / zero */

loc_0007867A: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x23) = LO8(eax);
    MEM8(esp + 0x20) = LO8(edx);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x20);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x21) = LO8(ecx);
    MEM8(esp + 0x22) = LO8(eax);

loc_0007869F: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000786C7; /* jbe: below or equal (unsigned <=) */

loc_000786A6: ;
    PUSH32(esp, 0x323938);
    PUSH32(esp, 0x32390C);
    PUSH32(esp, 0x2EA);
    PUSH32(esp, 0x3238D8);
    PUSH32(esp, 0x32308C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000786C4u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000786C4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000786C7: ;
    edi = MEM32(esi + 4);
    eax = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0007870C; /* je: equal / zero */

loc_000786E1: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    edx = edi;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1B) = LO8(eax);
    MEM8(esp + 0x18) = LO8(edx);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x18);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x19) = LO8(ecx);
    MEM8(esp + 0x1A) = LO8(eax);
    edi = MEM32(esp + 0x18);

loc_0007870C: ;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078713u); RECOMP_ABI_CALL(0x0001AA50u, sub_0001AA50); /* call 0x0001AA50 */

loc_00078713: ;
    ebx = eax;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 2 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(0x36A370) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00078733; /* jb: below (unsigned <) */

loc_00078726: ;
    edx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007872Fu); RECOMP_ABI_CALL(0x00077E50u, sub_00077E50); /* call 0x00077E50 */

loc_0007872F: ;
    esi = MEM32(esp + 0x10);

loc_00078733: ;
    eax = MEM32(0x64D398);
    MEM32(ebx + 4) = 0x7B900080;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00078775; /* je: equal / zero */

loc_0007874C: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x13) = LO8(eax);
    MEM8(esp + 0x10) = LO8(edx);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x10);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(ecx);
    MEM8(esp + 0x12) = LO8(eax);
    ecx = MEM32(esp + 0x10);

loc_00078775: ;
    edx = MEM32(ebx + 0x18);
    eax = ecx;
    eax = eax & 0x7B900080;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebx + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00078796; /* je: equal / zero */

loc_00078786: ;
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078796; /* je: equal / zero */

loc_0007878C: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078796; /* je: equal / zero */

loc_00078791: ;
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00078799;

loc_00078796: ;
    eax = eax & 0xFFFFFFDFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00078799: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x20000000 (32-bit) */
    MEM32(ebx + 4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000787AC; /* je: equal / zero */

loc_000787A4: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 4) = eax;

loc_000787AC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000787BB; /* je: equal / zero */

loc_000787B4: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) | 0x400000;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000787BB: ;
    edx = MEM32(ebx + 4);
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = edx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    MEM32(ebx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_000787E3; /* jne: not equal / not zero */

loc_000787CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x100000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000787E3; /* je: equal / zero */

loc_000787D6: ;
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 4) = eax;
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000787E3u); RECOMP_ABI_CALL(0x0001F020u, sub_0001F020); /* call 0x0001F020 */

loc_000787E3: ;
    SET_LO8(eax, MEM8(esi));
    ecx = MEM32(0x64D33C);
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + 8) = LO8(eax);
    SET_LO8(eax, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebx + 9) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00078804; /* je: equal / zero */

loc_000787FB: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078807; /* je: equal / zero */

loc_00078804: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00078807: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007880F; /* jne: not equal / not zero */

loc_0007880B: ;
    MEM8(ebx + 9) = 0x10;

loc_0007880F: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(ebx + 0x1C) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + 0x1D) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + 0x1E) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(ecx) & 0xC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, (uint32_t)(((int32_t)(int8_t)(LO8(eax))) >> ((2) & 31u)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sar result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, (uint32_t)(((int32_t)(int8_t)(LO8(edx))) >> ((2) & 31u)));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sar result */
    SET_LO8(edx, LO8(edx) & 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 1);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = esi;
    MEM8(ebx + 0x1F) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078855u); RECOMP_ABI_CALL(0x000C1420u, sub_000C1420); /* call 0x000C1420 */

loc_00078855: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078861u); RECOMP_ABI_CALL(0x000C50B0u, sub_000C50B0); /* call 0x000C50B0 */

loc_00078861: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    MEM32(esp + 0x70) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00078877; /* jne: not equal / not zero */

loc_00078869: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x5C) = eax;

loc_00078877: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007889C; /* je: equal / zero */

loc_0007887F: ;
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007889C; /* je: equal / zero */

loc_0007888D: ;
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
    edi = MEM32(esp + 0x18);

loc_0007889C: ;
    eax = MEM32(ebx + 0xC);
    ecx = esp + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000788B8; /* je: equal / zero */

loc_000788A7: ;
    ecx = 0x14;
    esi = esp + 0x30;
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
    edi = MEM32(esp + 0x18);

loc_000788B8: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007898C; /* je: equal / zero */

loc_000788C3: ;
    ecx = MEM32(0x64D33C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000788D6; /* je: equal / zero */

loc_000788CD: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000788DB; /* je: equal / zero */

loc_000788D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000788DB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x80000 (32-bit) */
    esi = eax + 0x18;
    PUSH32(esp, 1);
    edi = esp + 0x14;
    if (TEST_Z(_fa, _fb)) goto loc_00078946; /* je: equal / zero */

loc_000788EC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000788F1u); RECOMP_ABI_CALL(0x000C1390u, sub_000C1390); /* call 0x000C1390 */

loc_000788F1: ;
    eax = MEM32(ebx + 0x10);
    edx = MEM32(eax + 0x18);
    MEM32(eax) = edx;
    ecx = MEM32(eax + 0x1C);
    MEM32(eax + 4) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(eax + 8) = edx;
    esi = MEM32(ebx + 0x10);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078912u); RECOMP_ABI_CALL(0x000C1390u, sub_000C1390); /* call 0x000C1390 */

loc_00078912: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x24);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(eax + 0x28);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(eax + 0x2C);
    MEM32(eax + 0x14) = ecx;
    esi = MEM32(ebx + 0x10);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078934u); RECOMP_ABI_CALL(0x000C1390u, sub_000C1390); /* call 0x000C1390 */

loc_00078934: ;
    esi = MEM32(ebx + 0x10);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078941u); RECOMP_ABI_CALL(0x000C1390u, sub_000C1390); /* call 0x000C1390 */

loc_00078941: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078988;

loc_00078946: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007894Bu); RECOMP_ABI_CALL(0x000C1390u, sub_000C1390); /* call 0x000C1390 */

loc_0007894B: ;
    eax = MEM32(ebx + 0x10);
    edx = MEM32(eax + 0x18);
    MEM32(eax) = edx;
    ecx = MEM32(eax + 0x1C);
    MEM32(eax + 4) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(eax + 8) = edx;
    esi = MEM32(ebx + 0x10);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078970u); RECOMP_ABI_CALL(0x000C1390u, sub_000C1390); /* call 0x000C1390 */

loc_00078970: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x24);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(eax + 0x28);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(eax + 0x2C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14) = ecx;

loc_00078988: ;
    edi = MEM32(esp + 0x18);

loc_0007898C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x1000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00078EE1; /* je: equal / zero */

loc_00078998: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x4000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000789B8; /* je: equal / zero */

loc_000789A0: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000789B5u); RECOMP_ABI_CALL(0x00077EA0u, sub_00077EA0); /* call 0x00077EA0 */

loc_000789B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000789B8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00078A5E; /* je: equal / zero */

loc_000789C4: ;
    eax = MEM32(ebx + 0x14);
    ebx = MEM32(eax + 8);
    eax = MEM32(esp + 0x10);
    esi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x64D398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00078A0F; /* je: equal / zero */

loc_000789E4: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    ecx = esi;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1F) = LO8(eax);
    MEM8(esp + 0x1C) = LO8(ecx);
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x1C);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1D) = LO8(edx);
    MEM8(esp + 0x1E) = LO8(eax);
    esi = MEM32(esp + 0x1C);

loc_00078A0F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00078A3E; /* je: equal / zero */

loc_00078A18: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x78620);
    edi = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078A26u); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_00078A26: ;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, 0x78620);
    edi = ebx + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078A39u); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_00078A39: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078A4B;

loc_00078A3E: ;
    MEM32(ebx + 4) = 0;
    MEM32(ebx) = 0;

loc_00078A4B: ;
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078A5Bu); RECOMP_ABI_CALL(0x000C1420u, sub_000C1420); /* call 0x000C1420 */

loc_00078A5B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00078A5E: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 2 (8-bit) */
    ebx = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_00078CC9; /* je: equal / zero */

loc_00078A6D: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(ebx);
    eax = MEM32(0x64D398);
    esi = MEM32(edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00078AAF; /* je: equal / zero */

loc_00078A88: ;
    edx = ecx;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1C) = LO8(edx);
    MEM8(esp + 0x1F) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x1C);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1D) = LO8(edx);
    MEM8(esp + 0x1E) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);

loc_00078AAF: ;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esi + 0x18) = ecx;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00078AEA; /* je: equal / zero */

loc_00078AC3: ;
    edx = ecx;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1C) = LO8(edx);
    MEM8(esp + 0x1F) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x1C);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1D) = LO8(edx);
    MEM8(esp + 0x1E) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);

loc_00078AEA: ;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esi + 0x14) = ecx;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00078B25; /* je: equal / zero */

loc_00078AFE: ;
    edx = ecx;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1C) = LO8(edx);
    MEM8(esp + 0x1F) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x1C);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1D) = LO8(edx);
    MEM8(esp + 0x1E) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);

loc_00078B25: ;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esi + 4) = ecx;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00078C65; /* jb: below (unsigned <) */

loc_00078B37: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00078B6B; /* je: equal / zero */

loc_00078B44: ;
    edx = ecx;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1C) = LO8(edx);
    MEM8(esp + 0x1F) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x1C);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1D) = LO8(edx);
    MEM8(esp + 0x1E) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);

loc_00078B6B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00078C65; /* je: equal / zero */

loc_00078B77: ;
    MEM32(esi + 0x78) = ecx;
    eax = MEM32(esp + 0x1C);
    edi = eax * 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078B8Au); RECOMP_ABI_CALL(0x00012710u, sub_00012710); /* call 0x00012710 */

loc_00078B8A: ;
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078B93u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00078B93: ;
    MEM32(esi + 0x74) = eax;
    eax = MEM32(esi + 0x78);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0x64D398);
    MEM32(esp + 0x24) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00078C65; /* jle: less or equal (signed <=) */

loc_00078BAC: ;
    /* nop */

loc_00078BB0: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00078BE8; /* je: equal / zero */

loc_00078BC1: ;
    edx = ecx;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1C) = LO8(edx);
    MEM8(esp + 0x1F) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x1C);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1D) = LO8(edx);
    MEM8(esp + 0x1E) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);

loc_00078BE8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00078C4B; /* je: equal / zero */

loc_00078BF0: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078BFE; /* jne: not equal / not zero */

loc_00078BF9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078BFEu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00078BFE: ;
    edx = 0x4C;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078C0Au); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00078C0A: ;
    ecx = MEM32(esi + 0x74);
    edx = MEM32(esp + 0x24);
    MEM32(ecx + edx * 4) = eax;
    edi = MEM32(esi + 0x74);
    edi = MEM32(edi + edx * 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x13;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi + 0x74);
    edx = MEM32(ecx + edx * 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078C39u); RECOMP_ABI_CALL(0x00077EA0u, sub_00077EA0); /* call 0x00077EA0 */

loc_00078C39: ;
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(0x64D398);
    edi = MEM32(esp + 0x30);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078C55;

loc_00078C4B: ;
    ecx = MEM32(esi + 0x74);
    MEM32(ecx + edi * 4) = 0;

loc_00078C55: ;
    ecx = MEM32(esi + 0x78);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(esp + 0x24) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00078BB0; /* jl: less (signed <) */

loc_00078C65: ;
    esi = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00078CA1; /* je: equal / zero */

loc_00078C76: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    edx = esi;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1F) = LO8(eax);
    MEM8(esp + 0x1C) = LO8(edx);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x1C);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x1D) = LO8(ecx);
    MEM8(esp + 0x1E) = LO8(eax);
    esi = MEM32(esp + 0x1C);

loc_00078CA1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00078CC9; /* je: equal / zero */

loc_00078CAA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078CC9; /* je: equal / zero */

loc_00078CAE: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x14);
    edi = MEM32(eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x6C220);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078CC6u); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_00078CC6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00078CC9: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00078EE5; /* je: equal / zero */

loc_00078CD9: ;
    edi = MEM32(ebx);
    eax = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00078D1A; /* je: equal / zero */

loc_00078CEF: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    edx = edi;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(eax);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(eax);
    edi = MEM32(esp + 0x24);

loc_00078D1A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax + 0xC);
    MEM32(edx) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00078EE9; /* je: equal / zero */

loc_00078D2E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x1000000 (32-bit) */
    eax = MEM32(0x64CF80);
    if (TEST_Z(_fa, _fb)) goto loc_00078E66; /* je: equal / zero */

loc_00078D3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078D48; /* jne: not equal / not zero */

loc_00078D43: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078D48u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00078D48: ;
    edx = edi + edi * 2;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078D55u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00078D55: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 0xC);
    MEM32(edx + 4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00078EE9; /* jle: less or equal (signed <=) */

loc_00078D66: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x28) = edi;

loc_00078D70: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(edx + 4);
    edx = MEM32(0x64D398);
    MEM32(eax + ecx) = 0;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00078DBA; /* je: equal / zero */

loc_00078D93: ;
    edx = ecx;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);
    ecx = MEM32(esp + 0x24);

loc_00078DBA: ;
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(esi + 0x14);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 4);
    MEM32(edx + eax + 4) = ecx;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(edx + 4);
    edi = ecx + eax + 4;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078DFA; /* je: equal / zero */

loc_00078DDD: ;
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x78620);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078DEDu); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_00078DED: ;
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00078E00;

loc_00078DFA: ;
    MEM32(edi) = 0;

loc_00078E00: ;
    edx = MEM32(ebx);
    ecx = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00078E36; /* je: equal / zero */

loc_00078E13: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_00078E36: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(edx + 4);
    edx = MEM32(esp + 0x24);
    MEM32(ecx + eax + 8) = edx;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x28) = ecx;
    if ((_fa != 0)) goto loc_00078D70; /* jne: not equal / not zero */

loc_00078E5D: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_00078EE9;

loc_00078E66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00078E6F; /* jne: not equal / not zero */

loc_00078E6A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078E6Fu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00078E6F: ;
    edx = edi + edi * 4;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078E7Cu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00078E7C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 0xC);
    MEM32(edx + 4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00078EE9; /* jle: less or equal (signed <=) */

loc_00078E89: ;
    MEM32(esp + 0x24) = 0;

loc_00078E91: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078EABu); RECOMP_ABI_CALL(0x000C1420u, sub_000C1420); /* call 0x000C1420 */

loc_00078EAB: ;
    eax = MEM32(0x64D33C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078EC0; /* je: equal / zero */

loc_00078EB7: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078ECD; /* je: equal / zero */

loc_00078EC0: ;
    ebx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebx;
    goto loc_00078ED1;

loc_00078ECD: ;
    ebx = MEM32(esp + 0x10);

loc_00078ED1: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = ecx;
    if ((_fa != 0)) goto loc_00078E91; /* jne: not equal / not zero */

loc_00078EDF: ;
    goto loc_00078EE9;

loc_00078EE1: ;
    ebx = MEM32(esp + 0x10);

loc_00078EE5: ;
    esi = MEM32(esp + 0x14);

loc_00078EE9: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x2000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000798E3; /* je: equal / zero */

loc_00078EF9: ;
    eax = MEM32(ebx);
    ecx = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00078F33; /* je: equal / zero */

loc_00078F0C: ;
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x27) = LO8(eax);
    MEM8(esp + 0x24) = LO8(ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(eax);
    eax = MEM32(esp + 0x24);

loc_00078F33: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x800000 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00078F62; /* je: equal / zero */

loc_00078F3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00078F62; /* je: equal / zero */

loc_00078F43: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(ecx + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0x864D0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00078F5Bu); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_00078F5B: ;
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00078F62: ;
    eax = MEM32(ebx);
    edx = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00078F9C; /* je: equal / zero */

loc_00078F75: ;
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(ecx);
    MEM8(esp + 0x27) = LO8(eax);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x24);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(ecx);
    MEM8(esp + 0x26) = LO8(eax);
    eax = MEM32(esp + 0x24);

loc_00078F9C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0x1C) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00078FE5; /* je: equal / zero */

loc_00078FBC: ;
    ecx = MEM32(esp + 0x24);
    SET_LO8(eax, MEM8(esp + 0x24));
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(ecx);
    MEM8(esp + 0x27) = LO8(eax);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x24);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(ecx);
    MEM8(esp + 0x26) = LO8(eax);

loc_00078FE5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    eax = MEM32(esi + 0x18);
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0007902D; /* je: equal / zero */

loc_00079004: ;
    ecx = MEM32(esp + 0x24);
    SET_LO8(eax, MEM8(esp + 0x24));
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(ecx);
    MEM8(esp + 0x27) = LO8(eax);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x24);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(ecx);
    MEM8(esp + 0x26) = LO8(eax);

loc_0007902D: ;
    eax = MEM32(esi + 0x18);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    edi = MEM32(0x64D33C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x18);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0007905A; /* je: equal / zero */

loc_00079050: ;
    eax = MEM32(0x64D3A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079062; /* je: equal / zero */

loc_0007905A: ;
    eax = MEM32(0x64D3A4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00079062: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007906B; /* je: equal / zero */

loc_00079066: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007906E; /* je: equal / zero */

loc_0007906B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007906E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079077; /* je: equal / zero */

loc_00079072: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007907A; /* je: equal / zero */

loc_00079077: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007907A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079083; /* je: equal / zero */

loc_0007907E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079086; /* je: equal / zero */

loc_00079083: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00079086: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007908F; /* je: equal / zero */

loc_0007908A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079092; /* je: equal / zero */

loc_0007908F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00079092: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000790AF; /* je: equal / zero */

loc_000790A2: ;
    ecx = eax;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(ecx);
    MEM8(esp + 0x25) = LO8(eax);

loc_000790AF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(esi + 0x18);
    SET_LO16(ecx, MEM16(esp + 0x24));
    MEM16(eax + 0x2A) = LO16(ecx);
    eax = MEM32(esi + 0x18);
    SET_LO16(ecx, MEM16(eax + 0x2A));
    MEM16(eax + 0x28) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000790D3; /* je: equal / zero */

loc_000790CA: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000790D6; /* je: equal / zero */

loc_000790D3: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000790D6: ;
    SET_LO8(eax, MEM8(ebx));
    ecx = MEM32(esi + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 0x2C) = LO8(eax);
    SET_LO8(eax, MEM8(ebx));
    ecx = MEM32(esi + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 0x2D) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00079109; /* je: equal / zero */

loc_000790FC: ;
    ecx = eax;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(ecx);
    MEM8(esp + 0x25) = LO8(eax);

loc_00079109: ;
    eax = MEM32(esi + 0x18);
    SET_LO16(ecx, MEM16(esp + 0x24));
    MEM16(eax + 0x2E) = LO16(ecx);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esp + 0x20);
    MEM8(eax + 0x2E) = MEM8(eax + 0x2E) & 0xF7;
    _fa = (uint32_t)(MEM8(eax + 0x2E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0007912C; /* jae: above or equal (unsigned >=) */

loc_00079125: ;
    eax = MEM32(esi + 0x18);
    MEM8(eax + 0x2E) = MEM8(eax + 0x2E) & 0xFD;
    _fa = (uint32_t)(MEM8(eax + 0x2E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0007912C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00079138; /* jae: above or equal (unsigned >=) */

loc_00079131: ;
    eax = MEM32(esi + 0x18);
    MEM8(eax + 0x2E) = MEM8(eax + 0x2E) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0x2E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00079138: ;
    ecx = MEM32(esi + 0x18);
    eax = 0xFFFF;
    MEM16(ecx + 0x38) = LO16(eax);
    ecx = MEM32(esi + 0x18);
    MEM16(ecx + 0x3A) = LO16(eax);
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000791B6; /* je: equal / zero */

loc_00079152: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007918A; /* je: equal / zero */

loc_00079163: ;
    edx = eax;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x27) = LO8(eax);
    MEM8(esp + 0x24) = LO8(edx);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x24);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(ecx);
    MEM8(esp + 0x26) = LO8(eax);
    eax = MEM32(esp + 0x24);

loc_0007918A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000791B6; /* je: equal / zero */

loc_00079192: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000791B6; /* je: equal / zero */

loc_00079197: ;
    edx = MEM32(esp + 0x14);
    edi = MEM32(edx + 0x18);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x10A650);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000791AFu); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_000791AF: ;
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000791B6: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x18), 0x2000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007925F; /* je: equal / zero */

loc_000791C4: ;
    eax = MEM32(ebx);
    ecx = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00079202; /* je: equal / zero */

loc_000791DB: ;
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x27) = LO8(eax);
    MEM8(esp + 0x24) = LO8(ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(eax);
    eax = MEM32(esp + 0x24);

loc_00079202: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0007925F; /* je: equal / zero */

loc_0007920A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007925F; /* je: equal / zero */

loc_0007920F: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007921D; /* jne: not equal / not zero */

loc_00079218: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007921Du); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0007921D: ;
    edx = 0xC;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00079229u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00079229: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x18);
    MEM32(edx + 0x20) = eax;
    eax = MEM32(ecx + 0x18);
    edi = MEM32(eax + 0x20);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10F060);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00079249u); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_00079249: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(edx + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = 0;
    esi = ecx;

loc_0007925F: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x8000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000792AE; /* je: equal / zero */

loc_0007926B: ;
    ecx = MEM32(ebx);
    eax = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000792A6; /* je: equal / zero */

loc_00079281: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x27) = LO8(eax);
    MEM8(esp + 0x24) = LO8(edx);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x24);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(ecx);
    MEM8(esp + 0x26) = LO8(eax);

loc_000792A6: ;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = edx;

loc_000792AE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x20000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000792C9; /* je: equal / zero */

loc_000792B6: ;
    edi = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000792C3u); RECOMP_ABI_CALL(0x000195B0u, sub_000195B0); /* call 0x000195B0 */

loc_000792C3: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebx;

loc_000792C9: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x18), 0x40000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007933D; /* je: equal / zero */

loc_000792D3: ;
    eax = MEM32(ebx);
    ecx = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00079311; /* je: equal / zero */

loc_000792EA: ;
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x27) = LO8(eax);
    MEM8(esp + 0x24) = LO8(ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(eax);
    eax = MEM32(esp + 0x24);

loc_00079311: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0007933D; /* je: equal / zero */

loc_00079319: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007933D; /* je: equal / zero */

loc_0007931E: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(ecx + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0x86080);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00079336u); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_00079336: ;
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007933D: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000793AE; /* je: equal / zero */

loc_00079344: ;
    eax = MEM32(ebx);
    ecx = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00079382; /* je: equal / zero */

loc_0007935B: ;
    edx = eax;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x27) = LO8(eax);
    MEM8(esp + 0x24) = LO8(edx);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x24);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(ecx);
    MEM8(esp + 0x26) = LO8(eax);
    eax = MEM32(esp + 0x24);

loc_00079382: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000793AE; /* je: equal / zero */

loc_0007938A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000793AE; /* je: equal / zero */

loc_0007938F: ;
    edx = MEM32(esp + 0x14);
    edi = MEM32(edx + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0x9ECF0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000793A7u); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_000793A7: ;
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000793AE: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00079839; /* je: equal / zero */

loc_000793B9: ;
    eax = MEM32(0x64CF80);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000793CA; /* jne: not equal / not zero */

loc_000793C5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000793CAu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000793CA: ;
    edx = 0x58;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000793D6u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000793D6: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 8) = eax;
    edx = MEM32(esi + 0x18);
    edi = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x16;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebx);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079426; /* je: equal / zero */

loc_000793FD: ;
    edx = MEM32(esp + 0x24);
    SET_LO8(ecx, MEM8(esp + 0x24));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_00079426: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x24);
    MEM32(edx) = ecx;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00079462; /* je: equal / zero */

loc_0007943F: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_00079462: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007949F; /* je: equal / zero */

loc_0007947C: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_0007949F: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 8) = ecx;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000794E6; /* je: equal / zero */

loc_000794BD: ;
    edx = MEM32(esp + 0x24);
    SET_LO8(ecx, MEM8(esp + 0x24));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_000794E6: ;
    ecx = MEM32(esi + 0x18);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    edx = MEM32(ecx + 8);
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00079535; /* je: equal / zero */

loc_0007950C: ;
    ecx = MEM32(esp + 0x24);
    SET_LO8(eax, MEM8(esp + 0x24));
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x27) = LO8(eax);
    MEM8(esp + 0x24) = LO8(ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(eax);

loc_00079535: ;
    ebx = MEM32(esp + 0x14);
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x18);
    esi = MEM32(edx + 8);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007955Eu); RECOMP_ABI_CALL(0x000C1390u, sub_000C1390); /* call 0x000C1390 */

loc_0007955E: ;
    eax = MEM32(ebx + 0x18);
    esi = MEM32(eax + 8);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007956Eu); RECOMP_ABI_CALL(0x000C1390u, sub_000C1390); /* call 0x000C1390 */

loc_0007956E: ;
    ebx = MEM32(esp + 0x18);
    ecx = MEM32(ebx);
    eax = MEM32(0x64D398);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000795AC; /* je: equal / zero */

loc_00079587: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x27) = LO8(eax);
    MEM8(esp + 0x24) = LO8(edx);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x24);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(ecx);
    MEM8(esp + 0x26) = LO8(eax);

loc_000795AC: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax + 0x18);
    ecx = MEM32(edx + 8);
    edx = MEM32(esp + 0x24);
    esi = MEM32(0x64D398);
    MEM32(ecx + 0x2C) = edx;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000795F3; /* je: equal / zero */

loc_000795D0: ;
    edx = ecx;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_000795F3: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 0x30) = ecx;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00079630; /* je: equal / zero */

loc_0007960D: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_00079630: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 0x34) = ecx;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007966D; /* je: equal / zero */

loc_0007964A: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_0007966D: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 0x38) = ecx;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000796AA; /* je: equal / zero */

loc_00079687: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_000796AA: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 0x3C) = ecx;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000796E7; /* je: equal / zero */

loc_000796C4: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_000796E7: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 0x40) = ecx;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00079724; /* je: equal / zero */

loc_00079701: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_00079724: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 0x44) = ecx;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00079761; /* je: equal / zero */

loc_0007973E: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_00079761: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 0x48) = ecx;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007979E; /* je: equal / zero */

loc_0007977B: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_0007979E: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 0x4C) = ecx;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000797DB; /* je: equal / zero */

loc_000797B8: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_000797DB: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 0x50) = ecx;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007981C; /* je: equal / zero */

loc_000797F9: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x24) = LO8(edx);
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);

loc_0007981C: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x14);
    MEM32(edx + 0x54) = ecx;
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 0x50);
    MEM32(eax + 0x4C) = ecx;

loc_00079839: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007985D; /* je: equal / zero */

loc_00079841: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00079851u); RECOMP_ABI_CALL(0x00014AB0u, sub_00014AB0); /* call 0x00014AB0 */

loc_00079851: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebx;

loc_0007985D: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000798A0; /* je: equal / zero */

loc_00079864: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00079872; /* jne: not equal / not zero */

loc_0007986D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00079872u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00079872: ;
    edx = 0xC;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007987Eu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0007987E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079889; /* je: equal / zero */

loc_00079882: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00079887u); RECOMP_ABI_CALL(0x0005E200u, sub_0005E200); /* call 0x0005E200 */

loc_00079887: ;
    goto loc_0007988B;

loc_00079889: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0007988B: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(ecx + 0x40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00079898u); RECOMP_ABI_CALL(0x0005E310u, sub_0005E310); /* call 0x0005E310 */

loc_00079898: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebx;
    goto loc_000798E3;

loc_000798A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000798D9; /* je: equal / zero */

loc_000798A4: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000798B2; /* jne: not equal / not zero */

loc_000798AD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000798B2u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000798B2: ;
    edx = 0x14;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000798BEu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000798BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000798CF; /* je: equal / zero */

loc_000798C2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000798C7u); RECOMP_ABI_CALL(0x0005E380u, sub_0005E380); /* call 0x0005E380 */

loc_000798C7: ;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x40) = eax;
    goto loc_000798E3;

loc_000798CF: ;
    edx = MEM32(esi + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x40) = eax;
    goto loc_000798E3;

loc_000798D9: ;
    eax = MEM32(esi + 0x18);
    MEM32(eax + 0x40) = 0;

loc_000798E3: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00079958; /* je: equal / zero */

loc_000798EC: ;
    eax = MEM32(ebx);
    ecx = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007992A; /* je: equal / zero */

loc_00079903: ;
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x27) = LO8(eax);
    MEM8(esp + 0x24) = LO8(ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(eax);
    eax = MEM32(esp + 0x24);

loc_0007992A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00079958; /* je: equal / zero */

loc_00079932: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079958; /* je: equal / zero */

loc_00079937: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x18);
    edi = MEM32(edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x82C60);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00079951u); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_00079951: ;
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00079958: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000799DF; /* je: equal / zero */

loc_00079965: ;
    eax = MEM32(ebx);
    ecx = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000799A3; /* je: equal / zero */

loc_0007997C: ;
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x27) = LO8(eax);
    MEM8(esp + 0x24) = LO8(ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x24);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(eax);
    eax = MEM32(esp + 0x24);

loc_000799A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000799DF; /* je: equal / zero */

loc_000799AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000799DF; /* je: equal / zero */

loc_000799B0: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x18);
    edi = MEM32(edx);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x82340);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000799CAu); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_000799CA: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    esi = eax;

loc_000799DF: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000799F3; /* jae: above or equal (unsigned >=) */

loc_000799E6: ;
    edx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000799EFu); RECOMP_ABI_CALL(0x00077E50u, sub_00077E50); /* call 0x00077E50 */

loc_000799EF: ;
    ebx = MEM32(esp + 0x10);

loc_000799F3: ;
    ecx = MEM32(0x64D33C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x64D3A4);
    if (CMP_EQ(_fa, _fb)) goto loc_00079A07; /* je: equal / zero */

loc_00079A02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079A0E; /* je: equal / zero */

loc_00079A07: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebx;

loc_00079A0E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079A17; /* je: equal / zero */

loc_00079A12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079A1E; /* je: equal / zero */

loc_00079A17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebx;

loc_00079A1E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079A27; /* je: equal / zero */

loc_00079A22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079A2E; /* je: equal / zero */

loc_00079A27: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebx;

loc_00079A2E: ;
    PUSH32(esp, 2);
    edx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00079A39u); RECOMP_ABI_CALL(0x00015080u, sub_00015080); /* call 0x00015080 */

loc_00079A39: ;
    PUSH32(esp, 2);
    edx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00079A44u); RECOMP_ABI_CALL(0x00015080u, sub_00015080); /* call 0x00015080 */

loc_00079A44: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00079A7F; /* jb: below (unsigned <) */

loc_00079A50: ;
    PUSH32(esp, 2);
    edx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00079A5Bu); RECOMP_ABI_CALL(0x00015080u, sub_00015080); /* call 0x00015080 */

loc_00079A5B: ;
    PUSH32(esp, 2);
    edx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00079A66u); RECOMP_ABI_CALL(0x00015080u, sub_00015080); /* call 0x00015080 */

loc_00079A66: ;
    PUSH32(esp, 2);
    edx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00079A71u); RECOMP_ABI_CALL(0x00015080u, sub_00015080); /* call 0x00015080 */

loc_00079A71: ;
    PUSH32(esp, 2);
    edx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00079A7Cu); RECOMP_ABI_CALL(0x00015080u, sub_00015080); /* call 0x00015080 */

loc_00079A7C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00079A7F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00079A90
 * Original: 0x00079A90 - 0x00079BA7 (279 bytes, 91 insns)
 * Folder: objects (between: 0x00078620 and 0x00079C60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00079A90: ;
    eax = MEM32(0x64CF80);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00079AA1; /* jne: not equal / not zero */

loc_00079A9C: ;
    PUSH32(esp, 0x00079AA1u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00079AA1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = 0x1C;
    ecx = eax;
    PUSH32(esp, 0x00079AAFu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00079AAF: ;
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    PUSH32(esp, 1);
    edx = esp + 0x10;
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00079ADAu); RECOMP_ABI_CALL(0x000BFDB0u, sub_000BFDB0); /* call 0x000BFDB0 */

loc_00079ADA: ;
    ebp = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x3DCCCCCD);
    ecx = ebx;
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0x00079AF0u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_00079AF0: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00079B9F; /* jae: above or equal (unsigned >=) */

loc_00079B01: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00079B03: ;
    edx = MEM32(ebx + 4);
    MEM32(edx) = 0;
    eax = MEM32(ebx + 4);
    MEM32(eax + 4) = 0;
    edx = MEM32(ebx + 4);
    esi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    MEM32(ebx + 0xC) = esi;
    MEM32(ebx + 4) = edx;
    ecx = MEM32(ebp);
    edi = eax + -8;
    eax = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00079B63; /* je: equal / zero */

loc_00079B3E: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x13) = LO8(eax);
    MEM8(esp + 0x10) = LO8(edx);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x10);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(ecx);
    MEM8(esp + 0x12) = LO8(eax);

loc_00079B63: ;
    eax = MEM32(0x64D33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079B75; /* je: equal / zero */

loc_00079B6C: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079B78; /* je: equal / zero */

loc_00079B75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00079B78: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x78620);
    PUSH32(esp, 0x00079B88u); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_00079B88: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00079B03; /* jb: below (unsigned <) */

loc_00079B9D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00079B9F: ;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00079BB0
 * Original: 0x00079BB0 - 0x00079BFF (79 bytes, 33 insns)
 * Folder: objects (between: 0x00078620 and 0x00079C60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00079BB0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079BFD; /* je: equal / zero */

loc_00079BB7: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079BCF; /* je: equal / zero */

loc_00079BBF: ;
    PUSH32(esp, 0x00079BC4u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00079BC4: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00079BCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00079BCCu); } /* indirect call */
    }

loc_00079BCF: ;
    eax = esi;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi) = ebx;
    PUSH32(esp, 0x00079BE4u); RECOMP_ABI_CALL(0x000BF5F0u, sub_000BF5F0); /* call 0x000BF5F0 */

loc_00079BE4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00079BEAu); RECOMP_ABI_CALL(0x000BDB60u, sub_000BDB60); /* call 0x000BDB60 */

loc_00079BEA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    PUSH32(esp, 0x00079BF4u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00079BF4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00079BFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00079BF9u); } /* indirect call */
    }

loc_00079BFC: ;
    POP32(esp, edi);

loc_00079BFD: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00079C00
 * Original: 0x00079C00 - 0x00079C5B (91 bytes, 36 insns)
 * Folder: objects (between: 0x00078620 and 0x00079C60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00079C00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi);
    PUSH32(esp, 0x00079C0Du); RECOMP_ABI_CALL(0x00079BB0u, sub_00079BB0); /* call 0x00079BB0 */

loc_00079C0D: ;
    PUSH32(esp, 0x00079C12u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00079C12: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00079C1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00079C17u); } /* indirect call */
    }

loc_00079C1A: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ebx = 0x47EC20;
    eax = edi;
    PUSH32(esp, 0x00079C2Bu); RECOMP_ABI_CALL(0x000C1120u, sub_000C1120); /* call 0x000C1120 */

loc_00079C2B: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00079C56; /* je: equal / zero */

loc_00079C36: ;
    edx = eax;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebx = ZX8(LO8(edx));
    ecx = esp + 0xC;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x47EC30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00079C53u); RECOMP_ABI_CALL(0x000C1120u, sub_000C1120); /* call 0x000C1120 */

loc_00079C53: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00079C56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00079C60
 * Original: 0x00079C60 - 0x00079D48 (232 bytes, 67 insns)
 * Folder: objects (source: Rope2D.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00079C60(void)
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

loc_00079C60: ;
    PUSH32(esp, ecx);
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x14); /* divss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x20); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00079CE4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0xC)) */

loc_00079C8F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00079CC1; /* jp: parity */

loc_00079C9D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3239C4);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x32398C);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x00079CB5u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_00079CB5: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00079CC1: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    xmm1.f[0] = xmm1.f[0] / MEMF(esi + 0x18); /* divss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0xC); /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    goto loc_00079CEC;

loc_00079CE4: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */

loc_00079CEC: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00079D10; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00079D04: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi); /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00079D21; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_00079D10: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00079D36; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00079D15: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00079D36; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00079D21: ;
    eax = 1;
    MEM32(esi + 8) = eax;
    eax = MEM32(esi);
    MEM32(esi + 4) = eax;
    MEMF(esi) = xmm1.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00079D36: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    eax = MEM32(esi);
    MEM32(esi + 4) = eax;
    MEMF(esi) = xmm1.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
