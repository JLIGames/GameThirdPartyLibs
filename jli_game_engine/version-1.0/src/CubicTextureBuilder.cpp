//
//  CubicTextureBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "CubicTextureBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    CubicTextureBuilder::CubicTextureBuilder()
    {
    }
    
    CubicTextureBuilder::CubicTextureBuilder(const CubicTextureBuilder &copy)
    {
        
    }
    
    CubicTextureBuilder::CubicTextureBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    CubicTextureBuilder::~CubicTextureBuilder()
    {
    }
    
    CubicTextureBuilder &CubicTextureBuilder::operator=(const CubicTextureBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	CubicTextureBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void CubicTextureBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 CubicTextureBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_CubicTexture;
    }
    
    const char *CubicTextureBuilder::getClassName()const
    {
        return "CubicTextureBuilder";
    }
    
    u32 CubicTextureBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_CubicTextureBuilder;
    }
    
    CubicTextureBuilder::operator std::string() const
    {
        return "TODO";
    }
}