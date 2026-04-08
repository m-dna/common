#ifndef PIN_CONTROL_REQ_H
#define PIN_CONTROL_REQ_H
#include <stdint.h>
typedef struct {
  uint16_t message_id;
  int32_t a_motor_theta;
  int32_t b_motor_theta;
} PinControlReq;

#endif  // PIN_CONTROL_REQ_H