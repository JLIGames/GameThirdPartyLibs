//
//  CubicTexture.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "CubicTexture.h"
#include "WorldFactory.h"

namespace jli
{
    CubicTexture::CubicTexture():
    Texture()
    {
        
    }
    
    CubicTexture::CubicTexture(const AbstractBuilder &builder):
    Texture(builder)
    {
        
    }
    
    CubicTexture::CubicTexture(const CubicTexture &copy):
    Texture(copy)
    {
        
    }
    
    CubicTexture::~CubicTexture()
    {
        
    }
    
    CubicTexture &CubicTexture::operator=(const CubicTexture &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	CubicTexture::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void CubicTexture::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *CubicTexture::getName()const
    {
        return "CubicTexture";
    }
    
    u32 CubicTexture::getType()const
    {
        return type::CubicTexture;
    }
}