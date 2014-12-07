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
    AbstractFactoryObject(this),
    m_Name("Scene")
    {
    }
    
    Scene::Scene(const AbstractBuilder &builder):
    AbstractFactoryObject(this),
    m_Name("Scene")
    {
    }
    
    Scene::Scene(const Scene &copy):
    AbstractFactoryObject(this),
    m_Name("Scene")
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
    
    const char *Scene::getClassName()const
    {
        return "Scene";
    }
    
    u32 Scene::getType()const
    {
        return JLI_OBJECT_TYPE_Scene;
    }
    
    void Scene::setName(const char *name)
    {
        m_Name = name;
    }
    
    const char *Scene::getName()const
    {
        return m_Name.c_str();
    }
}