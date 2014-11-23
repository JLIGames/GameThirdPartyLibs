//
//  StateBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "StateBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    StateBuilder::StateBuilder()
    {
    }
    
    StateBuilder::StateBuilder(const StateBuilder &copy)
    {
        
    }
    
    StateBuilder::StateBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    StateBuilder::~StateBuilder()
    {
    }
    
    StateBuilder &StateBuilder::operator=(const StateBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	StateBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void StateBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 StateBuilder::getObjectType()const
    {
        return type::State;
    }
    
    const char *StateBuilder::getName()const
    {
        return "StateBuilder";
    }
    
    u32 StateBuilder::getType()const
    {
        return type::StateBuilder;
    }
}