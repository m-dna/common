#ifndef GUIDANCE_COMMAND_H
#define GUIDANCE_COMMAND_H

#include <cstdint>

#include "../enum/icd_id.h"

// ICD-25: 유도 명령 (GCU -> UI, 10ms)
// NED 가속도 명령, 스케일 0.001 m/s², 범위 ±400 m/s² (±40G)
#pragma pack(push, 1)
struct GuidanceCommand {
  IcdId   message_id;
  int32_t a_cmd_n;   // 북쪽 방향 가속도 (0.001 m/s²)
  int32_t a_cmd_e;   // 동쪽 방향 가속도 (0.001 m/s²)
  int32_t a_cmd_d;   // 아래쪽 방향 가속도 (0.001 m/s²)
};
#pragma pack(pop)

#endif  // GUIDANCE_COMMAND_H
