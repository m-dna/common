#ifndef POSITION_REQ_HPP
#define POSITION_REQ_HPP

#include "ins_data.hpp"
#include <cstdint>

struct PositionRes {
  uint16_t message_id;
  InsData data;
};

#endif