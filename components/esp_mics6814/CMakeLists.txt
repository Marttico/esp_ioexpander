set(REQ esp_timer esp_driver_i2c esp_ioexpander)
set(SRC_FILES "esp_mics6814.c")

idf_component_register(SRCS ${SRC_FILES}
                        INCLUDE_DIRS include
                        REQUIRES ${REQ})