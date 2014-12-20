LOCAL_PATH := $(call my-dir)/libvorbis-1.3.3

include $(CLEAR_VARS)

LOCAL_MODULE    := vorbis

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
$(LOCAL_PATH)/examples/chaining_example.c \
$(LOCAL_PATH)/examples/decoder_example.c \
$(LOCAL_PATH)/examples/encoder_example.c \
$(LOCAL_PATH)/examples/seeking_example.c \
$(LOCAL_PATH)/examples/vorbisfile_example.c \
$(LOCAL_PATH)/lib/analysis.c \
$(LOCAL_PATH)/lib/bitrate.c \
$(LOCAL_PATH)/lib/block.c \
$(LOCAL_PATH)/lib/codebook.c \
$(LOCAL_PATH)/lib/envelope.c \
$(LOCAL_PATH)/lib/floor0.c \
$(LOCAL_PATH)/lib/floor1.c \
$(LOCAL_PATH)/lib/info.c \
$(LOCAL_PATH)/lib/lookup.c \
$(LOCAL_PATH)/lib/lpc.c \
$(LOCAL_PATH)/lib/lsp.c \
$(LOCAL_PATH)/lib/mapping0.c \
$(LOCAL_PATH)/lib/mdct.c \
$(LOCAL_PATH)/lib/psy.c \
$(LOCAL_PATH)/lib/registry.c \
$(LOCAL_PATH)/lib/res0.c \
$(LOCAL_PATH)/lib/smallft.c \
$(LOCAL_PATH)/lib/synthesis.c \
$(LOCAL_PATH)/lib/tone.c \
$(LOCAL_PATH)/lib/vorbisenc.c \
$(LOCAL_PATH)/lib/vorbisfile.c \
$(LOCAL_PATH)/lib/window.c \
$(LOCAL_PATH)/test/test.c \
$(LOCAL_PATH)/test/util.c \
$(LOCAL_PATH)/test/write_read.c #\
\
$(LOCAL_PATH)/lib/barkmel.c \
$(LOCAL_PATH)/lib/psytune.c \
$(LOCAL_PATH)/lib/sharedbook.c \

include $(BUILD_STATIC_LIBRARY)
