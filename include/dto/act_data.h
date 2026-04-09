#ifndef ACT_DATA_H
#define ACT_DATA_H

#include <stdint.h>

typedef struct {
  int32_t a_motor_theta;
  int32_t a_motor_omega;
  int32_t b_motor_theta;
  int32_t b_motor_omega;
} ActData;

#endif // ACT_DATA_H