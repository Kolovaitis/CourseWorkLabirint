//
// Created by nikita on 28.10.19.
//


#include "game.h"
#include <EGL/egl.h>
#include <GLES3/gl31.h>
#include <malloc.h>
#include <stdbool.h>
#include <android/log.h>

#define  LOG_TAG    "courseWork"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

void on_surface_created() {
    glClearColor(0.1f, 0.2f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    LOGI("Surface created!");


}

void on_surface_changed(int width, int height) {
    glClear(GL_COLOR_BUFFER_BIT);
}

void on_draw_frame() {

    glClear(GL_COLOR_BUFFER_BIT);

}

