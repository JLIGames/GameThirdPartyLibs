//
//  SceneStateMachine.h
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__SceneStateMachine__
#define __JLIGameEngineTest__SceneStateMachine__

#include "Scene.h"
#include "AbstractBuilder.h"
#include "AbstractStateMachine.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) SceneStateMachine:
    public AbstractStateMachine<Scene>
    {
        friend class WorldFactory;
    public:
        SceneStateMachine();
        SceneStateMachine(const AbstractBuilder&);
        SceneStateMachine(const SceneStateMachine &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~SceneStateMachine();
        SceneStateMachine &operator=(const SceneStateMachine &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for SceneStateMachine
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__SceneStateMachine__) */
