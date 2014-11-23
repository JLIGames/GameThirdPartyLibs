//
//  ResourceBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/21/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "ResourceBuilder.h"

#include "WorldFactory.h"

namespace jli
{
    ResourceBuilder::ResourceBuilder()
    {
    }
    
    ResourceBuilder::ResourceBuilder(const ResourceBuilder &copy)
    {
        
    }
    
    ResourceBuilder::ResourceBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    ResourceBuilder::~ResourceBuilder()
    {
    }
    
    ResourceBuilder &ResourceBuilder::operator=(const ResourceBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	ResourceBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void ResourceBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 ResourceBuilder::getObjectType()const
    {
        return type::Resource;
    }
    
    const char *ResourceBuilder::getName()const
    {
        return "ResourceBuilder";
    }
    
    u32 ResourceBuilder::getType()const
    {
        return type::ResourceBuilder;
    }
}