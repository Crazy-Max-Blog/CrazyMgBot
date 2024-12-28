#include <Arduino.h>
#include "Wire.h"
class MGS_LN19A {
public:
  MGS_LN19A(byte AddrSensor);
  void begin(void);
  uint16_t value(byte LocalNumsensor);
private:
  uint16_t _DataSensors[19];
  void poll_sensor(void);
  byte _AddrSensor;
  uint16_t adc_sensor_data[38] = { 0 };
};