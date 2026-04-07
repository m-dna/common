#ifndef PIN_CONTROL_REQ_HPP
#define PIN_CONTROL_REQ_HPP
#include <stdint.h>
struct PinControlReq {
  uint16_t message_id;
  int32_t a_motor_theta;
  int32_t b_motor_theta;
};

#endif // PIN_CONTROL_REQ_HPP