LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := ndklib

FILES := NativeSum.cpp

LOCAL_SRC_FILES := $(FILES)

LOCAL_LDLIBS := -llog

include $(BUILD_SHARED_LIBRARY)