//
//  SceneStateBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__SceneStateBuilder__
#define __JLIGameEngineTest__SceneStateBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
//    ATTRIBUTE_ALIGNED16(class) SceneStateBuilder :
    class SceneStateBuilder:
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        SceneStateBuilder();
        SceneStateBuilder(const SceneStateBuilder &);
        SceneStateBuilder(const AbstractBuilder&);
//        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~SceneStateBuilder();
        
        SceneStateBuilder &operator=(const SceneStateBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
    };
}

#endif /* defined(__JLIGameEngineTest__SceneStateBuilder__) */
