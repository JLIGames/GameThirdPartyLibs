//
//  Geometry.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "Geometry.h"
#include "WorldFactory.h"

namespace jli
{
    Geometry::Geometry():
    AbstractFactoryObject(this)
    {
        
    }
    
    Geometry::Geometry(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    Geometry::Geometry(const Geometry &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    Geometry::~Geometry()
    {
        
    }
    
    Geometry &Geometry::operator=(const Geometry &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	Geometry::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void Geometry::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *Geometry::getClassName()const
    {
        return "Geometry";
    }
    
    u32 Geometry::getType()const
    {
        return JLI_OBJECT_TYPE_Geometry;
    }
}
