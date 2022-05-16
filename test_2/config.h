#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI();

#include"TFT_A.h" //จอภาพ

#include <Wire.h>
#include <VL53L0X.h>
VL53L0X sensor;

#include <DFRobot_MAX30102.h>
DFRobot_MAX30102 particleSensor;

long elapsedTime = 0; //นับเวลาการทำงาน
long nowTime = 0;     //นับเวลาการทำงาน
const int MPU_addr = 0x68; // I2C address of the MPU-6050
int16_t AcX, AcY, AcZ, Tmp, GyX, GyY, GyZ;

int32_t SPO2; //SPO2
int8_t SPO2Valid; //Flag to display if SPO2 calculation is valid
int32_t heartRate; //Heart-rate
int8_t heartRateValid; //Flag to display if heart-rate calculation is valid 
