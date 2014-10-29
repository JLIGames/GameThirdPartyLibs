LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := fmod

LOCAL_C_INCLUDES := \
$(LOCAL_PATH)/inc

LOCAL_CFLAGS := $(LOCAL_C_INCLUDES:%=-I%)

LOCAL_SRC_FILES := $(LOCAL_PATH)/lib/$(TARGET_ARCH_ABI)/libfmodL.so

include $(BUILD_STATIC_LIBRARY)
