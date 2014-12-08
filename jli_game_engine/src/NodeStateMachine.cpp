//
//  NodeStateMachine.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "NodeStateMachine.h"
#include "WorldFactory.h"

namespace jli
{
    NodeStateMachine::NodeStateMachine():
    AbstractStateMachine<Node>()
    {
        
    }
    
    NodeStateMachine::NodeStateMachine(const AbstractBuilder &builder):
    AbstractStateMachine<Node>(builder)
    {
        
    }
    
    NodeStateMachine::NodeStateMachine(const NodeStateMachine &copy):
    AbstractStateMachine<Node>(copy)
    {
        
    }
    
    NodeStateMachine::~NodeStateMachine()
    {
        
    }
    
    NodeStateMachine &NodeStateMachine::operator=(const NodeStateMachine &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	NodeStateMachine::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void NodeStateMachine::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *NodeStateMachine::getClassName()const
    {
        return "NodeStateMachine";
    }
    
    u32 NodeStateMachine::getType()const
    {
        return JLI_OBJECT_TYPE_NodeStateMachine;
    }
    
    NodeStateMachine::operator std::string() const
    {
        return "TODO";
    }
}