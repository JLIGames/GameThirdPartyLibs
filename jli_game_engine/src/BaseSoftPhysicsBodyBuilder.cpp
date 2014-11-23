//
//  BaseSoftPhysicsBodyBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "BaseSoftPhysicsBodyBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    BaseSoftPhysicsBodyBuilder::BaseSoftPhysicsBodyBuilder()
    {
    }
    
    BaseSoftPhysicsBodyBuilder::BaseSoftPhysicsBodyBuilder(const BaseSoftPhysicsBodyBuilder &copy)
    {
        
    }
    
    BaseSoftPhysicsBodyBuilder::BaseSoftPhysicsBodyBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    BaseSoftPhysicsBodyBuilder::~BaseSoftPhysicsBodyBuilder()
    {
    }
    
    BaseSoftPhysicsBodyBuilder &BaseSoftPhysicsBodyBuilder::operator=(const BaseSoftPhysicsBodyBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	BaseSoftPhysicsBodyBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void BaseSoftPhysicsBodyBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 BaseSoftPhysicsBodyBuilder::getObjectType()const
    {
        return type::BaseSoftPhysicsBody;
    }
    
    const char *BaseSoftPhysicsBodyBuilder::getName()const
    {
        return "BaseSoftPhysicsBodyBuilder";
    }
    
    u32 BaseSoftPhysicsBodyBuilder::getType()const
    {
        return type::BaseSoftPhysicsBodyBuilder;
    }
}