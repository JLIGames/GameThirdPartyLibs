LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := corelib
LOCAL_SRC_FILES := Game.cpp

include $(BUILD_STATIC_LIBRARY)
