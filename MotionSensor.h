/*
Motion.h - A wrapper library for detecting motion using the
Adafruit LSM303 accelerometer. Designed for middle schoolers.
Created by Richard Davis in the Fall of 2015.
*/

#ifndef MotionSensor_h
#define MotionSensor_h

#include "Arduino.h"
#include <Wire.h>

// Include libraries for the Adafruit LSM303 accelerometer
#include <Adafruit_Sensor.h>
#include <Adafruit_LSM303_U.h>

class MotionSensor
{
 public:

  MotionSensor();
  bool init();

  bool moving();
  void setThreshold(int t);
  float intensity();

  float xIntensity();
  float yIntensity();
  float zIntensity();

 private:

  Adafruit_LSM303_Accel_Unified _accel;
  int _threshold;
};

#endif
