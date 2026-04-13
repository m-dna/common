#ifndef CommonParameter_H
#define CommonParameter_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct CommonParameter {
  IcdId message_id;
  uint8_t mcu_voltage;
  uint8_t cpu_temperature;
  uint8_t cpu_usage;
  uint8_t heap_usage;
};
#pragma pack(pop)

#endif //  CommonParameter_H
