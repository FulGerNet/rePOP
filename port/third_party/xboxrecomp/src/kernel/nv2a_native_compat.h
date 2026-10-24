/* RE-SoT: Samsung Mali-G57 completes compact pipelines then loses the GPU;
 * Poco Adreno 640 still corrupts pixels with the reference-only profile.
 * Isolate GPU vertex execution on both while retaining compact fragments.
 * Other GPUs retain their existing GPU vertex/geometry-cache path.
 * This identifies driver families, never Xbox executable addresses. */
#ifndef RESOT_NATIVE_COMPAT_H
#define RESOT_NATIVE_COMPAT_H
#include <string.h>
static int resot_native_compat(const char *name, const char *override)
{
    (void)name; /* RE-SoT: full reference mode is now an explicit A/B override only. */
    if (override && (*override == '0' || *override == '1')) return *override == '1';
    return 0;
}
static int resot_native_compact_pipelines(const char *name, int reference)
{
    return !reference && name && (strstr(name,"Mali") || strstr(name,"mali") || strstr(name,"Immortalis") ||
        ((strstr(name,"Adreno") || strstr(name,"adreno")) &&
         (strstr(name," 640") || strstr(name,"(TM)640"))));
}
/* RE-SoT: Samsung Mali-G57 now completes translated pipelines but loses the
 * GPU during their execution. Isolate vertex execution using the existing
 * CPU transform path, retaining compact fragment shaders and Vulkan draws.
 * Explicit 0/1 keeps developer A/B possible without changing other GPUs. */
static int resot_native_cpu_vertices(int mobile_compact, const char *override)
{
    if(override && *override) return *override!='0';
    return mobile_compact;
}
#endif
