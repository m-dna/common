#ifndef INS_MAIN_DATA_H
#define INS_MAIN_DATA_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct InsMainData {
  IcdId message_id;
  int32_t latitude;
  int32_t longitude;
  int32_t altitude;
  int32_t q_w;
  int32_t q_x;
  int32_t q_y;
  int32_t q_z;
  int32_t x_velocity;
  int32_t y_velocity;
  int32_t z_velocity;
};
#pragma pack(pop)

#endif