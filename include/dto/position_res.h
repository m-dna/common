#ifndef POSITION_RES_H
#define POSITION_RES_H

#include <cstdint>

#include "ins_data.h"

#pragma pack(push, 1)
struct PositionRes {
  uint16_t message_id;
  InsData data;
};
#pragma pack(pop)

#endif