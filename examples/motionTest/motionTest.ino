#include <MotionSensor.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_LSM303_U.h>

bool success;
MotionSensor motion;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  success = motion.init();
  if (success == false) {
    delay(1000);
    Serial.println("Accelerometer is not connected.");
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println(success);
  Serial.print("Moving: ");
  Serial.println(motion.moving());
  Serial.print("Intensity: ");
  Serial.println(motion.intensity());
  Serial.print("xIntensity: ");
  Serial.println(motion.xIntensity());
  Serial.print("yIntensity: ");
  Serial.println(motion.yIntensity());
  Serial.print("zIntensity: ");
  Serial.println(motion.zIntensity());
  delay(500);
}
