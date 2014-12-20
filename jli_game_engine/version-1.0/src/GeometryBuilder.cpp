//
//  GeometryBuilder.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "GeometryBuilder.h"
#include "WorldFactory.h"

namespace jli
{
    GeometryBuilder::GeometryBuilder()
    {
    }
    
    GeometryBuilder::GeometryBuilder(const GeometryBuilder &copy)
    {
        
    }
    
    GeometryBuilder::GeometryBuilder(const AbstractBuilder &builder)
    {
        
    }
    
    GeometryBuilder::~GeometryBuilder()
    {
    }
    
    GeometryBuilder &GeometryBuilder::operator=(const GeometryBuilder &rhs)
    {
        if (this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	GeometryBuilder::calculateSerializeBufferSize() const
    {
        return 0;
    }
    
    void GeometryBuilder::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        
    }
    
    u32 GeometryBuilder::getObjectType()const
    {
        return JLI_OBJECT_TYPE_Geometry;
    }
    
    const char *GeometryBuilder::getClassName()const
    {
        return "GeometryBuilder";
    }
    
    u32 GeometryBuilder::getType()const
    {
        return JLI_OBJECT_TYPE_GeometryBuilder;
    }
    
    GeometryBuilder::operator std::string() const
    {
        return "TODO";
    }
}
