//
//  StateMachineBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__StateMachineBuilder__
#define __JLIGameEngineTest__StateMachineBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) StateMachineBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        StateMachineBuilder();
        StateMachineBuilder(const StateMachineBuilder &);
        StateMachineBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~StateMachineBuilder();
        
        StateMachineBuilder &operator=(const StateMachineBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getName()const;
        virtual u32 getType()const;
    };
}

#endif /* defined(__JLIGameEngineTest__StateMachineBuilder__) */
