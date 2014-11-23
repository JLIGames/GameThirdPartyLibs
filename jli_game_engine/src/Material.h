//
//  Material.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__Material__
#define __JLIGameEngineTest__Material__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) Material:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        Material();
        Material(const AbstractBuilder&);
        Material(const Material &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~Material();
        Material &operator=(const Material &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for Material
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__Material__) */
