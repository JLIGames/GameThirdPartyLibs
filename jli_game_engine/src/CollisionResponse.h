//
//  CollisionResponse.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__CollisionResponse__
#define __JLIGameEngineTest__CollisionResponse__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) CollisionResponse:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        CollisionResponse();
        CollisionResponse(const AbstractBuilder&);
        CollisionResponse(const CollisionResponse &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~CollisionResponse();
        CollisionResponse &operator=(const CollisionResponse &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for CollisionResponse
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__CollisionResponse__) */
