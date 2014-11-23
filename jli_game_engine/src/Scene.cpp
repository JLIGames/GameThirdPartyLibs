//
//  Scene.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "Scene.h"
#include "WorldFactory.h"

namespace jli
{
    Scene::Scene():
    AbstractFactoryObject(this)
    {
        
    }
    
    Scene::Scene(const AbstractBuilder &builder):
    AbstractFactoryObject(this)
    {
        
    }
    
    Scene::Scene(const Scene &copy):
    AbstractFactoryObject(this)
    {
        
    }
    
    Scene::~Scene()
    {
        
    }
    
    Scene &Scene::operator=(const Scene &rhs)
    {
        if(this != &rhs)
        {
            
        }
        return *this;
    }
    
    s32	Scene::calculateSerializeBufferSize() const
    {
        //TODO: calculateSerializeBufferSize
        return 0;
    }
    
    void Scene::serialize(void* dataBuffer, btSerializer* serializer) const
    {
        //TODO: serialize
    }
    
    const char *Scene::getName()const
    {
        return "Scene";
    }
    
    u32 Scene::getType()const
    {
        return type::Scene;
    }
}