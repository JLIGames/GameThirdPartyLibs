//
//  KinematicPhysicsBody.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__KinematicPhysicsBody__
#define __JLIGameEngineTest__KinematicPhysicsBody__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) KinematicPhysicsBody:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        KinematicPhysicsBody();
        KinematicPhysicsBody(const AbstractBuilder&);
        KinematicPhysicsBody(const KinematicPhysicsBody &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~KinematicPhysicsBody();
        KinematicPhysicsBody &operator=(const KinematicPhysicsBody &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for KinematicPhysicsBody
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__KinematicPhysicsBody__) */
