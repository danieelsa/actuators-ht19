### CAN_Signals_actuators19

| Signal name  | Signal type  | Length of signal  | value range  | short description  | Calibration val?  | overwrite signal?  | setters  | getters  | how often  |
|---|---|---|---|---|---|---|---|---|---|
| light_intensity  | uint8_t  | 7 bit   | 0-100  | the intensity of light  |  No  |  No  | sens  | act  | read_interval  |
|lamp_status   |    uint8_t     |       7 bit        |     ON-OFF    | status of lamp      |        No          |         Yes         |     act   |    hmi    |      write_interval
| intensity_sensor_status   |    uint8_t     |       7 bit        |     OK-ERR    | status of light sensor |        No          |         No          |     act   |    hmi    |      read_interval
soilmoisture_value   |    uint8_t     |       7 bit        |     0-100     | value of soilmoisture |        No          |         No          |     sens  |    act    |      read_interval
soilmoisture_sensor_status   |    uint8_t     |       7 bit        |     OK-ERR    | the status of soilmoisture sensor |        No          |         No          |     sens   |    act    |      read_interval
waterpump_status   |    uint8_t     |       7 bit        |     OK-ERR    | status of waterpump |        No          |         Yes         |     act   |    hmi    |      write_interval     |
|   |   |   |   |   |   |   |   |   |   |   |
|   |   |   |   |   |   |   |   |   |   |   |
|   |   |   |   |   |   |   |   |   |   |   |
|   |   |   |   |   |   |   |   |   |   |   |
|   |   |   |   |   |   |   |   |   |   |   |
|   |   |   |   |   |   |   |   |   |   |   |
|   |   |   |   |   |   |   |   |   |   |   |
|   |   |   |   |   |   |   |   |   |   |   |