//
//  MaterialBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__MaterialBuilder__
#define __JLIGameEngineTest__MaterialBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) MaterialBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        MaterialBuilder();
        MaterialBuilder(const MaterialBuilder &);
        MaterialBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~MaterialBuilder();
        
        MaterialBuilder &operator=(const MaterialBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getClassName()const;
        virtual u32 getType()const;
    };
}

#endif /* defined(__JLIGameEngineTest__MaterialBuilder__) */
