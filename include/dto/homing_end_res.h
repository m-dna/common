#ifndef HOMING_END_RES_H
#define HOMING_END_RES_H

#include <cstdint>

#include "../enum/icd_id.h"
#include "../enum/subsystem.h"

#pragma pack(push, 1)
struct HomingEndRes {
  IcdId message_id;
  SubSystem my_sub_system;
};
#pragma pack(pop)

#endif  // HOMING_END_RES_H
