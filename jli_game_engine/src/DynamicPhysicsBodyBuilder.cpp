//
//  DynamicPhysicsBodyBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "DynamicPhysicsBodyBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    DynamicPhysicsBodyBuilder::DynamicPhysicsBodyBuilder()
    {
    }
    
    DynamicPhysicsBodyBuilder::DynamicPhysicsBodyBuilder(const DynamicPhysicsBodyBuilder &copy)
    {
        
    }
    
    DynamicPhysicsBodyBuilder::DynamicPhysicsBodyBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    DynamicPhysicsBodyBuilder::~DynamicPhysicsBodyBuilder()
    {
    }
    
    DynamicPhysicsBodyBuilder &DynamicPhysicsBodyBuilder::operator=(const DynamicPhysicsBodyBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	DynamicPhysicsBodyBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void DynamicPhysicsBodyBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 DynamicPhysicsBodyBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_DynamicPhysicsBody;
    }
    
    const char *DynamicPhysicsBodyBuilder::getClassName()const
    {
        return "DynamicPhysicsBodyBuilder";
    }
    
    u32 DynamicPhysicsBodyBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_DynamicPhysicsBodyBuilder;
    }
    
    DynamicPhysicsBodyBuilder::operator std::string() const
    {
        return "TODO";
    }
}
