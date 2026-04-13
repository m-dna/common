#ifndef FeatureInspectReadyCommand_HPP
#define FeatureInspectReadyCommand_HPP

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct FeatureInspectReadyCommand {
  IcdId message_id;
};
#pragma pack(pop)

#endif // FeatureInspectReadyCommand_HPP
