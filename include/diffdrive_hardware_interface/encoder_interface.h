#ifndef ENCODER_INTERFACE_HPP
#define ENCODER_INTERFACE_HPP

#define ENCODER_L_A 3
#define ENCODER_L_B 5
#define ENCODER_R_A 2
#define ENCODER_R_B 4

class EncoderInterface {
public:
  EncoderInterface();
  int readLeftEncoder();
  int readRightEncoder();
};

#endif
