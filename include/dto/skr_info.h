#ifndef SKR_INFO_H
#define SKR_INFO_H

#include <cstdint>

#include "../fsm/skr_status.h"
#include "common_parameter.h"

#pragma pack(push, 1)
struct SkrInfo {
  uint16_t message_id;
  SkrStatus status;
  CommonParameter com_param;
};
#pragma pack(pop)

#endif // SKR_INFO_H
