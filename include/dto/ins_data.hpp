#ifndef INS_DATA_HPP
#define INS_DATA_HPP

#include <cstdint>

struct InsData {
  int16_t message_id;
  int32_t latitude;
  int32_t longitude;
  int32_t altitude;
  int16_t yaw;
  int16_t pitch;
  int16_t roll;
};

#endif