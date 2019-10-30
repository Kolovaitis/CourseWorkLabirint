#include <jni.h>
#include <string>
#include "game.h"

extern "C" JNIEXPORT jstring JNICALL
Java_by_kolovaitis_coursework_RendererWrapper_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    on_surface_created();
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT void JNICALL
Java_by_kolovaitis_coursework_RendererWrapper_onDrawFrame__(JNIEnv *env, jclass type) {

    on_draw_frame();

}extern "C"
JNIEXPORT void JNICALL
Java_by_kolovaitis_coursework_RendererWrapper_onSurfaceChanged__II(JNIEnv *env, jobject instance,
                                                                   jint width, jint height) {

    on_surface_changed(width, height);

}extern "C"
JNIEXPORT void JNICALL
Java_by_kolovaitis_coursework_RendererWrapper_onSurfaceCreated__(JNIEnv *env, jobject instance) {

    on_surface_created();

}