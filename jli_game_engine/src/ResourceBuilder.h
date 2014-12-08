//
//  ResourceBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/21/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__ResourceBuilder__
#define __JLIGameEngineTest__ResourceBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) ResourceBuilder :
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        ResourceBuilder();
        ResourceBuilder(const ResourceBuilder &);
        ResourceBuilder(const AbstractBuilder&);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        
        virtual ~ResourceBuilder();
        
        ResourceBuilder &operator=(const ResourceBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void* dataBuffer, btSerializer* serializer) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
    };
}


#endif /* defined(__JLIGameEngineTest__ResourceBuilder__) */
