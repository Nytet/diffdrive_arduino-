#include "diffdrive_hardware_interface/motor_driver_interface.hpp"
#include <wiringPi.h>

MotorDriverInterface::MotorDriverInterface() {
  wiringPiSetup();
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void MotorDriverInterface::setMotorSpeed(int speed) {
  analogWrite(ENA, speed);
  analogWrite(ENB, speed);
}

void MotorDriverInterface::setMotorDirection(bool dir_left, bool dir_right) {
  digitalWrite(IN1, dir_left);
  digitalWrite(IN2, !dir_left);
  digitalWrite(IN3, dir_right);
  digitalWrite(IN4, !dir_right);
}
