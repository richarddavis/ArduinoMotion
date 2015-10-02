#include "Arduino.h"
#include "Motion.h"

// Libraries for the Adafruit LSM303
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_LSM303_U.h>

Motion::Motion()
{
  _accel = Adafruit_LSM303_Accel_Unified(54321);
}

bool Motion::init()
{
  /* Initialise the sensor */
  if(!_accel.begin())
  {
    /* There was a problem detecting the ADXL345 ... check your connections */
    return(false);
  } else {
    // Sensor initialized
    return(true);
  }
}

bool Motion::moving()
{
  /* Get a new sensor event */ 
  sensors_event_t event;

  // Read and return the event
  _accel.getEvent(&event);  
  if (abs(event.acceleration.x) + abs(event.acceleration.y) + abs(event.acceleration.z) > 15) {
    return true;
  } else {
    return false;
  }
}

float Motion::intensity()
{
  /* Get a new sensor event */ 
  sensors_event_t event;

  // Read and return the event
  _accel.getEvent(&event);  
  return(abs(event.acceleration.x) + abs(event.acceleration.y) + abs(event.acceleration.z));
}

float Motion::xIntensity()
{
  /* Get a new sensor event */ 
  sensors_event_t event;

  // Read and return the event
  _accel.getEvent(&event);  
  return(event.acceleration.x);
}

float Motion::yIntensity()
{
  /* Get a new sensor event */ 
  sensors_event_t event;

  // Read and return the event
  _accel.getEvent(&event);  
  return(event.acceleration.y);
}

float Motion::zIntensity()
{
  /* Get a new sensor event */ 
  sensors_event_t event;

  // Read and return the event
  _accel.getEvent(&event);  
  return(event.acceleration.z);
}
