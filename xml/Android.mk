LOCAL_PATH := $(call my-dir)/tinyxml

include $(CLEAR_VARS)

LOCAL_MODULE    := xml

LOCAL_C_INCLUDES := \
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
$(MY_JLI_PATH) \
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
$(LOCAL_PATH)/tinystr.cpp \
$(LOCAL_PATH)/tinyxml.cpp \
$(LOCAL_PATH)/tinyxmlerror.cpp \
$(LOCAL_PATH)/tinyxmlparser.cpp \
$(LOCAL_PATH)/xmltest.cpp

include $(BUILD_STATIC_LIBRARY)
