/*
 *
 * Copyright (c) 2024 Your Name
 * SPDX-License-Identifier: MIT
 *
 */

#include <zephyr/logging/log.h>
#include "custom_status_screen.h"

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

lv_obj_t *zmk_display_status_screen() {
    lv_obj_t *screen = lv_obj_create(NULL);

    // Create a label for "Hello World"
    lv_obj_t *label = lv_label_create(screen, NULL);
    lv_label_set_text(label, "Hello World");
    lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0); // Center the label

    return screen;
}