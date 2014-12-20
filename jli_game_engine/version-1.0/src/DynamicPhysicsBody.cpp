//
//  DynamicPhysicsBody.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "DynamicPhysicsBody.h"
#include "WorldFactory.h"

namespace jli
{
    DynamicPhysicsBody::DynamicPhysicsBody():
    AbstractFactoryObject(this)
    {
        
    }
    
    DynamicPhysicsBody::DynamicPhysicsBody(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    DynamicPhysicsBody::DynamicPhysicsBody(const DynamicPhysicsBody &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    DynamicPhysicsBody::~DynamicPhysicsBody()
    {
        
    }
    
    DynamicPhysicsBody &DynamicPhysicsBody::operator=(const DynamicPhysicsBody &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	DynamicPhysicsBody::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void DynamicPhysicsBody::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *DynamicPhysicsBody::getClassName()const
    {
        return "DynamicPhysicsBody";
    }
    
    u32 DynamicPhysicsBody::getType()const
    {
        return JLI_OBJECT_TYPE_DynamicPhysicsBody;
    }
    
    DynamicPhysicsBody::operator std::string() const
    {
        return "TODO";
    }
}