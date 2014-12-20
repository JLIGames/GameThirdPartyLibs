//
//  WorldStateMachine.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "WorldStateMachine.h"
#include "WorldFactory.h"

namespace jli
{
    WorldStateMachine::WorldStateMachine():
    AbstractStateMachine<void>()
    {
        
    }
    
    WorldStateMachine::WorldStateMachine(const AbstractBuilder &builder):
    AbstractStateMachine<void>(builder)
    {
        
    }
    
    WorldStateMachine::WorldStateMachine(const WorldStateMachine &copy):
    AbstractStateMachine<void>(copy)
    {
        
    }
    
    WorldStateMachine::~WorldStateMachine()
    {
        
    }
    
    WorldStateMachine &WorldStateMachine::operator=(const WorldStateMachine &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	WorldStateMachine::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void WorldStateMachine::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *WorldStateMachine::getClassName()const
    {
        return "WorldStateMachine";
    }
    
    u32 WorldStateMachine::getType()const
    {
        return JLI_OBJECT_TYPE_WorldStateMachine;
    }
    
    WorldStateMachine::operator std::string() const
    {
        return "TODO";
    }
}