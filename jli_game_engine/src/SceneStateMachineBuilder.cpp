//
//  SceneStateMachineBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "SceneStateMachineBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    SceneStateMachineBuilder::SceneStateMachineBuilder()
    {
    }
    
    SceneStateMachineBuilder::SceneStateMachineBuilder(const SceneStateMachineBuilder &copy)
    {
        
    }
    
    SceneStateMachineBuilder::SceneStateMachineBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    SceneStateMachineBuilder::~SceneStateMachineBuilder()
    {
    }
    
    SceneStateMachineBuilder &SceneStateMachineBuilder::operator=(const SceneStateMachineBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	SceneStateMachineBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void SceneStateMachineBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 SceneStateMachineBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_SceneStateMachine;
    }
    
    const char *SceneStateMachineBuilder::getClassName()const
    {
        return "SceneStateMachineBuilder";
    }
    
    u32 SceneStateMachineBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_SceneStateMachineBuilder;
    }
}