/* 
Motion.h - A wrapper library for detecting motion using the 
Adafruit LSM303 accelerometer. Designed for middle schoolers.
Created by Richard Davis in the Fall of 2015.
*/

#ifndef Motion_h
#define Motion_h

#include "Arduino.h"
#include <Wire.h>

// Include libraries for the Adafruit LSM303 accelerometer
#include <Adafruit_Sensor.h>
#include <Adafruit_LSM303_U.h>

class Motion
{
 public:

  Motion();
  bool init();

  bool moving();
  float intensity();
  
  float xIntensity();
  float yIntensity();
  float zIntensity();
  
 private:

  Adafruit_LSM303_Accel_Unified _accel;
};

#endif
