# The main requirments extracted from the customer requirments

[REQID:001] The heater and the ventilation system shoud react on the temperature sensor's reading.
[REQID:002] The ventilation system should react on the humidity sensor's reading.
[REQID:003] The lamp should react on the intensity sensor's reading.
[REQID:004] The waterpump and the ventilation system should react on the soil moisture sensor's reading.
[REQID:005] The watervalve should react on the liquid sensor's rading of the water level in the small water tank.

# The specific requirements for the different devices

## Air fan
[ReqID:001] It should be possible to initialize the fan.



## Heater requirements                                                                                                      

When We need to prioritate, the temperature is the most important factor.

[ReqID:001] It should be possible to initialize the heater.
[ReqID:002] It should be possible to read The <temperature_cal_min_val> and <temperature_cal_max_val>,
            and The <humidity_cal_min_val> and <humidity_cal_max_val> from CAN bus every <Interval>.
[ReqID:003] If Should be possible to read the <temperature> and the <humidity> from CAN bus every <Interval>
[ReqID:004] It should be possible to turn the heater ON/OFF
[ReqID:005] If <temperature>/<humidity> is less than <temperature_cal_min_val>/<humidity_cal_min_val> respectively
                the <heater_state> Should be turned ON and the <heater_status> should be OK
            else if <temperature>/<humidity> is more than <temperature_cal_max_val>/<humidity_cal_max_val> respectively
                the <heater_state> Should be turned OFF and the <heater_status> should be OK
            else the <heater_state> Should be turned OFF and the <heater_status> should be NOT_WORKING


## Lamp
[ReqID:001] It should be possible to initialize the lamp.


## WaterPump
[ReqID:001] It should be possible to initialize the waterpump.


## Watervalve
[ReqID:001] It should be possible to initialize the watervalve.


## Window ventilator
[ReqID:001] It should be possible to initialize the window.

