#ifndef MISSILE_TARGET_STATE_H
#define MISSILE_TARGET_STATE_H

#include <cstdint>

#include "../enum/icd_id.h"

// ICD-26: 미사일/표적 참값 상태 (UI -> GCU, 100ms)
// SILS 통합 ICD — 미사일(위치·속도·쿼터니언·각속도) + 표적(위치·속도)
// 좌표계:
//   - 위치/속도: NED (발사점 원점)
//   - 쿼터니언/각속도: Body
// 스케일:
//   - 위치: 0.01 m (cm)
//   - 속도: 0.001 m/s (mm/s)
//   - 쿼터니언: 0.001 (단위 쿼터니언, |q|=1)
//   - 각속도: 0.001 rad/s
//   - 가속도: 0.001 m/s² (mm/s²)
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

  // 미사일 쿼터니언 (Body → NED 회전, 0.001 scalar)
  int32_t q_w;
  int32_t q_x;
  int32_t q_y;
  int32_t q_z;

  // 미사일 각속도 (Body frame, 0.001 rad/s)
  //   omega_p : roll rate  (body X)
  //   omega_q : pitch rate (body Y)
  //   omega_r : yaw rate   (body Z)
  int32_t omega_p;
  int32_t omega_q;
  int32_t omega_r;

  // 미사일 가속도 (Body frame, 0.001 m/s²)
  //   IMU 가속도계 측정값 (specific force)
  int32_t accel_x;  // body X (전방)
  int32_t accel_y;  // body Y (우측)
  int32_t accel_z;  // body Z (아래)

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
