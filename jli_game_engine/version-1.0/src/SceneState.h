//
//  SceneState.h
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__SceneState__
#define __JLIGameEngineTest__SceneState__

#include "Scene.h"
#include "AbstractBuilder.h"
#include "AbstractState.h"

namespace jli
{
//    ATTRIBUTE_ALIGNED16(class) SceneState:
    class SceneState:
    public AbstractState<Scene>
    {
        friend class WorldFactory;
    public:
        SceneState();
        SceneState(const AbstractBuilder&);
        SceneState(const SceneState &);
//        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~SceneState();
        SceneState &operator=(const SceneState &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
    public:
        virtual void enter(Scene*);
        virtual void update(Scene*, f32);
        virtual void exit(Scene*);
        virtual bool onMessage(Scene*,const Telegram&)const;
        
        //TODO: fill in specific methods for SceneState
        
        /**
         *  The name to set to this instance.
         *
         *  @param name The name of this instance.
         */
        void setName(const char *name);
        
        /**
         *  The name of this intance.
         *
         *  @return The name of this instance.
         */
        const char *getName()const;
    protected:
    private:
        std::string m_Name;
    };
}

#endif /* defined(__JLIGameEngineTest__SceneState__) */
