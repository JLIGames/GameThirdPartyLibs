//
//  SoftPhysicsBodyBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__SoftPhysicsBodyBuilder__
#define __JLIGameEngineTest__SoftPhysicsBodyBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) SoftPhysicsBodyBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        SoftPhysicsBodyBuilder();
        SoftPhysicsBodyBuilder(const SoftPhysicsBodyBuilder &);
        SoftPhysicsBodyBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~SoftPhysicsBodyBuilder();
        
        SoftPhysicsBodyBuilder &operator=(const SoftPhysicsBodyBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getClassName()const;
        virtual u32 getType()const;
    };
}

#endif /* defined(__JLIGameEngineTest__SoftPhysicsBodyBuilder__) */
