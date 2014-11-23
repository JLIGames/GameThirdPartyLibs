//
//  PhysicsShapeBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "PhysicsShapeBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    PhysicsShapeBuilder::PhysicsShapeBuilder()
    {
    }
    
    PhysicsShapeBuilder::PhysicsShapeBuilder(const PhysicsShapeBuilder &copy)
    {
        
    }
    
    PhysicsShapeBuilder::PhysicsShapeBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    PhysicsShapeBuilder::~PhysicsShapeBuilder()
    {
    }
    
    PhysicsShapeBuilder &PhysicsShapeBuilder::operator=(const PhysicsShapeBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	PhysicsShapeBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void PhysicsShapeBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 PhysicsShapeBuilder::getObjectType()const
    {
        return type::PhysicsShape;
    }
    
    const char *PhysicsShapeBuilder::getName()const
    {
        return "PhysicsShapeBuilder";
    }
    
    u32 PhysicsShapeBuilder::getType()const
    {
        return type::PhysicsShapeBuilder;
    }
}
