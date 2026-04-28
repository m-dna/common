#ifndef FIN_CONTROL_REQ_H
#define FIN_CONTROL_REQ_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct FinControlReq {
  IcdId message_id;
  int32_t a_motor_theta;
  int32_t b_motor_theta;
};
#pragma pack(pop)

#endif // FIN_CONTROL_REQ_H