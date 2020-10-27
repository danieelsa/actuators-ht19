#ifndef LAMP_H
#define LAMP_H

#include <stdint.h>

#define ON (1U)
#define OFF (0U)
#define LAMP_ERROR (0U)
#define LAMP_OK (1U)

#define ACCEPTED_PIN(arg) (((arg >= 2 && arg <= 10) || (arg >= 20 && arg <= 23) || (arg >= 29 && arg <= 30) || (arg >= 35 && arg <= 38) || (arg == 14)) ? 1 : 0)

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

#endif /* LAMP_H */