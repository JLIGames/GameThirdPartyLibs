//
//  ParticleEmitter.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "ParticleEmitter.h"
#include "WorldFactory.h"

namespace jli
{
    ParticleEmitter::ParticleEmitter():
    AbstractFactoryObject(this)
    {
        
    }
    
    ParticleEmitter::ParticleEmitter(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    ParticleEmitter::ParticleEmitter(const ParticleEmitter &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    ParticleEmitter::~ParticleEmitter()
    {
        
    }
    
    ParticleEmitter &ParticleEmitter::operator=(const ParticleEmitter &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	ParticleEmitter::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void ParticleEmitter::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *ParticleEmitter::getName()const
    {
        return "ParticleEmitter";
    }
    
    u32 ParticleEmitter::getType()const
    {
        return type::ParticleEmitter;
    }
}