#ifndef ACT_DATA_H
#define ACT_DATA_H

#include <cstdint>

#pragma pack(push, 1)
struct ActData {
  int32_t a_motor_theta;
  int32_t a_motor_omega;
  int32_t b_motor_theta;
  int32_t b_motor_omega;
};
#pragma pack(pop)

#endif // ACT_DATA_H