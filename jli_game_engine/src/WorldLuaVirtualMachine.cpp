//
//  WorldLuaVirtualMachine.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "WorldLuaVirtualMachine.h"
#include "SwigLuaWrapper.h"
#include "Log.h"



static void printMethods(const char* name)
{
    //this touches the SWIG internals, please be careful:
    for (int i = 0; swig_types[i]; i++)
    {
        if (swig_types[i]->clientdata)
        {
            swig_lua_class* ptr=(swig_lua_class*)(swig_types[i]->clientdata);
            
            if (strcmp(name,ptr->name)==0)
            {
                for(int j=0;ptr->methods[j].name;j++)
                {
                    Log("%s::%s()\n",ptr->name,ptr->methods[j].name);
                }
            }
        }
    }
}

static void printWrappedClasses()
{
    //this touches the SWIG internals, please be careful:
    for (int i = 0; swig_types[i]; i++)
    {
        if (swig_types[i]->clientdata)
        {
            swig_lua_class* ptr=(swig_lua_class*)(swig_types[i]->clientdata);
            printMethods(ptr->name);
        }
    }
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
    
    void WorldLuaVirtualMachine::reset()
    {
        unInit();
        init();
    }
    
    void WorldLuaVirtualMachine::init()
    {
        Log("Lua version: %s", LUA_VERSION);
        
        m_lua_State = luaL_newstate();
        luaL_openlibs(m_lua_State);
        
        luaopen_JLI(m_lua_State);
        
        Log("%s\n", SWIG_name );
        
        printWrappedClasses();
    }
    
    void WorldLuaVirtualMachine::unInit()
    {
        if( m_lua_State )
        {
            lua_close( m_lua_State );
            m_lua_State = NULL;
        }
    }
    
    void WorldLuaVirtualMachine::getError(int error)
    {
        Log("LuaVM ERROR \'%s\'.", lua_tostring( m_lua_State, -1 ));
        
        lua_pop( m_lua_State, 1 );
    }
    
    bool WorldLuaVirtualMachine::compile()
    {
        int error_code = lua_pcall( m_lua_State, 0, LUA_MULTRET, 0 );
        
        if( error_code )
        {
            getError(error_code);
            return false;
        }
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code)
    {
        lua_getglobal(m_lua_State, code);
        
        int error_code = lua_pcall(m_lua_State, 0, 0, 0);
        if(error_code)
        {
            getError(error_code);
            return false;
        }
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code, f32 _btScalar)
    {
        lua_getglobal(m_lua_State, code);
        
        /* the first argument */
        lua_pushnumber(m_lua_State, _btScalar);
        
        /* the second argument */
        //lua_pushnumber(L, y);
        
        /* call the function with 1 arguments, return 0 result */
        //lua_call(m_lua_State, 1, 0);
        int error_code = lua_pcall(m_lua_State, 1, 0, 0);
        if(error_code)
        {
            getError(error_code);
            return false;
        }
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code, const Telegram &telegram, bool &returnValue)
    {
        
        /* the function name */
        lua_getglobal(m_lua_State, code);
        
        SWIG_NewPointerObj(m_lua_State,(void *) &telegram,SWIGTYPE_p_jli__Telegram,0);
        
        //lua_call(m_lua_State, 2, 0);
        int error_code = lua_pcall(m_lua_State, 1, 0, 0);
        if(error_code)
        {
            getError(error_code);
            return false;
        }
        
        returnValue = lua_toboolean(m_lua_State, -1);
        lua_pop(m_lua_State, 1);
        
        return true;
    }
    
    
    bool WorldLuaVirtualMachine::execute(const char *code, Scene *pEntity)
    {
        /* the function name */
        lua_getglobal(m_lua_State, code);
        
        SWIG_NewPointerObj(m_lua_State,(void *) pEntity,SWIGTYPE_p_jli__Scene,0);
        
        //lua_call(m_lua_State, 2, 0);
        int error_code = lua_pcall(m_lua_State, 1, 0, 0);
        if(error_code)
        {
            getError(error_code);
            return false;
        }
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code, Scene *pEntity, f32 _btScalar)
    {
        /* the function name */
        lua_getglobal(m_lua_State, code);
        
        SWIG_NewPointerObj(m_lua_State,(void *) pEntity,SWIGTYPE_p_jli__Scene,0);
        lua_pushnumber(m_lua_State, _btScalar);
        
        //lua_call(m_lua_State, 2, 0);
        int error_code = lua_pcall(m_lua_State, 2, 0, 0);
        if(error_code)
        {
            getError(error_code);
            return false;
        }
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code, Scene *pEntity, const Telegram &telegram, bool &returnValue)
    {
        /* the function name */
        lua_getglobal(m_lua_State, code);
        
        SWIG_NewPointerObj(m_lua_State,(void *) pEntity,SWIGTYPE_p_jli__Scene,0);
        SWIG_NewPointerObj(m_lua_State,(void *) &telegram,SWIGTYPE_p_jli__Telegram,0);
        
        //lua_call(m_lua_State, 2, 0);
        int error_code = lua_pcall(m_lua_State, 2, 0, 0);
        if(error_code)
        {
            getError(error_code);
            return false;
        }
        
        returnValue = lua_toboolean(m_lua_State, -1);
        lua_pop(m_lua_State, 1);
        
        return true;
    }
    
    
    
    
    
    bool WorldLuaVirtualMachine::execute(const char *code, Node *pEntity)
    {
        /* the function name */
        lua_getglobal(m_lua_State, code);
        
        SWIG_NewPointerObj(m_lua_State,(void *) pEntity,SWIGTYPE_p_jli__Node,0);
        
        //lua_call(m_lua_State, 2, 0);
        int error_code = lua_pcall(m_lua_State, 1, 0, 0);
        if(error_code)
        {
            getError(error_code);
            return false;
        }
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code, Node *pEntity, f32 _btScalar)
    {
        /* the function name */
        lua_getglobal(m_lua_State, code);
        
        SWIG_NewPointerObj(m_lua_State,(void *) pEntity,SWIGTYPE_p_jli__Node,0);
        lua_pushnumber(m_lua_State, _btScalar);
        
        //lua_call(m_lua_State, 2, 0);
        int error_code = lua_pcall(m_lua_State, 2, 0, 0);
        if(error_code)
        {
            getError(error_code);
            return false;
        }
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code, Node *pEntity, const Telegram &telegram, bool &returnValue)
    {
        /* the function name */
        lua_getglobal(m_lua_State, code);
        
        SWIG_NewPointerObj(m_lua_State,(void *) pEntity,SWIGTYPE_p_jli__Node,0);
        SWIG_NewPointerObj(m_lua_State,(void *) &telegram,SWIGTYPE_p_jli__Telegram,0);
        
        //lua_call(m_lua_State, 2, 0);
        int error_code = lua_pcall(m_lua_State, 2, 0, 0);
        if(error_code)
        {
            getError(error_code);
            return false;
        }
        
        returnValue = lua_toboolean(m_lua_State, -1);
        lua_pop(m_lua_State, 1);
        
        return true;
    }
    
    bool WorldLuaVirtualMachine::execute(const char *code, const btAlignedObjectArray<jli::DeviceTouch*> &touchArray)
    {
        /* the function name */
        lua_getglobal(m_lua_State, code);
        
        SWIG_NewPointerObj(m_lua_State,(void *) &touchArray,SWIGTYPE_p_btAlignedObjectArrayT_jli__DeviceTouch_p_t,0);
        
        //lua_call(m_lua_State, 2, 0);
        int error_code = lua_pcall(m_lua_State, 1, 0, 0);
        if(error_code)
        {
            getError(error_code);
            return false;
        }
        
        return true;
    }
}
