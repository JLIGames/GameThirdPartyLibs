//
//  PhysicsContact.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "PhysicsContact.h"
#include "WorldFactory.h"

namespace jli
{
    PhysicsContact::PhysicsContact():
    AbstractFactoryObject(this)
    {
        
    }
    
    PhysicsContact::PhysicsContact(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    PhysicsContact::PhysicsContact(const PhysicsContact &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    PhysicsContact::~PhysicsContact()
    {
        
    }
    
    PhysicsContact &PhysicsContact::operator=(const PhysicsContact &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	PhysicsContact::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void PhysicsContact::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *PhysicsContact::getName()const
    {
        return "PhysicsContact";
    }
    
    u32 PhysicsContact::getType()const
    {
        return type::PhysicsContact;
    }
}