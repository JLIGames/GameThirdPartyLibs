//
//  Light.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__Light__
#define __JLIGameEngineTest__Light__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) Light:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        Light();
        Light(const AbstractBuilder&);
        Light(const Light &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~Light();
        Light &operator=(const Light &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for Light
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__Light__) */
