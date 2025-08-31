#pragma once

#include <stdio.h>
#include <inttypes.h>
#include "driver/i2c_master.h"
#include "esp_err.h"
#include "esp_log.h"

enum gpio_prefix_t {
    P0,
    P1,
    P2,
    P3,
    P4
};

esp_err_t ioexpander_init(uint8_t dev_addr, uint8_t pin_scl, uint8_t pin_sda);

esp_err_t set_gpio(enum gpio_prefix_t p_value, uint8_t suffix_p, bool value);