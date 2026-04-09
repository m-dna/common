#ifndef CommonParameter_H
#define CommonParameter_H

#include <stdint.h>

typedef struct {
  uint16_t message_id;
  uint8_t mcu_voltage;
  uint8_t cpu_temperature;
  uint8_t cpu_usage;
  uint8_t heap_usage;
} CommonParameter;

#endif  //  CommonParameter_H
