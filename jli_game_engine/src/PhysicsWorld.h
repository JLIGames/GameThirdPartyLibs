//
//  PhysicsWorld.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__PhysicsWorld__
#define __JLIGameEngineTest__PhysicsWorld__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) PhysicsWorld:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        PhysicsWorld();
        PhysicsWorld(const AbstractBuilder&);
        PhysicsWorld(const PhysicsWorld &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~PhysicsWorld();
        PhysicsWorld &operator=(const PhysicsWorld &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for PhysicsWorld
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__PhysicsWorld__) */
