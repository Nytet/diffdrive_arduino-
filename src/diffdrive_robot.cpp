#include "diffdrive_hardware_interface/diffdrive_robot.hpp"

DiffDriveRobot::DiffDriveRobot() {
  motor_driver_ = std::make_shared<MotorDriverInterface>();
  encoder_interface_ = std::make_shared<EncoderInterface>();
}

void DiffDriveRobot::update() {
  motor_driver_->setMotorSpeed(255);  // Example speed
  motor_driver_->setMotorDirection(true, false);  // Forward direction
  encoder_interface_->readLeftEncoder();
  encoder_interface_->readRightEncoder();
}
