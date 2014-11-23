//
//  NodeBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__NodeBuilder__
#define __JLIGameEngineTest__NodeBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) NodeBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        NodeBuilder();
        NodeBuilder(const NodeBuilder &);
        NodeBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        
        virtual ~NodeBuilder();
        
        NodeBuilder &operator=(const NodeBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getName()const;
        virtual u32 getType()const;
    };
}

#endif /* defined(__JLIGameEngineTest__NodeBuilder__) */
