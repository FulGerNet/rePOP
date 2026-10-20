#ifndef RESOT_LOG_LEVEL_H
#define RESOT_LOG_LEVEL_H
#include <ctype.h>
#include <string.h>
/* Existing runtime messages have no common severity field. Match complete
 * severity words, case-insensitively, rather than treating all stderr as errors. */
static int resot_log_level(const char *line)
{
    char word[32]; unsigned n = 0; int level = 0;
    for (;;) {
        unsigned char c = (unsigned char)*line++;
        if (isalpha(c)) { if (n < sizeof word - 1) word[n++] = (char)tolower(c); }
        else {
            word[n] = 0;
            if (!strcmp(word,"error") || !strcmp(word,"fatal") || !strcmp(word,"crash")
                || !strcmp(word,"failed") || !strcmp(word,"failure") || !strcmp(word,"fault")) return 2;
            if (!strcmp(word,"warning") || !strcmp(word,"warn")) level = 1;
            n = 0;
        }
        if (!c) return level;
    }
}
#endif
