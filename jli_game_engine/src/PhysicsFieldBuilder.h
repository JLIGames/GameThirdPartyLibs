//
//  PhysicsFieldBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__PhysicsFieldBuilder__
#define __JLIGameEngineTest__PhysicsFieldBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) PhysicsFieldBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        PhysicsFieldBuilder();
        PhysicsFieldBuilder(const PhysicsFieldBuilder &);
        PhysicsFieldBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~PhysicsFieldBuilder();
        
        PhysicsFieldBuilder &operator=(const PhysicsFieldBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getName()const;
        virtual u32 getType()const;
    };
}

#endif /* defined(__JLIGameEngineTest__PhysicsFieldBuilder__) */
