#ifndef POSITION_RES_H
#define POSITION_RES_H

#include <cstdint>

#include "../enum/icd_id.h"
#include "dto/ins_main_data.h"
#include "ins_data.h"

#pragma pack(push, 1)
struct PositionRes {
  IcdId message_id;
  InsData data;
};
#pragma pack(pop)

#endif