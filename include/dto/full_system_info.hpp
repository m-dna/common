#ifndef FullSystemInfo_HPP
#define FullSystemInfo_HPP

#include <cstdint>

#include "gcu_status.hpp"
#include "common_parameter.hpp"
#include "act_info.hpp"
#include "imu_info.hpp"
#include "skr_info.hpp"

class FullSystemInfo {
    uint16_t message_id;
    GcuStatus gcu_status;
    CommonParameter common_parameter;
    ActInfo act_info;
    ImuInfo imu_info;
    SkrInfo skr_info;
};

#endif // FullSystemInfo_HPP