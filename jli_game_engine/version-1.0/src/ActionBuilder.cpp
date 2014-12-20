//
//  ActionBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "ActionBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    ActionBuilder::ActionBuilder()
    {
    }
    
    ActionBuilder::ActionBuilder(const ActionBuilder &copy)
    {
        
    }
    
    ActionBuilder::ActionBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    ActionBuilder::~ActionBuilder()
    {
    }
    
    ActionBuilder &ActionBuilder::operator=(const ActionBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	ActionBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void ActionBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 ActionBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_Action;
    }
    
    const char *ActionBuilder::getClassName()const
    {
        return "ActionBuilder";
    }
    
    u32 ActionBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_ActionBuilder;
    }
    
    ActionBuilder::operator std::string() const
    {
        return "TODO";
    }
}