#ifndef HOMING_START_RES_H
#define HOMING_START_RES_H

#include <cstdint>

#include "../enum/icd_id.h"
#include "../enum/subsystem.h"

#pragma pack(push, 1)
struct HomingStartRes {
  IcdId message_id;
  SubSystem my_sub_system;
};
#pragma pack(pop)

#endif  // HOMING_START_RES_H
