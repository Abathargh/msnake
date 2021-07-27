#include "st7735.h"

#define FREQ 333000 

void st7735_init() {
    spi_init(spi0, FREQ);
}