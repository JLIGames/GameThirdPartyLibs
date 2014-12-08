//
//  WorldFactory.cpp
//  JLIGameEngineTest
//
//  Created by James Folk on 11/21/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#include "WorldFactory.h"

#pragma mark Start type includes

#include "Action.h"
#include "ActionBuilder.h"
#include "Camera.h"
#include "CameraBuilder.h"
#include "Clock.h"
#include "ClockBuilder.h"
#include "CollisionResponse.h"
#include "CollisionResponseBuilder.h"
#include "CubicTexture.h"
#include "CubicTextureBuilder.h"
#include "DynamicPhysicsBody.h"
#include "DynamicPhysicsBodyBuilder.h"
#include "Geometry.h"
#include "GeometryBuilder.h"
#include "GhostPhysicsBody.h"
#include "GhostPhysicsBodyBuilder.h"
#include "KinematicPhysicsBody.h"
#include "KinematicPhysicsBodyBuilder.h"
#include "Light.h"
#include "LightBuilder.h"
#include "Material.h"
#include "MaterialBuilder.h"
#include "MaterialProperty.h"
#include "MaterialPropertyBuilder.h"
#include "Node.h"
#include "NodeBuilder.h"
#include "NodeState.h"
#include "NodeStateBuilder.h"
#include "NodeStateMachine.h"
#include "NodeStateMachineBuilder.h"
#include "ParticleEmitter.h"
#include "ParticleEmitterBuilder.h"
#include "PhysicsContact.h"
#include "PhysicsContactBuilder.h"
#include "PhysicsField.h"
#include "PhysicsFieldBuilder.h"
#include "PhysicsShape.h"
#include "PhysicsShapeBuilder.h"
#include "PhysicsWorld.h"
#include "PhysicsWorldBuilder.h"
#include "Resource.h"
#include "ResourceBuilder.h"
#include "RigidPhysicsBody.h"
#include "RigidPhysicsBodyBuilder.h"
#include "Scene.h"
#include "SceneBuilder.h"
#include "SceneState.h"
#include "SceneStateBuilder.h"
#include "SceneStateMachine.h"
#include "SceneStateMachineBuilder.h"
#include "SoftPhysicsBody.h"
#include "SoftPhysicsBodyBuilder.h"
#include "Sound.h"
#include "SoundBuilder.h"
#include "Texture.h"
#include "TextureBuilder.h"
#include "WorldState.h"
#include "WorldStateBuilder.h"
#include "WorldStateMachine.h"
#include "WorldStateMachineBuilder.h"

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
    
    WorldFactory::operator std::string() const
    {
        return "TODO";
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
            case JLI_OBJECT_TYPE_Action:
                obj = new Action();
                break;
            case JLI_OBJECT_TYPE_ActionBuilder:
                obj = new ActionBuilder();
                break;
            case JLI_OBJECT_TYPE_Camera:
		obj = new Camera();
                break;
            case JLI_OBJECT_TYPE_CameraBuilder:
		obj = new CameraBuilder();
                break;
            case JLI_OBJECT_TYPE_Clock:
                obj = new Clock();
                break;
            case JLI_OBJECT_TYPE_ClockBuilder:
                obj = new ClockBuilder();
                break;
            case JLI_OBJECT_TYPE_CollisionResponse:
		obj = new CollisionResponse();
                break;
            case JLI_OBJECT_TYPE_CollisionResponseBuilder:
		obj = new CollisionResponseBuilder();
                break;
            case JLI_OBJECT_TYPE_CubicTexture:
		obj = new CubicTexture();
                break;
            case JLI_OBJECT_TYPE_CubicTextureBuilder:
		obj = new CubicTextureBuilder();
                break;
            case JLI_OBJECT_TYPE_DynamicPhysicsBody:
		obj = new DynamicPhysicsBody();
                break;
            case JLI_OBJECT_TYPE_DynamicPhysicsBodyBuilder:
		obj = new DynamicPhysicsBodyBuilder();
                break;
            case JLI_OBJECT_TYPE_Geometry:
		obj = new Geometry();
                break;
            case JLI_OBJECT_TYPE_GeometryBuilder:
		obj = new GeometryBuilder();
                break;
            case JLI_OBJECT_TYPE_GhostPhysicsBody:
		obj = new GhostPhysicsBody();
                break;
            case JLI_OBJECT_TYPE_GhostPhysicsBodyBuilder:
		obj = new GhostPhysicsBodyBuilder();
                break;
            case JLI_OBJECT_TYPE_KinematicPhysicsBody:
		obj = new KinematicPhysicsBody();
                break;
            case JLI_OBJECT_TYPE_KinematicPhysicsBodyBuilder:
		obj = new KinematicPhysicsBodyBuilder();
                break;
            case JLI_OBJECT_TYPE_Light:
		obj = new Light();
                break;
            case JLI_OBJECT_TYPE_LightBuilder:
		obj = new LightBuilder();
                break;
            case JLI_OBJECT_TYPE_Material:
		obj = new Material();
                break;
            case JLI_OBJECT_TYPE_MaterialBuilder:
		obj = new MaterialBuilder();
                break;
            case JLI_OBJECT_TYPE_MaterialProperty:
		obj = new MaterialProperty();
                break;
            case JLI_OBJECT_TYPE_MaterialPropertyBuilder:
		obj = new MaterialPropertyBuilder();
                break;
            case JLI_OBJECT_TYPE_Node:
                obj = new Node();
                break;
            case JLI_OBJECT_TYPE_NodeBuilder:
                obj = new NodeBuilder();
                break;
                
                
                
            case JLI_OBJECT_TYPE_NodeState:
                obj = new NodeState();
                break;
            case JLI_OBJECT_TYPE_NodeStateBuilder:
                obj = new NodeStateBuilder();
                break;
            case JLI_OBJECT_TYPE_NodeStateMachine:
                obj = new NodeStateMachine();
                break;
            case JLI_OBJECT_TYPE_NodeStateMachineBuilder:
                obj = new NodeStateMachineBuilder();
                break;
                
                
                
            case JLI_OBJECT_TYPE_ParticleEmitter:
		obj = new ParticleEmitter();
                break;
            case JLI_OBJECT_TYPE_ParticleEmitterBuilder:
		obj = new ParticleEmitterBuilder();
                break;
            case JLI_OBJECT_TYPE_PhysicsContact:
		obj = new PhysicsContact();
                break;
            case JLI_OBJECT_TYPE_PhysicsContactBuilder:
		obj = new PhysicsContactBuilder();
                break;
            case JLI_OBJECT_TYPE_PhysicsField:
		obj = new PhysicsField();
                break;
            case JLI_OBJECT_TYPE_PhysicsFieldBuilder:
		obj = new PhysicsFieldBuilder();
                break;
            case JLI_OBJECT_TYPE_PhysicsShape:
		obj = new PhysicsShape();
                break;
            case JLI_OBJECT_TYPE_PhysicsShapeBuilder:
		obj = new PhysicsShapeBuilder();
                break;
            case JLI_OBJECT_TYPE_PhysicsWorld:
		obj = new PhysicsWorld();
                break;
            case JLI_OBJECT_TYPE_PhysicsWorldBuilder:
		obj = new PhysicsWorldBuilder();
                break;
            case JLI_OBJECT_TYPE_Resource:
                obj = new Resource();
                break;
            case JLI_OBJECT_TYPE_ResourceBuilder:
                obj = new ResourceBuilder();
                break;
            case JLI_OBJECT_TYPE_RigidPhysicsBody:
                obj = new RigidPhysicsBody();
                break;
            case JLI_OBJECT_TYPE_RigidPhysicsBodyBuilder:
                obj = new RigidPhysicsBodyBuilder();
                break;
            case JLI_OBJECT_TYPE_Scene:
                obj = new Scene();
                break;
            case JLI_OBJECT_TYPE_SceneBuilder:
                obj = new SceneBuilder();
                break;
                
                
            case JLI_OBJECT_TYPE_SceneState:
                obj = new SceneState();
                break;
            case JLI_OBJECT_TYPE_SceneStateBuilder:
                obj = new SceneStateBuilder();
                break;
            case JLI_OBJECT_TYPE_SceneStateMachine:
                obj = new SceneStateMachine();
                break;
            case JLI_OBJECT_TYPE_SceneStateMachineBuilder:
                obj = new SceneStateMachineBuilder();
                break;
                
                
                
            case JLI_OBJECT_TYPE_SoftPhysicsBody:
                obj = new SoftPhysicsBody();
                break;
            case JLI_OBJECT_TYPE_SoftPhysicsBodyBuilder:
                obj = new SoftPhysicsBodyBuilder();
                break;
            case JLI_OBJECT_TYPE_Sound:
		obj = new Sound();
                break;
            case JLI_OBJECT_TYPE_SoundBuilder:
		obj = new SoundBuilder();
                break;
            
            case JLI_OBJECT_TYPE_Texture:
		obj = new Texture();
                break;
            case JLI_OBJECT_TYPE_TextureBuilder:
		obj = new TextureBuilder();
                break;
                
            case JLI_OBJECT_TYPE_WorldState:
                obj = new WorldState();
                break;
            case JLI_OBJECT_TYPE_WorldStateBuilder:
                obj = new WorldStateBuilder();
                break;
            case JLI_OBJECT_TYPE_WorldStateMachine:
                obj = new WorldStateMachine();
                break;
            case JLI_OBJECT_TYPE_WorldStateMachineBuilder:
                obj = new WorldStateMachineBuilder();
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
            case JLI_OBJECT_TYPE_Action:
		    obj = new Action(builder);
                break;
            case JLI_OBJECT_TYPE_ActionBuilder:
		obj = new ActionBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_Camera:
		obj = new Camera(builder);
                break;
            case JLI_OBJECT_TYPE_CameraBuilder:
		obj = new CameraBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_Clock:
                obj = new Clock(builder);
                break;
            case JLI_OBJECT_TYPE_ClockBuilder:
                obj = new ClockBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_CollisionResponse:
		obj = new CollisionResponse(builder);
                break;
            case JLI_OBJECT_TYPE_CollisionResponseBuilder:
		obj = new CollisionResponseBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_CubicTexture:
		obj = new CubicTexture(builder);
                break;
            case JLI_OBJECT_TYPE_CubicTextureBuilder:
		obj = new CubicTextureBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_DynamicPhysicsBody:
		obj = new DynamicPhysicsBody(builder);
                break;
            case JLI_OBJECT_TYPE_DynamicPhysicsBodyBuilder:
		obj = new DynamicPhysicsBodyBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_Geometry:
		obj = new Geometry(builder);
                break;
            case JLI_OBJECT_TYPE_GeometryBuilder:
		obj = new GeometryBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_GhostPhysicsBody:
		obj = new GhostPhysicsBody(builder);
                break;
            case JLI_OBJECT_TYPE_GhostPhysicsBodyBuilder:
		obj = new GhostPhysicsBodyBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_KinematicPhysicsBody:
		obj = new KinematicPhysicsBody(builder);
                break;
            case JLI_OBJECT_TYPE_KinematicPhysicsBodyBuilder:
		obj = new KinematicPhysicsBodyBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_Light:
		obj = new Light(builder);
                break;
            case JLI_OBJECT_TYPE_LightBuilder:
		obj = new LightBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_Material:
		obj = new Material(builder);
                break;
            case JLI_OBJECT_TYPE_MaterialBuilder:
		obj = new MaterialBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_MaterialProperty:
		obj = new MaterialProperty(builder);
                break;
            case JLI_OBJECT_TYPE_MaterialPropertyBuilder:
		obj = new MaterialPropertyBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_Node:
                obj = new Node(builder);
                break;
            case JLI_OBJECT_TYPE_NodeBuilder:
                obj = new NodeBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_ParticleEmitter:
		obj = new ParticleEmitter(builder);
                break;
            case JLI_OBJECT_TYPE_ParticleEmitterBuilder:
		obj = new ParticleEmitterBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_PhysicsContact:
		obj = new PhysicsContact(builder);
                break;
            case JLI_OBJECT_TYPE_PhysicsContactBuilder:
		obj = new PhysicsContactBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_PhysicsField:
		obj = new PhysicsField(builder);
                break;
            case JLI_OBJECT_TYPE_PhysicsFieldBuilder:
		obj = new PhysicsFieldBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_PhysicsShape:
		obj = new PhysicsShape(builder);
                break;
            case JLI_OBJECT_TYPE_PhysicsShapeBuilder:
		obj = new PhysicsShapeBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_PhysicsWorld:
		obj = new PhysicsWorld(builder);
                break;
            case JLI_OBJECT_TYPE_PhysicsWorldBuilder:
		obj = new PhysicsWorldBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_Resource:
                obj = new Resource(builder);
                break;
            case JLI_OBJECT_TYPE_ResourceBuilder:
                obj = new ResourceBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_RigidPhysicsBody:
                obj = new RigidPhysicsBody(builder);
                break;
            case JLI_OBJECT_TYPE_RigidPhysicsBodyBuilder:
                obj = new RigidPhysicsBodyBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_Scene:
                obj = new Scene(builder);
                break;
            case JLI_OBJECT_TYPE_SceneBuilder:
                obj = new SceneBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_SoftPhysicsBody:
                obj = new SoftPhysicsBody(builder);
                break;
            case JLI_OBJECT_TYPE_SoftPhysicsBodyBuilder:
                obj = new SoftPhysicsBodyBuilder(builder);
                break;
            case JLI_OBJECT_TYPE_Sound:
		obj = new Sound(builder);
                break;
            case JLI_OBJECT_TYPE_SoundBuilder:
		obj = new SoundBuilder(builder);
                break;
            
            case JLI_OBJECT_TYPE_Texture:
		obj = new Texture(builder);
                break;
            case JLI_OBJECT_TYPE_TextureBuilder:
		obj = new TextureBuilder(builder);
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
            case JLI_OBJECT_TYPE_Action:
		    obj = new Action(*dynamic_cast<const Action*>(&object));
                break;
            case JLI_OBJECT_TYPE_ActionBuilder:
		obj = new ActionBuilder(*dynamic_cast<const ActionBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_Camera:
		obj = new Camera(*dynamic_cast<const Camera*>(&object));
                break;
            case JLI_OBJECT_TYPE_CameraBuilder:
		obj = new CameraBuilder(*dynamic_cast<const CameraBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_Clock:
                obj = new Clock(*dynamic_cast<const Clock*>(&object));
                break;
            case JLI_OBJECT_TYPE_ClockBuilder:
                obj = new ClockBuilder(*dynamic_cast<const ClockBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_CollisionResponse:
		obj = new CollisionResponse(*dynamic_cast<const CollisionResponse*>(&object));
                break;
            case JLI_OBJECT_TYPE_CollisionResponseBuilder:
		obj = new CollisionResponseBuilder(*dynamic_cast<const CollisionResponseBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_CubicTexture:
		obj = new CubicTexture(*dynamic_cast<const CubicTexture*>(&object));
                break;
            case JLI_OBJECT_TYPE_CubicTextureBuilder:
		obj = new CubicTextureBuilder(*dynamic_cast<const CubicTextureBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_DynamicPhysicsBody:
		obj = new DynamicPhysicsBody(*dynamic_cast<const DynamicPhysicsBody*>(&object));
                break;
            case JLI_OBJECT_TYPE_DynamicPhysicsBodyBuilder:
		obj = new DynamicPhysicsBodyBuilder(*dynamic_cast<const DynamicPhysicsBodyBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_Geometry:
		obj = new Geometry(*dynamic_cast<const Geometry*>(&object));
                break;
            case JLI_OBJECT_TYPE_GeometryBuilder:
		obj = new GeometryBuilder(*dynamic_cast<const GeometryBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_GhostPhysicsBody:
		obj = new GhostPhysicsBody(*dynamic_cast<const GhostPhysicsBody*>(&object));
                break;
            case JLI_OBJECT_TYPE_GhostPhysicsBodyBuilder:
		obj = new GhostPhysicsBodyBuilder(*dynamic_cast<const GhostPhysicsBodyBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_KinematicPhysicsBody:
		obj = new KinematicPhysicsBody(*dynamic_cast<const KinematicPhysicsBody*>(&object));
                break;
            case JLI_OBJECT_TYPE_KinematicPhysicsBodyBuilder:
		obj = new KinematicPhysicsBodyBuilder(*dynamic_cast<const KinematicPhysicsBodyBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_Light:
		obj = new Light(*dynamic_cast<const Light*>(&object));
                break;
            case JLI_OBJECT_TYPE_LightBuilder:
		obj = new LightBuilder(*dynamic_cast<const LightBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_Material:
		obj = new Material(*dynamic_cast<const Material*>(&object));
                break;
            case JLI_OBJECT_TYPE_MaterialBuilder:
		obj = new MaterialBuilder(*dynamic_cast<const MaterialBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_MaterialProperty:
		obj = new MaterialProperty(*dynamic_cast<const MaterialProperty*>(&object));
                break;
            case JLI_OBJECT_TYPE_MaterialPropertyBuilder:
		obj = new MaterialPropertyBuilder(*dynamic_cast<const MaterialPropertyBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_Node:
                obj = new Node(*dynamic_cast<const Node*>(&object));
                break;
            case JLI_OBJECT_TYPE_NodeBuilder:
                obj = new NodeBuilder(*dynamic_cast<const NodeBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_ParticleEmitter:
		obj = new ParticleEmitter(*dynamic_cast<const ParticleEmitter*>(&object));
                break;
            case JLI_OBJECT_TYPE_ParticleEmitterBuilder:
		obj = new ParticleEmitterBuilder(*dynamic_cast<const ParticleEmitterBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_PhysicsContact:
		obj = new PhysicsContact(*dynamic_cast<const PhysicsContact*>(&object));
                break;
            case JLI_OBJECT_TYPE_PhysicsContactBuilder:
		obj = new PhysicsContactBuilder(*dynamic_cast<const PhysicsContactBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_PhysicsField:
		obj = new PhysicsField(*dynamic_cast<const PhysicsField*>(&object));
                break;
            case JLI_OBJECT_TYPE_PhysicsFieldBuilder:
		obj = new PhysicsFieldBuilder(*dynamic_cast<const PhysicsFieldBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_PhysicsShape:
		obj = new PhysicsShape(*dynamic_cast<const PhysicsShape*>(&object));
                break;
            case JLI_OBJECT_TYPE_PhysicsShapeBuilder:
		obj = new PhysicsShapeBuilder(*dynamic_cast<const PhysicsShapeBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_PhysicsWorld:
		obj = new PhysicsWorld(*dynamic_cast<const PhysicsWorld*>(&object));
                break;
            case JLI_OBJECT_TYPE_PhysicsWorldBuilder:
		obj = new PhysicsWorldBuilder(*dynamic_cast<const PhysicsWorldBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_Resource:
                obj = new Resource(*dynamic_cast<const Resource*>(&object));
                break;
            case JLI_OBJECT_TYPE_ResourceBuilder:
                obj = new ResourceBuilder(*dynamic_cast<const ResourceBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_RigidPhysicsBody:
                obj = new RigidPhysicsBody(*dynamic_cast<const RigidPhysicsBody*>(&object));
                break;
            case JLI_OBJECT_TYPE_RigidPhysicsBodyBuilder:
                obj = new RigidPhysicsBodyBuilder(*dynamic_cast<const RigidPhysicsBodyBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_Scene:
                obj = new Scene(*dynamic_cast<const Scene*>(&object));
                break;
            case JLI_OBJECT_TYPE_SceneBuilder:
                obj = new SceneBuilder(*dynamic_cast<const SceneBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_SoftPhysicsBody:
                obj = new SoftPhysicsBody(*dynamic_cast<const SoftPhysicsBody*>(&object));
                break;
            case JLI_OBJECT_TYPE_SoftPhysicsBodyBuilder:
                obj = new SoftPhysicsBodyBuilder(*dynamic_cast<const SoftPhysicsBodyBuilder*>(&object));
                break;
            case JLI_OBJECT_TYPE_Sound:
		obj = new Sound(*dynamic_cast<const Sound*>(&object));
                break;
            case JLI_OBJECT_TYPE_SoundBuilder:
		obj = new SoundBuilder(*dynamic_cast<const SoundBuilder*>(&object));
                break;
            
            case JLI_OBJECT_TYPE_Texture:
		obj = new Texture(*dynamic_cast<const Texture*>(&object));
                break;
            case JLI_OBJECT_TYPE_TextureBuilder:
		obj = new TextureBuilder(*dynamic_cast<const TextureBuilder*>(&object));
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

