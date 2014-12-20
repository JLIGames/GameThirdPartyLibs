//
//  Action.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__Action__
#define __JLIGameEngineTest__Action__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
//    ATTRIBUTE_ALIGNED16(class) Action:
	class Action:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        Action();
        Action(const AbstractBuilder&);
        Action(const Action &);
//        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~Action();
        Action &operator=(const Action &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        //TODO: fill in specific methods for Action
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__Action__) */
