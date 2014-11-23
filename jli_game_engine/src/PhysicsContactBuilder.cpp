//
//  PhysicsContactBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "PhysicsContactBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    PhysicsContactBuilder::PhysicsContactBuilder()
    {
    }
    
    PhysicsContactBuilder::PhysicsContactBuilder(const PhysicsContactBuilder &copy)
    {
        
    }
    
    PhysicsContactBuilder::PhysicsContactBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    PhysicsContactBuilder::~PhysicsContactBuilder()
    {
    }
    
    PhysicsContactBuilder &PhysicsContactBuilder::operator=(const PhysicsContactBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	PhysicsContactBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void PhysicsContactBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 PhysicsContactBuilder::getObjectType()const
    {
        return type::PhysicsContact;
    }
    
    const char *PhysicsContactBuilder::getName()const
    {
        return "PhysicsContactBuilder";
    }
    
    u32 PhysicsContactBuilder::getType()const
    {
        return type::PhysicsContactBuilder;
    }
}