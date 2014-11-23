//
//  MaterialProperty.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "MaterialProperty.h"
#include "WorldFactory.h"

namespace jli
{
    MaterialProperty::MaterialProperty():
    AbstractFactoryObject(this)
    {
        
    }
    
    MaterialProperty::MaterialProperty(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    MaterialProperty::MaterialProperty(const MaterialProperty &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    MaterialProperty::~MaterialProperty()
    {
        
    }
    
    MaterialProperty &MaterialProperty::operator=(const MaterialProperty &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	MaterialProperty::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void MaterialProperty::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *MaterialProperty::getName()const
    {
        return "MaterialProperty";
    }
    
    u32 MaterialProperty::getType()const
    {
        return type::MaterialProperty;
    }
}