//
//  BaseSoftPhysicsBodyBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__BaseSoftPhysicsBodyBuilder__
#define __JLIGameEngineTest__BaseSoftPhysicsBodyBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) BaseSoftPhysicsBodyBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        BaseSoftPhysicsBodyBuilder();
        BaseSoftPhysicsBodyBuilder(const BaseSoftPhysicsBodyBuilder &);
        BaseSoftPhysicsBodyBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~BaseSoftPhysicsBodyBuilder();
        
        BaseSoftPhysicsBodyBuilder &operator=(const BaseSoftPhysicsBodyBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getName()const;
        virtual u32 getType()const;
    };
}

#endif /* defined(__JLIGameEngineTest__BaseSoftPhysicsBodyBuilder__) */
