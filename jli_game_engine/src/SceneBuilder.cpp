//
//  SceneBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "SceneBuilder.h"

#include "WorldFactory.h"

namespace jli
{
    SceneBuilder::SceneBuilder()
    {
    }
    
    SceneBuilder::SceneBuilder(const SceneBuilder &copy)
    {
        
    }
    
    SceneBuilder::SceneBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    SceneBuilder::~SceneBuilder()
    {
    }
    
    SceneBuilder &SceneBuilder::operator=(const SceneBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	SceneBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void SceneBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 SceneBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_Scene;
    }
    
    const char *SceneBuilder::getClassName()const
    {
        return "SceneBuilder";
    }
    
    u32 SceneBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_SceneBuilder;
    }
    
    SceneBuilder::operator std::string() const
    {
        return "TODO";
    }
}