LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := platformlib
LOCAL_SRC_FILES := File.cpp \
                   Input.cpp \
                   Log.cpp \
                   Sound.cpp

include $(BUILD_STATIC_LIBRARY)
