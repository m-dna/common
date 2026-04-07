#ifndef SKR_INFO_HPP
#define SKR_INFO_HPP
#include "../fsm/skr_status.hpp"
#include <cstdint>

struct SkrInfo {
  uint16_t message_id;
  SkrStatus status;
  common - parameter com_param;
};

#endif // SKR_INFO_HPP
