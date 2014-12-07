//
//  TextureBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "TextureBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    TextureBuilder::TextureBuilder()
    {
    }
    
    TextureBuilder::TextureBuilder(const TextureBuilder &copy)
    {
        
    }
    
    TextureBuilder::TextureBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    TextureBuilder::~TextureBuilder()
    {
    }
    
    TextureBuilder &TextureBuilder::operator=(const TextureBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	TextureBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void TextureBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 TextureBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_Texture;
    }
    
    const char *TextureBuilder::getClassName()const
    {
        return "TextureBuilder";
    }
    
    u32 TextureBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_TextureBuilder;
    }
}