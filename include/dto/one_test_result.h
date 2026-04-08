#ifndef FeatureInspectResult_H
#define FeatureInspectResult_H

#include <stdint.h>

#include "pin_control_req.h"
#include "position_req.h"
#include "target_distance_req.h"

typedef struct {
  uint16_t message_id;
  TargetDistanceReq target_distance_req;
  PositionReq position_req;
  PinControlReq pin_control_req;
  uint32_t algorithm_time;
  uint32_t act_comm_time;
  uint32_t imu_comm_time;
  uint32_t skr_comm_time;
} FeatureInspectResult;

#endif  // FeatureInspectResult_H