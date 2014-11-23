//
//  NodeBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "NodeBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    NodeBuilder::NodeBuilder()
    {
    }
    
    NodeBuilder::NodeBuilder(const NodeBuilder &copy)
    {
        
    }
    
    NodeBuilder::NodeBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    NodeBuilder::~NodeBuilder()
    {
    }
    
    NodeBuilder &NodeBuilder::operator=(const NodeBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	NodeBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void NodeBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 NodeBuilder::getObjectType()const
    {
        return type::Node;
    }
    
    const char *NodeBuilder::getName()const
    {
        return "NodeBuilder";
    }
    
    u32 NodeBuilder::getType()const
    {
        return type::NodeBuilder;
    }
}