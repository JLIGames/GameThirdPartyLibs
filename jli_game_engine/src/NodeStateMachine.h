//
//  NodeStateMachine.h
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__NodeStateMachine__
#define __JLIGameEngineTest__NodeStateMachine__

#include "Node.h"
#include "AbstractBuilder.h"
#include "AbstractStateMachine.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) NodeStateMachine:
    public AbstractStateMachine<Node>
    {
        friend class WorldFactory;
    public:
        NodeStateMachine();
        NodeStateMachine(const AbstractBuilder&);
        NodeStateMachine(const NodeStateMachine &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~NodeStateMachine();
        NodeStateMachine &operator=(const NodeStateMachine &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for NodeStateMachine
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__NodeStateMachine__) */
