

#### Lamp ####
 Signal name | Signal type | Length of signal | value range | short description | Calibration val? | overwrite signal? | setters |getters | how often sent/received
-------------|--------------|-----------------|-------------|-------------------|------------------|-------------------|------------------|------------------
light_intensity | uint8_t | 7 bit | 0-100 | the intensity of light | No | No | sens | act | read_interval
 [Signal name]     [Signal type]   [Length of signal]   [value range]   [short description]   [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
  lamp_status   |    uint8_t     |       7 bit        |     ON-OFF    | status of lamp      |        No          |         Yes         |     act   |    hmi    |      write_interval     |     
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]               [Signal type]   [Length of signal]   [value range]   [short description]      [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
intensity_sensor_status   |    uint8_t     |       7 bit        |     OK-ERR    | status of light sensor |        No          |         No          |     act   |    hmi    |      read_interval      |     
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                                ####WaterPump####
 [Signal name]          [Signal type]   [Length of signal]   [value range]   [short description]     [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
soilmoisture_value   |    uint8_t     |       7 bit        |     0-100     | value of soilmoisture |        No          |         No          |     sens  |    act    |      read_interval      |     
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]                  [Signal type]   [Length of signal]   [value range]   [short description]                 [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
soilmoisture_sensor_status   |    uint8_t     |       7 bit        |     OK-ERR    | the status of soilmoisture sensor |        No          |         No          |     sens   |    act    |      read_interval     |     
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]        [Signal type]   [Length of signal]   [value range]   [short description]   [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
waterpump_status   |    uint8_t     |       7 bit        |     OK-ERR    | status of waterpump |        No          |         Yes         |     act   |    hmi    |      write_interval     |     
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

                                                                              ####WaterValve####
 [Signal name]          [Signal type]   [Length of signal]   [value range]   [short description]      [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
liquid_level_value   |    uint8_t     |       7 bit        |     0-100     | the level of the water |        No          |          No         |    sens   |    act    |      read_interval      |     
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]                  [Signal type]   [Length of signal]   [value range]   [short description]                    [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
liquid_level_sensor_status   |    uint8_t     |       7 bit        |     OK-ERR    | the status of the water_level sensor |        No          |          No         |    sens   |    act    |      read_interval      |     
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]        [Signal type]   [Length of signal]   [value range]   [short description]     [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
watervalve_status  |    uint8_t     |       7 bit        |     OK-ERR    | status of watervalve  |        No          |          Yes        |    sens   |    act    |      write_interval     |     
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

                                                                           ####Window Ventilator####
 [Signal name]          [Signal type]   [Length of signal]   [value range]   [short description]    [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
soilmoisture_value   |    uint8_t     |       7 bit        |     0-100    | value of soilmoisture |        No          |         No          |     sens  |    act    |      read_interval     |     
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]                  [Signal type]   [Length of signal]   [value range]   [short description]                [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
soilmoisture_sensor_status   |    uint8_t     |       7 bit        |     OK-ERR    | the status of soilmoisture sensor|        No          |         No          |     sens   |    act    |      read_interval     |     
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]         [Signal type]   [Length of signal]   [value range]   [short description]     [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
dht_sensor_status   |    uint8_t     |       7 bit        |     OK-ERR    | status of dht sensor  |        No          |         No          |     sens  |    act    |      read_interval      |     
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]     [Signal type]   [Length of signal]   [value range]   [short description]    [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
window_status   |    uint8_t     |       7 bit        |     OK-ERR    | status of the window |        No          |         Yes         |     sens  |    act    |      write_interval     |     
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

                                                                           ####Air Fan####
 [Signal name]          [Signal type]   [Length of signal]   [value range]   [short description]    [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
soilmoisture_value   |    uint8_t     |       7 bit        |     0-100    | value of soilmoisture |        No          |         No          |     sens  |    act    |      read_interval      |     
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]                  [Signal type]   [Length of signal]   [value range]   [short description]                [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
soilmoisture_sensor_status   |    uint8_t     |       7 bit        |     OK-ERR    | the status of soilmoisture sensor|        No          |         No          |     sens  |    act    |      read_interval      |     
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]         [Signal type]   [Length of signal]   [value range]   [short description]   [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
dht_sensor_status   |    uint8_t     |       7 bit        |     OK-ERR    | status of dht sensor|        No          |         No          |     sens  |    act    |      read_interval      |     
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name      [Signal type]   [Length of signal]   [value range]   [short description]   [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
fan_status      |    uint8_t     |       7 bit        |     OK-ERR    | status of the fan   |        No          |         Yes         |     act   |    hmi    |      write_interval     |     
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

                                                                          ####Heater####
 [Signal name]         [Signal type]   [Length of signal]   [value range]   [short description]    [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
dht_sensor_status   |    uint8_t     |       7 bit        |     OK-ERR    | status of dht sensor |        No          |         No          |     sens  |    act    |      read_interval      |     
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]     [Signal type]   [Length of signal]   [value range]   [short description]    [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
heater_status   |    uint8_t     |       7 bit        |     OK-ERR    | status of the heater |        No          |         Yes         |     act   |    hmi    |      write_interval     |     
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


									####General Macros####
 [Signal name]                  [Signal type]   [Length of signal]   [value range]   [short description]   [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
temperature_target_min_val   |    uint8_t     |       7 bit        |     CONST     |                     |        Yes         |         No          |     hmi   |    act    |      read_interval      |     
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]                  [Signal type]   [Length of signal]   [value range]   [short description]   [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
temperature_target_max_val   |    uint8_t     |       7 bit        |     CONST     |                     |        Yes         |         No          |     hmi   |    act    |      read_interval      |     
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 [Signal name]                  [Signal type]   [Length of signal]   [value range]   [short description]   [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
humidity_target_min_val      |    uint8_t     |       7 bit        |     CONST     |                     |        Yes         |         No          |     hmi   |    act    |      read_interval      |     
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]                  [Signal type]   [Length of signal]   [value range]   [short description]   [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
humidity_target_max_val      |    uint8_t     |       7 bit        |     CONST     |                     |        Yes         |         No          |     hmi   |    act    |      read_interval      |     
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 [Signal name]                  [Signal type]   [Length of signal]   [value range]   [short description]   [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
soilmoisture_target_min_val  |    uint8_t     |       7 bit        |     CONST     |                     |        Yes         |         No          |     hmi   |    act    |      read_interval      |     
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]                  [Signal type]   [Length of signal]   [value range]   [short description]   [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
soilmoisture_target_max_val  |    uint8_t     |       7 bit        |     CONST     |                     |        Yes         |         No          |     hmi   |    act    |      read_interval      |     
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 [Signal name]                  [Signal type]   [Length of signal]   [value range]   [short description]   [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
intensity_target_min_val     |    uint8_t     |       7 bit        |     CONST     |                     |        Yes         |         No          |     hmi   |    act    |      read_interval      |     
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]                  [Signal type]   [Length of signal]   [value range]   [short description]   [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
intensity_target_max_val     |    uint8_t     |       7 bit        |     CONST     |                     |        Yes         |         No          |     hmi   |    act    |      read_interval      |     
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 [Signal name]                  [Signal type]   [Length of signal]   [value range]   [short description]   [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
liquid_level_target_min_val  |    uint8_t     |       7 bit        |     CONST     |                     |        Yes         |         No          |     hmi   |    act    |      read_interval      |     
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 [Signal name]                  [Signal type]   [Length of signal]   [value range]   [short description]   [calibration val?]   [overwrite signal?]   [setters]   [getters]   [how often sent/received]
liquid_level_target_max_val  |    uint8_t     |       7 bit        |     CONST     |                     |        Yes         |         No          |     hmi   |    act    |      read_interval      |     
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

