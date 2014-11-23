//
//  StaticPhysicsBodyBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "StaticPhysicsBodyBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    StaticPhysicsBodyBuilder::StaticPhysicsBodyBuilder()
    {
    }
    
    StaticPhysicsBodyBuilder::StaticPhysicsBodyBuilder(const StaticPhysicsBodyBuilder &copy)
    {
        
    }
    
    StaticPhysicsBodyBuilder::StaticPhysicsBodyBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    StaticPhysicsBodyBuilder::~StaticPhysicsBodyBuilder()
    {
    }
    
    StaticPhysicsBodyBuilder &StaticPhysicsBodyBuilder::operator=(const StaticPhysicsBodyBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	StaticPhysicsBodyBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void StaticPhysicsBodyBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 StaticPhysicsBodyBuilder::getObjectType()const
    {
        return type::StaticPhysicsBody;
    }
    
    const char *StaticPhysicsBodyBuilder::getName()const
    {
        return "StaticPhysicsBodyBuilder";
    }
    
    u32 StaticPhysicsBodyBuilder::getType()const
    {
        return type::StaticPhysicsBodyBuilder;
    }
}