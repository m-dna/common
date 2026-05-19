#ifndef IMU_ATTITUDE_FEEDBACK_H
#define IMU_ATTITUDE_FEEDBACK_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
/**
 * @brief imu 자세 피드백(imu_attitude_feedback)
 * ICD-38
 */
struct ImuAttitudeFeedback {
  IcdId message_id; // imu로 측정한 미사일 표적 상태를 나타내는 식별자 (0x0025)
  int32_t imu_quaternion_x;       // imu 쿼터니언 x (0.001)
  int32_t imu_quaternion_y;       // imu 쿼터니언 y (0.001)
  int32_t imu_quaternion_z;       // imu 쿼터니언 z (0.001)
  int32_t imu_quaternion_w;       // imu 쿼터니언 w (0.001)
  int32_t imu_angular_velocity_p; // imu 각속도 p (0.001 rad/s)
  int32_t imu_angular_velocity_q; // imu 각속도 q (0.001 rad/s)
  int32_t imu_angular_velocity_r; // imu 각속도 r (0.001 rad/s)
};
#pragma pack(pop)

#endif // IMU_ATTITUDE_FEEDBACK_H
