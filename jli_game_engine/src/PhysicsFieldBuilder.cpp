//
//  PhysicsFieldBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "PhysicsFieldBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    PhysicsFieldBuilder::PhysicsFieldBuilder()
    {
    }
    
    PhysicsFieldBuilder::PhysicsFieldBuilder(const PhysicsFieldBuilder &copy)
    {
        
    }
    
    PhysicsFieldBuilder::PhysicsFieldBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    PhysicsFieldBuilder::~PhysicsFieldBuilder()
    {
    }
    
    PhysicsFieldBuilder &PhysicsFieldBuilder::operator=(const PhysicsFieldBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	PhysicsFieldBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void PhysicsFieldBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 PhysicsFieldBuilder::getObjectType()const
    {
        return type::PhysicsField;
    }
    
    const char *PhysicsFieldBuilder::getName()const
    {
        return "PhysicsFieldBuilder";
    }
    
    u32 PhysicsFieldBuilder::getType()const
    {
        return type::PhysicsFieldBuilder;
    }
}