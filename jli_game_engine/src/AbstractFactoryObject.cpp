//
//  AbstractFactoryObject.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/21/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "AbstractFactoryObject.h"

#include "AbstractBuilder.h"
#include "Resource.h"

#include "World.h"
#include "WorldFactory.h"

namespace jli
{
    
    AbstractFactoryObject::AbstractFactoryObject(const void* ptr):
    m_pointer(ptr){}
    
    AbstractFactoryObject::~AbstractFactoryObject()
    {
    }
    
//    const char *AbstractFactoryObject::getClassName()const
//    {
//        return "AbstractFactoryObject";
//    }
//    
//    u32 AbstractFactoryObject::getType()const
//    {
//        return JLI_OBJECT_TYPE_None;
//    }
    
    AbstractFactoryObject *AbstractFactoryObject::create(const AbstractBuilder &builder)const
    {
        return World::getInstance()->getWorldFactory()->create(builder);
    }
    
    AbstractFactoryObject *AbstractFactoryObject::clone(bool shared)const
    {
        return World::getInstance()->getWorldFactory()->clone(*this, shared);
    }
    
    void AbstractFactoryObject::destroy()
    {
        World::getInstance()->getWorldFactory()->destroyInstance(this);
    }
    
    const void*	AbstractFactoryObject::getPointer() const
    {
        return m_pointer;
    }
    
    const u64 AbstractFactoryObject::getPointerValue() const
    {
        return m_pointerVal;
    }
    
    bool AbstractFactoryObject::operator==(const AbstractFactoryObject &rhs)const
    {
        return getPointer() == rhs.getPointer();
    }
    
    bool AbstractFactoryObject::operator<(const AbstractFactoryObject &rhs)const
    {
        return getPointer() < rhs.getPointer();
    }
    
    bool AbstractFactoryObject::operator>(const AbstractFactoryObject &rhs)const
    {
        return getPointer() > rhs.getPointer();
    }
    
    bool AbstractFactoryObject::operator!=(const AbstractFactoryObject &rhs)const
    {
        return !(*this == rhs);
    }
    
    bool AbstractFactoryObject::operator<=(const AbstractFactoryObject &rhs)const
    {
        return (*this < rhs) || (*this == rhs);
    }
    
    bool AbstractFactoryObject::operator>=(const AbstractFactoryObject &rhs)const
    {
        return (*this > rhs) || (*this == rhs);
    }
    
    void AbstractFactoryObject::serializeObject(class btSerializer* serializer) const
    {
        s32 len = calculateSerializeBufferSize();
        btChunk* chunk = serializer->allocate(len,1);
        serialize(chunk->m_oldPtr, serializer);
        serializer->finalizeChunk(chunk,getClassName(),getType(),(void*)this);
    }
}
