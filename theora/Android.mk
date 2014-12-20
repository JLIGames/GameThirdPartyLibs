LOCAL_PATH := $(call my-dir)/libtheora-1.1.1

include $(CLEAR_VARS)

LOCAL_MODULE    := theora

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
$(LOCAL_PATH)/lib/analyze.c \
$(LOCAL_PATH)/lib/apiwrapper.c \
$(LOCAL_PATH)/lib/bitpack.c \
$(LOCAL_PATH)/lib/cpu.c \
$(LOCAL_PATH)/lib/decapiwrapper.c \
$(LOCAL_PATH)/lib/decinfo.c \
$(LOCAL_PATH)/lib/decode.c \
$(LOCAL_PATH)/lib/dequant.c \
$(LOCAL_PATH)/lib/encapiwrapper.c \
$(LOCAL_PATH)/lib/encfrag.c \
$(LOCAL_PATH)/lib/encinfo.c \
$(LOCAL_PATH)/lib/encode.c \
$(LOCAL_PATH)/lib/encoder_disabled.c \
$(LOCAL_PATH)/lib/enquant.c \
$(LOCAL_PATH)/lib/fdct.c \
$(LOCAL_PATH)/lib/fragment.c \
$(LOCAL_PATH)/lib/huffdec.c \
$(LOCAL_PATH)/lib/huffenc.c \
$(LOCAL_PATH)/lib/idct.c \
$(LOCAL_PATH)/lib/info.c \
$(LOCAL_PATH)/lib/internal.c \
$(LOCAL_PATH)/lib/mathops.c \
$(LOCAL_PATH)/lib/mcenc.c \
$(LOCAL_PATH)/lib/quant.c \
$(LOCAL_PATH)/lib/rate.c \
$(LOCAL_PATH)/lib/state.c \
$(LOCAL_PATH)/lib/tokenize.c \
$(LOCAL_PATH)/lib/x86/mmxencfrag.c \
$(LOCAL_PATH)/lib/x86/mmxfdct.c \
$(LOCAL_PATH)/lib/x86/mmxfrag.c \
$(LOCAL_PATH)/lib/x86/mmxidct.c \
$(LOCAL_PATH)/lib/x86/mmxstate.c \
$(LOCAL_PATH)/lib/x86/sse2fdct.c \
$(LOCAL_PATH)/lib/x86/x86enc.c \
$(LOCAL_PATH)/lib/x86/x86state.c \
$(LOCAL_PATH)/lib/x86_vc/mmxencfrag.c \
$(LOCAL_PATH)/lib/x86_vc/mmxfdct.c \
$(LOCAL_PATH)/lib/x86_vc/mmxfrag.c \
$(LOCAL_PATH)/lib/x86_vc/mmxidct.c \
$(LOCAL_PATH)/lib/x86_vc/mmxstate.c \
$(LOCAL_PATH)/lib/x86_vc/x86enc.c \
$(LOCAL_PATH)/lib/x86_vc/x86state.c #\
$(LOCAL_PATH)/tests/comment.c \
$(LOCAL_PATH)/tests/comment_theora.c \
$(LOCAL_PATH)/tests/granulepos.c \
$(LOCAL_PATH)/tests/granulepos_theora.c \
$(LOCAL_PATH)/tests/noop.c \
$(LOCAL_PATH)/tests/noop_theora.c #\
$(LOCAL_PATH)/examples/dump_psnr.c \
$(LOCAL_PATH)/examples/dump_video.c \
$(LOCAL_PATH)/examples/encoder_example.c \
$(LOCAL_PATH)/examples/getopt.c \
$(LOCAL_PATH)/examples/getopt1.c \
$(LOCAL_PATH)/examples/player_example.c \
$(LOCAL_PATH)/examples/png2theora.c \

include $(BUILD_STATIC_LIBRARY)
