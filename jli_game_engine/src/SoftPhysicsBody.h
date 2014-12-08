//
//  SoftPhysicsBody.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__SoftPhysicsBody__
#define __JLIGameEngineTest__SoftPhysicsBody__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) SoftPhysicsBody:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        SoftPhysicsBody();
        SoftPhysicsBody(const AbstractBuilder&);
        SoftPhysicsBody(const SoftPhysicsBody &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~SoftPhysicsBody();
        SoftPhysicsBody &operator=(const SoftPhysicsBody &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        //TODO: fill in specific methods for SoftPhysicsBody
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__SoftPhysicsBody__) */
