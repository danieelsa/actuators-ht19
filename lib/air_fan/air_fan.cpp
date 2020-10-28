/**
 * @file air_fan.c
 * @author Bassel Alnabhan (basselalnabhan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-10-28
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include "air_fan.h"

static volatile uint8_t state;
static volatile uint8_t status = UNINITIALIZED;

uint8_t air_fan_initialize()
{
    state = OFF;
    status = OK;
    return OK;
}

uint8_t air_fan_get_status(void)
{
    return status;
}

uint8_t air_fan_set_state(uint8_t new_state)
{
    state = new_state;
    return OK;
}
