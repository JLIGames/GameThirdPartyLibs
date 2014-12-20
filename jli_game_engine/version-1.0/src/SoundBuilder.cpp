//
//  SoundBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "SoundBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    SoundBuilder::SoundBuilder()
    {
    }
    
    SoundBuilder::SoundBuilder(const SoundBuilder &copy)
    {
        
    }
    
    SoundBuilder::SoundBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    SoundBuilder::~SoundBuilder()
    {
    }
    
    SoundBuilder &SoundBuilder::operator=(const SoundBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	SoundBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void SoundBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 SoundBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_Sound;
    }
    
    const char *SoundBuilder::getClassName()const
    {
        return "SoundBuilder";
    }
    
    u32 SoundBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_SoundBuilder;
    }
    
    SoundBuilder::operator std::string() const
    {
        return "TODO";
    }
}