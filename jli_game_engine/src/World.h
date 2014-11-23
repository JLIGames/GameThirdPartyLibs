//
//  World.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/21/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__World__
#define __JLIGameEngineTest__World__

#include <cstddef>
#include "Util.h"

#include "WorldFactory.h"
#include "WorldMySQL.h"
#include "WorldInput.h"
#include "WorldSound.h"
#include "WorldLuaVirtualMachine.h"

namespace jli
{
    class World
    {
    public:
        static void createInstance();
        static void destroyInstance();
        static World *const getInstance();
        static bool hasInstance();
        
    public:
        World();
        virtual ~World();
        
        WorldFactory *const getWorldFactory()const;
        WorldMySQL *const getWorldMySQL()const;
        WorldInput *const getWorldInput()const;
        WorldSound *const getWorldSound()const;
        WorldLuaVirtualMachine *const getWorldLuaVirtualMachine()const;
    protected:
    private:
        World(const World &);
        World &operator=(const World &);
        static World *s_Instance;
        
        WorldFactory *m_WorldFactory;
        WorldMySQL *m_WorldMySQL;
        WorldInput *m_WorldInput;
        WorldSound *m_WorldSound;
        WorldLuaVirtualMachine *m_WorldLuaVirtualMachine;
    };
}




#endif /* defined(__JLIGameEngineTest__World__) */
