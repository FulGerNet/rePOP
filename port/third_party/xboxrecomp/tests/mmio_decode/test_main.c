/*
 * mmio_decode - does the trapped-MMIO instruction decoder service what the
 * XDK's device code emits, and refuse what it does not understand.
 *
 * This is testable without a device or a fault because the decoder only ever
 * reads instruction bytes at ctx->Rip and edits a CONTEXT. Point Rip at a
 * buffer of hand-encoded instructions and the whole thing is a pure function.
 *
 * The cases that matter are the ones where being wrong is silent: an
 * instruction length that leaves Rip mid-instruction, a 32-bit read that does
 * not clear the high half of the destination, flags that send a poll loop the
 * wrong way, and an unrecognised opcode reported as handled -- which steps
 * over an instruction nobody decoded and corrupts the guest with no message.
 */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <windows.h>

#include "mmio_decode.h"

static int failures;
#define CHECK(name, cond) \
    do { if (cond) {} else { printf("FAIL: %s\n", name); failures++; } } while (0)
#define CHECK_U64(name, got, want) \
    do { uint64_t g_=(uint64_t)(got), w_=(uint64_t)(want); \
         if (g_ == w_) {} else { \
            printf("FAIL: %s (got 0x%llX, want 0x%llX)\n", name, \
                   (unsigned long long)g_, (unsigned long long)w_); \
            failures++; } } while (0)

/* A device that just records what it was asked for. */
static struct {
    uint32_t off; uint64_t val; int size; int reads, writes;
    uint64_t next_read;
} dev;

static uint64_t t_read(void *d, uint32_t off, int size)
{
    (void)d; dev.off = off; dev.size = size; dev.reads++;
    return dev.next_read;
}
static void t_write(void *d, uint32_t off, uint64_t v, int size)
{
    (void)d; dev.off = off; dev.val = v; dev.size = size; dev.writes++;
}

/* Run one instruction. Returns what mmio_emulate returned; `code` is the
 * encoding, and Rip is expected to land exactly past it. */
static int run(const uint8_t *code, size_t len, CONTEXT *ctx)
{
    int r;
    memset(&dev, 0, sizeof dev);
    dev.next_read = 0;
    ctx->Rip = (DWORD64)(uintptr_t)code;
    r = mmio_emulate(ctx, 0x54, NULL, t_read, t_write);
    if (r) {
        uint64_t advanced = ctx->Rip - (DWORD64)(uintptr_t)code;
        if (advanced != len) {
            printf("FAIL: Rip advanced %llu, instruction is %llu bytes\n",
                   (unsigned long long)advanced, (unsigned long long)len);
            failures++;
        }
    }
    return r;
}

int main(void)
{
    CONTEXT ctx;
    printf("mmio_decode: running\n");
    memset(&ctx, 0, sizeof ctx);

    /* mov [rax], ecx  -- 89 08 */
    { const uint8_t c[] = { 0x89, 0x08 };
      ctx.Rcx = 0xDEADBEEF;
      CHECK("mov r/m,r handled", run(c, sizeof c, &ctx));
      CHECK_U64("mov r/m,r value", dev.val, 0xDEADBEEF);
      CHECK_U64("mov r/m,r size",  dev.size, 4);
      CHECK_U64("mov r/m,r offset", dev.off, 0x54); }

    /* mov [rax], cl   -- 88 08, byte sized */
    { const uint8_t c[] = { 0x88, 0x08 };
      ctx.Rcx = 0xAA;
      CHECK("mov r/m8,r8 handled", run(c, sizeof c, &ctx));
      CHECK_U64("mov r/m8 size", dev.size, 1); }

    /* mov ecx, [rax]  -- 8B 08. A 32-bit read must clear the high half; if it
     * does not, a register holding a stale 64-bit value reads back wrong. */
    { const uint8_t c[] = { 0x8B, 0x08 };
      ctx.Rcx = 0xFFFFFFFFFFFFFFFFULL;
      memset(&dev, 0, sizeof dev);
      ctx.Rip = (DWORD64)(uintptr_t)c;
      dev.next_read = 0x12345678;
      CHECK("mov r,r/m handled", mmio_emulate(&ctx, 0x54, NULL, t_read, t_write));
      CHECK_U64("32-bit read clears high half", ctx.Rcx, 0x12345678ULL); }

    /* mov dword [rax], imm32 -- C7 00 EF BE AD DE */
    { const uint8_t c[] = { 0xC7, 0x00, 0xEF, 0xBE, 0xAD, 0xDE };
      CHECK("mov r/m,imm32 handled", run(c, sizeof c, &ctx));
      CHECK_U64("imm32 value", dev.val, 0xDEADBEEF); }

    /* movzx eax, byte [rax] -- 0F B6 00 */
    { const uint8_t c[] = { 0x0F, 0xB6, 0x00 };
      memset(&dev, 0, sizeof dev);
      ctx.Rip = (DWORD64)(uintptr_t)c;
      ctx.Rax = 0xFFFFFFFFFFFFFFFFULL;
      dev.next_read = 0x00000091;
      CHECK("movzx r32,r/m8 handled",
            mmio_emulate(&ctx, 0x54, NULL, t_read, t_write));
      CHECK_U64("movzx zero-extends", ctx.Rax, 0x91ULL); }

    /* test [rax], ecx -- 85 08. The whole point is the flags: a poll loop
     * spins on jz/jnz off this. */
    { const uint8_t c[] = { 0x85, 0x08 };
      memset(&dev, 0, sizeof dev);
      ctx.Rip = (DWORD64)(uintptr_t)c;
      ctx.Rcx = 0x00000001; ctx.EFlags = 0;
      dev.next_read = 0x00000001;
      mmio_emulate(&ctx, 0x54, NULL, t_read, t_write);
      CHECK("test bit set -> ZF clear", (ctx.EFlags & 0x40) == 0);

      memset(&dev, 0, sizeof dev);
      ctx.Rip = (DWORD64)(uintptr_t)c;
      dev.next_read = 0x00000002;
      mmio_emulate(&ctx, 0x54, NULL, t_read, t_write);
      CHECK("test bit clear -> ZF set", (ctx.EFlags & 0x40) != 0); }

    /* cmp [rax], ecx -- 39 08. Equal sets ZF; below sets CF. */
    { const uint8_t c[] = { 0x39, 0x08 };
      memset(&dev, 0, sizeof dev);
      ctx.Rip = (DWORD64)(uintptr_t)c;
      ctx.Rcx = 0x10; dev.next_read = 0x10; ctx.EFlags = 0;
      mmio_emulate(&ctx, 0x54, NULL, t_read, t_write);
      CHECK("cmp equal -> ZF", (ctx.EFlags & 0x40) != 0);
      CHECK("cmp equal -> no CF", (ctx.EFlags & 0x01) == 0);

      memset(&dev, 0, sizeof dev);
      ctx.Rip = (DWORD64)(uintptr_t)c;
      ctx.Rcx = 0x20; dev.next_read = 0x10;
      mmio_emulate(&ctx, 0x54, NULL, t_read, t_write);
      CHECK("cmp below -> CF", (ctx.EFlags & 0x01) != 0); }

    /* or [rax], ecx -- 09 08, and and [rax], ecx -- 21 08. Both are
     * read-modify-write: a device that only sees the write loses the bits it
     * already had. */
    { const uint8_t c[] = { 0x09, 0x08 };
      memset(&dev, 0, sizeof dev);
      ctx.Rip = (DWORD64)(uintptr_t)c;
      ctx.Rcx = 0x0F; dev.next_read = 0xF0;
      mmio_emulate(&ctx, 0x54, NULL, t_read, t_write);
      CHECK_U64("or merges existing bits", dev.val, 0xFF);
      CHECK("or reads before writing", dev.reads == 1 && dev.writes == 1); }

    { const uint8_t c[] = { 0x21, 0x08 };
      memset(&dev, 0, sizeof dev);
      ctx.Rip = (DWORD64)(uintptr_t)c;
      ctx.Rcx = 0x0F; dev.next_read = 0xFF;
      mmio_emulate(&ctx, 0x54, NULL, t_read, t_write);
      CHECK_U64("and masks existing bits", dev.val, 0x0F); }

    /* 66 prefix selects 16-bit, REX.W selects 64-bit. */
    { const uint8_t c[] = { 0x66, 0x89, 0x08 };
      ctx.Rcx = 0x1234;
      CHECK("66-prefixed handled", run(c, sizeof c, &ctx));
      CHECK_U64("66 prefix -> 2 bytes", dev.size, 2); }

    { const uint8_t c[] = { 0x48, 0x89, 0x08 };
      CHECK("REX.W handled", run(c, sizeof c, &ctx));
      CHECK_U64("REX.W -> 8 bytes", dev.size, 8); }

    /* disp8 and disp32 forms have to add to the length, or Rip lands inside
     * the instruction and the next decode is garbage.
     * mov [rax+0x10], ecx -- 89 48 10        (mod=01, disp8)
     * mov [rax+0x1000], ecx -- 89 88 00 10 00 00  (mod=10, disp32) */
    { const uint8_t c1[] = { 0x89, 0x48, 0x10 };
      CHECK("disp8 handled", run(c1, sizeof c1, &ctx)); }
    { const uint8_t c2[] = { 0x89, 0x88, 0x00, 0x10, 0x00, 0x00 };
      CHECK("disp32 handled", run(c2, sizeof c2, &ctx)); }
    /* SIB: mov [rax+rbx*1], ecx -- 89 0C 18 */
    { const uint8_t c3[] = { 0x89, 0x0C, 0x18 };
      CHECK("SIB handled", run(c3, sizeof c3, &ctx)); }

    /* And the one that must fail. An unknown opcode reported as handled steps
     * over an instruction nobody decoded. */
    { const uint8_t c[] = { 0xF7, 0x00, 0x01, 0x00, 0x00, 0x00 };  /* test imm32 */
      memset(&dev, 0, sizeof dev);
      ctx.Rip = (DWORD64)(uintptr_t)c;
      CHECK("unknown opcode refused",
            mmio_emulate(&ctx, 0x54, NULL, t_read, t_write) == 0);
      CHECK("refused leaves Rip alone", ctx.Rip == (DWORD64)(uintptr_t)c); }

    if (failures == 0) {
        printf("mmio_decode: ALL PASS\n");
        return 0;
    }
    printf("mmio_decode: %d FAILURE(S)\n", failures);
    return 1;
}
