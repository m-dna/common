#ifndef CONTROL_TEST_ATTITUDE_FEEDBACK_H
#define CONTROL_TEST_ATTITUDE_FEEDBACK_H

#include <cstdint>

#include "../enum/icd_id.h"

// 좌표계:
//   - 쿼터니언/각속도/가속도: Body
// 스케일:
//   - 쿼터니언: 0.001 (단위 쿼터니언, |q|=1)
//   - 각속도: 0.001 rad/s
//   - 가속도: 0.001 m/s² (mm/s²)
#pragma pack(push, 1)
struct ControlTestAttitudeFeedback {
  IcdId message_id;

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
};
#pragma pack(pop)

#endif  // CONTROL_TEST_ATTITUDE_FEEDBACK_H
