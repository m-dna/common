#ifndef MISSILE_TARGET_STATE_H
#define MISSILE_TARGET_STATE_H

#include <cstdint>

#include "../enum/icd_id.h"

// ICD-26: 미사일/표적 참값 상태 (UI -> GCU, 100ms)
// SILS 1단계 UI-GCU 통합 ICD — 미사일(6필드) + 표적(6필드) 참값 전달
// 좌표계: NED (발사점 원점)
// 위치 스케일 0.01 m (cm), 속도 스케일 0.001 m/s (mm/s)
#pragma pack(push, 1)
struct MissileTargetState {
  IcdId message_id;

  // 미사일 위치 (발사점 기준 NED, 0.01 m)
  int32_t missile_pos_n;
  int32_t missile_pos_e;
  int32_t missile_pos_d;

  // 미사일 속도 (NED, 0.001 m/s)
  int32_t missile_vel_n;
  int32_t missile_vel_e;
  int32_t missile_vel_d;

  // 미사일 쿼터니언
  int32_t q_w;
  int32_t q_x;
  int32_t q_y;
  int32_t q_z;

  // 표적 위치 (발사점 기준 NED, 0.01 m)
  int32_t target_pos_n;
  int32_t target_pos_e;
  int32_t target_pos_d;

  // 표적 속도 (NED, 0.001 m/s)
  int32_t target_vel_n;
  int32_t target_vel_e;
  int32_t target_vel_d;
};
#pragma pack(pop)

#endif  // MISSILE_TARGET_STATE_H
