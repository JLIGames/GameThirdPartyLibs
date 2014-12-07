//
//  SoftPhysicsBodyBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "SoftPhysicsBodyBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    SoftPhysicsBodyBuilder::SoftPhysicsBodyBuilder()
    {
    }
    
    SoftPhysicsBodyBuilder::SoftPhysicsBodyBuilder(const SoftPhysicsBodyBuilder &copy)
    {
        
    }
    
    SoftPhysicsBodyBuilder::SoftPhysicsBodyBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    SoftPhysicsBodyBuilder::~SoftPhysicsBodyBuilder()
    {
    }
    
    SoftPhysicsBodyBuilder &SoftPhysicsBodyBuilder::operator=(const SoftPhysicsBodyBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	SoftPhysicsBodyBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void SoftPhysicsBodyBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 SoftPhysicsBodyBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_SoftPhysicsBody;
    }
    
    const char *SoftPhysicsBodyBuilder::getClassName()const
    {
        return "SoftPhysicsBodyBuilder";
    }
    
    u32 SoftPhysicsBodyBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_SoftPhysicsBodyBuilder;
    }
}