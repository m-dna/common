#ifndef PIN_CONTROL_REQ_H
#define PIN_CONTROL_REQ_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct PinControlReq {
  IcdId message_id;
  int32_t a_motor_rad;
  int32_t b_motor_rad;
};
#pragma pack(pop)

#endif // PIN_CONTROL_REQ_H