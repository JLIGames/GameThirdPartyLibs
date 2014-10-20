
#include "File.h"
#include "Input.h"
#include "Log.h"
#include "Sound.h"
#include "Game.h"

#include "btBulletCollisionCommon.h"
#include "zlib.h"
#include "png.h"

#ifdef __EMSCRIPTEN__
#include "../emscripten/GLPlatform.h"
#else
#include "GLPlatform.h"
#endif 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static void printGLString(const char *name, GLenum s) {
    const char *v = (const char *) glGetString(s);
    Log("GL %s = %s\n", name, v);
}

static void checkGlError(const char* op) {
    for (GLint error = glGetError(); error; error
            = glGetError()) {
        Log("after %s() glError (0x%x)\n", op, error);
    }
}

static const char gVertexShader[] =
    "attribute vec4 vPosition;\n"
    "void main() {\n"
    "  gl_Position = vPosition;\n"
    "}\n";

static const char gFragmentShader[] =
    "precision mediump float;\n"
    "void main() {\n"
    "  gl_FragColor = vec4(1.0, 1.0, 0.0, 1.0);\n"
    "}\n";

GLuint loadShader(GLenum shaderType, const char* pSource) {
    GLuint shader = glCreateShader(shaderType);
    if (shader) {
        glShaderSource(shader, 1, &pSource, NULL);
        glCompileShader(shader);
        GLint compiled = 0;
        glGetShaderiv(shader, GL_COMPILE_STATUS, &compiled);
        if (!compiled) {
            GLint infoLen = 0;
            glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &infoLen);
            if (infoLen) {
                char* buf = (char*) malloc(infoLen);
                if (buf) {
                    glGetShaderInfoLog(shader, infoLen, NULL, buf);
                    LogError("Could not compile shader %d:\n%s\n", shaderType, buf);
                    free(buf);
                }
                glDeleteShader(shader);
                shader = 0;
            }
        }
    }
    return shader;
}

GLuint createProgram(const char* pVertexSource, const char* pFragmentSource) {
    GLuint vertexShader = loadShader(GL_VERTEX_SHADER, pVertexSource);
    if (!vertexShader) {
        return 0;
    }

    GLuint pixelShader = loadShader(GL_FRAGMENT_SHADER, pFragmentSource);
    if (!pixelShader) {
        return 0;
    }

    GLuint program = glCreateProgram();
    if (program) {
        glAttachShader(program, vertexShader);
        checkGlError("glAttachShader");
        glAttachShader(program, pixelShader);
        checkGlError("glAttachShader");
        glLinkProgram(program);
        GLint linkStatus = GL_FALSE;
        glGetProgramiv(program, GL_LINK_STATUS, &linkStatus);
        if (linkStatus != GL_TRUE) {
            GLint bufLength = 0;
            glGetProgramiv(program, GL_INFO_LOG_LENGTH, &bufLength);
            if (bufLength) {
                char* buf = (char*) malloc(bufLength);
                if (buf) {
                    glGetProgramInfoLog(program, bufLength, NULL, buf);
                    LogError("Could not link program:\n%s\n", buf);
                    free(buf);
                }
            }
            glDeleteProgram(program);
            program = 0;
        }
    }
    return program;
}

GLuint gProgram = GL_INVALID_ENUM;
GLuint gvPositionHandle = GL_INVALID_ENUM;


const GLfloat gTriangleVertices[] = { 0.0f, 0.5f, -0.5f, -0.5f,
        0.5f, -0.5f };








bool create()
{
	printGLString("Version", GL_VERSION);
	printGLString("Vendor", GL_VENDOR);
	printGLString("Renderer", GL_RENDERER);
	printGLString("Extensions", GL_EXTENSIONS);

    if (GL_INVALID_ENUM == gProgram)
    {
        gProgram = createProgram(gVertexShader, gFragmentShader);
        Log("program: %d\n", gProgram);
        
        if (!gProgram) {
            LogError("Could not create program.");
            return false;
        }
        gvPositionHandle = glGetAttribLocation(gProgram, "vPosition");
        Log("glGetAttribLocation(\"vPosition\") = %d\n", gvPositionHandle);
    }
	


    File *f = new File("strings/TEST");
    Log("%s", static_cast<unsigned char *>(f->content()));
    delete f;

	return true;
}

void resize(int x, int y, int width, int height)
{
	glViewport(x, y, width, height);
	checkGlError("glViewport");
}

void update(float step)
{
//	Log("%f\n", step);
}

void render()
{
	static float grey;
	grey += 0.01f;
	if (grey > 1.0f) {
		grey = 0.0f;
	}
	glClearColor(grey, grey, grey, 1.0f);
	checkGlError("glClearColor");
	glClear( GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
	checkGlError("glClear");

//    Log("program: %d\n", gProgram);
	glUseProgram(gProgram);
	checkGlError("glUseProgram");

    glEnableVertexAttribArray(gvPositionHandle);
    checkGlError("glEnableVertexAttribArray");
    
//    Log("glGetAttribLocation(\"vPosition\") = %d\n", gvPositionHandle);
	glVertexAttribPointer(gvPositionHandle, 2, GL_FLOAT, GL_FALSE, 0, gTriangleVertices);
	checkGlError("glVertexAttribPointer");
    
	
	glDrawArrays(GL_TRIANGLES, 0, 3);
	checkGlError("glDrawArrays");
}

void destroy()
{
}

//void pause()
//{
//}
//
//void unpause()
//{
//}

void touch_down()
{
	Log("onTouchDown\n");
}
void touch_up()
{
	Log("onTouchUp\n");
}
void touch_move()
{
	Log("onTouchMove\n");
}
void touch_cancelled()
{
    Log("onTouchCancelled\n");
}

