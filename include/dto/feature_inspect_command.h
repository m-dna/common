#ifndef FEATURE_INSPECT_COMMAND_H
#define FEATURE_INSPECT_COMMAND_H

#include <cstdint>

#pragma pack(push, 1)
struct FeatureInspectCommand {
  uint16_t message_id;
  uint32_t loop_count;
};
#pragma pack(pop)

#endif // FEATURE_INSPECT_COMMAND_H