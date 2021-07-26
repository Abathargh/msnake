cmake_minimum_required(VERSION 3.12)

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)
project(led_pico C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(snake main.c st7735.c)
target_link_libraries(snake pico_stdlib hardware_spi)

pico_add_extra_outputs(snake)
