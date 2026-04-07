#ifndef INS_INFO_HPP
#define INS_INFO_HPP

#include "../fsm/ins_status.hpp"
#include "ins_data.hpp"
#include <cstdint>

struct InsInfo {
  uint16_t message_id;
  InsStatus status;
  InsData data;
};

#endif