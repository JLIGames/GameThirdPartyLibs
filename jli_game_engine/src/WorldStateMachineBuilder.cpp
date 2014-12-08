//
//  WorldStateMachineBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "WorldStateMachineBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    WorldStateMachineBuilder::WorldStateMachineBuilder()
    {
    }
    
    WorldStateMachineBuilder::WorldStateMachineBuilder(const WorldStateMachineBuilder &copy)
    {
        
    }
    
    WorldStateMachineBuilder::WorldStateMachineBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    WorldStateMachineBuilder::~WorldStateMachineBuilder()
    {
    }
    
    WorldStateMachineBuilder &WorldStateMachineBuilder::operator=(const WorldStateMachineBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	WorldStateMachineBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void WorldStateMachineBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 WorldStateMachineBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_WorldStateMachine;
    }
    
    const char *WorldStateMachineBuilder::getClassName()const
    {
        return "WorldStateMachineBuilder";
    }
    
    u32 WorldStateMachineBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_WorldStateMachineBuilder;
    }
    
    WorldStateMachineBuilder::operator std::string() const
    {
        return "TODO";
    }
}