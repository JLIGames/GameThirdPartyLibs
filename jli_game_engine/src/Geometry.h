//
//  Geometry.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__Geometry__
#define __JLIGameEngineTest__Geometry__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"
#include "AbstractDecorator.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) Geometry:
    public AbstractFactoryObject,
    public AbstractDecorator
    {
        friend class WorldFactory;
    public:
        Geometry();
        Geometry(const AbstractBuilder&);
        Geometry(const Geometry &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~Geometry();
        Geometry &operator=(const Geometry &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        //TODO: fill in specific methods for Geometry
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__Geometry__) */
