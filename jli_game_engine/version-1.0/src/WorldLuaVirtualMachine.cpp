//
//  WorldLuaVirtualMachine.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//



#include "WorldLuaVirtualMachine.h"
//#include "SwigLuaWrapper.c"
#include "Log.h"
#include "File.h"
#include "Util.h"

extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}


static void printMethods(const char* name)
{
    //this touches the SWIG internals, please be careful:
//		for (int i = 0; swig_types[i]; i++)
//		{
//			if (swig_types[i]->clientdata)
//			{
//				swig_lua_class* ptr=(swig_lua_class*)(swig_types[i]->clientdata);
//
//				if (strcmp(name,ptr->name)==0)
//				{
//					for(int j=0;ptr->methods[j].name;j++)
//					{
//						Log("%s::%s()\n",ptr->name,ptr->methods[j].name);
//					}
//				}
//			}
//		}
}

static void printWrappedClasses()
{
    //this touches the SWIG internals, please be careful:
//    for (int i = 0; swig_types[i]; i++)
//    {
//        if (swig_types[i]->clientdata)
//        {
//            swig_lua_class* ptr=(swig_lua_class*)(swig_types[i]->clientdata);
//            printMethods(ptr->name);
//        }
//    }
}

namespace jli
{
    WorldLuaVirtualMachine::WorldLuaVirtualMachine()
    {
        init();
    }
    
    WorldLuaVirtualMachine::~WorldLuaVirtualMachine()
    {
        unInit();
    }
    
    WorldLuaVirtualMachine::operator std::string() const
    {
        return "TODO";
    }
    
    void WorldLuaVirtualMachine::reset()
    {
        unInit();
        init();
    }
    
    void WorldLuaVirtualMachine::loadFile(const char *filePath)
    {
//        File *f = new File(filePath);
//        loadString(static_cast<const char *>(f->content()));
    }
    
    void WorldLuaVirtualMachine::loadString(const char *code)
    {
//        int error_code = luaL_loadstring(m_lua_State, code);
//
//        char buffer[256];
//        sprintf(buffer, "\nLuaVM ERROR %d\nLuaVM ERROR MSG \'%s\'\n",
//                error_code,
//                lua_tostring( m_lua_State, -1 ));
//        jliAssertMsg(error_code == 0, buffer);
//
//        compile();
    }
    
    void WorldLuaVirtualMachine::init()
    {
//        Log("Lua version: %s", LUA_VERSION);
//
//        m_lua_State = luaL_newstate();
//        luaL_openlibs(m_lua_State);
//
//        luaopen_JLI(m_lua_State);
//
//        Log("%s\n", SWIG_name );
//
//        printWrappedClasses();
    }
    
    void WorldLuaVirtualMachine::unInit()
    {
//        if( m_lua_State )
//        {
//            lua_close( m_lua_State );
//            m_lua_State = NULL;
//        }
    }
    
    void WorldLuaVirtualMachine::getError(const char *code, int error)
    {
//        Log("\nLuaVM ERROR %d\nLUA Function \'%s\'\nLuaVM ERROR MSG \'%s\'\n", error, code, lua_tostring( m_lua_State, -1 ));
//
//        lua_pop( m_lua_State, 1 );
    }
    
    void WorldLuaVirtualMachine::compile()
    {
//        int error_code = lua_pcall( m_lua_State, 0, LUA_MULTRET, 0 );
//
//        char buffer[256];
//        sprintf(buffer, "\nLuaVM ERROR %d\nLuaVM ERROR MSG \'%s\'\n",
//                error_code,
//                lua_tostring( m_lua_State, -1 ));
//        jliAssertMsg(error_code == 0, buffer);
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code)
    {
//        lua_getglobal(m_lua_State, code);
//
//        int error_code = lua_pcall(m_lua_State, 0, 0, 0);
//        if(error_code)
//        {
//            getError(code, error_code);
//            return false;
//        }
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code, f32 _btScalar)
    {
//        lua_getglobal(m_lua_State, code);
//
//        /* the first argument */
//        lua_pushnumber(m_lua_State, _btScalar);
//
//        /* call the function with 1 arguments, return 0 result */
//        int error_code = lua_pcall(m_lua_State, 1, 0, 0);
//        if(error_code)
//        {
//            getError(code, error_code);
//            return false;
//        }
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code, const Telegram &telegram, bool &returnValue)
    {
        
//        /* the function name */
//        lua_getglobal(m_lua_State, code);
//
//        SWIG_NewPointerObj(m_lua_State,(void *) &telegram,SWIGTYPE_p_jli__Telegram,0);
//
//        /* do the call (1 arguments, 1 result) */
//        int error_code = lua_pcall(m_lua_State, 1, 1, 0);
//        if(error_code)
//        {
//            getError(code, error_code);
//            return false;
//        }
//
//        returnValue = lua_toboolean(m_lua_State, -1);
//        lua_pop(m_lua_State, 1);
        
        return true;
    }
    
    
    bool WorldLuaVirtualMachine::execute(const char *code, Scene *pEntity)
    {
//        /* the function name */
//        lua_getglobal(m_lua_State, code);
//
//        SWIG_NewPointerObj(m_lua_State,(void *) pEntity,SWIGTYPE_p_jli__Scene,0);
//
//        /* do the call (1 arguments, 0 result) */
//        int error_code = lua_pcall(m_lua_State, 1, 0, 0);
//        if(error_code)
//        {
//            getError(code, error_code);
//            return false;
//        }
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code, Scene *pEntity, f32 _btScalar)
    {
//        /* the function name */
//        lua_getglobal(m_lua_State, code);
//
//        SWIG_NewPointerObj(m_lua_State,(void *) pEntity,SWIGTYPE_p_jli__Scene,0);
//        lua_pushnumber(m_lua_State, _btScalar);
//
//        /* do the call (2 arguments, 0 result) */
//        int error_code = lua_pcall(m_lua_State, 2, 0, 0);
//        if(error_code)
//        {
//            getError(code, error_code);
//            return false;
//        }
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code, Scene *pEntity, const Telegram &telegram, bool &returnValue)
    {
//        /* the function name */
//        lua_getglobal(m_lua_State, code);
//
//        SWIG_NewPointerObj(m_lua_State,(void *) pEntity,SWIGTYPE_p_jli__Scene,0);
//        SWIG_NewPointerObj(m_lua_State,(void *) &telegram,SWIGTYPE_p_jli__Telegram,0);
//
//        /* do the call (2 arguments, 1 result) */
//        int error_code = lua_pcall(m_lua_State, 2, 1, 0);
//        if(error_code)
//        {
//            getError(code, error_code);
//            return false;
//        }
//
//        returnValue = lua_toboolean(m_lua_State, -1);
//        lua_pop(m_lua_State, 1);
        
        return true;
    }
    
    
    
    
    
    bool WorldLuaVirtualMachine::execute(const char *code, Node *pEntity)
    {
//        /* the function name */
//        lua_getglobal(m_lua_State, code);
//
//        SWIG_NewPointerObj(m_lua_State,(void *) pEntity,SWIGTYPE_p_jli__Node,0);
//
//        /* do the call (1 arguments, 0 result) */
//        int error_code = lua_pcall(m_lua_State, 1, 0, 0);
//        if(error_code)
//        {
//            getError(code, error_code);
//            return false;
//        }
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code, Node *pEntity, f32 _btScalar)
    {
//        /* the function name */
//        lua_getglobal(m_lua_State, code);
//
//        SWIG_NewPointerObj(m_lua_State,(void *) pEntity,SWIGTYPE_p_jli__Node,0);
//        lua_pushnumber(m_lua_State, _btScalar);
//
//        /* do the call (2 arguments, 1 result) */
//        int error_code = lua_pcall(m_lua_State, 2, 0, 0);
//        if(error_code)
//        {
//            getError(code, error_code);
//            return false;
//        }
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code, Node *pEntity, const Telegram &telegram, bool &returnValue)
    {
//        /* the function name */
//        lua_getglobal(m_lua_State, code);
//
//        SWIG_NewPointerObj(m_lua_State,(void *) pEntity,SWIGTYPE_p_jli__Node,0);
//        SWIG_NewPointerObj(m_lua_State,(void *) &telegram,SWIGTYPE_p_jli__Telegram,0);
//
//        /* do the call (2 arguments, 1 result) */
//        int error_code = lua_pcall(m_lua_State, 2, 1, 0);
//        if(error_code)
//        {
//            getError(code, error_code);
//            return false;
//        }
//
//        returnValue = lua_toboolean(m_lua_State, -1);
//        lua_pop(m_lua_State, 1);
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code, DeviceTouch *m_CurrentTouches[10])
    {
//        u32 i = 0, numberOfTouches = 0;
//
//        lua_getglobal(m_lua_State, code);
//
//        while (m_CurrentTouches[i])
//        {
//            SWIG_NewPointerObj(m_lua_State,(void *) m_CurrentTouches[i],SWIGTYPE_p_jli__DeviceTouch,0);
//            ++i;
//            ++numberOfTouches;
//        }
//
//        /* call the function with 1 arguments, return 0 result */
//        int error_code = lua_pcall(m_lua_State, numberOfTouches, 0, 0);
//        if(error_code)
//        {
//            getError(code, error_code);
//            return false;
//        }
        
        return true;
    }
}
