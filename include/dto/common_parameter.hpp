#ifndef CommonParameter_HPP
#define CommonParameter_HPP

#include <cstdint>

struct CommonParameter {
  uint16_t message_id;
  uint8_t mcu_voltage;
  uint8_t cpu_temperature;
  uint8_t cpu_usage;
  uint8_t ram_usage;
  uint8_t heap_usage;
};
#endif //  CommonParameter_HPP
