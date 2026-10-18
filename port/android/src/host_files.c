/* Case-insensitive file lookup for the Android host (host_files.h). */
#include "host_files.h"

#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>

int resot_path_kind(const char *dir, const char *name, char *out, size_t out_size)
{
    char path[2048];
    struct stat st;
    DIR *d;
    struct dirent *e;
    snprintf(path, sizeof path, "%s/%s", dir, name);
    if (stat(path, &st) != 0) {
        int found = 0;
        if (!(d = opendir(dir))) return 0;
        while ((e = readdir(d)) != NULL)
            if (!strcasecmp(e->d_name, name)) {
                snprintf(path, sizeof path, "%s/%s", dir, e->d_name);
                found = stat(path, &st) == 0;
                break;
            }
        closedir(d);
        if (!found) return 0;
    }
    if (out && out_size) snprintf(out, out_size, "%s", path);
    return S_ISDIR(st.st_mode) ? 2 : 1;
}
