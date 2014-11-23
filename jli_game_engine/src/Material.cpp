//
//  Material.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "Material.h"
#include "WorldFactory.h"

namespace jli
{
    Material::Material():
    AbstractFactoryObject(this)
    {
        
    }
    
    Material::Material(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    Material::Material(const Material &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    Material::~Material()
    {
        
    }
    
    Material &Material::operator=(const Material &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	Material::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void Material::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *Material::getName()const
    {
        return "Material";
    }
    
    u32 Material::getType()const
    {
        return type::Material;
    }
}