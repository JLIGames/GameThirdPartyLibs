//
//  NodeState.h
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__NodeState__
#define __JLIGameEngineTest__NodeState__

#include "Node.h"
#include "AbstractBuilder.h"
#include "AbstractState.h"

namespace jli
{
//    ATTRIBUTE_ALIGNED16(class) NodeState:
    class NodeState:
    public AbstractState<Node>
    {
        friend class WorldFactory;
    public:
        NodeState();
        NodeState(const AbstractBuilder&);
        NodeState(const NodeState &);
//        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~NodeState();
        NodeState &operator=(const NodeState &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
    public:
        virtual void enter(Node*);
        virtual void update(Node*, f32);
        virtual void exit(Node*);
        virtual bool onMessage(Node*,const Telegram&)const;
        //TODO: fill in specific methods for NodeState
        
        /**
         *  The name to set to this NodeState instance.
         *
         *  @param name The name of this instance.
         */
        void setName(const char *name);
        
        /**
         *  The name to set to this NodeState intance.
         *
         *  @return The name of this instance.
         */
        const char *getName()const;
    protected:
    private:
        std::string m_Name;
    };
}

#endif /* defined(__JLIGameEngineTest__NodeState__) */
