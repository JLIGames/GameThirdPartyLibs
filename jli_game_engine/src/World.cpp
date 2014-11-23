//
//  World.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/21/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "World.h"

namespace jli
{
    World *World::s_Instance = NULL;
    
    void World::createInstance()
    {
        if(NULL == s_Instance)
        {
            s_Instance = new World();
        }
    }
    
    void World::destroyInstance()
    {
        delete s_Instance;
        s_Instance = NULL;
    }
    
    World *const World::getInstance()
    {
        jliAssert(s_Instance);
        
        return s_Instance;
    }
    
    bool World::hasInstance()
    {
        return (NULL != s_Instance);
    }
    
    World::World():
    m_WorldFactory(new WorldFactory()),
    m_WorldMySQL(new WorldMySQL()),
    m_WorldInput(new WorldInput()),
    m_WorldSound(new WorldSound()),
    m_WorldLuaVirtualMachine(new WorldLuaVirtualMachine()),
    m_worldClock(new Clock())
    {
    }
    
    World::~World()
    {
        delete m_worldClock;
        delete m_WorldLuaVirtualMachine;
        delete m_WorldSound;
        delete m_WorldInput;
        delete m_WorldMySQL;
        delete m_WorldFactory;
    }
    
    WorldFactory *const World::getWorldFactory()const
    {
        return m_WorldFactory;
    }
    
    WorldMySQL *const World::getWorldMySQL()const
    {
        return m_WorldMySQL;
    }
    
    WorldInput *const World::getWorldInput()const
    {
        return m_WorldInput;
    }
    
    WorldSound *const World::getWorldSound()const
    {
        return m_WorldSound;
    }
    
    WorldLuaVirtualMachine *const World::getWorldLuaVirtualMachine()const
    {
        return m_WorldLuaVirtualMachine;
    }
    
    Clock *const World::getWorldClock()const
    {
        return m_worldClock;
    }
}