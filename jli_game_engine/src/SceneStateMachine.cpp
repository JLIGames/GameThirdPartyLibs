//
//  SceneStateMachine.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "SceneStateMachine.h"
#include "WorldFactory.h"

namespace jli
{
    SceneStateMachine::SceneStateMachine():
    AbstractStateMachine<Scene>()
    {
        
    }
    
    SceneStateMachine::SceneStateMachine(const AbstractBuilder &builder):
    AbstractStateMachine<Scene>(builder)
    {
        
    }
    
    SceneStateMachine::SceneStateMachine(const SceneStateMachine &copy):
    AbstractStateMachine<Scene>(copy)
    {
        
    }
    
    SceneStateMachine::~SceneStateMachine()
    {
        
    }
    
    SceneStateMachine &SceneStateMachine::operator=(const SceneStateMachine &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	SceneStateMachine::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void SceneStateMachine::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *SceneStateMachine::getClassName()const
    {
        return "SceneStateMachine";
    }
    
    u32 SceneStateMachine::getType()const
    {
        return JLI_OBJECT_TYPE_SceneStateMachine;
    }
}