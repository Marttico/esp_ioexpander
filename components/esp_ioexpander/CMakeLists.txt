set(REQ esp_timer esp_driver_i2c)
set(SRC_FILES "esp_ioexpander.c")

idf_component_register(SRCS ${SRC_FILES}
                        INCLUDE_DIRS include
                        REQUIRES ${REQ})