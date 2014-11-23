//
//  Resource.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/21/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "Resource.h"
#include "WorldFactory.h"

namespace jli
{
    Resource::Resource():
    AbstractFactoryObject(this)
    {
        
    }
    
    Resource::Resource(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    Resource::Resource(const Resource &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    Resource::~Resource()
    {
        
    }
    
    Resource &Resource::operator=(const Resource &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	Resource::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void Resource::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *Resource::getName()const
    {
        return "Resource";
    }
    
    u32 Resource::getType()const
    {
        return type::Resource;
    }
}
