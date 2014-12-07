//
//  WorldStateMachineBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__WorldStateMachineBuilder__
#define __JLIGameEngineTest__WorldStateMachineBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) WorldStateMachineBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        WorldStateMachineBuilder();
        WorldStateMachineBuilder(const WorldStateMachineBuilder &);
        WorldStateMachineBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~WorldStateMachineBuilder();
        
        WorldStateMachineBuilder &operator=(const WorldStateMachineBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getClassName()const;
        virtual u32 getType()const;
    };
}

#endif /* defined(__JLIGameEngineTest__WorldStateMachineBuilder__) */
