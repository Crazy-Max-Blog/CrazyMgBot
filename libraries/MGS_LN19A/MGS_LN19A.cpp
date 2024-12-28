#include "MGS_LN19A.h"
#include <Wire.h>

MGS_LN19A::MGS_LN19A(byte LocalAddr) {
  _AddrSensor = LocalAddr;
}

void MGS_LN19A::begin(void) {
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x10);        // Регистр настройки всей микросхемы
  Wire.write(0b00000000);  // Нормальный режим работы
  Wire.write(0b01001111);  // АЦП в непрерывном режиме, 200 ksps, встроенный ИОН для ЦАП
  Wire.endTransmission();
  delay(100);
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x20);        // Регистр настройки порта 0 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x21);        // Регистр настройки порта 1 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x22);        // Регистр настройки порта 2 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x23);        // Регистр настройки порта 3 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x24);        // Регистр настройки порта 4 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x25);        // Регистр настройки порта 5 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x26);        // Регистр настройки порта 6 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x27);        // Регистр настройки порта 7 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x28);        // Регистр настройки порта 8 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x29);        // Регистр настройки порта 9 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x2A);        // Регистр настройки порта 10 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x2B);        // Регистр настройки порта 11 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x2C);        // Регистр настройки порта 12 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x2D);        // Регистр настройки порта 13 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x2E);        // Регистр настройки порта 14 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x2F);        // Регистр настройки порта 15 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x30);        // Регистр настройки порта 16 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x31);        // Регистр настройки порта 17 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x32);        // Регистр настройки порта 18 (подключен к оптическому сенсору)
  Wire.write(0b00000000);  // Сброс конфигурации порта
  Wire.write(0b00000000);
  Wire.endTransmission();
  delay(100);
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x20);        // Регистр настройки порта 0 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x21);        // Регистр настройки порта 1 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x22);        // Регистр настройки порта 2 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x23);        // Регистр настройки порта 3 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x24);        // Регистр настройки порта 4 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x25);        // Регистр настройки порта 5 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x26);        // Регистр настройки порта 6 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x27);        // Регистр настройки порта 7 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x28);        // Регистр настройки порта 8 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x29);        // Регистр настройки порта 9 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x2A);        // Регистр настройки порта 10 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x2B);        // Регистр настройки порта 11 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x2C);        // Регистр настройки порта 12 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x2D);        // Регистр настройки порта 13 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x2E);        // Регистр настройки порта 14 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x2F);        // Регистр настройки порта 15 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x30);        // Регистр настройки порта 16 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x31);        // Регистр настройки порта 17 (подключен к оптическому сенсору)
  Wire.write(0b01110001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x32);        // Регистр настройки порта 18 (подключен к оптическому сенсору)
  Wire.write(0b01111001);  // Диапазон входного напряжения 0 ... 10 В, встроенный ИОН, порт в режиме входа АЦП
  Wire.write(0b11100000);  // Порт не ассоциирован с другим портом, количество выборок АЦП - 128
  Wire.endTransmission();
  delay(100);
  // Отладка регистров
  /*
    int a = 0;
    int b = 0;
    Wire.beginTransmission(sensor_addr);
    Wire.write(0x45); // Регистр данных АЦП
    Wire.endTransmission();
    Wire.requestFrom(sensor_addr, 2);
    Serial.println(Wire.available());
    a = Wire.read();
    b = Wire.read();
    Serial.println(String(a, 2));
    Serial.println(String(b, 2));
  */
}

uint16_t MGS_LN19A::value(byte LocalNumsensor) {
  poll_sensor();
  return _DataSensors[constrain(LocalNumsensor, 0, 18)];
}

void MGS_LN19A::poll_sensor(void) {
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x40);  // Регистр данных АЦП
  Wire.endTransmission();
  Wire.requestFrom(_AddrSensor, 10);
  if (Wire.available() == 10) {
    adc_sensor_data[0] = Wire.read();  // ADC00
    adc_sensor_data[1] = Wire.read();
    adc_sensor_data[2] = Wire.read();  // ADC01
    adc_sensor_data[3] = Wire.read();
    adc_sensor_data[4] = Wire.read();  // ADC02
    adc_sensor_data[5] = Wire.read();
    adc_sensor_data[6] = Wire.read();  // ADC03
    adc_sensor_data[7] = Wire.read();
    adc_sensor_data[8] = Wire.read();  // ADC04
    adc_sensor_data[9] = Wire.read();
  }
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x45);  // Регистр данных АЦП
  Wire.endTransmission();
  Wire.requestFrom(_AddrSensor, 10);
  if (Wire.available() == 10) {
    adc_sensor_data[10] = Wire.read();  // ADC05
    adc_sensor_data[11] = Wire.read();
    adc_sensor_data[12] = Wire.read();  // ADC06
    adc_sensor_data[13] = Wire.read();
    adc_sensor_data[14] = Wire.read();  // ADC07
    adc_sensor_data[15] = Wire.read();
    adc_sensor_data[16] = Wire.read();  // ADC08
    adc_sensor_data[17] = Wire.read();
    adc_sensor_data[18] = Wire.read();  // ADC09
    adc_sensor_data[19] = Wire.read();
  }
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x4A);  // Регистр данных АЦП
  Wire.endTransmission();
  Wire.requestFrom(_AddrSensor, 10);
  if (Wire.available() == 10) {
    adc_sensor_data[20] = Wire.read();  // ADC10
    adc_sensor_data[21] = Wire.read();
    adc_sensor_data[22] = Wire.read();  // ADC11
    adc_sensor_data[23] = Wire.read();
    adc_sensor_data[24] = Wire.read();  // ADC12
    adc_sensor_data[25] = Wire.read();
    adc_sensor_data[26] = Wire.read();  // ADC13
    adc_sensor_data[27] = Wire.read();
    adc_sensor_data[28] = Wire.read();  // ADC14
    adc_sensor_data[29] = Wire.read();
  }
  Wire.beginTransmission(_AddrSensor);
  Wire.write(0x4F);  // Регистр данных АЦП
  Wire.endTransmission();
  Wire.requestFrom(_AddrSensor, 8);
  if (Wire.available() == 8) {
    adc_sensor_data[30] = Wire.read();  // ADC15
    adc_sensor_data[31] = Wire.read();
    adc_sensor_data[32] = Wire.read();  // ADC16
    adc_sensor_data[33] = Wire.read();
    adc_sensor_data[34] = Wire.read();  // ADC17
    adc_sensor_data[35] = Wire.read();
    adc_sensor_data[36] = Wire.read();  // ADC18
    adc_sensor_data[37] = Wire.read();
  }
  for (int i = 0; i < 19; i++) {
    _DataSensors[i] = adc_sensor_data[36 - (i * 2)] * 256 + adc_sensor_data[37 - (i * 2)];
  }
}