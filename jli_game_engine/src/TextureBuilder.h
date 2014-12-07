//
//  TextureBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__TextureBuilder__
#define __JLIGameEngineTest__TextureBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) TextureBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        TextureBuilder();
        TextureBuilder(const TextureBuilder &);
        TextureBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~TextureBuilder();
        
        TextureBuilder &operator=(const TextureBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getClassName()const;
        virtual u32 getType()const;
    };
}

#endif /* defined(__JLIGameEngineTest__TextureBuilder__) */
