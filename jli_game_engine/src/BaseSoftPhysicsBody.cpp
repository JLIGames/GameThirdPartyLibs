//
//  BaseSoftPhysicsBody.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "BaseSoftPhysicsBody.h"
#include "WorldFactory.h"

namespace jli
{
    BaseSoftPhysicsBody::BaseSoftPhysicsBody():
    AbstractFactoryObject(this)
    {
        
    }
    
    BaseSoftPhysicsBody::BaseSoftPhysicsBody(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    BaseSoftPhysicsBody::BaseSoftPhysicsBody(const BaseSoftPhysicsBody &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    BaseSoftPhysicsBody::~BaseSoftPhysicsBody()
    {
        
    }
    
    BaseSoftPhysicsBody &BaseSoftPhysicsBody::operator=(const BaseSoftPhysicsBody &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	BaseSoftPhysicsBody::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void BaseSoftPhysicsBody::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *BaseSoftPhysicsBody::getName()const
    {
        return "BaseSoftPhysicsBody";
    }
    
    u32 BaseSoftPhysicsBody::getType()const
    {
        return type::BaseSoftPhysicsBody;
    }
}
