package by.kolovaitis.coursework;

import android.opengl.GLSurfaceView;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import static android.opengl.GLES20.*;

class RendererWrapper implements GLSurfaceView.Renderer {

    @Override
    public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        onSurfaceCreated();
    }

    @Override
    public void onSurfaceChanged(GL10 gl, int width, int height) {
        onSurfaceChanged(width, height);
    }

    @Override
    public void onDrawFrame(GL10 gl) {
      onDrawFrame();
    }

    public native String stringFromJNI();

    public native void onDrawFrame();
    public native void onSurfaceChanged(int width, int height);
    public native void onSurfaceCreated();

}
