//
//  MaterialPropertyBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "MaterialPropertyBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    MaterialPropertyBuilder::MaterialPropertyBuilder()
    {
    }
    
    MaterialPropertyBuilder::MaterialPropertyBuilder(const MaterialPropertyBuilder &copy)
    {
        
    }
    
    MaterialPropertyBuilder::MaterialPropertyBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    MaterialPropertyBuilder::~MaterialPropertyBuilder()
    {
    }
    
    MaterialPropertyBuilder &MaterialPropertyBuilder::operator=(const MaterialPropertyBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	MaterialPropertyBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void MaterialPropertyBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 MaterialPropertyBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_MaterialProperty;
    }
    
    const char *MaterialPropertyBuilder::getClassName()const
    {
        return "MaterialPropertyBuilder";
    }
    
    u32 MaterialPropertyBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_MaterialPropertyBuilder;
    }
}