//
//  CollisionResponseBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__CollisionResponseBuilder__
#define __JLIGameEngineTest__CollisionResponseBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) CollisionResponseBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        CollisionResponseBuilder();
        CollisionResponseBuilder(const CollisionResponseBuilder &);
        CollisionResponseBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~CollisionResponseBuilder();
        
        CollisionResponseBuilder &operator=(const CollisionResponseBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getClassName()const;
        virtual u32 getType()const;
    };
}

#endif /* defined(__JLIGameEngineTest__CollisionResponseBuilder__) */
