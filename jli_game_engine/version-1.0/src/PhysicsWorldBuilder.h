//
//  PhysicsWorldBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__PhysicsWorldBuilder__
#define __JLIGameEngineTest__PhysicsWorldBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
//    ATTRIBUTE_ALIGNED16(class) PhysicsWorldBuilder :
    class PhysicsWorldBuilder:
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        PhysicsWorldBuilder();
        PhysicsWorldBuilder(const PhysicsWorldBuilder &);
        PhysicsWorldBuilder(const AbstractBuilder&);
//        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~PhysicsWorldBuilder();
        
        PhysicsWorldBuilder &operator=(const PhysicsWorldBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
    };
}

#endif /* defined(__JLIGameEngineTest__PhysicsWorldBuilder__) */
