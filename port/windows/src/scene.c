#include <windows.h>
#include <stddef.h>
#include <stdio.h>
/* RE-WW: scene addresses must be established in the Warrior Within XBE.
 * Keep the host diagnostics provider available without reading SoT globals. */
void resot_current_wow(char *out, size_t size)
{
    if (out && size) snprintf(out, size, "Unknown (WW bring-up)");
}
