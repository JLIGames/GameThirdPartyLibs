//
//  AbstractBuilder.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/9/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_AbstractBuilder_h
#define JLIGameEngineTest_AbstractBuilder_h

#include "Util.h"
#include "AbstractObject.h"

ATTRIBUTE_ALIGNED16(class) AbstractBuilder :
public AbstractObject
{
protected:
    virtual ~AbstractBuilder(){}
    
    BT_DECLARE_ALIGNED_ALLOCATOR();
    
public:
    virtual u32 getType()const = 0;
};

#endif
