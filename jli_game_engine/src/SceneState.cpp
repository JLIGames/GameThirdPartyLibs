//
//  SceneState.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "SceneState.h"
#include "WorldFactory.h"
#include "World.h"

namespace jli
{
    SceneState::SceneState():
    AbstractState<Scene>(),
    m_Name("SceneState")
    {
    }
    
    SceneState::SceneState(const AbstractBuilder &builder):
    AbstractState<Scene>(builder),
    m_Name("SceneState")
    {
    }
    
    SceneState::SceneState(const SceneState &copy):
    AbstractState<Scene>(copy),
    m_Name("SceneState")
    {
    }
    
    SceneState::~SceneState()
    {
        
    }
    
    SceneState &SceneState::operator=(const SceneState &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	SceneState::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void SceneState::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *SceneState::getClassName()const
    {
        return "SceneState";
    }
    
    u32 SceneState::getType()const
    {
        return JLI_OBJECT_TYPE_SceneState;
    }
    
    SceneState::operator std::string() const
    {
        return "TODO";
    }
    
    void SceneState::enter(Scene *object)
    {
        char buffer[256];
        sprintf(buffer, "%s%s%s", object->getName(), getName(), "Enter");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer, object);
    }
    
    void SceneState::update(Scene *object, f32 timeStep)
    {
        char buffer[256];
        sprintf(buffer, "%s%s%s", object->getName(), getName(), "Update");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer, object, timeStep);
    }
    
    void SceneState::exit(Scene *object)
    {
        char buffer[256];
        sprintf(buffer, "%s%s%s", object->getName(), getName(), "Exit");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer, object);
    }
    
    bool SceneState::onMessage(Scene *object, const Telegram &msg)const
    {
        bool ret;
        char buffer[256];
        
        sprintf(buffer, "%s%s%s", object->getName(), getName(), "OnMessage");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer, msg, ret);
        
        return ret;
    }
    
    void SceneState::setName(const char *name)
    {
        m_Name = name;
    }
    
    const char *SceneState::getName()const
    {
        return m_Name.c_str();
    }
}