/* reSOT - text for the FPS panel (fb_present.c) on Android: drawn by the
 * platform's own font through GameActivity.drawPanelText, where Windows uses
 * GDI. The panel is redrawn five times a second at most. */
#include <SDL3/SDL.h>
#include <jni.h>
#include <stdint.h>
#include <string.h>

void resot_host_draw_text(uint32_t *bits, int w, int h, int x, int y,
                          const char *text, uint32_t argb)
{
    static jclass cls;
    static jmethodID method;
    JNIEnv *env = (JNIEnv *)SDL_GetAndroidJNIEnv();
    jintArray pixels;
    jstring string;
    if (!env) return;
    if (!cls) {
        jobject activity = (jobject)SDL_GetAndroidActivity();
        jclass local;
        if (!activity) return;
        local = (*env)->GetObjectClass(env, activity);
        (*env)->DeleteLocalRef(env, activity);
        if (!local) return;
        method = (*env)->GetStaticMethodID(env, local, "drawPanelText", "([IIIIILjava/lang/String;I)V");
        if (!method) { (*env)->ExceptionClear(env); (*env)->DeleteLocalRef(env, local); return; }
        cls = (jclass)(*env)->NewGlobalRef(env, local);
        (*env)->DeleteLocalRef(env, local);
    }
    pixels = (*env)->NewIntArray(env, w * h);
    string = (*env)->NewStringUTF(env, text);
    if (!pixels || !string) { (*env)->ExceptionClear(env); return; }
    (*env)->SetIntArrayRegion(env, pixels, 0, w * h, (const jint *)bits);
    (*env)->CallStaticVoidMethod(env, cls, method, pixels, (jint)w, (jint)h, (jint)x, (jint)y,
                                 string, (jint)argb);
    if ((*env)->ExceptionCheck(env)) (*env)->ExceptionClear(env);
    else (*env)->GetIntArrayRegion(env, pixels, 0, w * h, (jint *)bits);
    (*env)->DeleteLocalRef(env, pixels);
    (*env)->DeleteLocalRef(env, string);
}
