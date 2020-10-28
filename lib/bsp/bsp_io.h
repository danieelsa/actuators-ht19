#ifndef BSP_IO_H
#define BSP_IO_H

#include <stdint.h>

void bsp_pin_mode(uint8_t pin, uint8_t mode);
void bsp_analog_write(uint8_t pin, uint8_t val);

#endif