#pragma once

#include <stdio.h>
#include <inttypes.h>
#include "driver/i2c_master.h"
#include "esp_err.h"
#include "esp_log.h"

esp_err_t ioexpander_init(uint8_t dev_addr, uint8_t pin_scl, uint8_t pin_sda);

