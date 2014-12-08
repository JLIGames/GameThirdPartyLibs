//
//  MaterialBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "MaterialBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    MaterialBuilder::MaterialBuilder()
    {
    }
    
    MaterialBuilder::MaterialBuilder(const MaterialBuilder &copy)
    {
        
    }
    
    MaterialBuilder::MaterialBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    MaterialBuilder::~MaterialBuilder()
    {
    }
    
    MaterialBuilder &MaterialBuilder::operator=(const MaterialBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	MaterialBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void MaterialBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 MaterialBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_Material;
    }
    
    const char *MaterialBuilder::getClassName()const
    {
        return "MaterialBuilder";
    }
    
    u32 MaterialBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_MaterialBuilder;
    }
    
    MaterialBuilder::operator std::string() const
    {
        return "TODO";
    }
}