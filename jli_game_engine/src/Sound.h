//
//  Sound.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__Sound__
#define __JLIGameEngineTest__Sound__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) Sound:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        Sound();
        Sound(const AbstractBuilder&);
        Sound(const Sound &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~Sound();
        Sound &operator=(const Sound &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for Sound
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__Sound__) */
