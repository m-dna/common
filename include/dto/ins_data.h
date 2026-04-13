#ifndef INS_DATA_H
#define INS_DATA_H

#include <cstdint>

#pragma pack(push, 1)
struct InsData {
  int16_t message_id;
  int32_t latitude;
  int32_t longitude;
  int32_t altitude;
  int16_t yaw;
  int16_t pitch;
  int16_t roll;
};
#pragma pack(pop)

#endif