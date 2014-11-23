//
//  WorldFactory.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/21/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "WorldFactory.h"

#pragma mark Start type includes

#include "Resource.h"
#include "ResourceBuilder.h"
#include "Node.h"
#include "NodeBuilder.h"
#include "Scene.h"
#include "SceneBuilder.h"

#pragma mark End type includes

namespace jli
{
    AbstractFactoryObject *WorldFactory::create(const u32 type)
    {
        return create_Internal(type);
    }
    AbstractFactoryObject *WorldFactory::create(const AbstractBuilder &builder)
    {
        return create_Internal(builder);
    }
    
    AbstractFactoryObject *WorldFactory::clone(const AbstractFactoryObject &object, bool share)
    {
        return clone_Internal(object, share);
    }
    
    bool WorldFactory::has(AbstractFactoryObject *object)const
    {
        return (m_ObjectList.size() != index(object));
    }
    
    void WorldFactory::destroyInstance(AbstractFactoryObject *object)
    {
        remove_Internal(object);
    }
    
    void WorldFactory::destroy(AbstractFactoryObject *object)
    {
        jliAssertMsg(object, "Object must not be null");
        jliAssertMsg(has(object), "Object doesn't exists in the factory");
        
        s32 findIndex = index(object);
        if (findIndex<size())
        {
            m_ObjectList.swap( findIndex,size()-1);
            m_ObjectList.pop_back();
        }
        
        m_ObjectDuplicateMap.remove(btHashPtr(object));

    }
    
    void WorldFactory::destroyAll()
    {
        while(size() > 0)
            m_ObjectList.pop_back();
        m_ObjectDuplicateMap.clear();
    }
    
    s32 WorldFactory::size()
    {
        return m_ObjectList.size();
    }
    
    s32 WorldFactory::instances(const u32 index)
    {
        if(index < m_ObjectList.size())
        {
            AbstractFactoryObject *object = get(index);
            
            jliAssertMsg(object, "Object must not be null");
            jliAssertMsg(has(object), "Object doesn't exists in the factory");
            
            if(has(object))
            {
                return *m_ObjectDuplicateMap.find(btHashPtr(object));
            }
        }
        return 0;
    }
    
    s32 WorldFactory::instances(AbstractFactoryObject *object)
    {
        jliAssertMsg(object, "Object must not be null");
        jliAssertMsg(has(object), "Object doesn't exists in the factory");
        
        if(has(object))
        {
            return *m_ObjectDuplicateMap.find(btHashPtr(object));
        }
        return 0;
    }
    
    AbstractFactoryObject *WorldFactory::get(const u32 index)const
    {
        jliAssertMsg(index < m_ObjectList.size(), "index must be smaller than the size of the array");
        
        return m_ObjectList.at(index);
    }
    
    void WorldFactory::getAll(btAlignedObjectArray<AbstractFactoryObject*> &objects)const
    {
        objects = m_ObjectList;
    }
    
    s32 WorldFactory::index(AbstractFactoryObject *object)const
    {
        jliAssertMsg(object, "object is null");
        
        return m_ObjectList.findLinearSearch(object);
    }
    
    void WorldFactory::serialize(btSerializer* serializer)
    {
        for (s32 i = 0; i < m_ObjectList.size(); i++)
        {
            m_ObjectList[i]->serializeObject(serializer);
        }
    }
    
    WorldFactory::WorldFactory()
    {
        
    }
    
    WorldFactory::~WorldFactory()
    {
        jliAssertMsg(size() == 0, "WorldFactory is not empty.");
    }
    
    AbstractFactoryObject *WorldFactory::ctor(const u32 &type)
    {
        AbstractFactoryObject *obj = NULL;
        
        //!!!TODO: implement the create types...
        
        switch (type)
        {
            case type::Action:
                obj = NULL;
                break;
            case type::ActionBuilder:
                obj = NULL;
                break;
            case type::BaseRigidPhysicsBody:
                obj = NULL;
                break;
            case type::BaseRigidPhysicsBodyBuilder:
                obj = NULL;
                break;
            case type::BaseSoftPhysicsBody:
		obj = NULL;
                break;
            case type::BaseSoftPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::Camera:
		obj = NULL;
                break;
            case type::CameraBuilder:
		obj = NULL;
                break;
            case type::Clock:
                obj = NULL;
                break;
            case type::ClockBuilder:
                obj = NULL;
                break;
            case type::CollisionResponse:
		obj = NULL;
                break;
            case type::CollisionResponseBuilder:
		obj = NULL;
                break;
            case type::CubicTexture:
		obj = NULL;
                break;
            case type::CubicTextureBuilder:
		obj = NULL;
                break;
            case type::DynamicPhysicsBody:
		obj = NULL;
                break;
            case type::DynamicPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::Geometry:
		obj = NULL;
                break;
            case type::GeometryBuilder:
		obj = NULL;
                break;
            case type::GhostPhysicsBody:
		obj = NULL;
                break;
            case type::GhostPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::KinematicPhysicsBody:
		obj = NULL;
                break;
            case type::KinematicPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::Light:
		obj = NULL;
                break;
            case type::LightBuilder:
		obj = NULL;
                break;
            case type::Material:
		obj = NULL;
                break;
            case type::MaterialBuilder:
		obj = NULL;
                break;
            case type::MaterialProperty:
		obj = NULL;
                break;
            case type::MaterialPropertyBuilder:
		obj = NULL;
                break;
            case type::Node:
                obj = new Node();
                break;
            case type::NodeBuilder:
                obj = new NodeBuilder();
                break;
            case type::ParticleEmitter:
		obj = NULL;
                break;
            case type::ParticleEmitterBuilder:
		obj = NULL;
                break;
            case type::PhysicsContact:
		obj = NULL;
                break;
            case type::PhysicsContactBuilder:
		obj = NULL;
                break;
            case type::PhysicsField:
		obj = NULL;
                break;
            case type::PhysicsFieldBuilder:
		obj = NULL;
                break;
            case type::PhysicsShape:
		obj = NULL;
                break;
            case type::PhysicsShapeBuilder:
		obj = NULL;
                break;
            case type::PhysicsWorld:
		obj = NULL;
                break;
            case type::PhysicsWorldBuilder:
		obj = NULL;
                break;
            case type::Resource:
                obj = new Resource();
                break;
            case type::ResourceBuilder:
                obj = new ResourceBuilder();
                break;
            case type::Scene:
                obj = new Scene();
                break;
            case type::SceneBuilder:
                obj = new SceneBuilder();
                break;
            case type::Sound:
		obj = NULL;
                break;
            case type::SoundBuilder:
		obj = NULL;
                break;
            case type::State:
		obj = NULL;
                break;
            case type::StateBuilder:
		obj = NULL;
                break;
            case type::StateMachine:
		obj = NULL;
                break;
            case type::StateMachineBuilder:
		obj = NULL;
                break;
            case type::StaticPhysicsBody:
		obj = NULL;
                break;
            case type::StaticPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::Texture:
		obj = NULL;
                break;
            case type::TextureBuilder:
		obj = NULL;
                break;
            default:
                obj = NULL;
                break;
        }
        return obj;
    }
    
    AbstractFactoryObject *WorldFactory::ctor(const AbstractBuilder &builder)
    {
        AbstractFactoryObject *obj = NULL;
        
        //!!!TODO: implement the create types...
        
        switch (builder.getObjectType())
        {
            case type::Action:
		    obj = NULL;
                break;
            case type::ActionBuilder:
		obj = NULL;
                break;
            case type::BaseRigidPhysicsBody:
		obj = NULL;
                break;
            case type::BaseRigidPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::BaseSoftPhysicsBody:
		obj = NULL;
                break;
            case type::BaseSoftPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::Camera:
		obj = NULL;
                break;
            case type::CameraBuilder:
		obj = NULL;
                break;
            case type::Clock:
                obj = NULL;
                break;
            case type::ClockBuilder:
                obj = NULL;
                break;
            case type::CollisionResponse:
		obj = NULL;
                break;
            case type::CollisionResponseBuilder:
		obj = NULL;
                break;
            case type::CubicTexture:
		obj = NULL;
                break;
            case type::CubicTextureBuilder:
		obj = NULL;
                break;
            case type::DynamicPhysicsBody:
		obj = NULL;
                break;
            case type::DynamicPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::Geometry:
		obj = NULL;
                break;
            case type::GeometryBuilder:
		obj = NULL;
                break;
            case type::GhostPhysicsBody:
		obj = NULL;
                break;
            case type::GhostPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::KinematicPhysicsBody:
		obj = NULL;
                break;
            case type::KinematicPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::Light:
		obj = NULL;
                break;
            case type::LightBuilder:
		obj = NULL;
                break;
            case type::Material:
		obj = NULL;
                break;
            case type::MaterialBuilder:
		obj = NULL;
                break;
            case type::MaterialProperty:
		obj = NULL;
                break;
            case type::MaterialPropertyBuilder:
		obj = NULL;
                break;
            case type::Node:
                obj = new Node(builder);
                break;
            case type::NodeBuilder:
                obj = new NodeBuilder(builder);
                break;
            case type::ParticleEmitter:
		obj = NULL;
                break;
            case type::ParticleEmitterBuilder:
		obj = NULL;
                break;
		obj = NULL;
                break;
            case type::PhysicsContact:
		obj = NULL;
                break;
            case type::PhysicsContactBuilder:
		obj = NULL;
                break;
            case type::PhysicsField:
		obj = NULL;
                break;
            case type::PhysicsFieldBuilder:
		obj = NULL;
                break;
            case type::PhysicsShape:
		obj = NULL;
                break;
            case type::PhysicsShapeBuilder:
		obj = NULL;
                break;
            case type::PhysicsWorld:
		obj = NULL;
                break;
            case type::PhysicsWorldBuilder:
		obj = NULL;
                break;
            case type::Resource:
                obj = new Resource(builder);
                break;
            case type::ResourceBuilder:
                obj = new ResourceBuilder(builder);
                break;
            case type::Scene:
                obj = new Scene(builder);
                break;
            case type::SceneBuilder:
                obj = new SceneBuilder(builder);
                break;
            case type::Sound:
		obj = NULL;
                break;
            case type::SoundBuilder:
		obj = NULL;
                break;
            case type::State:
		obj = NULL;
                break;
            case type::StateBuilder:
		obj = NULL;
                break;
            case type::StateMachine:
		obj = NULL;
                break;
            case type::StateMachineBuilder:
		obj = NULL;
                break;
            case type::StaticPhysicsBody:
		obj = NULL;
                break;
            case type::StaticPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::Texture:
		obj = NULL;
                break;
            case type::TextureBuilder:
		obj = NULL;
                break;
            default:
                obj = NULL;
                break;
        }
        return obj;
    }
    
    AbstractFactoryObject *WorldFactory::ctor(const AbstractFactoryObject &object)
    {
        AbstractFactoryObject *obj = NULL;
        
        //!!!TODO: implement the clone types...
        switch (object.getType())
        {
            case type::Action:
		    obj = NULL;
                break;
            case type::ActionBuilder:
		obj = NULL;
                break;
            case type::BaseRigidPhysicsBody:
		obj = NULL;
                break;
            case type::BaseRigidPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::BaseSoftPhysicsBody:
		obj = NULL;
                break;
            case type::BaseSoftPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::Camera:
		obj = NULL;
                break;
            case type::CameraBuilder:
		obj = NULL;
                break;
            case type::Clock:
                obj = NULL;
                break;
            case type::ClockBuilder:
                obj = NULL;
                break;
            case type::CollisionResponse:
		obj = NULL;
                break;
            case type::CollisionResponseBuilder:
		obj = NULL;
                break;
            case type::CubicTexture:
		obj = NULL;
                break;
            case type::CubicTextureBuilder:
		obj = NULL;
                break;
            case type::DynamicPhysicsBody:
		obj = NULL;
                break;
            case type::DynamicPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::Geometry:
		obj = NULL;
                break;
            case type::GeometryBuilder:
		obj = NULL;
                break;
            case type::GhostPhysicsBody:
		obj = NULL;
                break;
            case type::GhostPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::KinematicPhysicsBody:
		obj = NULL;
                break;
            case type::KinematicPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::Light:
		obj = NULL;
                break;
            case type::LightBuilder:
		obj = NULL;
                break;
            case type::Material:
		obj = NULL;
                break;
            case type::MaterialBuilder:
		obj = NULL;
                break;
            case type::MaterialProperty:
		obj = NULL;
                break;
            case type::MaterialPropertyBuilder:
		obj = NULL;
                break;
            case type::Node:
                obj = new Node(*dynamic_cast<const Node*>(&object));
                break;
            case type::NodeBuilder:
			    obj = new NodeBuilder(*dynamic_cast<const NodeBuilder*>(&object));
                break;
            case type::ParticleEmitter:
		obj = NULL;
                break;
            case type::ParticleEmitterBuilder:
		obj = NULL;
                break;
            case type::PhysicsContact:
		obj = NULL;
                break;
            case type::PhysicsContactBuilder:
		obj = NULL;
                break;
            case type::PhysicsField:
		obj = NULL;
                break;
            case type::PhysicsFieldBuilder:
		obj = NULL;
                break;
            case type::PhysicsShape:
		obj = NULL;
                break;
            case type::PhysicsShapeBuilder:
		obj = NULL;
                break;
            case type::PhysicsWorld:
		obj = NULL;
                break;
            case type::PhysicsWorldBuilder:
		obj = NULL;
                break;
            case type::Resource:
                obj = new Resource(*dynamic_cast<const Resource*>(&object));
                break;
            case type::ResourceBuilder:
                obj = new ResourceBuilder(*dynamic_cast<const ResourceBuilder*>(&object));
                break;
            case type::Scene:
                obj = new Scene(*dynamic_cast<const Scene*>(&object));
                break;
            case type::SceneBuilder:
                obj = new SceneBuilder(*dynamic_cast<const SceneBuilder*>(&object));
                break;
            case type::Sound:
		obj = NULL;
                break;
            case type::SoundBuilder:
		obj = NULL;
                break;
            case type::State:
		obj = NULL;
                break;
            case type::StateBuilder:
		obj = NULL;
                break;
            case type::StateMachine:
		obj = NULL;
                break;
            case type::StateMachineBuilder:
		obj = NULL;
                break;
            case type::StaticPhysicsBody:
		obj = NULL;
                break;
            case type::StaticPhysicsBodyBuilder:
		obj = NULL;
                break;
            case type::Texture:
		obj = NULL;
                break;
            case type::TextureBuilder:
		obj = NULL;
                break;
            default:
                obj= NULL;
        }
        return obj;
    }
    
    AbstractFactoryObject *WorldFactory::create_Internal(const u32 type)
    {
        AbstractFactoryObject *object = ctor(type);
        jliAssertMsg(object, "object is null");
        
        jliAssertMsg(!has(object), "Object already exists in the factory");
        
        m_ObjectList.push_back(object);
        m_ObjectDuplicateMap.insert(btHashPtr(object), 1);
        
        return object;
    }
    
    AbstractFactoryObject *WorldFactory::create_Internal(const AbstractBuilder &builder)
    {
        AbstractFactoryObject *object = ctor(builder);
        jliAssertMsg(object, "object is null");
        
        jliAssertMsg(!has(object), "Object already exists in the factory");
        
        m_ObjectList.push_back(object);
        m_ObjectDuplicateMap.insert(btHashPtr(object), 1);
        
        return object;

    }
    
    AbstractFactoryObject *WorldFactory::clone_Internal(const AbstractFactoryObject &copy, bool share)
    {
        AbstractFactoryObject *_object = const_cast<AbstractFactoryObject*>(&copy);
        
        s32 index = this->index(_object);
        s32 count = *m_ObjectDuplicateMap.find(btHashPtr(_object));
        
        if(share && count > 0)
        {
            m_ObjectDuplicateMap.insert(btHashPtr(_object), ++count);
            
            return get(index);
        }
        return ctor(copy);

    }
    
    void WorldFactory::remove_Internal(AbstractFactoryObject *object)
    {
        jliAssertMsg(object, "Object must not be null");
        jliAssertMsg(has(object), "Object doesn't exists in the factory");
        
        s32 count = *m_ObjectDuplicateMap.find(btHashPtr(object));
        jliAssertMsg(count > 0, "object doesn't exist in the map");
        
        m_ObjectDuplicateMap.insert(btHashPtr(object), --count);
        
        if(count <= 0)
        {
            m_ObjectDuplicateMap.remove(btHashPtr(object));
            
            s32 findIndex = index(object);
            if (findIndex<size())
            {
                m_ObjectList.swap( findIndex,size()-1);
                m_ObjectList.pop_back();
            }
        }

    }
}

