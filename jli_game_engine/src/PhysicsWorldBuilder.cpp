//
//  PhysicsWorldBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "PhysicsWorldBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    PhysicsWorldBuilder::PhysicsWorldBuilder()
    {
    }
    
    PhysicsWorldBuilder::PhysicsWorldBuilder(const PhysicsWorldBuilder &copy)
    {
        
    }
    
    PhysicsWorldBuilder::PhysicsWorldBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    PhysicsWorldBuilder::~PhysicsWorldBuilder()
    {
    }
    
    PhysicsWorldBuilder &PhysicsWorldBuilder::operator=(const PhysicsWorldBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	PhysicsWorldBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void PhysicsWorldBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 PhysicsWorldBuilder::getObjectType()const
    {
        return type::PhysicsWorld;
    }
    
    const char *PhysicsWorldBuilder::getName()const
    {
        return "PhysicsWorldBuilder";
    }
    
    u32 PhysicsWorldBuilder::getType()const
    {
        return type::PhysicsWorldBuilder;
    }
}