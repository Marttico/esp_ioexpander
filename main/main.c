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
#include "esp_mics6814.h"

#define I2C_MASTER_SCL_IO           22        // SCL pin
#define I2C_MASTER_SDA_IO           21        // SDA pin

void app_main(void)
{
    printf("Hello world!\n");
    esp_mics6814_init(I2C_MASTER_SCL_IO,I2C_MASTER_SDA_IO);
    vTaskDelay(pdMS_TO_TICKS(1000));
    esp_restart();
}
