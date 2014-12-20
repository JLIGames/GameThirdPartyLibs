//
//  CollisionResponse.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "CollisionResponse.h"
#include "WorldFactory.h"

namespace jli
{
    CollisionResponse::CollisionResponse():
    AbstractFactoryObject(this)
    {
        
    }
    
    CollisionResponse::CollisionResponse(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    CollisionResponse::CollisionResponse(const CollisionResponse &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    CollisionResponse::~CollisionResponse()
    {
        
    }
    
    CollisionResponse &CollisionResponse::operator=(const CollisionResponse &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	CollisionResponse::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void CollisionResponse::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *CollisionResponse::getClassName()const
    {
        return "CollisionResponse";
    }
    
    u32 CollisionResponse::getType()const
    {
        return JLI_OBJECT_TYPE_CollisionResponse;
    }
    
    CollisionResponse::operator std::string() const
    {
        return "TODO";
    }
}
