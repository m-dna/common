#ifndef FullSystemInfo_H
#define FullSystemInfo_H

#include <cstdint>

#include "../fsm/gcu_status.h"
#include "act_info.h"
#include "common_parameter.h"
#include "ins_info.h"
#include "skr_info.h"

#pragma pack(push, 1)
struct FullSystemInfo {
  uint16_t message_id;
  GcuStatus gcu_status;
  CommonParameter common_parameter;
  ActInfo act_info;
  InsInfo ins_info;
  SkrInfo skr_info;
};
#pragma pack(pop)

#endif // FullSystemInfo_H