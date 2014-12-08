//
//  Clock.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__Clock__
#define __JLIGameEngineTest__Clock__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) Clock:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        Clock();
        Clock(const AbstractBuilder&);
        Clock(const Clock &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~Clock();
        Clock &operator=(const Clock &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        //TODO: fill in specific methods for Clock
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__Clock__) */
