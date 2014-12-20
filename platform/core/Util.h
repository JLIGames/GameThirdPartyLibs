//
//  Util.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/9/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_Util_h
#define JLIGameEngineTest_Util_h

#include "Log.h"
#include <csignal>
#include <cstdlib>
#include <stdio.h>

#ifndef NULL
#define NULL   ((void *) 0)
#endif

#if defined(DEBUG) || defined (_DEBUG)
#define JLI_DEBUG
#endif

typedef char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;

#define BUFFER_SIZE 512


#ifdef JLI_DEBUG

#define STR_VALUE(arg)      #arg

#define jliAssert(x)\
{\
    if(!(x))\
    {\
        printf("jliAssert(%s);\nLine %d\nFile %s\n",#x, __LINE__, __FILE__);\
        std::abort();\
    }\
}
#define jliAssertMsg(x, msg)\
{\
if(!(x))\
{\
printf("%s\njliAssert(%s);\nLine %d\nFile %s\n",STR_VALUE(msg),#x, __LINE__, __FILE__);\
std::abort();\
}\
}

#else

#define jliAssert(x)
#define jliAssertMsg(x, msg)

#endif

#endif
