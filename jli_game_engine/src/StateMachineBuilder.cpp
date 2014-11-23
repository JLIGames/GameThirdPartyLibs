//
//  StateMachineBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "StateMachineBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    StateMachineBuilder::StateMachineBuilder()
    {
    }
    
    StateMachineBuilder::StateMachineBuilder(const StateMachineBuilder &copy)
    {
        
    }
    
    StateMachineBuilder::StateMachineBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    StateMachineBuilder::~StateMachineBuilder()
    {
    }
    
    StateMachineBuilder &StateMachineBuilder::operator=(const StateMachineBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	StateMachineBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void StateMachineBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 StateMachineBuilder::getObjectType()const
    {
        return type::StateMachine;
    }
    
    const char *StateMachineBuilder::getName()const
    {
        return "StateMachineBuilder";
    }
    
    u32 StateMachineBuilder::getType()const
    {
        return type::StateMachineBuilder;
    }
}