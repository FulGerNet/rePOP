/**
 * PoP Warrior Within Xbox retail - files, chunk 0
 * BIG file archive and disk access (Jade SDK BIGfiles, Base disk)
 * Functions: 1 (0x000BCAF0 - 0x000BCAF0)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_000BCAF0
 * Original: 0x000BCAF0 - 0x000BCBB3 (195 bytes, 58 insns)
 * Folder: files (source: file_native.cpp)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BCAF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48D7D8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x000BCB1Du); RECOMP_ABI_CALL(0x003D108Du, sub_003D108D); /* call 0x003D108D */

loc_000BCB1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCB9F; /* jne: not equal / not zero */

loc_000BCB26: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5E1F04);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCB3A; /* jne: not equal / not zero */

loc_000BCB33: ;
    PUSH32(esp, 0x000BCB38u); RECOMP_ABI_CALL(0x000B8A60u, sub_000B8A60); /* call 0x000B8A60 */

loc_000BCB38: ;
    esi = eax;

loc_000BCB3A: ;
    ebp = esi + 0x2E04;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = ebp;
    { uint32_t _icall_target = MEM32(0x54B328); PUSH32(esp, 0x000BCB4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCB45u); } /* indirect call */
    }

loc_000BCB4B: ;
    PUSH32(esp, 0x24C);
    PUSH32(esp, 0x581B10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x581AF0);
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x000BCB68u); RECOMP_ABI_CALL(0x000B8C70u, sub_000B8C70); /* call 0x000B8C70 */

loc_000BCB68: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x95329C);
    ebx = eax;
    ecx = 2;
    edi = esi;
    PUSH32(esp, 0x000BCB7Eu); RECOMP_ABI_CALL(0x000B8CB0u, sub_000B8CB0); /* call 0x000B8CB0 */

loc_000BCB7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCB84; /* jne: not equal / not zero */

loc_000BCB83: ;
    /* int3: debug-trap slide byte, stepped over */

loc_000BCB84: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(0x54B324); PUSH32(esp, 0x000BCB93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCB8Du); } /* indirect call */
    }

loc_000BCB93: ;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, 0x000BCB9Cu); RECOMP_ABI_CALL(0x000BC700u, sub_000BC700); /* call 0x000BC700 */

loc_000BCB9C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000BCB9F: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}
