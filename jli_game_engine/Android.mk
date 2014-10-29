LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := jli

LOCAL_C_INCLUDES := \
$(LOCAL_PATH)/../../platform/core/ \
$(LOCAL_PATH)/include

LOCAL_CFLAGS := $(LOCAL_C_INCLUDES:%=-I%)

LOCAL_SRC_FILES := \

include $(BUILD_STATIC_LIBRARY)
