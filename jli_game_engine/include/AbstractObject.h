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

ATTRIBUTE_ALIGNED16(class) AbstractObject
{
protected:
    virtual ~AbstractObject(){}

    BT_DECLARE_ALIGNED_ALLOCATOR();

    virtual const char *getName()const = 0;
};

#endif