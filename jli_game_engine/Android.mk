LOCAL_PATH := $(call my-dir)/version-1.0/src

include $(CLEAR_VARS)

LOCAL_MODULE    := jli

LOCAL_EXPORT_C_INCLUDES := \
$(LOCAL_PATH) \
$(MY_ASSIMP_PATH)/code \
$(MY_ASSIMP_PATH)/contrib/ConvertUTF/ \
$(MY_ASSIMP_PATH)/contrib/irrXML/ \
$(MY_ASSIMP_PATH)/contrib/poly2tri/poly2tri/common/ \
$(MY_ASSIMP_PATH)/contrib/poly2tri/poly2tri/ \
$(MY_ASSIMP_PATH)/contrib/poly2tri/poly2tri/sweep/ \
$(MY_ASSIMP_PATH)/contrib/unzip/ \
$(MY_ASSIMP_PATH)/include/ \
$(MY_ASSIMP_PATH)/contrib/clipper/ \
$(MY_ASSIMP_PATH)/code/BoostWorkaround/ \
$(MY_BULLET_PATH) \
$(MY_BULLET_PATH)/BulletCollision/BroadphaseCollision \
$(MY_BULLET_PATH)/BulletCollision/CollisionDispatch \
$(MY_BULLET_PATH)/BulletCollision/CollisionShapes \
$(MY_BULLET_PATH)/BulletCollision/Gimpact \
$(MY_BULLET_PATH)/BulletCollision/NarrowPhaseCollision \
$(MY_BULLET_PATH)/BulletDynamics/Character \
$(MY_BULLET_PATH)/BulletDynamics/ConstraintSolver \
$(MY_BULLET_PATH)/BulletDynamics/Dynamics \
$(MY_BULLET_PATH)/BulletDynamics/Featherstone \
$(MY_BULLET_PATH)/BulletDynamics/MLCPSolvers \
$(MY_BULLET_PATH)/BulletDynamics/Vehicle \
$(MY_BULLET_PATH)/BulletSoftBody \
$(MY_BULLET_PATH)/LinearMath \
$(MY_FMOD_PATH)/lowlevel/inc \
\
$(MY_JSON_PATH)/src/lib_json \
$(MY_JSON_PATH)/include \
$(MY_JSON_PATH)/src/test_lib_json \
$(MY_LUA_PATH) \
$(MY_NANOVG_PATH) \
$(MY_OGG_PATH) \
$(MY_OGG_PATH)/include \
$(MY_OGG_PATH)/include/ogg \
$(MY_OGG_PATH)/src \
$(MY_PLATFORM_PATH)/core \
$(MY_PLATFORM_PATH)/android \
$(MY_PNG_PATH) \
$(MY_SQLITE_PATH) \
$(MY_THEORA_PATH)/examples/ \
$(MY_THEORA_PATH)/include/ \
$(MY_THEORA_PATH)/lib/ \
$(MY_VORBIS_PATH)/ \
$(MY_VORBIS_PATH)/examples/ \
$(MY_VORBIS_PATH)/test \
$(MY_VORBIS_PATH)/include \
$(MY_VORBIS_PATH)/lib \
$(MY_XML_PATH) \
$(MY_ZLIB_PATH) \

LOCAL_CFLAGS := $(LOCAL_C_INCLUDES:%=-I%)

LOCAL_SRC_FILES := \
$(LOCAL_PATH)/AbstractBuilder.cpp \
$(LOCAL_PATH)/AbstractFactoryObject.cpp \
$(LOCAL_PATH)/AbstractPhysicsBody.cpp \
$(LOCAL_PATH)/Action.cpp \
$(LOCAL_PATH)/ActionBuilder.cpp \
$(LOCAL_PATH)/Camera.cpp \
$(LOCAL_PATH)/CameraBuilder.cpp \
$(LOCAL_PATH)/Clock.cpp \
$(LOCAL_PATH)/ClockBuilder.cpp \
$(LOCAL_PATH)/CollisionResponse.cpp \
$(LOCAL_PATH)/CollisionResponseBuilder.cpp \
$(LOCAL_PATH)/CubicTexture.cpp \
$(LOCAL_PATH)/CubicTextureBuilder.cpp \
$(LOCAL_PATH)/DynamicPhysicsBody.cpp \
$(LOCAL_PATH)/DynamicPhysicsBodyBuilder.cpp \
$(LOCAL_PATH)/Geometry.cpp \
$(LOCAL_PATH)/GeometryBuilder.cpp \
$(LOCAL_PATH)/GhostPhysicsBody.cpp \
$(LOCAL_PATH)/GhostPhysicsBodyBuilder.cpp \
$(LOCAL_PATH)/KinematicPhysicsBody.cpp \
$(LOCAL_PATH)/KinematicPhysicsBodyBuilder.cpp \
$(LOCAL_PATH)/Light.cpp \
$(LOCAL_PATH)/LightBuilder.cpp \
$(LOCAL_PATH)/Material.cpp \
$(LOCAL_PATH)/MaterialBuilder.cpp \
$(LOCAL_PATH)/MaterialProperty.cpp \
$(LOCAL_PATH)/MaterialPropertyBuilder.cpp \
$(LOCAL_PATH)/Node.cpp \
$(LOCAL_PATH)/NodeBuilder.cpp \
$(LOCAL_PATH)/NodeState.cpp \
$(LOCAL_PATH)/NodeStateBuilder.cpp \
$(LOCAL_PATH)/NodeStateMachine.cpp \
$(LOCAL_PATH)/NodeStateMachineBuilder.cpp \
$(LOCAL_PATH)/ParticleEmitter.cpp \
$(LOCAL_PATH)/ParticleEmitterBuilder.cpp \
$(LOCAL_PATH)/PhysicsContact.cpp \
$(LOCAL_PATH)/PhysicsContactBuilder.cpp \
$(LOCAL_PATH)/PhysicsField.cpp \
$(LOCAL_PATH)/PhysicsFieldBuilder.cpp \
$(LOCAL_PATH)/PhysicsShape.cpp \
$(LOCAL_PATH)/PhysicsShapeBuilder.cpp \
$(LOCAL_PATH)/PhysicsWorld.cpp \
$(LOCAL_PATH)/PhysicsWorldBuilder.cpp \
$(LOCAL_PATH)/Resource.cpp \
$(LOCAL_PATH)/ResourceBuilder.cpp \
$(LOCAL_PATH)/RigidPhysicsBody.cpp \
$(LOCAL_PATH)/RigidPhysicsBodyBuilder.cpp \
$(LOCAL_PATH)/Scene.cpp \
$(LOCAL_PATH)/SceneBuilder.cpp \
$(LOCAL_PATH)/SceneState.cpp \
$(LOCAL_PATH)/SceneStateBuilder.cpp \
$(LOCAL_PATH)/SceneStateMachine.cpp \
$(LOCAL_PATH)/SceneStateMachineBuilder.cpp \
$(LOCAL_PATH)/SoftPhysicsBody.cpp \
$(LOCAL_PATH)/SoftPhysicsBodyBuilder.cpp \
$(LOCAL_PATH)/Sound.cpp \
$(LOCAL_PATH)/SoundBuilder.cpp \
$(LOCAL_PATH)/Texture.cpp \
$(LOCAL_PATH)/TextureBuilder.cpp \
$(LOCAL_PATH)/World.cpp \
$(LOCAL_PATH)/WorldFactory.cpp \
$(LOCAL_PATH)/WorldLuaVirtualMachine.cpp \
$(LOCAL_PATH)/WorldMySQL.cpp \
$(LOCAL_PATH)/WorldSound.cpp \
$(LOCAL_PATH)/WorldState.cpp \
$(LOCAL_PATH)/WorldStateBuilder.cpp \
$(LOCAL_PATH)/WorldStateMachine.cpp \
$(LOCAL_PATH)/WorldStateMachineBuilder.cpp 

include $(BUILD_STATIC_LIBRARY)
