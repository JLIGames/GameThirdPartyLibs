//
//  BaseRigidPhysicsBodyBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "BaseRigidPhysicsBodyBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    BaseRigidPhysicsBodyBuilder::BaseRigidPhysicsBodyBuilder()
    {
    }
    
    BaseRigidPhysicsBodyBuilder::BaseRigidPhysicsBodyBuilder(const BaseRigidPhysicsBodyBuilder &copy)
    {
        
    }
    
    BaseRigidPhysicsBodyBuilder::BaseRigidPhysicsBodyBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    BaseRigidPhysicsBodyBuilder::~BaseRigidPhysicsBodyBuilder()
    {
    }
    
    BaseRigidPhysicsBodyBuilder &BaseRigidPhysicsBodyBuilder::operator=(const BaseRigidPhysicsBodyBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	BaseRigidPhysicsBodyBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void BaseRigidPhysicsBodyBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 BaseRigidPhysicsBodyBuilder::getObjectType()const
    {
        return type::BaseRigidPhysicsBody;
    }
    
    const char *BaseRigidPhysicsBodyBuilder::getName()const
    {
        return "BaseRigidPhysicsBodyBuilder";
    }
    
    u32 BaseRigidPhysicsBodyBuilder::getType()const
    {
        return type::BaseRigidPhysicsBodyBuilder;
    }
}
