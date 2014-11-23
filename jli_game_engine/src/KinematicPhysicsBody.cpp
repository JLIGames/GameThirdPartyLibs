//
//  KinematicPhysicsBody.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "KinematicPhysicsBody.h"
#include "WorldFactory.h"

namespace jli
{
    KinematicPhysicsBody::KinematicPhysicsBody():
    AbstractFactoryObject(this)
    {
        
    }
    
    KinematicPhysicsBody::KinematicPhysicsBody(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    KinematicPhysicsBody::KinematicPhysicsBody(const KinematicPhysicsBody &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    KinematicPhysicsBody::~KinematicPhysicsBody()
    {
        
    }
    
    KinematicPhysicsBody &KinematicPhysicsBody::operator=(const KinematicPhysicsBody &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	KinematicPhysicsBody::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void KinematicPhysicsBody::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *KinematicPhysicsBody::getName()const
    {
        return "KinematicPhysicsBody";
    }
    
    u32 KinematicPhysicsBody::getType()const
    {
        return type::KinematicPhysicsBody;
    }
}
