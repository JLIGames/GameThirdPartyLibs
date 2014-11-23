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

namespace jli
{
    namespace type
    {
        enum jliObjectEnumType
        {
            None = 0,
            
            Action,
            ActionBuilder,
            BaseRigidPhysicsBody,
            BaseRigidPhysicsBodyBuilder,
            BaseSoftPhysicsBody,
            BaseSoftPhysicsBodyBuilder,
            Camera,
            CameraBuilder,
            CollisionResponse,
            CollisionResponseBuilder,
            CubicTexture,
            CubicTextureBuilder,
            DynamicPhysicsBody,
            DynamicPhysicsBodyBuilder,
            Geometry,
            GeometryBuilder,
            GhostPhysicsBody,
            GhostPhysicsBodyBuilder,
            KinematicPhysicsBody,
            KinematicPhysicsBodyBuilder,
            Light,
            LightBuilder,
            Material,
            MaterialBuilder,
            MaterialProperty,
            MaterialPropertyBuilder,
            Node,
            NodeBuilder,
            ParticleEmitter,
            ParticleEmitterBuilder,
            PhysicsContact,
            PhysicsContactBuilder,
            PhysicsField,
            PhysicsFieldBuilder,
            PhysicsShape,
            PhysicsShapeBuilder,
            PhysicsWorld,
            PhysicsWorldBuilder,
            Resource,
            ResourceBuilder,
            Scene,
            SceneBuilder,
            Sound,
            SoundBuilder,
            State,
            StateBuilder,
            StateMachine,
            StateMachineBuilder,
            StaticPhysicsBody,
            StaticPhysicsBodyBuilder,
            Texture,
            TextureBuilder,
            Clock,
            ClockBuilder,
            
            NumberOfTypes
        };
    }
    
    class WorldFactory
    {
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
