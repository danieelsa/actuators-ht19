
#ifndef BSP_H
#define BSP_H

#define LOW 0
#define HIGH 1
#define OUTPUT 1

#include <stdint.h>

void bsp_pin_mode(uint8_t pin, uint8_t mode);
void bsp_digital_write(uint8_t pin, uint8_t val);

#endif /* BSP_IO_H */