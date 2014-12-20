//
//  RigidPhysicsBodyBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__RigidPhysicsBodyBuilder__
#define __JLIGameEngineTest__RigidPhysicsBodyBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
//    ATTRIBUTE_ALIGNED16(class) RigidPhysicsBodyBuilder :
    class RigidPhysicsBodyBuilder:
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        RigidPhysicsBodyBuilder();
        RigidPhysicsBodyBuilder(const RigidPhysicsBodyBuilder &);
        RigidPhysicsBodyBuilder(const AbstractBuilder&);
//        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~RigidPhysicsBodyBuilder();
        
        RigidPhysicsBodyBuilder &operator=(const RigidPhysicsBodyBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
    };
}

#endif /* defined(__JLIGameEngineTest__RigidPhysicsBodyBuilder__) */
