//
//  WorldStateBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__WorldStateBuilder__
#define __JLIGameEngineTest__WorldStateBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) WorldStateBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        WorldStateBuilder();
        WorldStateBuilder(const WorldStateBuilder &);
        WorldStateBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~WorldStateBuilder();
        
        WorldStateBuilder &operator=(const WorldStateBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getClassName()const;
        virtual u32 getType()const;
    };
}

#endif /* defined(__JLIGameEngineTest__WorldStateBuilder__) */
