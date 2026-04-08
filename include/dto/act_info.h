#ifndef ACT_INFO_H
#define ACT_INFO_H

#include <stdint.h>

typedef struct {
  uint16_t message_id;
  uint8_t act_status;
  int32_t a_motor_theta;
  int32_t a_motor_omega;
  int32_t b_motor_theta;
  int32_t b_motor_omega;
} ActInfo;

#endif  // ACT_INFO_H
