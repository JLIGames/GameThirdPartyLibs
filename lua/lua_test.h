//
//  Header.h
//  JLIGameEngineTest
//
//  Created by James Folk on 10/20/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_Header_h
#define JLIGameEngineTest_Header_h

extern "C"
{
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

int main_lua_interpreter (int argc, char **argv);
int main_compiler(int argc, char* argv[]);

#endif
