#include <lamp.h>
#include <bsp.h>
#include <stdlib.h>
#include <stdbool.h>

static void (*analog_write)(uint8_t, uint8_t);
static void (*pin_mode)(uint8_t, uint8_t);

static uint8_t lamp_pin = 0;
static uint8_t lamp_state = 0;
static uint8_t lamp_value = 0;

/**
 * @brief This function is used for initialization of module
 * 
 * @param interface A pointer to the interface that holds the function pointers
 * used for fake digitalWrite and pinMode if TEENSY not included.
 * If TEENSY included, assign them to the spy version of the functions.
 * @param pin The pin number we write to.
 * @return 1 if the initialization was successfull.
 * @return 0 if the initialization was not successfull.
 */
uint8_t lamp_begin(interface_t *interface, uint8_t pin)
{

    lamp_end();

    uint8_t status = LAMP_ERROR;

    if (ACCEPTED_PIN(pin) == true)
    {
        // if we use TEENSY. Assign our spy functions to the function pointers.
        // If not, use our "fake" implementation of digitalWrite and pinMode.
        if (interface != NULL)
        {
            analog_write = interface->analog_write;
            pin_mode = interface->pin_mode;
        }
        lamp_pin = pin;
        pin_mode(lamp_pin, OUTPUT);
        analog_write(pin, LOW);
        status = LAMP_OK;
    }
    return status;
}

/**
 * @brief This function is used to switch the state of the lamp ON/OFF
 * and also write a PWM value to the lamp
 * 
 * @param val The PWM val we write to the lamp. 0 = OFF, 1 - 255 = ON.
 * @return 1 if state of lamp is ON
 * @return 0 if state of lamp is OFF
 */
uint8_t set_lamp_state(uint8_t val)
{
    lamp_value = val;

    if (val > PWM_OFF && val <= PWM_MAX_VAL)
    {
        analog_write(lamp_pin, val);
        lamp_state = ON;
    }
    else if (val == PWM_OFF)
    {
        analog_write(lamp_pin, val);
        lamp_state = OFF;
    }
    return lamp_state;
}

/**
 * @brief This function is a helper function that returns the state of the lamp.
 */
uint8_t get_lamp_state(void)
{
    return lamp_state;
}

/**
 * @brief This function is a helper function that returns the PWM value of the lamp.
 */
uint8_t get_lamp_value(void)
{
    return lamp_value;
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
    lamp_value = 0;
    pin_mode = bsp_pin_mode;
    analog_write = bsp_analog_write;
}
