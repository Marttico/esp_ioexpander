#include "esp_mics6814.h"

#define TAG "esp_mics6814"

esp_err_t mics6814_init(uint8_t pin_scl, uint8_t pin_sda){
    ioexpander_init(0x19,pin_scl,pin_sda);

    // Initialize LED gpio direction here!

    /*
    
        uint8_t set_gpio_mode1[] = {0x73, 0x00};
    i2c_master_transmit(mics_dev_handle, set_gpio_mode1, sizeof(set_gpio_mode1), -1);

    // Set bit 2 in P1M2
    uint8_t set_gpio_mode2[] = {0x74, (1 << ADDR_LED_R) | (1 << ADDR_LED_G) | (1 << ADDR_LED_B) | (1 << ADDR_HEATERS_EN)};
    i2c_master_transmit(mics_dev_handle, set_gpio_mode2, sizeof(set_gpio_mode2), -1);
    */

    return ESP_OK;
}

esp_err_t mics6814_set_led(uint8_t r, uint8_t g, uint8_t b){
    // Implement this
}