#ifndef FIN_CONTROL_MAIN_COMMAND_H
#define FIN_CONTROL_MAIN_COMMAND_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct FinControlMainCommand {
  IcdId message_id;
  int32_t a_motor_theta;
  int32_t b_motor_theta;
};
#pragma pack(pop)

#endif  // FIN_CONTROL_MAIN_COMMAND_H