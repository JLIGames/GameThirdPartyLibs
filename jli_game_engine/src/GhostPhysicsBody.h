//
//  GhostPhysicsBody.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__GhostPhysicsBody__
#define __JLIGameEngineTest__GhostPhysicsBody__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) GhostPhysicsBody:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        GhostPhysicsBody();
        GhostPhysicsBody(const AbstractBuilder&);
        GhostPhysicsBody(const GhostPhysicsBody &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~GhostPhysicsBody();
        GhostPhysicsBody &operator=(const GhostPhysicsBody &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        //TODO: fill in specific methods for GhostPhysicsBody
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__GhostPhysicsBody__) */
