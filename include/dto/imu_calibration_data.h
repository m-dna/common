#ifndef IMU_CALIBRATION_DATA_H
#define IMU_CALIBRATION_DATA_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
/**
 * @brief imu 캘리브레이션 데이터(imu_calibration_data)
 * ICD-39
 */
struct ImuCalibrationData {
  IcdId message_id; // imu 캘리브레이션 데이터를 나타내는 식별자 (0x0026)
  int32_t ui_quaternion_x; // ui가 측정한 NED 쿼터니언 값 (0.001)
  int32_t ui_quaternion_y; // ui가 측정한 NED 쿼터니언 값 (0.001)
  int32_t ui_quaternion_z; // ui가 측정한 NED 쿼터니언 값 (0.001)
  int32_t ui_quaternion_w; // ui가 측정한 NED 쿼터니언 값 (0.001)
};
#pragma pack(pop)

#endif // IMU_CALIBRATION_DATA_H
