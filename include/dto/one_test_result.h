#ifndef OneTestResult_H
#define OneTestResult_H

#include <cstdint>

#include "../enum/icd_id.h"
#include "pin_control_req.h"
#include "position_res.h"
#include "target_distance_res.h"

#pragma pack(push, 1)
struct OneTestResult {
  IcdId message_id;
  TargetDistanceRes target_distance_res;
  PositionRes position_res;
  PinControlReq pin_control_req;
  uint32_t algorithm_time;
  uint32_t act_comm_time;
  uint32_t ins_comm_time;
  uint32_t skr_comm_time;
  uint8_t is_success;
};
#pragma pack(pop)

#endif // OneTestResult_H
