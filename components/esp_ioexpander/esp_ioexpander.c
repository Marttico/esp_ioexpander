#include "esp_ioexpander.h"

#define TAG "esp_ioexpander"

i2c_master_bus_handle_t i2c_bus_handle;
i2c_master_dev_handle_t ioexpander_dev_handle;

bool ioexpander_initialized = false;

esp_err_t ioexpander_init(uint8_t dev_addr, uint8_t pin_scl, uint8_t pin_sda){
    
    i2c_master_bus_config_t i2c_mst_config = {
    .clk_source = I2C_CLK_SRC_DEFAULT,
    .i2c_port = I2C_NUM_0,
    .scl_io_num = pin_scl,
    .sda_io_num = pin_sda,
    .glitch_ignore_cnt = 7,
    .flags = {
            .enable_internal_pullup = 1     // Enable internal pull-ups
        }
    };


    esp_err_t err = i2c_new_master_bus(&i2c_mst_config, &i2c_bus_handle);

    if (err != ESP_OK)
    {
        ESP_LOGW(TAG, "Couldn't initialize the I2C master bus. Error Code: %d\n", err);
        return err;
    }
    ESP_LOGI(TAG, "Successfully initialized the I2C master bus.\n");

    i2c_device_config_t mics_dev_config = {
        .dev_addr_length = I2C_ADDR_BIT_LEN_7,
        .device_address = 0x19,
        .scl_speed_hz = 100000,
    };

    err = i2c_master_bus_add_device(i2c_bus_handle, &mics_dev_config, &ioexpander_dev_handle);

    if (err != ESP_OK)
    {
        ESP_LOGW(TAG, "Couldn't initialize the I2C ioexpander device. Error Code: %d\n", err);
        return err;
    }
    ESP_LOGI(TAG, "Successfully initialized the I2C ioexpander device.\n");

    ioexpander_initialized = true;
    return ESP_OK;
}
