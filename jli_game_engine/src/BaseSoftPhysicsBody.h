//
//  BaseSoftPhysicsBody.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__BaseSoftPhysicsBody__
#define __JLIGameEngineTest__BaseSoftPhysicsBody__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) BaseSoftPhysicsBody:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        BaseSoftPhysicsBody();
        BaseSoftPhysicsBody(const AbstractBuilder&);
        BaseSoftPhysicsBody(const BaseSoftPhysicsBody &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~BaseSoftPhysicsBody();
        BaseSoftPhysicsBody &operator=(const BaseSoftPhysicsBody &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for BaseSoftPhysicsBody
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__BaseSoftPhysicsBody__) */
