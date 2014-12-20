//
//  SceneStateBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "SceneStateBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    SceneStateBuilder::SceneStateBuilder()
    {
    }
    
    SceneStateBuilder::SceneStateBuilder(const SceneStateBuilder &copy)
    {
        
    }
    
    SceneStateBuilder::SceneStateBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    SceneStateBuilder::~SceneStateBuilder()
    {
    }
    
    SceneStateBuilder &SceneStateBuilder::operator=(const SceneStateBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	SceneStateBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void SceneStateBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 SceneStateBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_SceneState;
    }
    
    const char *SceneStateBuilder::getClassName()const
    {
        return "SceneStateBuilder";
    }
    
    u32 SceneStateBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_SceneStateBuilder;
    }
    
    SceneStateBuilder::operator std::string() const
    {
        return "TODO";
    }
}