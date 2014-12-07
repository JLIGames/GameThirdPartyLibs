//
//  AbstractPhysicsBody.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__AbstractPhysicsBody__
#define __JLIGameEngineTest__AbstractPhysicsBody__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) AbstractPhysicsBody:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        AbstractPhysicsBody();
        AbstractPhysicsBody(const AbstractBuilder&);
        AbstractPhysicsBody(const AbstractPhysicsBody &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~AbstractPhysicsBody();
        AbstractPhysicsBody &operator=(const AbstractPhysicsBody &);
        
        virtual	s32	calculateSerializeBufferSize() const = 0;
        virtual	void serialize(void*, btSerializer*) const = 0;
        
        virtual const char *getClassName()const = 0;
        virtual u32 getType()const = 0;
        
        //TODO: fill in specific methods for AbstractPhysicsBody
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__AbstractPhysicsBody__) */
