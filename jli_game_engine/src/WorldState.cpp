//
//  WorldState.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "WorldState.h"
#include "WorldFactory.h"
#include "World.h"

namespace jli
{
    WorldState::WorldState():
    AbstractState<void>(),
    m_Name("WorldState")
    {
    }
    
    WorldState::WorldState(const AbstractBuilder &builder):
    AbstractState<void>(builder),
    m_Name("WorldState")
    {
    }
    
    WorldState::WorldState(const WorldState &copy):
    AbstractState<void>(copy),
    m_Name("WorldState")
    {
    }
    
    WorldState::~WorldState()
    {
        
    }
    
    WorldState &WorldState::operator=(const WorldState &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	WorldState::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void WorldState::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *WorldState::getClassName()const
    {
        return "WorldState";
    }
    
    u32 WorldState::getType()const
    {
        return JLI_OBJECT_TYPE_WorldState;
    }
    
    void WorldState::enter(void *object)
    {
        char buffer[256];
        sprintf(buffer, "%s%s", getName(), "Enter");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer);

    }
    
    void WorldState::update(void *object, f32 timeStep)
    {
        char buffer[256];
        sprintf(buffer, "%s%s", getName(), "Update");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer, timeStep);
    }
    
    void WorldState::exit(void *object)
    {
        char buffer[256];
        sprintf(buffer, "%s%s", getName(), "Exit");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer);
    }
    
    bool WorldState::onMessage(void *object, const Telegram &msg)
    {
        bool ret;
        char buffer[256];
        
        sprintf(buffer, "%s%s", getName(), "OnMessage");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer, msg, ret);
        
        return ret;
    }
    
    void WorldState::setName(const char *name)
    {
        m_Name = name;
    }
    
    const char *WorldState::getName()const
    {
        return m_Name.c_str();
    }
    
    void WorldState::touchDown(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray)
    {
        char buffer[256];
        sprintf(buffer, "%s%s", getName(), "TouchDown");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer, touchArray);
    }
    
    void WorldState::touchUp(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray)
    {
        char buffer[256];
        sprintf(buffer, "%s%s", getName(), "TouchUp");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer, touchArray);
    }
    
    void WorldState::touchMove(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray)
    {
        char buffer[256];
        sprintf(buffer, "%s%s", getName(), "TouchMove");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer, touchArray);
    }
    
    void WorldState::touchCancelled(const btAlignedObjectArray<jli::DeviceTouch*> &touchArray)
    {
        char buffer[256];
        sprintf(buffer, "%s%s", getName(), "TouchCancelled");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer, touchArray);
    }
}