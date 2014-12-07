//
//  NodeStateMachineBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "NodeStateMachineBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    NodeStateMachineBuilder::NodeStateMachineBuilder()
    {
    }
    
    NodeStateMachineBuilder::NodeStateMachineBuilder(const NodeStateMachineBuilder &copy)
    {
        
    }
    
    NodeStateMachineBuilder::NodeStateMachineBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    NodeStateMachineBuilder::~NodeStateMachineBuilder()
    {
    }
    
    NodeStateMachineBuilder &NodeStateMachineBuilder::operator=(const NodeStateMachineBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	NodeStateMachineBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void NodeStateMachineBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 NodeStateMachineBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_NodeStateMachine;
    }
    
    const char *NodeStateMachineBuilder::getClassName()const
    {
        return "NodeStateMachineBuilder";
    }
    
    u32 NodeStateMachineBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_NodeStateMachineBuilder;
    }
}