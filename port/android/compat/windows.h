/* reSOT (Android): the shared sources written against <windows.h>
 * (port/windows/src/scene.c) get the runtime's POSIX implementation of the
 * same Win32 primitives instead. Only on this include path for Android. */
#ifndef RESOT_ANDROID_WINDOWS_H
#define RESOT_ANDROID_WINDOWS_H
#include "platform/win32_compat.h"
#endif
