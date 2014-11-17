LOCAL_PATH := $(call my-dir)/nanovg/

include $(CLEAR_VARS)

LOCAL_MODULE    := nanovg

LOCAL_C_INCLUDES := \
$(LOCAL_PATH)/../../platform/core/ \
$(LOCAL_PATH)/ \
$(LOCAL_PATH)/src

LOCAL_CFLAGS := $(LOCAL_C_INCLUDES:%=-I%)

LOCAL_SRC_FILES := \
$(LOCAL_PATH)/src/nanovg.c

include $(BUILD_STATIC_LIBRARY)
