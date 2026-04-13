#ifndef ACT_DATA_H
#define ACT_DATA_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct ActData {
  IcdId message_id;
  int32_t a_motor_theta;
  int32_t a_motor_omega;
  int32_t b_motor_theta;
  int32_t b_motor_omega;
};
#pragma pack(pop)

#endif // ACT_DATA_H