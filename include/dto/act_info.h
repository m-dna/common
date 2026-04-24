#ifndef ACT_INFO_H
#define ACT_INFO_H

#include <cstdint>

#include "../enum/icd_id.h"
#include "../fsm/act_status.h"
#include "act_data.h"
#include "common_parameter.h"


#pragma pack(push, 1)
struct ActInfo {
  IcdId message_id;
  ActStatus act_status;
  CommonParameter cp;
  ActData data;
};
#pragma pack(pop)

#endif // ACT_INFO_H
