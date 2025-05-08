#ifndef DIFFDRIVE_ROBOT_HPP
#define DIFFDRIVE_ROBOT_HPP

#include "diffdrive_hardware_interface/motor_driver_interface.hpp"
#include "diffdrive_hardware_interface/encoder_interface.hpp"

class DiffDriveRobot {
public:
  DiffDriveRobot();
  void update();

private:
  std::shared_ptr<MotorDriverInterface> motor_driver_;
  std::shared_ptr<EncoderInterface> encoder_interface_;
};

#endif
