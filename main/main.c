/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_ioexpander.h"

void app_main(void)
{
    printf("Hello world!\n");
    ioexpander_init();
    vTaskDelay(pdMS_TO_TICKS(1000));
    esp_restart();
}
