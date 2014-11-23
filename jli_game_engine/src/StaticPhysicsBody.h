//
//  StaticPhysicsBody.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__StaticPhysicsBody__
#define __JLIGameEngineTest__StaticPhysicsBody__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) StaticPhysicsBody:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        StaticPhysicsBody();
        StaticPhysicsBody(const AbstractBuilder&);
        StaticPhysicsBody(const StaticPhysicsBody &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~StaticPhysicsBody();
        StaticPhysicsBody &operator=(const StaticPhysicsBody &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for StaticPhysicsBody
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__StaticPhysicsBody__) */
