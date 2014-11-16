//
//  AbstractFactoryObject.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/9/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_AbstractFactoryObject_h
#define JLIGameEngineTest_AbstractFactoryObject_h

#include "btAlignedAllocator.h"
#include "AbstractObject.h"
#include "AbstractBuilder.h"
#include "Util.h"
#include "AbstractFactory.h"

ATTRIBUTE_ALIGNED16(class) AbstractFactoryObject :
public AbstractObject,
public AbstractBuilder
{
protected:
    virtual ~AbstractFactoryObject(){}
    
    BT_DECLARE_ALIGNED_ALLOCATOR();
    
    
    //###################################################################
public:
    virtual const char *getName()const = 0;
    virtual u32 getType()const = 0;
    
    u32 getPointer()const
    {
        return (u32)this;
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
};

#endif
