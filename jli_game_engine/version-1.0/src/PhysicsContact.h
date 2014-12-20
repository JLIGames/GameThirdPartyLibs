//
//  PhysicsContact.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__PhysicsContact__
#define __JLIGameEngineTest__PhysicsContact__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
//    ATTRIBUTE_ALIGNED16(class) PhysicsContact:
    class PhysicsContact:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        PhysicsContact();
        PhysicsContact(const AbstractBuilder&);
        PhysicsContact(const PhysicsContact &);
//        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~PhysicsContact();
        PhysicsContact &operator=(const PhysicsContact &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        //TODO: fill in specific methods for PhysicsContact
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__PhysicsContact__) */
