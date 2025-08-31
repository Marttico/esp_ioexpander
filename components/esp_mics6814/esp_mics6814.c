#include "esp_mics6814.h"

#define TAG "esp_mics6814"

esp_err_t esp_mics6814_init(uint8_t pin_scl, uint8_t pin_sda){
    ioexpander_init(0x19,pin_scl,pin_sda);

    return ESP_OK;
}
