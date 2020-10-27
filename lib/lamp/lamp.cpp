#include <lamp.h>
#include <bsp.h>
#include <stdlib.h>
#include <stdbool.h>

static void (*digital_write)(uint8_t, uint8_t);
static void (*pin_mode)(uint8_t, uint8_t);

uint8_t lamp_pin = 0;
uint8_t lamp_state = 0;

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
        lamp_pin = pin;
        pin_mode(lamp_pin, OUTPUT);
        digital_write(pin, LOW);
        status = LAMP_OK;
    }
    return status;
}

/**
 * @brief This function is used to set the state of the lamp ON/OFF
 * 
 * @param state The state to switch the lamp to
 * @return 1 if switch was successfull
 * @return 0 if switch was not successfull
 */
uint8_t set_lamp_state(uint8_t state)
{
    uint8_t status = LAMP_ERROR;

    if (lamp_state != state)
    {
        status = LAMP_OK;
        if (state == ON)
        {
            digital_write(lamp_pin, state);
            lamp_state = ON;
        }
        else
        {
            digital_write(lamp_pin, state);
            lamp_state = OFF;
        }
    }
    return status;
}

uint8_t get_lamp_status(void)
{
}

void configure(void)
{
}

/**
 * @brief This function is a helper function that sets the function pointers to the real or fake bsp funktions
 * depending on if you have included teensy or not.
 */
uint8_t lamp_end(void)
{
    lamp_pin = 0;
    lamp_state = 0;
    pin_mode = bsp_pin_mode;
    digital_write = bsp_digital_write;
}
