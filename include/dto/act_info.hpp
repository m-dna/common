#ifndef ACT_INFO_HPP
#define ACT_INFO_HPP
#include <stdint.h>
struct ActInfo {
  uint16_t message_id;
  uint8_t act_status;
  int32_t a_motor_theta;
  int32_t a_motor_omega;
  int32_t b_motor_theta;
  int32_t b_motor_omega;
};

#endif // ACT_INFO_HPP
