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
    m_WorldSound(new WorldSound()),
    m_WorldLuaVirtualMachine(new WorldLuaVirtualMachine()),
    m_worldClock(new Clock()),
    m_stateMachine(new WorldStateMachine()),
    m_Name("World")
    {
        WorldState *state = dynamic_cast<jli::WorldState*>(getWorldFactory()->create(jli::JLI_OBJECT_TYPE_WorldState));
        m_stateMachine->pushState(state);
    }
    
    World::~World()
    {
        delete m_stateMachine;
        delete m_worldClock;
        delete m_WorldLuaVirtualMachine;
        delete m_WorldSound;
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
    
//    WorldStateMachine *const World::getStateMachine()const
//    {
//        return m_stateMachine;
//    }
    
    void World::pushState(WorldState *state)
    {
        m_stateMachine->pushState(state);
    }
    
    void World::touchDown(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray)
    {
        WorldState *currentState = dynamic_cast<WorldState*>(m_stateMachine->getState());
        
        currentState->touchDown(touchArray);
    }
    
    void World::touchUp(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray)
    {
        WorldState *currentState = dynamic_cast<WorldState*>(m_stateMachine->getState());
        
        currentState->touchUp(touchArray);
    }
    
    void World::touchMove(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray)
    {
        WorldState *currentState = dynamic_cast<WorldState*>(m_stateMachine->getState());
        
        currentState->touchMove(touchArray);
    }
    
    void World::touchCancelled(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray)
    {
        WorldState *currentState = dynamic_cast<WorldState*>(m_stateMachine->getState());
        
        currentState->touchCancelled(touchArray);
    }
    
    void World::addCamera(Camera *camera)
    {
        m_cameraArray.push_back(camera);
    }
    
    void World::removeCamera(Camera *camera)
    {
        m_cameraArray.remove(camera);
    }
    
    void World::update(f32 timeStep)
    {
        m_stateMachine->update(timeStep);
    }
    
    void World::render()
    {
        for(s32 index = 0; index < m_cameraArray.size(); ++index)
        {
            m_cameraArray[index]->render();
        }
    }
    void World::setName(const char *name)
    {
        m_Name = name;
    }
    const char *World::getName()const
    {
        return m_Name.c_str();
    }
    
    World::operator std::string() const
    {
        return "TODO";
    }
}