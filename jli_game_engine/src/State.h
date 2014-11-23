//
//  State.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__State__
#define __JLIGameEngineTest__State__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"
#include "AbstractState.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) State:
    public AbstractState<AbstractFactoryObject>
    {
        friend class WorldFactory;
    public:
        State();
        State(const AbstractBuilder&);
        State(const State &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~State();
        State &operator=(const State &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getName()const;
        virtual u32 getType()const;
    public:
        virtual void enter(AbstractFactoryObject*);
        virtual void update(AbstractFactoryObject*, f32);
        virtual void exit(AbstractFactoryObject*);
        virtual bool onMessage(AbstractFactoryObject*,const Telegram&);
        //TODO: fill in specific methods for State
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__State__) */
