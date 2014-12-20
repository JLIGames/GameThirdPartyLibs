//
//  Sound.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "Sound.h"
#include "WorldFactory.h"

namespace jli
{
    Sound::Sound():
    AbstractFactoryObject(this)
    {
        
    }
    
    Sound::Sound(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    Sound::Sound(const Sound &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    Sound::~Sound()
    {
        
    }
    
    Sound &Sound::operator=(const Sound &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	Sound::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void Sound::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *Sound::getClassName()const
    {
        return "Sound";
    }
    
    u32 Sound::getType()const
    {
        return JLI_OBJECT_TYPE_Sound;
    }
    
    Sound::operator std::string() const
    {
        return "TODO";
    }
}