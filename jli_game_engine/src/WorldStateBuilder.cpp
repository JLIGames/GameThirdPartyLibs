//
//  WorldStateBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 12/6/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "WorldStateBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    WorldStateBuilder::WorldStateBuilder()
    {
    }
    
    WorldStateBuilder::WorldStateBuilder(const WorldStateBuilder &copy)
    {
        
    }
    
    WorldStateBuilder::WorldStateBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    WorldStateBuilder::~WorldStateBuilder()
    {
    }
    
    WorldStateBuilder &WorldStateBuilder::operator=(const WorldStateBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	WorldStateBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void WorldStateBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 WorldStateBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_WorldState;
    }
    
    const char *WorldStateBuilder::getClassName()const
    {
        return "WorldStateBuilder";
    }
    
    u32 WorldStateBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_WorldStateBuilder;
    }
    
    WorldStateBuilder::operator std::string() const
    {
        return "TODO";
    }
}