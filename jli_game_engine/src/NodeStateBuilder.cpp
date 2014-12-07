//
//  NodeStateBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "NodeStateBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    NodeStateBuilder::NodeStateBuilder()
    {
    }
    
    NodeStateBuilder::NodeStateBuilder(const NodeStateBuilder &copy)
    {
        
    }
    
    NodeStateBuilder::NodeStateBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    NodeStateBuilder::~NodeStateBuilder()
    {
    }
    
    NodeStateBuilder &NodeStateBuilder::operator=(const NodeStateBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	NodeStateBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void NodeStateBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 NodeStateBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_NodeState;
    }
    
    const char *NodeStateBuilder::getClassName()const
    {
        return "NodeStateBuilder";
    }
    
    u32 NodeStateBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_NodeStateBuilder;
    }
}