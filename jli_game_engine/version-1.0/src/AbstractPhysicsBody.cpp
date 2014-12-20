//
//  AbstractPhysicsBody.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "AbstractPhysicsBody.h"
#include "WorldFactory.h"

namespace jli
{
    AbstractPhysicsBody::AbstractPhysicsBody():
    AbstractFactoryObject(this)
    {
        
    }
    
    AbstractPhysicsBody::AbstractPhysicsBody(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    AbstractPhysicsBody::AbstractPhysicsBody(const AbstractPhysicsBody &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    AbstractPhysicsBody::~AbstractPhysicsBody()
    {
        
    }
    
    AbstractPhysicsBody &AbstractPhysicsBody::operator=(const AbstractPhysicsBody &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
}