//
//  LightBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "LightBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    LightBuilder::LightBuilder()
    {
    }
    
    LightBuilder::LightBuilder(const LightBuilder &copy)
    {
        
    }
    
    LightBuilder::LightBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    LightBuilder::~LightBuilder()
    {
    }
    
    LightBuilder &LightBuilder::operator=(const LightBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	LightBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void LightBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 LightBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_Light;
    }
    
    const char *LightBuilder::getClassName()const
    {
        return "LightBuilder";
    }
    
    u32 LightBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_LightBuilder;
    }
}