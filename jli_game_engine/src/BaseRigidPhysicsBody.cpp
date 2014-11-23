//
//  BaseRigidPhysicsBody.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "BaseRigidPhysicsBody.h"
#include "WorldFactory.h"

namespace jli
{
    BaseRigidPhysicsBody::BaseRigidPhysicsBody():
    AbstractPhysicsBody()
    {
        
    }
    
    BaseRigidPhysicsBody::BaseRigidPhysicsBody(const AbstractBuilder &builder):
    AbstractPhysicsBody(builder)
    {
        
    }
    
    BaseRigidPhysicsBody::BaseRigidPhysicsBody(const BaseRigidPhysicsBody &copy):
    AbstractPhysicsBody(copy)
    {
        
    }
    
    BaseRigidPhysicsBody::~BaseRigidPhysicsBody()
    {
        
    }
    
    BaseRigidPhysicsBody &BaseRigidPhysicsBody::operator=(const BaseRigidPhysicsBody &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	BaseRigidPhysicsBody::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void BaseRigidPhysicsBody::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *BaseRigidPhysicsBody::getName()const
    {
        return "BaseRigidPhysicsBody";
    }
    
    u32 BaseRigidPhysicsBody::getType()const
    {
        return type::BaseRigidPhysicsBody;
    }
}
