
#include "File.h"
#include "Input.h"
#include "Log.h"
#include "Sound.h"
#include "Game.h"

#include <android/log.h>

//#include <GLES2/gl2.h>
//#include <GLES2/gl2ext.h>

#include "GLPlatform.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



bool create()
{
}

void resize(int x, int y, int width, int height)
{
}

void update(float step)
{

}

void render()
{
	glClearColor(1.0, 1.0, 0.0, 1.0f);
	glClear( GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
}

void destroy()
{
}

void pause()
{
}

void unpause()
{
}

