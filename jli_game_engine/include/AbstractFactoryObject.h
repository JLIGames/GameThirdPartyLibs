//
//  AbstractFactoryObject.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/9/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_AbstractFactoryObject_h
#define JLIGameEngineTest_AbstractFactoryObject_h

#include "btAlignedObjectArray.h"
#include "btAlignedAllocator.h"
#include "AbstractObject.h"
#include "AbstractBuilder.h"
#include "Util.h"
#include "AbstractFactory.h"
#include "AbstractDecorator.h"
#include "btSerializer.h"

ATTRIBUTE_ALIGNED16(class) AbstractFactoryObject :
virtual public AbstractDecorator,
public AbstractBuilder
{
protected:
    AbstractFactoryObject(const void* ptr):
    m_pointer(ptr){}
    
    virtual ~AbstractFactoryObject(){}
    
    BT_DECLARE_ALIGNED_ALLOCATOR();
    
public:
    virtual const char *getName()const = 0;
    virtual u32 getType()const = 0;
    
    virtual AbstractFactoryObject *create(const AbstractBuilder &builder, bool shared = false)const = 0;
    virtual AbstractFactoryObject *clone(bool shared = false)const = 0;
    virtual AbstractFactoryObject *destroy(bool shared = false) = 0;
    
    virtual	s32	calculateSerializeBufferSize() const = 0;
    ///fills the dataBuffer and returns the struct name (and 0 on failure)
    virtual	const char*	serialize(void* dataBuffer, btSerializer* serializer) const = 0;
    
    const void*	getPointer() const
    {
        return m_pointer;
    }
    
    const u64 getPointerValue() const
    {
        return m_pointerVal;
    }
    
    bool operator==(const AbstractFactoryObject &rhs)const
    {
        return getPointer() == rhs.getPointer();
    }
    
    bool operator<(const AbstractFactoryObject &rhs)const
    {
        return getPointer() < rhs.getPointer();
    }
    
    bool operator>(const AbstractFactoryObject &rhs)const
    {
        return getPointer() > rhs.getPointer();
    }
    
    bool operator!=(const AbstractFactoryObject &rhs)const
    {
        return !(*this == rhs);
    }
    
    bool operator<=(const AbstractFactoryObject &rhs)const
    {
        return (*this < rhs) || (*this == rhs);
    }
    
    bool operator>=(const AbstractFactoryObject &rhs)const
    {
        return (*this > rhs) || (*this == rhs);
    }
    
    virtual void serializeObject(class btSerializer* serializer) const
    {
        s32 len = calculateSerializeBufferSize();
        btChunk* chunk = serializer->allocate(len,1);
        const char* structType = serialize(chunk->m_oldPtr, serializer);
        serializer->finalizeChunk(chunk,structType,getType(),(void*)this);
    }
private:
    AbstractFactoryObject();
    AbstractFactoryObject(const AbstractFactoryObject&);
    AbstractFactoryObject &operator=(const AbstractFactoryObject&);
    union
    {
        const void*	m_pointer;
        u64 m_pointerVal;
    };
};

#endif
