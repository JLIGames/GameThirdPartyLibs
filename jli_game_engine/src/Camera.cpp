//
//  Camera.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "Camera.h"
#include "WorldFactory.h"

namespace jli
{
    Camera::Camera():
    AbstractFactoryObject(this)
    {
        
    }
    
    Camera::Camera(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    Camera::Camera(const Camera &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    Camera::~Camera()
    {
        
    }
    
    Camera &Camera::operator=(const Camera &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	Camera::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void Camera::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *Camera::getName()const
    {
        return "Camera";
    }
    
    u32 Camera::getType()const
    {
        return type::Camera;
    }
}
