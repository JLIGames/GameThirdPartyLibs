//
//  Texture.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "Texture.h"
#include "WorldFactory.h"

namespace jli
{
    Texture::Texture():
    AbstractFactoryObject(this)
    {
        
    }
    
    Texture::Texture(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    Texture::Texture(const Texture &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    Texture::~Texture()
    {
        
    }
    
    Texture &Texture::operator=(const Texture &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	Texture::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void Texture::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *Texture::getClassName()const
    {
        return "Texture";
    }
    
    u32 Texture::getType()const
    {
        return JLI_OBJECT_TYPE_Texture;
    }
}