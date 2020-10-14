# The main requirments extracted from the customer requirments

* [REQID:001] The heater and the ventilation system shoud react on the temperature sensor's reading.
* [REQID:002] The ventilation system should react on the humidity sensor's reading.
* [REQID:003] The lamp should react on the intensity sensor's reading.
* [REQID:004] The waterpump and the ventilation system should react on the soil moisture sensor's reading.
* [REQID:005] The watervalve should react on the liquid sensor's rading of the water level in the small water tank.

# The specific requirements for the different devices

## Air fan
* [ReqID:001] It should be possible to initialize the <fan> as soon as it gets a valid values, otherwise the <fan_status> shall be
            UNINITIALIZED.



## Heater                                                                                                     

When We need to prioritate, the temperature is the most important factor.

* [ReqID:001] It should be possible to initialize the <heater> as soon as it gets a valid values, otherwise the <heater_status> shall be
            UNINITIALIZED.
* [ReqID:002] It should be possible to read The <temperature_cal_min_val> and <temperature_cal_max_val>,
            and The <humidity_cal_min_val> and <humidity_cal_max_val> from CAN bus every <Interval>.
* [ReqID:003] If Should be possible to read the <temperature> and the <humidity> from CAN bus every <Interval>
* [ReqID:004] It should be possible to turn the heater ON/OFF
* [ReqID:005] If <temperature>/<humidity> is less than <temperature_cal_min_val>/<humidity_cal_min_val> respectively
                the <heater_state> Should be turned ON and the <heater_status> should be OK
            else if <temperature>/<humidity> is more than <temperature_cal_max_val>/<humidity_cal_max_val> respectively
                the <heater_state> Should be turned OFF and the <heater_status> should be OK
            else the <heater_state> Should be turned OFF and the <heater_status> should be NOT_WORKING


## Lamp
* [ReqID:001] It should be possible to initialize the <lamp> as soon as it gets a valid values, otherwise the <lamp_status> shall be
            UNINITIALIZED.


## WaterPump
* [ReqID:001] It should be possible to initialize the <waterpump> as soon as it gets a valid values, otherwise the <waterpump_status> shall be
            UNINITIALIZED.


## Watervalve
* [ReqID:001] It should be possible to initialize the <watervalve> as soon as it gets a valid values, otherwise the <watervalve_status> shall be
            UNINITIALIZED.


## Window ventilator
* [ReqID:001] It should be possible to initialize the <window> as soon as it gets a valid values, otherwise the <window_statis> shall be
            UNINITIALIZED.
* [ReqID:002] It should be possible to read The <temperature_target_min_val> and <temperature_target_max_val>,
            and The <humidity_target_min_val> and <humidity_target_max_val> from CAN bus every <read_interval>.
* [ReqID:003] It Should be possible to read the <temperature>, <humidity> and <dht_sensor_status> from CAN bus every <read_interval>.
* [ReqID:004] It should be possible to open and close the window
* [ReqID:005] if <temperature>/<humidity> is more than <temperature_target_max_val>/<humidity_target_max_val> respectively
                the <window_state> Should be OPEN else the <window_state> Should be CLOSE 
* [ReqID:006] It shall be possible to send <window_status> signal to the CAN bus every <write_interval>.
