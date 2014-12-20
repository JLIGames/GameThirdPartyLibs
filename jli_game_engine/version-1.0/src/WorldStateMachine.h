//
//  WorldStateMachine.h
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__WorldStateMachine__
#define __JLIGameEngineTest__WorldStateMachine__

#include "AbstractBuilder.h"
#include "AbstractStateMachine.h"
#include "Input.h"

namespace jli
{
//    ATTRIBUTE_ALIGNED16(class) WorldStateMachine:
	class WorldStateMachine:
    public AbstractStateMachine<void>
    {
        friend class WorldFactory;
    public:
        WorldStateMachine();
        WorldStateMachine(const AbstractBuilder&);
        WorldStateMachine(const WorldStateMachine &);
//        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~WorldStateMachine();
        WorldStateMachine &operator=(const WorldStateMachine &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        //TODO: fill in specific methods for WorldStateMachine
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__WorldStateMachine__) */
