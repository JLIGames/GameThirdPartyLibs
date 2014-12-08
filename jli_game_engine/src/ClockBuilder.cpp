//
//  ClockBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "ClockBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    ClockBuilder::ClockBuilder()
    {
    }
    
    ClockBuilder::ClockBuilder(const ClockBuilder &copy)
    {
        
    }
    
    ClockBuilder::ClockBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    ClockBuilder::~ClockBuilder()
    {
    }
    
    ClockBuilder &ClockBuilder::operator=(const ClockBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	ClockBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void ClockBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 ClockBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_Clock;
    }
    
    const char *ClockBuilder::getClassName()const
    {
        return "ClockBuilder";
    }
    
    u32 ClockBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_ClockBuilder;
    }
    
    ClockBuilder::operator std::string() const
    {
        return "TODO";
    }
}
