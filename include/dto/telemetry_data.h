#ifndef TELEMETRY_DATA_H
#define TELEMETRY_DATA_H

#include <cstdint>

#include "../enum/icd_id.h"
#include "imu_attitude_feedback.h"
#include "skr_main_data.h"

#pragma pack(push, 1)
struct TelemetryData {
  IcdId message_id;
  ImuAttitudeFeedback imu_data;
  SkrMainData skr_data;
};
#pragma pack(pop)

#endif // TELEMETRY_DATA_H
