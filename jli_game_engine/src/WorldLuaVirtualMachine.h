//
//  WorldLuaVirtualMachine.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__WorldLuaVirtualMachine__
#define __JLIGameEngineTest__WorldLuaVirtualMachine__

#include "lua.hpp"
#include "Util.h"

#include "AbstractState.h"
#include "Scene.h"
#include "Node.h"
#include "Input.h"

namespace jli
{
    class WorldLuaVirtualMachine
    {
    public:
        WorldLuaVirtualMachine();
        virtual ~WorldLuaVirtualMachine();
        
        //TODO: fill in specific methods for WorldLuaVirtualMachine
        
        void reset();
        
        bool execute(const char *);
        bool execute(const char *, f32);
        bool execute(const char *, const Telegram &, bool &);
        
        bool execute(const char *, Scene *);
        bool execute(const char *, Scene *, f32);
        bool execute(const char *, Scene *, const Telegram &, bool &);
        
        bool execute(const char *, Node *);
        bool execute(const char *, Node *, f32);
        bool execute(const char *, Node *, const Telegram &, bool &);
        
        bool execute(const char *code, const btAlignedObjectArray<jli::DeviceTouch*> &touchArray);
    protected:
        void init();
        void unInit();
        
        void getError(int error);
        bool compile();
        
        lua_State *m_lua_State;
    private:
        WorldLuaVirtualMachine(const WorldLuaVirtualMachine &);
        WorldLuaVirtualMachine &operator=(const WorldLuaVirtualMachine &);
    };
}

#endif /* defined(__JLIGameEngineTest__WorldLuaVirtualMachine__) */
