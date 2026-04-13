#ifndef ACT_INFO_H
#define ACT_INFO_H

#include "../fsm/act_status.h"
#include "act_data.h"
#include "common_parameter.h"
#include <cstdint>

#pragma pack(push, 1)
struct ActInfo {
  uint16_t message_id;
  ActStatus act_status;
  CommonParameter cp;
  ActData data;
};
#pragma pack(pop)

#endif // ACT_INFO_H
