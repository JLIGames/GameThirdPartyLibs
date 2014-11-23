//
//  PhysicsWorld.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "PhysicsWorld.h"
#include "WorldFactory.h"

namespace jli
{
    PhysicsWorld::PhysicsWorld():
    AbstractFactoryObject(this)
    {
        
    }
    
    PhysicsWorld::PhysicsWorld(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    PhysicsWorld::PhysicsWorld(const PhysicsWorld &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    PhysicsWorld::~PhysicsWorld()
    {
        
    }
    
    PhysicsWorld &PhysicsWorld::operator=(const PhysicsWorld &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	PhysicsWorld::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void PhysicsWorld::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *PhysicsWorld::getName()const
    {
        return "PhysicsWorld";
    }
    
    u32 PhysicsWorld::getType()const
    {
        return type::PhysicsWorld;
    }
}