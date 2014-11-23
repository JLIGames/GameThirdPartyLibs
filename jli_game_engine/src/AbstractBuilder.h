//
//  AbstractBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/9/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_AbstractBuilder_h
#define JLIGameEngineTest_AbstractBuilder_h

#include "btAlignedObjectArray.h"
#include "Util.h"
#include "AbstractFactoryObject.h"

//namespace jli
//{
//    ATTRIBUTE_ALIGNED16(class) AbstractBuilder :
//    public AbstractFactoryObject
//    {
//    protected:
//        AbstractBuilder();
//        AbstractBuilder(const AbstractBuilder &);
//        virtual ~AbstractBuilder();
//        AbstractBuilder &operator=(const AbstractBuilder &);
//        
//        virtual	s32	calculateSerializeBufferSize() const;
//        virtual	void serialize(void* dataBuffer, btSerializer* serializer) const;
//    public:
//        virtual u32 getType()const = 0;
//        virtual u32 getObjectType()const = 0;
//    private:
//    };
//}

#include "AbstractFactoryObject.h"
#include "btSerializer.h"
#include "AbstractBuilder.h"

namespace jli
{
    class AbstractBuilder:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        AbstractBuilder();
        AbstractBuilder(const AbstractBuilder&);
        virtual ~AbstractBuilder();
        AbstractBuilder &operator=(const AbstractBuilder &);
        
        virtual	s32	calculateSerializeBufferSize() const = 0;
        virtual	void serialize(void* dataBuffer, btSerializer* serializer) const = 0;
        
        virtual u32 getObjectType()const = 0;
        virtual const char *getName()const = 0;
        virtual u32 getType()const = 0;
        
        //TODO: fill in specific methods for AbstractBuilder
    protected:
    private:
        
    };
}




#endif
