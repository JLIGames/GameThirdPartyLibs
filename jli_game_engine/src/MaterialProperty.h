//
//  MaterialProperty.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__MaterialProperty__
#define __JLIGameEngineTest__MaterialProperty__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) MaterialProperty:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        MaterialProperty();
        MaterialProperty(const AbstractBuilder&);
        MaterialProperty(const MaterialProperty &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~MaterialProperty();
        MaterialProperty &operator=(const MaterialProperty &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getName()const;
        virtual u32 getType()const;
        
        //TODO: fill in specific methods for MaterialProperty
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__MaterialProperty__) */
