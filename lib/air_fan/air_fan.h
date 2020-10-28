/**
 * @file air_fan.h
 * @author Bassel Alnabhan (basselalnabhan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-10-28
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef AIR_FAN_H_
#define AIR_FAN_H_

#include <stdint.h>

#define ON (1U)             /** @brief Means that the actuator is ON */
#define OFF (0U)            /** @brief Means that the actuator is OFF */
#define UNINITIALIZED (99U) /** @brief Means that the actuator is uninitialized yet */
#define ERROR (0U)          /** @brief Means that the actuator is initialized and some error exists */
#define OK (1U)             /** @brief Means that the actuator is initialized and no errors */

/**
 * @brief Used to initialize the fan actuator
 * @return uint8_t ,as the status fater the initialization
 */
uint8_t air_fan_initialize(void){};

/**
 * @brief Used to get the current status of the air fan
 * @return uint8_t, as the current status of the air fan
 */
uint8_t air_fan_get_status(void){};

/**
 * @brief Used to get the current state of the air fan
 * @param new_state uint8_t as the new sate to be set to the fan state
 * @return uint8_t, as the current state of the air fan (ON/OFF)
 */
uint8_t air_fan_set_state(uint8_t new_state){};

#endif /* AIR_FAN_H_ */