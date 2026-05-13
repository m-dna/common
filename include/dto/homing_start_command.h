#ifndef HOMING_START_COMMAND_H
#define HOMING_START_COMMAND_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct HomingStartCommand {
  IcdId message_id;
};
#pragma pack(pop)

#endif  // HOMING_START_COMMAND_H
