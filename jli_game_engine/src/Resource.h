//
//  Resource.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/21/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__Resource__
#define __JLIGameEngineTest__Resource__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) Resource:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        Resource();
        Resource(const AbstractBuilder&);
        Resource(const Resource &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        
        virtual ~Resource();
        Resource &operator=(const Resource &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        //TODO: fill in specific methods for Resource
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__SceneResource__) */
