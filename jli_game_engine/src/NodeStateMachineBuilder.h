//
//  NodeStateMachineBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__NodeStateMachineBuilder__
#define __JLIGameEngineTest__NodeStateMachineBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) NodeStateMachineBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        NodeStateMachineBuilder();
        NodeStateMachineBuilder(const NodeStateMachineBuilder &);
        NodeStateMachineBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~NodeStateMachineBuilder();
        
        NodeStateMachineBuilder &operator=(const NodeStateMachineBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getClassName()const;
        virtual u32 getType()const;
    };
}

#endif /* defined(__JLIGameEngineTest__NodeStateMachineBuilder__) */
