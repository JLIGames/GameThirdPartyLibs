//
//  Light.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "Light.h"
#include "WorldFactory.h"

namespace jli
{
    Light::Light():
    AbstractFactoryObject(this)
    {
        
    }
    
    Light::Light(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    Light::Light(const Light &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    Light::~Light()
    {
        
    }
    
    Light &Light::operator=(const Light &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	Light::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void Light::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *Light::getName()const
    {
        return "Light";
    }
    
    u32 Light::getType()const
    {
        return type::Light;
    }
}
