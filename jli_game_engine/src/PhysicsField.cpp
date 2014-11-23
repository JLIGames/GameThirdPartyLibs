//
//  PhysicsField.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "PhysicsField.h"
#include "WorldFactory.h"

namespace jli
{
    PhysicsField::PhysicsField():
    AbstractFactoryObject(this)
    {
        
    }
    
    PhysicsField::PhysicsField(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    PhysicsField::PhysicsField(const PhysicsField &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    PhysicsField::~PhysicsField()
    {
        
    }
    
    PhysicsField &PhysicsField::operator=(const PhysicsField &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	PhysicsField::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void PhysicsField::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *PhysicsField::getName()const
    {
        return "PhysicsField";
    }
    
    u32 PhysicsField::getType()const
    {
        return type::PhysicsField;
    }
}
