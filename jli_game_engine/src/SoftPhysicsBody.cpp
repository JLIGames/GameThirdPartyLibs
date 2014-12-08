//
//  SoftPhysicsBody.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "SoftPhysicsBody.h"
#include "WorldFactory.h"

namespace jli
{
    SoftPhysicsBody::SoftPhysicsBody():
    AbstractFactoryObject(this)
    {
        
    }
    
    SoftPhysicsBody::SoftPhysicsBody(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    SoftPhysicsBody::SoftPhysicsBody(const SoftPhysicsBody &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    SoftPhysicsBody::~SoftPhysicsBody()
    {
        
    }
    
    SoftPhysicsBody &SoftPhysicsBody::operator=(const SoftPhysicsBody &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	SoftPhysicsBody::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void SoftPhysicsBody::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *SoftPhysicsBody::getClassName()const
    {
        return "SoftPhysicsBody";
    }
    
    u32 SoftPhysicsBody::getType()const
    {
        return JLI_OBJECT_TYPE_SoftPhysicsBody;
    }
    
    SoftPhysicsBody::operator std::string() const
    {
        return "TODO";
    }
}
