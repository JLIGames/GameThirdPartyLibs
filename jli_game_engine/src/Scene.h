//
//  Scene.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__Scene__
#define __JLIGameEngineTest__Scene__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"
#include "AbstractDecorator.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) Scene:
    public AbstractFactoryObject,
    public AbstractDecorator
    {
        friend class WorldFactory;
    public:
        Scene();
        Scene(const AbstractBuilder&);
        Scene(const Scene &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        
        virtual ~Scene();
        Scene &operator=(const Scene &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for Scene
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__Scene__) */
