/*
 *
 * Copyright (c) 2024 Your Name
 * SPDX-License-Identifier: MIT
 *
 */

#include "custom_status_screen.h"
#include <zephyr/logging/log.h>
#include <lvgl.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

// Define styles for text
static lv_style_t black_style;
static lv_style_t red_style;

void init_styles() {
    lv_style_init(&black_style);
    lv_style_set_text_color(&black_style, LV_STATE_DEFAULT, LV_COLOR_BLACK);

    lv_style_init(&red_style);
    lv_style_set_text_color(&red_style, LV_STATE_DEFAULT, LV_COLOR_RED);
}

lv_obj_t *zmk_display_status_screen() {
    lv_obj_t *screen = lv_obj_create(NULL);

    // Initialize text styles
    init_styles();

    // Create a label for "hello" and apply the black style
    lv_obj_t *hello_label = lv_label_create(screen, NULL);
    lv_label_set_text(hello_label, "hello");
    lv_obj_add_style(hello_label, LV_LABEL_PART_MAIN, &black_style);
    lv_obj_align(hello_label, NULL, LV_ALIGN_CENTER, 0, -20); // Position above

    // Create a label for "world" and apply the red style
    lv_obj_t *world_label = lv_label_create(screen, NULL);
    lv_label_set_text(world_label, "world");
    lv_obj_add_style(world_label, LV_LABEL_PART_MAIN, &red_style);
    lv_obj_align(world_label, NULL, LV_ALIGN_CENTER, 0, 20); // Position below

    return screen;
}