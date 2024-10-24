LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

ifneq ($(TARGET_PLATFORM_DEVICE_BASE),)
LOCAL_CFLAGS += -DUSES_BOOTDEVICE_PATH
endif

LOCAL_C_INCLUDES := \
    bootable/recovery \
    bootable/recovery/otautil/include \
    bootable/deprecated-ota/edify/include \
    bootable/deprecated-ota/updater/include \
    system/libbase/include

LOCAL_SRC_FILES := recovery_updater.cpp
LOCAL_MODULE := librecovery_updater_oneplus
LOCAL_MODULE_TAGS  := optional

include $(BUILD_STATIC_LIBRARY)

