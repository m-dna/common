#ifndef FeatureInspectResult_HPP
#define FeatureInspectResult_HPP

#include<cstdint>

#include "target_distance_req.hpp"
#include "position_req.hpp" 
#include "pin_control_req.hpp"

class FeatureInspectResult {
    uint16_t message_id;
    TargetDistanceReq target_distance_req;
    PositionReq position_req;
    PinControlReq pin_control_req;
    uint32_t algorithm_time;
    uint32_t act_comm_time;
    uint32_t imu_comm_time;
    uint32_t skr_comm_time;
};

#endif // FeatureInspectResult_HPP