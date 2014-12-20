//
//  SceneStateMachineBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__SceneStateMachineBuilder__
#define __JLIGameEngineTest__SceneStateMachineBuilder__

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractBuilder.h"
#include "btSerializer.h"

namespace jli
{
//    ATTRIBUTE_ALIGNED16(class) SceneStateMachineBuilder :
    class SceneStateMachineBuilder:
    public AbstractBuilder
    {
        friend class WorldFactory;
    protected:
        SceneStateMachineBuilder();
        SceneStateMachineBuilder(const SceneStateMachineBuilder &);
        SceneStateMachineBuilder(const AbstractBuilder&);
//        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~SceneStateMachineBuilder();
        
        SceneStateMachineBuilder &operator=(const SceneStateMachineBuilder &);
        
    public:
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual u32 getObjectType()const;
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
    };
}

#endif /* defined(__JLIGameEngineTest__SceneStateMachineBuilder__) */
