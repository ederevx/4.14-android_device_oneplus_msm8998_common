/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <map>

#include "TouchscreenGesture.h"

namespace vendor {
namespace lineage {
namespace touch {
namespace V1_0 {
namespace implementation {

const std::map<int32_t, TouchscreenGesture::GestureInfo> kGestureInfoMap = {
    {0, {251, "Two fingers down swipe", "/proc/touchpanel/double_swipe_enable"}},
    {1, {252, "Up arrow", "/proc/touchpanel/up_arrow_enable"}},
    {2, {254, "Right arrow", "/proc/touchpanel/right_arrow_enable"}},
    {3, {255, "Down arrow", "/proc/touchpanel/down_arrow_enable"}},
    {4, {253, "Left arrow", "/proc/touchpanel/left_arrow_enable"}},
    {5, {66, "One finger up swipe", "/proc/touchpanel/up_swipe_enable"}},
    {6, {65, "One finger right swipe", "/proc/touchpanel/right_swipe_enable"}},
    {7, {64, "One finger down swipe", "/proc/touchpanel/down_swipe_enable"}},
    {8, {63, "One finger left swipe", "/proc/touchpanel/left_swipe_enable"}},
    {9, {247, "Letter M", "/proc/touchpanel/letter_m_enable"}},
    {10, {250, "Letter O", "/proc/touchpanel/letter_o_enable"}},
    {11, {248, "Letter S", "/proc/touchpanel/letter_s_enable"}},
    {12, {246, "Letter W", "/proc/touchpanel/letter_w_enable"}},
};

}  // namespace implementation
}  // namespace V1_0
}  // namespace touch
}  // namespace lineage
}  // namespace vendor
