//
//  ParticleEmitterBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "ParticleEmitterBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    ParticleEmitterBuilder::ParticleEmitterBuilder()
    {
    }
    
    ParticleEmitterBuilder::ParticleEmitterBuilder(const ParticleEmitterBuilder &copy)
    {
        
    }
    
    ParticleEmitterBuilder::ParticleEmitterBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    ParticleEmitterBuilder::~ParticleEmitterBuilder()
    {
    }
    
    ParticleEmitterBuilder &ParticleEmitterBuilder::operator=(const ParticleEmitterBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	ParticleEmitterBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void ParticleEmitterBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 ParticleEmitterBuilder::getObjectType()const
    {
        return type::ParticleEmitter;
    }
    
    const char *ParticleEmitterBuilder::getName()const
    {
        return "ParticleEmitterBuilder";
    }
    
    u32 ParticleEmitterBuilder::getType()const
    {
        return type::ParticleEmitterBuilder;
    }
}