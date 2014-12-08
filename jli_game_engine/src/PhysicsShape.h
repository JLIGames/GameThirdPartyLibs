//
//  PhysicsShape.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__PhysicsShape__
#define __JLIGameEngineTest__PhysicsShape__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) PhysicsShape:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        PhysicsShape();
        PhysicsShape(const AbstractBuilder&);
        PhysicsShape(const PhysicsShape &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~PhysicsShape();
        PhysicsShape &operator=(const PhysicsShape &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        //TODO: fill in specific methods for PhysicsShape
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__PhysicsShape__) */
