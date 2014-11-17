//
//  AbstractObject.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/9/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_AbstractObject_h
#define JLIGameEngineTest_AbstractObject_h

#include "Util.h"
#include "btAlignedAllocator.h"

/**
 *  The description of AbstractObject
 */
ATTRIBUTE_ALIGNED16(class) AbstractObject
{
protected:
    virtual ~AbstractObject(){}

    BT_DECLARE_ALIGNED_ALLOCATOR();

    virtual const char *getName()const = 0;
    virtual u32 getType()const = 0;
};

#endif