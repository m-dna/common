#ifndef FEATURE_INSPECT_COMMAND_HPP
#define FEATURE_INSPECT_COMMAND_HPP

#include <cstdint>

struct FeatureInspectCommand {
  uint16_t message_id;
  uint32_t loop_count;
};

#endif  // FEATURE_INSPECT_COMMAND_HPP