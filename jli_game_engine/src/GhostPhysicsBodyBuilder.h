//
//  GhostPhysicsBodyBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__GhostPhysicsBodyBuilder__
#define __JLIGameEngineTest__GhostPhysicsBodyBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) GhostPhysicsBodyBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        GhostPhysicsBodyBuilder();
        GhostPhysicsBodyBuilder(const GhostPhysicsBodyBuilder &);
        GhostPhysicsBodyBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~GhostPhysicsBodyBuilder();
        
        GhostPhysicsBodyBuilder &operator=(const GhostPhysicsBodyBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getName()const;
        virtual u32 getType()const;
    };
}

#endif /* defined(__JLIGameEngineTest__GhostPhysicsBodyBuilder__) */
