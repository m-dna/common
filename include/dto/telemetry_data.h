#ifndef TELEMETRY_DATA_H
#define TELEMETRY_DATA_H

#include <cstdint>

#include "../enum/icd_id.h"
#include "ins_main_data.h"
#include "skr_main_data.h"

#pragma pack(push, 1)
struct TelemetryData {
  IcdId message_id;
  InsMainData ins_data;
  SkrMainData skr_data;
};
#pragma pack(pop)

#endif  // TELEMETRY_DATA_H
