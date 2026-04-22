#ifndef skr_main_data_H
#define skr_main_data_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct SkrMainData {
  IcdId message_id;
  int32_t skr_yaw_offset;
  int32_t skr_pitch_offset;
};
#pragma pack(pop)

#endif  // skr_main_data_H
