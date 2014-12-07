//
//  GhostPhysicsBody.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "GhostPhysicsBody.h"
#include "WorldFactory.h"

namespace jli
{
    GhostPhysicsBody::GhostPhysicsBody():
    AbstractFactoryObject(this)
    {
        
    }
    
    GhostPhysicsBody::GhostPhysicsBody(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    GhostPhysicsBody::GhostPhysicsBody(const GhostPhysicsBody &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    GhostPhysicsBody::~GhostPhysicsBody()
    {
        
    }
    
    GhostPhysicsBody &GhostPhysicsBody::operator=(const GhostPhysicsBody &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	GhostPhysicsBody::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void GhostPhysicsBody::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *GhostPhysicsBody::getClassName()const
    {
        return "GhostPhysicsBody";
    }
    
    u32 GhostPhysicsBody::getType()const
    {
        return JLI_OBJECT_TYPE_GhostPhysicsBody;
    }
}
