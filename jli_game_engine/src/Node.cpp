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
    AbstractFactoryObject(this),
    m_Name("Node")
    {
    }
    
    Node::Node(const AbstractBuilder &builder):
    AbstractFactoryObject(this),
    m_Name("Node")
    {
    }
    
    Node::Node(const Node &copy):
    AbstractFactoryObject(this),
    m_Name("Node")
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
    
    const char *Node::getClassName()const
    {
        return "Node";
    }
    
    u32 Node::getType()const
    {
        return JLI_OBJECT_TYPE_Node;
    }
    
    void Node::setName(const char *name)
    {
        m_Name = name;
    }
    
    const char *Node::getName()const
    {
        return m_Name.c_str();
    }
}
