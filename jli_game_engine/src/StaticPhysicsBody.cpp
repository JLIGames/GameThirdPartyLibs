//
//  StaticPhysicsBody.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "StaticPhysicsBody.h"
#include "WorldFactory.h"

namespace jli
{
    StaticPhysicsBody::StaticPhysicsBody():
    AbstractFactoryObject(this)
    {
        
    }
    
    StaticPhysicsBody::StaticPhysicsBody(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    StaticPhysicsBody::StaticPhysicsBody(const StaticPhysicsBody &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    StaticPhysicsBody::~StaticPhysicsBody()
    {
        
    }
    
    StaticPhysicsBody &StaticPhysicsBody::operator=(const StaticPhysicsBody &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	StaticPhysicsBody::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void StaticPhysicsBody::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *StaticPhysicsBody::getName()const
    {
        return "StaticPhysicsBody";
    }
    
    u32 StaticPhysicsBody::getType()const
    {
        return type::StaticPhysicsBody;
    }
}