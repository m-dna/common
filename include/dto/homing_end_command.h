#ifndef HOMING_END_COMMAND_H
#define HOMING_END_COMMAND_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct HomingEndCommand {
  IcdId message_id;
};
#pragma pack(pop)

#endif  // HOMING_END_COMMAND_H
