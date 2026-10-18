/* SHA-256 for the Android host (sha256.h). */
#include "sha256.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const uint32_t K[64] = {
    0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
    0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
    0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
    0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
    0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
    0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
    0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
    0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2
};

#define ROR(x, n) (((x) >> (n)) | ((x) << (32 - (n))))

static void transform(uint32_t s[8], const uint8_t b[64])
{
    uint32_t w[64], a, bb, c, d, e, f, g, h, t1, t2;
    int i;
    for (i = 0; i < 16; i++)
        w[i] = (uint32_t)b[i * 4] << 24 | (uint32_t)b[i * 4 + 1] << 16
             | (uint32_t)b[i * 4 + 2] << 8 | (uint32_t)b[i * 4 + 3];
    for (i = 16; i < 64; i++) {
        uint32_t s0 = ROR(w[i - 15], 7) ^ ROR(w[i - 15], 18) ^ (w[i - 15] >> 3);
        uint32_t s1 = ROR(w[i - 2], 17) ^ ROR(w[i - 2], 19) ^ (w[i - 2] >> 10);
        w[i] = w[i - 16] + s0 + w[i - 7] + s1;
    }
    a = s[0]; bb = s[1]; c = s[2]; d = s[3]; e = s[4]; f = s[5]; g = s[6]; h = s[7];
    for (i = 0; i < 64; i++) {
        t1 = h + (ROR(e, 6) ^ ROR(e, 11) ^ ROR(e, 25)) + ((e & f) ^ (~e & g)) + K[i] + w[i];
        t2 = (ROR(a, 2) ^ ROR(a, 13) ^ ROR(a, 22)) + ((a & bb) ^ (a & c) ^ (bb & c));
        h = g; g = f; f = e; e = d + t1; d = c; c = bb; bb = a; a = t1 + t2;
    }
    s[0] += a; s[1] += bb; s[2] += c; s[3] += d; s[4] += e; s[5] += f; s[6] += g; s[7] += h;
}

void resot_sha256_init(ResotSha256 *c)
{
    static const uint32_t iv[8] = {
        0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a, 0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19
    };
    memcpy(c->state, iv, sizeof iv);
    c->bytes = 0;
    c->used = 0;
}

void resot_sha256_update(ResotSha256 *c, const void *data, size_t size)
{
    const uint8_t *p = (const uint8_t *)data;
    c->bytes += size;
    while (size) {
        size_t take = 64 - c->used;
        if (take > size) take = size;
        memcpy(c->block + c->used, p, take);
        c->used += take; p += take; size -= take;
        if (c->used == 64) {
            transform(c->state, c->block);
            c->used = 0;
        }
    }
}

void resot_sha256_hex(ResotSha256 *c, char hex[65])
{
    static const char digits[] = "0123456789ABCDEF";
    uint64_t bits = c->bytes * 8;
    uint8_t pad = 0x80, len[8];
    int i;
    resot_sha256_update(c, &pad, 1);
    pad = 0;
    while (c->used != 56)
        resot_sha256_update(c, &pad, 1);
    for (i = 0; i < 8; i++) len[i] = (uint8_t)(bits >> (56 - 8 * i));
    resot_sha256_update(c, len, 8);
    for (i = 0; i < 32; i++) {
        uint8_t v = (uint8_t)(c->state[i / 4] >> (24 - 8 * (i % 4)));
        hex[i * 2] = digits[v >> 4];
        hex[i * 2 + 1] = digits[v & 15];
    }
    hex[64] = 0;
}

int resot_sha256_file(const char *path, char hex[65])
{
    ResotSha256 c;
    FILE *f = fopen(path, "rb");
    unsigned char *buffer;
    size_t got;
    if (!f) return 0;
    buffer = (unsigned char *)malloc(1 << 20);
    if (!buffer) { fclose(f); return 0; }
    resot_sha256_init(&c);
    while ((got = fread(buffer, 1, 1 << 20, f)) > 0)
        resot_sha256_update(&c, buffer, got);
    free(buffer);
    if (ferror(f)) { fclose(f); return 0; }
    fclose(f);
    resot_sha256_hex(&c, hex);
    return 1;
}
