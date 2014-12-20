//
//  GhostPhysicsBodyBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "GhostPhysicsBodyBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    GhostPhysicsBodyBuilder::GhostPhysicsBodyBuilder()
    {
    }
    
    GhostPhysicsBodyBuilder::GhostPhysicsBodyBuilder(const GhostPhysicsBodyBuilder &copy)
    {
        
    }
    
    GhostPhysicsBodyBuilder::GhostPhysicsBodyBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    GhostPhysicsBodyBuilder::~GhostPhysicsBodyBuilder()
    {
    }
    
    GhostPhysicsBodyBuilder &GhostPhysicsBodyBuilder::operator=(const GhostPhysicsBodyBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	GhostPhysicsBodyBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void GhostPhysicsBodyBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 GhostPhysicsBodyBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_GhostPhysicsBody;
    }
    
    const char *GhostPhysicsBodyBuilder::getClassName()const
    {
        return "GhostPhysicsBodyBuilder";
    }
    
    u32 GhostPhysicsBodyBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_GhostPhysicsBodyBuilder;
    }
    
    GhostPhysicsBodyBuilder::operator std::string() const
    {
        return "TODO";
    }
}
