#pragma once

#include <stdio.h>
#include <inttypes.h>
#include "driver/i2c_master.h"
#include "esp_err.h"
#include "esp_log.h"
#include "esp_ioexpander.h"

esp_err_t esp_mics6814_init(uint8_t pin_scl, uint8_t pin_sda);

