//
//  State.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "State.h"
#include "WorldFactory.h"

namespace jli
{
    State::State():
    AbstractState<AbstractFactoryObject>()
    {
        
    }
    
    State::State(const AbstractBuilder &builder):
    AbstractState<AbstractFactoryObject>(builder)
    {
        
    }
    
    State::State(const State &copy):
    AbstractState<AbstractFactoryObject>(copy)
    {
        
    }
    
    State::~State()
    {
        
    }
    
    State &State::operator=(const State &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	State::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void State::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *State::getName()const
    {
        return "State";
    }
    
    u32 State::getType()const
    {
        return type::State;
    }
    
    void State::enter(AbstractFactoryObject *object)
    {
        
    }
    
    void State::update(AbstractFactoryObject *object, f32 timeStep)
    {
        
    }
    
    void State::exit(AbstractFactoryObject *object)
    {
        
    }
    
    bool State::onMessage(AbstractFactoryObject *object, const Telegram &msg)
    {
        return false;
    }
}