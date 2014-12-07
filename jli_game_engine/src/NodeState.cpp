//
//  NodeState.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "NodeState.h"
#include "WorldFactory.h"
#include "World.h"

namespace jli
{
    NodeState::NodeState():
    AbstractState<Node>(),
    m_Name("NodeState")
    {
    }
    
    NodeState::NodeState(const AbstractBuilder &builder):
    AbstractState<Node>(builder),
    m_Name("NodeState")
    {
    }
    
    NodeState::NodeState(const NodeState &copy):
    AbstractState<Node>(copy),
    m_Name("NodeState")
    {
    }
    
    NodeState::~NodeState()
    {
        
    }
    
    NodeState &NodeState::operator=(const NodeState &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	NodeState::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void NodeState::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *NodeState::getClassName()const
    {
        return "NodeState";
    }
    
    u32 NodeState::getType()const
    {
        return JLI_OBJECT_TYPE_Node;
    }
    
    void NodeState::enter(Node *object)
    {
        char buffer[256];
        sprintf(buffer, "%s%s%s", object->getName(), getName(), "Enter");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer, object);
    }
    
    void NodeState::update(Node *object, f32 timeStep)
    {
        char buffer[256];
        sprintf(buffer, "%s%s%s", object->getName(), getName(), "Update");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer, object, timeStep);
    }
    
    void NodeState::exit(Node *object)
    {
        char buffer[256];
        sprintf(buffer, "%s%s%s", object->getName(), getName(), "Exit");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer, object);
    }
    
    bool NodeState::onMessage(Node *object, const Telegram &msg)
    {
        bool ret;
        char buffer[256];
        
        sprintf(buffer, "%s%s%s", object->getName(), getName(), "OnMessage");
        jli::World::getInstance()->getWorldLuaVirtualMachine()->execute(buffer, msg, ret);
        
        return ret;
    }
    
    void NodeState::setName(const char *name)
    {
        m_Name = name;
    }
    
    const char *NodeState::getName()const
    {
        return m_Name.c_str();
    }
}
