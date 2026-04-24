#ifndef CONTROL_TEST_MISSILE_TARGET_STATE_H
#define CONTROL_TEST_MISSILE_TARGET_STATE_H

#include <cstdint>

#include "../enum/icd_id.h"

// 좌표계:
//   - 위치/속도: NED (발사점 원점)
// 스케일:
//   - 위치: 0.01 m (cm)
//   - 속도: 0.001 m/s (mm/s)
#pragma pack(push, 1)
struct ControlTestMissileTargetState {
  IcdId message_id;

  // 미사일 위치 (발사점 기준 NED, 0.01 m)
  int32_t missile_pos_n;
  int32_t missile_pos_e;
  int32_t missile_pos_d;

  // 미사일 속도 (NED, 0.001 m/s)
  int32_t missile_vel_n;
  int32_t missile_vel_e;
  int32_t missile_vel_d;

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

#endif  // CONTROL_TEST_MISSILE_TARGET_STATE_H
