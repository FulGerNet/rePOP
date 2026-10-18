#ifndef RESOT_HOST_FILES_H
#define RESOT_HOST_FILES_H

#include <stddef.h>

/* What dir/name is, the name matched without regard to case as Windows and
 * the Xbox match it (the retail disc has VIDEO/ and SOUND/, the demo video/
 * and sound/): 0 absent, 1 a file, 2 a folder. With out, the path in the
 * spelling found on disk. */
int resot_path_kind(const char *dir, const char *name, char *out, size_t out_size);

#endif
