//
//  BaseRigidPhysicsBody.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__BaseRigidPhysicsBody__
#define __JLIGameEngineTest__BaseRigidPhysicsBody__

#include "AbstractPhysicsBody.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) BaseRigidPhysicsBody:
    public AbstractPhysicsBody
    {
        friend class WorldFactory;
    public:
        BaseRigidPhysicsBody();
        BaseRigidPhysicsBody(const AbstractBuilder&);
        BaseRigidPhysicsBody(const BaseRigidPhysicsBody &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~BaseRigidPhysicsBody();
        BaseRigidPhysicsBody &operator=(const BaseRigidPhysicsBody &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for BaseRigidPhysicsBody
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__BaseRigidPhysicsBody__) */
