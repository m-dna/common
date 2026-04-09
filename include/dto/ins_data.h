#ifndef INS_DATA_H
#define INS_DATA_H

#include <stdint.h>

typedef struct {
  int16_t message_id;
  int32_t latitude;
  int32_t longitude;
  int32_t altitude;
  int16_t yaw;
  int16_t pitch;
  int16_t roll;
} InsData;

#endif