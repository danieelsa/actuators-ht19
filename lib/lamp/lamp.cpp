#include <lamp.h>
#include <bsp.h>
#include <stdlib.h>
#include <stdbool.h>

static void (*digital_write)(uint8_t, uint8_t);
static void (*pin_mode)(uint8_t, uint8_t);

/**
 * @brief This function is used for initialization of module
 * 
 * @param interface A pointer to the interface that holds the function pointers
 * used for faking digitalWrite and pinMode if TEENSY not included
 * @param pin The pin number we write to.
 * @return 1 if the initialization was successfull
 * @return 0 if the initialization was not successfull.
 */
uint8_t lamp_begin(interface_t *interface, uint8_t pin)
{

    lamp_end();

    uint8_t status = LAMP_ERROR;
    // placeholder
    if (ACCEPTED_PIN(pin) == true)
    {
        // if we use TEENSY. Assign our spy functions to the function pointers.
        // If not, use our "fake" implementation of digitalWrite and pinMode.
        if (interface != NULL)
        {
            digital_write = interface->digital_write;
            pin_mode = interface->pin_mode;
        }
        digital_write(pin, LOW);
        status = LAMP_OK;
    }
    return status;
}

uint8_t set_lamp_state(uint8_t state)
{
    if (state == ON)
    {
    }
    else
    {
    }
}

uint8_t get_lamp_status(void)
{
}

void configure(void)
{
}

/**
 * @brief This function is a helper function that resets the function pointers to the "fake" Arduino functions
 */
uint8_t lamp_end(void)
{
    pin_mode = bsp_pin_mode;
    digital_write = bsp_digital_write;
}
