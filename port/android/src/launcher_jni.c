/**
 * reSOT - the Android launcher's native half (libresot_launcher.so).
 *
 *   identify(dir)   what a folder holds: the demo or the retail game, told
 *                   apart by default.xbe's SHA-256 (target.h of both targets)
 *                   or, without default.xbe, by the files only one of them
 *                   has; the rules of port/windows/src/launcher.c detect_game
 *
 * The disc itself is read in Java (XisoExtractor.java): Android does not let
 * extract-xiso reopen the picked document through /proc/self/fd.
 */
#include <jni.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "host_files.h"
#include "sha256.h"

#if !defined(RESOT_DEMO_XBE_SHA256) || !defined(RESOT_RETAIL_XBE_SHA256)
#error "CMakeLists.txt passes both targets' XBE hashes (source/<target>/target.h)"
#endif

static int path_kind(const char *dir, const char *name)
{
    return resot_path_kind(dir, name, NULL, 0);
}

static int game_files_present(const char *dir)
{
    return path_kind(dir, "prince.bf") == 1 && path_kind(dir, "video") == 2
        && path_kind(dir, "sound") == 2;
}

/* Title ID from the XBE certificate: 0x5553001D is the retail game; the
 * demo's certificate carries 0 and the same title name. */
static int xbe_title(const char *path, uint32_t *title_id, char name[41])
{
    unsigned char head[0x1000];
    FILE *f = fopen(path, "rb");
    size_t got;
    uint32_t base, cert, at;
    int i;
    if (!f) return 0;
    got = fread(head, 1, sizeof head, f);
    fclose(f);
    if (got < 0x120 || memcmp(head, "XBEH", 4)) return 0;
    memcpy(&base, head + 0x104, 4);
    memcpy(&cert, head + 0x118, 4);
    at = cert - base;
    if (cert < base || at + 0x0C + 80 > got) return 0;
    memcpy(title_id, head + at + 8, 4);
    for (i = 0; i < 40; i++) {            /* UTF-16LE, ASCII is enough here */
        uint16_t c = (uint16_t)(head[at + 0x0C + i * 2] | head[at + 0x0D + i * 2] << 8);
        name[i] = c && c < 128 ? (char)c : (c ? '?' : 0);
        if (!c) break;
    }
    name[40] = 0;
    return 1;
}

static jobjectArray strings(JNIEnv *env, const char *kind, const char *exact,
                            const char *line, const char *note)
{
    jclass cls = (*env)->FindClass(env, "java/lang/String");
    jobjectArray out = (*env)->NewObjectArray(env, 4, cls, NULL);
    const char *v[4] = {kind, exact, line, note};
    int i;
    for (i = 0; i < 4; i++)
        (*env)->SetObjectArrayElement(env, out, i, (*env)->NewStringUTF(env, v[i]));
    return out;
}

JNIEXPORT jobjectArray JNICALL Java_com_fulger_resot_Native_identify(JNIEnv *env, jclass cls, jstring jdir)
{
    const char *dir = (*env)->GetStringUTFChars(env, jdir, NULL);
    char xbe[2048], hex[65], name[41] = {0};
    uint32_t title_id = 0;
    jobjectArray result;
    (void)cls;
    if (!game_files_present(dir)) {
        result = strings(env, "", "0", "", "");
    } else {
        if (resot_path_kind(dir, "default.xbe", xbe, sizeof xbe) == 1 && resot_sha256_file(xbe, hex)) {
            if (!strcmp(hex, RESOT_DEMO_XBE_SHA256))
                result = strings(env, "demo", "1", "E3 2003 demo  •  2003-07-18", "");
            else if (!strcmp(hex, RESOT_RETAIL_XBE_SHA256))
                result = strings(env, "retail", "1", "NTSC retail  •  2003-10-20", "");
            else if (xbe_title(xbe, &title_id, name) && strstr(name, "Prince of Persia"))
                result = strings(env, title_id == 0x5553001Du ? "retail" : "demo", "0",
                                 title_id == 0x5553001Du ? "Retail  •  other revision"
                                                         : "Demo  •  other revision",
                                 "A default.xbe here is not the build reSOT supports; the game will not start.");
            else
                result = strings(env, "", "0", "",
                                 "A folder holds a default.xbe that is not Prince of Persia: The Sands of Time.");
        } else if (path_kind(dir, "shaders.bin") == 1 || path_kind(dir, "POP1") == 2) {
            result = strings(env, "retail", "0", "Retail  •  recognised by its files",
                             "default.xbe is missing: the Android game reads it from this folder.");
        } else if (path_kind(dir, "preview.bik") == 1) {
            result = strings(env, "demo", "0", "Demo  •  recognised by its files",
                             "default.xbe is missing: the Android game reads it from this folder.");
        } else {
            result = strings(env, "", "0", "",
                             "Game files found but not identified: add the disc's default.xbe to that folder.");
        }
    }
    (*env)->ReleaseStringUTFChars(env, jdir, dir);
    return result;
}
