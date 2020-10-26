
#ifndef ARDUINO_H
#define ARDUINO_H

#define LOW 0
#define HIGH 1
#define OUTPUT 1

#include <stdint.h>

void pinMode(uint8_t pin, uint8_t mode);
void digitalWrite(uint8_t pin, uint8_t val);

#endif /* ARDUINO_H */