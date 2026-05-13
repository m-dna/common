#ifndef HILS_ROTATE_COMMAND_H
#define HILS_ROTATE_COMMAND_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct HilsRotateCommand {
  IcdId message_id;
  int32_t yaw_theta;
  int32_t pitch_theta;
};
#pragma pack(pop)

#endif  // HILS_ROTATE_COMMAND_H
