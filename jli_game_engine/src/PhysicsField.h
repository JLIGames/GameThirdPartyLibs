//
//  PhysicsField.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__PhysicsField__
#define __JLIGameEngineTest__PhysicsField__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) PhysicsField:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        PhysicsField();
        PhysicsField(const AbstractBuilder&);
        PhysicsField(const PhysicsField &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~PhysicsField();
        PhysicsField &operator=(const PhysicsField &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for PhysicsField
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__PhysicsField__) */
