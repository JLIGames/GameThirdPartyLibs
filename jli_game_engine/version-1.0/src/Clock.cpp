//
//  Clock.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "Clock.h"
#include "WorldFactory.h"

namespace jli
{
    Clock::Clock():
    AbstractFactoryObject(this)
    {
        
    }
    
    Clock::Clock(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    Clock::Clock(const Clock &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    Clock::~Clock()
    {
        
    }
    
    Clock &Clock::operator=(const Clock &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	Clock::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void Clock::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *Clock::getClassName()const
    {
        return "Clock";
    }
    
    u32 Clock::getType()const
    {
        return JLI_OBJECT_TYPE_Clock;
    }
    
    Clock::operator std::string() const
    {
        return "TODO";
    }
}