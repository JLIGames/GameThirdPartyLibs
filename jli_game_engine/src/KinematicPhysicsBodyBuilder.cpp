//
//  KinematicPhysicsBodyBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "KinematicPhysicsBodyBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    KinematicPhysicsBodyBuilder::KinematicPhysicsBodyBuilder()
    {
    }
    
    KinematicPhysicsBodyBuilder::KinematicPhysicsBodyBuilder(const KinematicPhysicsBodyBuilder &copy)
    {
        
    }
    
    KinematicPhysicsBodyBuilder::KinematicPhysicsBodyBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    KinematicPhysicsBodyBuilder::~KinematicPhysicsBodyBuilder()
    {
    }
    
    KinematicPhysicsBodyBuilder &KinematicPhysicsBodyBuilder::operator=(const KinematicPhysicsBodyBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	KinematicPhysicsBodyBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void KinematicPhysicsBodyBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 KinematicPhysicsBodyBuilder::getObjectType()const
    {
        return type::KinematicPhysicsBody;
    }
    
    const char *KinematicPhysicsBodyBuilder::getName()const
    {
        return "KinematicPhysicsBodyBuilder";
    }
    
    u32 KinematicPhysicsBodyBuilder::getType()const
    {
        return type::KinematicPhysicsBodyBuilder;
    }
}