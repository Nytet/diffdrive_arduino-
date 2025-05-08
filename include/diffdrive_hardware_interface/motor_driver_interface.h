#ifndef MOTOR_DRIVER_INTERFACE_HPP
#define MOTOR_DRIVER_INTERFACE_HPP

#define ENA 9
#define IN1 10
#define IN2 11
#define IN3 8
#define IN4 7
#define ENB 6

class MotorDriverInterface {
public:
  MotorDriverInterface();
  void setMotorSpeed(int speed);
  void setMotorDirection(bool dir_left, bool dir_right);
};

#endif
