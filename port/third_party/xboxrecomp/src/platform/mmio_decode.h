/*
 * mmio_decode.h -- one x86-64 instruction decoder for trapped MMIO.
 *
 * A device whose registers need semantics cannot be plain memory: the reads
 * have to be answered and the writes have to be seen. The way that works here
 * is to leave the page PAGE_NOACCESS, catch the access in a vectored handler,
 * decode the faulting instruction, service it against the device model, and
 * step over it.
 *
 * That decoder existed twice before this file -- once in nv2a_mmio_hook.c and
 * once in apu_mmio_hook.c -- as the same opcode table written out against two
 * different pairs of accessors. This is the same logic with the accessors
 * passed in, so a third device does not need a third copy. The two originals
 * still carry their own and can move onto this whenever they are next touched.
 *
 * Header-only and static inline: one function, one caller per device, and a
 * library for it would be more build wiring than code.
 *
 * The instructions covered are what the XDK device code actually emits against
 * registers -- moves both ways, the immediate forms, the zero-extending loads,
 * and the read-modify-write and flag-setting forms a poll loop is built from.
 * Anything outside that set returns 0 rather than guessing: stepping over an
 * instruction that was not understood corrupts the guest silently, which is
 * far worse than a fault naming the opcode.
 */
#ifndef MMIO_DECODE_H
#define MMIO_DECODE_H

#include <stdint.h>

#if defined(_WIN32)
#include <windows.h>

/* Service one register access. dev is passed straight back to the callbacks. */
typedef uint64_t (*mmio_read_fn)(void *dev, uint32_t off, int size);
typedef void     (*mmio_write_fn)(void *dev, uint32_t off, uint64_t val, int size);

static inline uint64_t *mmio_ctx_reg(PCONTEXT c, int reg)
{
    switch (reg & 0xF) {
    case 0:  return (uint64_t *)&c->Rax;   case 1:  return (uint64_t *)&c->Rcx;
    case 2:  return (uint64_t *)&c->Rdx;   case 3:  return (uint64_t *)&c->Rbx;
    case 4:  return (uint64_t *)&c->Rsp;   case 5:  return (uint64_t *)&c->Rbp;
    case 6:  return (uint64_t *)&c->Rsi;   case 7:  return (uint64_t *)&c->Rdi;
    case 8:  return (uint64_t *)&c->R8;    case 9:  return (uint64_t *)&c->R9;
    case 10: return (uint64_t *)&c->R10;   case 11: return (uint64_t *)&c->R11;
    case 12: return (uint64_t *)&c->R12;   case 13: return (uint64_t *)&c->R13;
    case 14: return (uint64_t *)&c->R14;   case 15: return (uint64_t *)&c->R15;
    default: return NULL;
    }
}

static inline int mmio_modrm_len(const uint8_t *ip, int rex_b)
{
    uint8_t modrm = *ip;
    int mod = (modrm >> 6) & 3;
    int rm  = (modrm & 7) | (rex_b ? 8 : 0);
    int len = 1;

    if (mod == 3) return 1;
    if ((rm & 7) == 4) len += 1;                    /* SIB    */
    if (mod == 0 && (rm & 7) == 5) len += 4;        /* disp32 */
    else if (mod == 1) len += 1;
    else if (mod == 2) len += 4;
    return len;
}

/* Flags after a compare-shaped operation, so a poll loop branches correctly.
 * ZF, SF and CF only: those are what jz/jnz, js and jb/jae read, and inventing
 * an overflow flag nothing here sets is worse than leaving it alone. */
static inline void mmio_set_flags(PCONTEXT ctx, uint64_t result, int size,
                                  int carry)
{
    ctx->EFlags &= ~(0x0001u | 0x0040u | 0x0080u | 0x0800u);
    if (size < 8)
        result &= (1ULL << (size * 8)) - 1;
    if (result == 0)
        ctx->EFlags |= 0x0040u;                                   /* ZF */
    if (result & (1ULL << (size * 8 - 1)))
        ctx->EFlags |= 0x0080u;                                   /* SF */
    if (carry)
        ctx->EFlags |= 0x0001u;                                   /* CF */
}

/* 1 if the instruction at ctx->Rip was serviced and Rip advanced past it. */
static inline int mmio_emulate(PCONTEXT ctx, uint32_t off, void *dev,
                               mmio_read_fn rd, mmio_write_fn wr)
{
    const uint8_t *ip = (const uint8_t *)ctx->Rip;
    int prefix = 0, has66 = 0, rex = 0, has_rex = 0;
    const uint8_t *op;
    int size, rex_w, rex_r, rex_b, mlen, reg;

    if (!rd || !wr)
        return 0;

    for (;;) {
        uint8_t b = ip[prefix];
        if (b == 0x66)                   { has66 = 1; prefix++; }
        else if (b == 0xF2 || b == 0xF3) { prefix++; }
        else if (b >= 0x40 && b <= 0x4F) { rex = b; has_rex = 1; prefix++; }
        else break;
    }
    rex_w = has_rex && (rex & 0x08);
    rex_r = has_rex && (rex & 0x04);
    rex_b = has_rex && (rex & 0x01);

    op   = ip + prefix;
    size = has66 ? 2 : (rex_w ? 8 : 4);

    switch (op[0]) {
    case 0x88: case 0x89:                            /* MOV r/m, r   (write) */
        if (op[0] == 0x88) size = 1;
        mlen = mmio_modrm_len(op + 1, rex_b);
        reg  = ((op[1] >> 3) & 7) | (rex_r ? 8 : 0);
        wr(dev, off, *mmio_ctx_reg(ctx, reg), size);
        ctx->Rip += prefix + 1 + mlen;
        return 1;

    case 0xC7:                                       /* MOV r/m, imm32       */
        mlen = mmio_modrm_len(op + 1, rex_b);
        wr(dev, off, *(const uint32_t *)(op + 1 + mlen), size);
        ctx->Rip += prefix + 1 + mlen + 4;
        return 1;

    case 0xC6:                                       /* MOV r/m8, imm8       */
        mlen = mmio_modrm_len(op + 1, rex_b);
        wr(dev, off, op[1 + mlen], 1);
        ctx->Rip += prefix + 1 + mlen + 1;
        return 1;

    case 0x8A: case 0x8B: {                          /* MOV r, r/m   (read)  */
        uint64_t v, *dst;
        if (op[0] == 0x8A) size = 1;
        mlen = mmio_modrm_len(op + 1, rex_b);
        reg  = ((op[1] >> 3) & 7) | (rex_r ? 8 : 0);
        v    = rd(dev, off, size);
        dst  = mmio_ctx_reg(ctx, reg);
        if (size == 1)      *dst = (*dst & ~0xFFULL)   | (v & 0xFF);
        else if (size == 2) *dst = (*dst & ~0xFFFFULL) | (v & 0xFFFF);
        else if (size == 4) *dst = v & 0xFFFFFFFFULL;  /* 32-bit clears high */
        else                *dst = v;
        ctx->Rip += prefix + 1 + mlen;
        return 1;
    }

    case 0x84: case 0x85: {                          /* TEST r/m, r          */
        uint64_t m, r;
        if (op[0] == 0x84) size = 1;
        mlen = mmio_modrm_len(op + 1, rex_b);
        reg  = ((op[1] >> 3) & 7) | (rex_r ? 8 : 0);
        m    = rd(dev, off, size);
        r    = *mmio_ctx_reg(ctx, reg);
        mmio_set_flags(ctx, m & r, size, 0);
        ctx->Rip += prefix + 1 + mlen;
        return 1;
    }

    case 0x38: case 0x39: {                          /* CMP r/m, r           */
        uint64_t m, r, mask;
        if (op[0] == 0x38) size = 1;
        mlen = mmio_modrm_len(op + 1, rex_b);
        reg  = ((op[1] >> 3) & 7) | (rex_r ? 8 : 0);
        m    = rd(dev, off, size);
        r    = *mmio_ctx_reg(ctx, reg);
        mask = (size < 8) ? ((1ULL << (size * 8)) - 1) : ~0ULL;
        m &= mask; r &= mask;
        mmio_set_flags(ctx, m - r, size, m < r);
        ctx->Rip += prefix + 1 + mlen;
        return 1;
    }

    case 0x08: case 0x09:                            /* OR  r/m, r           */
        if (op[0] == 0x08) size = 1;
        mlen = mmio_modrm_len(op + 1, rex_b);
        reg  = ((op[1] >> 3) & 7) | (rex_r ? 8 : 0);
        wr(dev, off, rd(dev, off, size) | *mmio_ctx_reg(ctx, reg), size);
        ctx->Rip += prefix + 1 + mlen;
        return 1;

    case 0x20: case 0x21:                            /* AND r/m, r           */
        if (op[0] == 0x20) size = 1;
        mlen = mmio_modrm_len(op + 1, rex_b);
        reg  = ((op[1] >> 3) & 7) | (rex_r ? 8 : 0);
        wr(dev, off, rd(dev, off, size) & *mmio_ctx_reg(ctx, reg), size);
        ctx->Rip += prefix + 1 + mlen;
        return 1;

    case 0x0F:
        if (op[1] == 0xB6 || op[1] == 0xB7) {        /* MOVZX r32, r/m8|16   */
            int s = (op[1] == 0xB6) ? 1 : 2;
            mlen  = mmio_modrm_len(op + 2, rex_b);
            reg   = ((op[2] >> 3) & 7) | (rex_r ? 8 : 0);
            *mmio_ctx_reg(ctx, reg) = rd(dev, off, s) & ((1ULL << (s * 8)) - 1);
            ctx->Rip += prefix + 2 + mlen;
            return 1;
        }
        return 0;

    default:
        return 0;
    }
}

#elif defined(__aarch64__) && defined(__linux__)
/* RE-SoT: the same service for arm64 Linux/Android, where the trapped access
 * is a SIGSEGV whose ucontext holds the faulting AArch64 instruction. Clang
 * lowers the lifted MEM8/16/32 accesses (volatile, one per guest access) to
 * single LDR/STR forms: unsigned offset, unscaled, pre/post-index, register
 * offset, plus load-acquire/store-release and LDP/STP, which are decoded here.
 * A read-modify-write is a load and a store on this host, so each is its own
 * fault. Anything else returns 0, as above: stepping over an instruction that
 * was not understood would corrupt the guest silently. */
#include <signal.h>
#include <string.h>
#include <ucontext.h>

typedef uint64_t (*mmio_read_fn)(void *dev, uint32_t off, int size);
typedef void     (*mmio_write_fn)(void *dev, uint32_t off, uint64_t val, int size);

/* The FP/SIMD registers live in a tagged record after the general ones. */
static inline __uint128_t *mmio_a64_vreg(ucontext_t *uc, int n)
{
    unsigned char *p = (unsigned char *)uc->uc_mcontext.__reserved;
    unsigned char *end = p + sizeof uc->uc_mcontext.__reserved;
    while (p + 8 <= end) {
        uint32_t magic, size;
        memcpy(&magic, p, 4);
        memcpy(&size, p + 4, 4);
        if (!magic || size < 8) break;
        if (magic == 0x46508001u)                       /* FPSIMD_MAGIC */
            return (__uint128_t *)(p + 16) + n;         /* after fpsr, fpcr */
        p += size;
    }
    return NULL;
}

/* Rn: 31 is SP. Rt: 31 is the zero register. */
static inline uint64_t mmio_a64_base(ucontext_t *uc, int n)
{
    return n == 31 ? uc->uc_mcontext.sp : uc->uc_mcontext.regs[n];
}
static inline uint64_t mmio_a64_get(ucontext_t *uc, int t)
{
    return t == 31 ? 0 : uc->uc_mcontext.regs[t];
}
static inline void mmio_a64_set(ucontext_t *uc, int t, uint64_t v)
{
    if (t != 31) uc->uc_mcontext.regs[t] = v;
}
static inline void mmio_a64_set_base(ucontext_t *uc, int n, uint64_t v)
{
    if (n == 31) uc->uc_mcontext.sp = v;
    else uc->uc_mcontext.regs[n] = v;
}

static inline uint64_t mmio_a64_extend(uint64_t v, int bytes, int sign, int to64)
{
    if (bytes < 8) {
        uint64_t m = (1ULL << (bytes * 8)) - 1;
        v &= m;
        if (sign && (v >> (bytes * 8 - 1)) & 1) v |= ~m;
    }
    return to64 ? v : (v & 0xFFFFFFFFULL);
}

/* One integer or FP access of `bytes` at off. */
static inline int mmio_a64_access(ucontext_t *uc, uint32_t off, void *dev,
                                  mmio_read_fn rd, mmio_write_fn wr, int vector,
                                  int load, int bytes, int sign, int to64, int t)
{
    if (vector) {
        __uint128_t *v = mmio_a64_vreg(uc, t);
        if (!v || bytes > 8) return 0;   /* 128-bit MMIO: not decoded */
        if (load) {
            uint64_t x = rd(dev, off, bytes);
            *v = (__uint128_t)mmio_a64_extend(x, bytes, 0, 1);
        } else {
            wr(dev, off, (uint64_t)*v & (bytes == 8 ? ~0ULL : (1ULL << (bytes * 8)) - 1), bytes);
        }
        return 1;
    }
    if (load)
        mmio_a64_set(uc, t, mmio_a64_extend(rd(dev, off, bytes), bytes, sign, to64));
    else
        wr(dev, off, mmio_a64_get(uc, t) & (bytes == 8 ? ~0ULL : (1ULL << (bytes * 8)) - 1), bytes);
    return 1;
}

/* 1 if the instruction at pc was serviced and pc advanced past it. ctx is
 * the signal handler's ucontext_t; off is the register offset of the fault. */
static inline int mmio_emulate(void *ctx, uint32_t off, void *dev,
                               mmio_read_fn rd, mmio_write_fn wr)
{
    ucontext_t *uc = (ucontext_t *)ctx;
    uint32_t insn;
    int size, vector, opc, rt, rn, load, sign = 0, to64 = 0, bytes;

    if (!rd || !wr || !uc)
        return 0;
    memcpy(&insn, (const void *)(uintptr_t)uc->uc_mcontext.pc, 4);
    rt = insn & 31;
    rn = (insn >> 5) & 31;

    /* LDAR / STLR (load-acquire, store-release): size 001000 1 L 0 11111 1 11111 */
    if ((insn & 0x3FBFFC00u) == 0x089FFC00u) {
        bytes = 1 << (insn >> 30);
        load = (insn >> 22) & 1;
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        if (!mmio_a64_access(uc, off, dev, rd, wr, 0, load, bytes, 0, bytes == 8, rt))
            return 0;
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        uc->uc_mcontext.pc += 4;
        return 1;
    }

    /* LDP / STP: opc 101 V 0 idx L imm7 Rt2 Rn Rt (idx 01 post, 10 offset, 11 pre) */
    if ((insn & 0x3A000000u) == 0x28000000u && ((insn >> 23) & 3) != 0) {
        int idx = (insn >> 23) & 3, rt2 = (insn >> 10) & 31;
        int popc = insn >> 30, scale;
        int64_t imm = (int64_t)((int32_t)(insn << 10) >> 25);
        uint64_t base = mmio_a64_base(uc, rn), ea, fault;
        vector = (insn >> 26) & 1;
        load = (insn >> 22) & 1;
        if (vector) scale = 2 + popc;                    /* S, D, Q */
        else { scale = (popc & 2) ? 3 : 2; sign = popc == 1; }
        if (popc == 3 || (!vector && popc == 1 && !load)) return 0;   /* STGP */
        bytes = 1 << scale;
        imm <<= scale;
        ea = idx == 1 ? base : base + (uint64_t)imm;
        fault = (uint64_t)uc->uc_mcontext.fault_address;
        /* The fault is either element; name the first one's offset. */
        if (fault != ea && fault != ea + (uint64_t)bytes) return 0;
        off -= (uint32_t)(fault - ea);
        to64 = !vector && (popc & 2);
        if (load && sign) to64 = 1;                      /* LDPSW */
        if (!mmio_a64_access(uc, off, dev, rd, wr, vector, load, bytes, sign, to64, rt) ||
            !mmio_a64_access(uc, off + (uint32_t)bytes, dev, rd, wr, vector, load, bytes,
                             sign, to64, rt2))
            return 0;
        if (idx != 2) mmio_a64_set_base(uc, rn, base + (uint64_t)imm);
        uc->uc_mcontext.pc += 4;
        return 1;
    }

    /* Single register: size 111 V 0x opc ... */
    if ((insn & 0x3A000000u) != 0x38000000u)
        return 0;
    size = insn >> 30;
    vector = (insn >> 26) & 1;
    opc = (insn >> 22) & 3;
    {
        int writeback = 0;
        int64_t imm9 = 0;
        uint64_t base = 0;
        if ((insn & 0x3B000000u) == 0x39000000u) {
            /* unsigned immediate */
        } else if ((insn & 0x3B200000u) == 0x38000000u) {
            int idx = (insn >> 10) & 3;                  /* 00 unscaled, 01 post, 11 pre */
            if (idx == 2) return 0;                      /* unprivileged LDTR/STTR */
            if (idx != 0) {
                writeback = 1;
                imm9 = (int64_t)((int32_t)(insn << 11) >> 23);
                base = mmio_a64_base(uc, rn);
            }
        } else if ((insn & 0x3B200C00u) == 0x38200800u) {
            /* register offset: the fault address is the effective address */
        } else {
            return 0;
        }
        if (vector) {
            bytes = (opc & 2) ? 16 : 1 << size;
            load = opc & 1;
        } else {
            bytes = 1 << size;
            if (opc == 0) load = 0;
            else if (opc == 1) load = 1;
            else if (opc == 2) {
                if (size == 3) { uc->uc_mcontext.pc += 4; return 1; }   /* PRFM */
                load = 1; sign = 1; to64 = 1;
            } else { if (size >= 2) return 0; load = 1; sign = 1; }
            if (load && !sign) to64 = size == 3;
        }
        if (!mmio_a64_access(uc, off, dev, rd, wr, vector, load, bytes, sign, to64, rt))
            return 0;
        if (writeback)
            mmio_a64_set_base(uc, rn, base + (uint64_t)imm9);
    }
    uc->uc_mcontext.pc += 4;
    return 1;
}

#endif /* _WIN32 / arm64 Linux */
#endif /* MMIO_DECODE_H */
