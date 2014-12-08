//
//  GeometryBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__GeometryBuilder__
#define __JLIGameEngineTest__GeometryBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) GeometryBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        GeometryBuilder();
        GeometryBuilder(const GeometryBuilder &);
        GeometryBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~GeometryBuilder();
        
        GeometryBuilder &operator=(const GeometryBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
    };
}

#endif /* defined(__JLIGameEngineTest__GeometryBuilder__) */
