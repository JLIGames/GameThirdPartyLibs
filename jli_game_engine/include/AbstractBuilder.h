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

class AbstractBuilder :
public AbstractObject
{
protected:
    virtual ~AbstractBuilder(){}
public:
    virtual u32 getType()const = 0;
};

#endif
