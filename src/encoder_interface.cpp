#include "diffdrive_hardware_interface/encoder_interface.hpp"
#include <wiringPi.h>

EncoderInterface::EncoderInterface() {
  wiringPiSetup();
  pinMode(ENCODER_L_A, INPUT);
  pinMode(ENCODER_L_B, INPUT);
  pinMode(ENCODER_R_A, INPUT);
  pinMode(ENCODER_R_B, INPUT);
}

int EncoderInterface::readLeftEncoder() {
  return digitalRead(ENCODER_L_A);
}

int EncoderInterface::readRightEncoder() {
  return digitalRead(ENCODER_R_A);
}
