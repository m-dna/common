#ifndef FEATURE_INSPECT_COMMAND_H
#define FEATURE_INSPECT_COMMAND_H

#include <stdint.h>

typedef struct {
  uint16_t message_id;
  uint32_t loop_count;
} FeatureInspectCommand;

#endif  // FEATURE_INSPECT_COMMAND_H