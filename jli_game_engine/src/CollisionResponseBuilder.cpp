//
//  CollisionResponseBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "CollisionResponseBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    CollisionResponseBuilder::CollisionResponseBuilder()
    {
    }
    
    CollisionResponseBuilder::CollisionResponseBuilder(const CollisionResponseBuilder &copy)
    {
        
    }
    
    CollisionResponseBuilder::CollisionResponseBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    CollisionResponseBuilder::~CollisionResponseBuilder()
    {
    }
    
    CollisionResponseBuilder &CollisionResponseBuilder::operator=(const CollisionResponseBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	CollisionResponseBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void CollisionResponseBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 CollisionResponseBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_CollisionResponse;
    }
    
    const char *CollisionResponseBuilder::getClassName()const
    {
        return "CollisionResponseBuilder";
    }
    
    u32 CollisionResponseBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_CollisionResponseBuilder;
    }
}