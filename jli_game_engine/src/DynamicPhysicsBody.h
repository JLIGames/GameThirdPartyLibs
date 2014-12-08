//
//  DynamicPhysicsBody.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__DynamicPhysicsBody__
#define __JLIGameEngineTest__DynamicPhysicsBody__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) DynamicPhysicsBody:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        DynamicPhysicsBody();
        DynamicPhysicsBody(const AbstractBuilder&);
        DynamicPhysicsBody(const DynamicPhysicsBody &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~DynamicPhysicsBody();
        DynamicPhysicsBody &operator=(const DynamicPhysicsBody &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        //TODO: fill in specific methods for DynamicPhysicsBody
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__DynamicPhysicsBody__) */
