//
//  Texture.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__Texture__
#define __JLIGameEngineTest__Texture__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
    ATTRIBUTE_ALIGNED16(class) Texture:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        Texture();
        Texture(const AbstractBuilder&);
        Texture(const Texture &);
        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~Texture();
        Texture &operator=(const Texture &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        //TODO: fill in specific methods for Texture
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__Texture__) */
