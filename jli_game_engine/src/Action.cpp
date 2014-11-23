//
//  Action.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "Action.h"
#include "WorldFactory.h"

namespace jli
{
    Action::Action():
    AbstractFactoryObject(this)
    {
        
    }
    
    Action::Action(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    Action::Action(const Action &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    Action::~Action()
    {
        
    }
    
    Action &Action::operator=(const Action &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	Action::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void Action::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *Action::getName()const
    {
        return "Action";
    }
    
    u32 Action::getType()const
    {
        return type::Action;
    }
}