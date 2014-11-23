//
//  Node.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "Node.h"
#include "WorldFactory.h"

namespace jli
{
    Node::Node():
    AbstractFactoryObject(this)
    {
        
    }
    
    Node::Node(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    Node::Node(const Node &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    Node::~Node()
    {
        
    }
    
    Node &Node::operator=(const Node &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	Node::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void Node::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *Node::getName()const
    {
        return "Node";
    }
    
    u32 Node::getType()const
    {
        return type::Node;
    }
}
