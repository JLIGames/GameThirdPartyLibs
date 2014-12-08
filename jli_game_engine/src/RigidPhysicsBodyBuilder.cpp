//
//  RigidPhysicsBodyBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "RigidPhysicsBodyBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    RigidPhysicsBodyBuilder::RigidPhysicsBodyBuilder()
    {
    }
    
    RigidPhysicsBodyBuilder::RigidPhysicsBodyBuilder(const RigidPhysicsBodyBuilder &copy)
    {
        
    }
    
    RigidPhysicsBodyBuilder::RigidPhysicsBodyBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    RigidPhysicsBodyBuilder::~RigidPhysicsBodyBuilder()
    {
    }
    
    RigidPhysicsBodyBuilder &RigidPhysicsBodyBuilder::operator=(const RigidPhysicsBodyBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	RigidPhysicsBodyBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void RigidPhysicsBodyBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 RigidPhysicsBodyBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_RigidPhysicsBody;
    }
    
    const char *RigidPhysicsBodyBuilder::getClassName()const
    {
        return "RigidPhysicsBodyBuilder";
    }
    
    u32 RigidPhysicsBodyBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_RigidPhysicsBodyBuilder;
    }
    
    RigidPhysicsBodyBuilder::operator std::string() const
    {
        return "TODO";
    }
}
