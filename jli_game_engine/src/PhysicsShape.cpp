//
//  PhysicsShape.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "PhysicsShape.h"
#include "WorldFactory.h"

namespace jli
{
    PhysicsShape::PhysicsShape():
    AbstractFactoryObject(this)
    {
        
    }
    
    PhysicsShape::PhysicsShape(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    PhysicsShape::PhysicsShape(const PhysicsShape &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    PhysicsShape::~PhysicsShape()
    {
        
    }
    
    PhysicsShape &PhysicsShape::operator=(const PhysicsShape &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	PhysicsShape::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void PhysicsShape::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *PhysicsShape::getClassName()const
    {
        return "PhysicsShape";
    }
    
    u32 PhysicsShape::getType()const
    {
        return JLI_OBJECT_TYPE_PhysicsShape;
    }
}