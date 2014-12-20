//
//  CameraBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "CameraBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    CameraBuilder::CameraBuilder()
    {
    }
    
    CameraBuilder::CameraBuilder(const CameraBuilder &copy)
    {
        
    }
    
    CameraBuilder::CameraBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    CameraBuilder::~CameraBuilder()
    {
    }
    
    CameraBuilder &CameraBuilder::operator=(const CameraBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	CameraBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void CameraBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 CameraBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_Camera;
    }
    
    const char *CameraBuilder::getClassName()const
    {
        return "CameraBuilder";
    }
    
    u32 CameraBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_CameraBuilder;
    }
    
    CameraBuilder::operator std::string() const
    {
        return "TODO";
    }
}