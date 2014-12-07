//
//  RigidPhysicsBody.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__RigidPhysicsBody__
#define __JLIGameEngineTest__RigidPhysicsBody__

#include "AbstractPhysicsBody.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) RigidPhysicsBody:
    public AbstractPhysicsBody
    {
        friend class WorldFactory;
    public:
        RigidPhysicsBody();
        RigidPhysicsBody(const AbstractBuilder&);
        RigidPhysicsBody(const RigidPhysicsBody &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~RigidPhysicsBody();
        RigidPhysicsBody &operator=(const RigidPhysicsBody &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for RigidPhysicsBody
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__RigidPhysicsBody__) */
