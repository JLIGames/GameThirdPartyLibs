//
//  WorldFactory.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/9/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef JLIGameEngineTest_WorldFactory_h
#define JLIGameEngineTest_WorldFactory_h

#include "Util.h"

#include "btAlignedObjectArray.h"
#include "btHashMap.h"
#include "btSerializer.h"

#include "AbstractBuilder.h"
#include "AbstractFactoryObject.h"

#include <string>

namespace jli
{
//    namespace type
//    {
        enum jliObjectEnumType
        {
            JLI_OBJECT_TYPE_None = 0,
            
            JLI_OBJECT_TYPE_DeviceTouch,
            
            JLI_OBJECT_TYPE_Action,
            JLI_OBJECT_TYPE_ActionBuilder,
            JLI_OBJECT_TYPE_Camera,
            JLI_OBJECT_TYPE_CameraBuilder,
            JLI_OBJECT_TYPE_Clock,
            JLI_OBJECT_TYPE_ClockBuilder,
            JLI_OBJECT_TYPE_CollisionResponse,
            JLI_OBJECT_TYPE_CollisionResponseBuilder,
            JLI_OBJECT_TYPE_CubicTexture,
            JLI_OBJECT_TYPE_CubicTextureBuilder,
            JLI_OBJECT_TYPE_DynamicPhysicsBody,
            JLI_OBJECT_TYPE_DynamicPhysicsBodyBuilder,
            JLI_OBJECT_TYPE_Geometry,
            JLI_OBJECT_TYPE_GeometryBuilder,
            JLI_OBJECT_TYPE_GhostPhysicsBody,
            JLI_OBJECT_TYPE_GhostPhysicsBodyBuilder,
            JLI_OBJECT_TYPE_KinematicPhysicsBody,
            JLI_OBJECT_TYPE_KinematicPhysicsBodyBuilder,
            JLI_OBJECT_TYPE_Light,
            JLI_OBJECT_TYPE_LightBuilder,
            JLI_OBJECT_TYPE_Material,
            JLI_OBJECT_TYPE_MaterialBuilder,
            JLI_OBJECT_TYPE_MaterialProperty,
            JLI_OBJECT_TYPE_MaterialPropertyBuilder,
            JLI_OBJECT_TYPE_Node,
            JLI_OBJECT_TYPE_NodeBuilder,
            JLI_OBJECT_TYPE_NodeState,
            JLI_OBJECT_TYPE_NodeStateBuilder,
            JLI_OBJECT_TYPE_NodeStateMachine,
            JLI_OBJECT_TYPE_NodeStateMachineBuilder,
            JLI_OBJECT_TYPE_ParticleEmitter,
            JLI_OBJECT_TYPE_ParticleEmitterBuilder,
            JLI_OBJECT_TYPE_PhysicsContact,
            JLI_OBJECT_TYPE_PhysicsContactBuilder,
            JLI_OBJECT_TYPE_PhysicsField,
            JLI_OBJECT_TYPE_PhysicsFieldBuilder,
            JLI_OBJECT_TYPE_PhysicsShape,
            JLI_OBJECT_TYPE_PhysicsShapeBuilder,
            JLI_OBJECT_TYPE_PhysicsWorld,
            JLI_OBJECT_TYPE_PhysicsWorldBuilder,
            JLI_OBJECT_TYPE_Resource,
            JLI_OBJECT_TYPE_ResourceBuilder,
            JLI_OBJECT_TYPE_RigidPhysicsBody,
            JLI_OBJECT_TYPE_RigidPhysicsBodyBuilder,
            JLI_OBJECT_TYPE_Scene,
            JLI_OBJECT_TYPE_SceneBuilder,
            JLI_OBJECT_TYPE_SceneState,
            JLI_OBJECT_TYPE_SceneStateBuilder,
            JLI_OBJECT_TYPE_SceneStateMachine,
            JLI_OBJECT_TYPE_SceneStateMachineBuilder,
            JLI_OBJECT_TYPE_SoftPhysicsBody,
            JLI_OBJECT_TYPE_SoftPhysicsBodyBuilder,
            JLI_OBJECT_TYPE_Sound,
            JLI_OBJECT_TYPE_SoundBuilder,
            JLI_OBJECT_TYPE_Texture,
            JLI_OBJECT_TYPE_TextureBuilder,
            JLI_OBJECT_TYPE_WorldState,
            JLI_OBJECT_TYPE_WorldStateBuilder,
            JLI_OBJECT_TYPE_WorldStateMachine,
            JLI_OBJECT_TYPE_WorldStateMachineBuilder,
            
            JLI_OBJECT_TYPE_NumberOfTypes
        };
//    }
    
    class WorldFactory
    {
    public:
        typedef btAlignedObjectArray<AbstractFactoryObject*> ObjectList;
        typedef btHashMap<btHashPtr, s32> ObjectDuplicateMap;
        
    public:
        virtual AbstractFactoryObject *create(const u32 type);
        virtual AbstractFactoryObject *create(const AbstractBuilder &);
        virtual AbstractFactoryObject *clone(const AbstractFactoryObject &, bool = false);
        
        virtual bool has(AbstractFactoryObject*)const;
        
        virtual void destroyInstance(AbstractFactoryObject*);
        virtual void destroy(AbstractFactoryObject*);
        virtual void destroyAll();
        
        virtual s32 size();
        virtual s32 instances(const u32);
        virtual s32 instances(AbstractFactoryObject*);
        
        virtual AbstractFactoryObject *get(const u32)const;
        virtual void getAll(btAlignedObjectArray<AbstractFactoryObject*> &)const;
        
        virtual s32 index(AbstractFactoryObject *)const;
        
        virtual	void serialize(btSerializer* serializer);
        
        operator std::string() const;
    public:
        
        WorldFactory();
        virtual ~WorldFactory();
        
        virtual AbstractFactoryObject *ctor(const u32 &);
        virtual AbstractFactoryObject *ctor(const jli::AbstractBuilder &);
        virtual AbstractFactoryObject *ctor(const AbstractFactoryObject &);
        
        AbstractFactoryObject *create_Internal(const u32);
        AbstractFactoryObject *create_Internal(const AbstractBuilder &);
        AbstractFactoryObject *clone_Internal(const AbstractFactoryObject &, bool);
        void remove_Internal(AbstractFactoryObject*);
    public:
        ObjectList m_ObjectList;
        ObjectDuplicateMap m_ObjectDuplicateMap;
    };
}


#endif
