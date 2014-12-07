//
//  RigidPhysicsBody.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "RigidPhysicsBody.h"
#include "WorldFactory.h"

namespace jli
{
    RigidPhysicsBody::RigidPhysicsBody():
    AbstractPhysicsBody()
    {
        
    }
    
    RigidPhysicsBody::RigidPhysicsBody(const AbstractBuilder &builder):
    AbstractPhysicsBody(builder)
    {
        
    }
    
    RigidPhysicsBody::RigidPhysicsBody(const RigidPhysicsBody &copy):
    AbstractPhysicsBody(copy)
    {
        
    }
    
    RigidPhysicsBody::~RigidPhysicsBody()
    {
        
    }
    
    RigidPhysicsBody &RigidPhysicsBody::operator=(const RigidPhysicsBody &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	RigidPhysicsBody::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void RigidPhysicsBody::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *RigidPhysicsBody::getClassName()const
    {
        return "RigidPhysicsBody";
    }
    
    u32 RigidPhysicsBody::getType()const
    {
        return JLI_OBJECT_TYPE_RigidPhysicsBody;
    }
}
