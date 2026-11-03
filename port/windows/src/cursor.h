/* The target's own BF glow is embedded as a generated CUR resource. */
#ifndef RESOT_WINDOWS_CURSOR_H
#define RESOT_WINDOWS_CURSOR_H

#include <windows.h>

static HCURSOR resot_light_cursor(void)
{
    HCURSOR cursor = (HCURSOR)LoadImageA(GetModuleHandleA(NULL),
        MAKEINTRESOURCEA(102), IMAGE_CURSOR,
        GetSystemMetrics(SM_CXCURSOR) * 3 / 2,
        GetSystemMetrics(SM_CYCURSOR) * 3 / 2, LR_SHARED);
    return cursor ? cursor : LoadCursorA(NULL, IDC_ARROW);
}

#endif
