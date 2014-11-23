//
//  StateMachine.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "StateMachine.h"
#include "WorldFactory.h"

namespace jli
{
    StateMachine::StateMachine():
    AbstractStateMachine<AbstractFactoryObject>()
    {
        
    }
    
    StateMachine::StateMachine(const AbstractBuilder &builder):
    AbstractStateMachine<AbstractFactoryObject>(builder)
    {
        
    }
    
    StateMachine::StateMachine(const StateMachine &copy):
    AbstractStateMachine<AbstractFactoryObject>(copy)
    {
        
    }
    
    StateMachine::~StateMachine()
    {
        
    }
    
    StateMachine &StateMachine::operator=(const StateMachine &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	StateMachine::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void StateMachine::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *StateMachine::getName()const
    {
        return "StateMachine";
    }
    
    u32 StateMachine::getType()const
    {
        return type::StateMachine;
    }
}