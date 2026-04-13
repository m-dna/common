#ifndef PIN_CONTROL_REQ_H
#define PIN_CONTROL_REQ_H

#include <cstdint>

#pragma pack(push, 1)
struct PinControlReq {
  uint16_t message_id;
  int32_t a_motor_theta;
  int32_t b_motor_theta;
};
#pragma pack(pop)

#endif // PIN_CONTROL_REQ_H