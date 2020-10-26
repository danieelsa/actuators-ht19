#ifndef LAMP_H
#define LAMP_H

#include <Arduino.h>

#define ON (1U)
#define OFF (0U)
#define LAMP_ERROR (0U)
#define LAMP_OK (1U)

typedef struct
{
    void (*digital_write)(uint8_t, uint8_t);
    void (*pin_mode)(uint8_t, uint8_t);
} interface_t;

uint8_t lamp_begin(interface_t *interface, uint8_t pin);

uint8_t lamp_end(void);

void configure(void);

uint8_t get_lamp_status(void);

uint8_t set_lamp_state(uint8_t state);

#endif /* BLINKY_H */