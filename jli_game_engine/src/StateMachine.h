//
//  StateMachine.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__StateMachine__
#define __JLIGameEngineTest__StateMachine__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"
#include "AbstractStateMachine.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) StateMachine:
    public AbstractStateMachine<AbstractFactoryObject>
    {
        friend class WorldFactory;
    public:
        StateMachine();
        StateMachine(const AbstractBuilder&);
        StateMachine(const StateMachine &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~StateMachine();
        StateMachine &operator=(const StateMachine &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for StateMachine
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__StateMachine__) */
