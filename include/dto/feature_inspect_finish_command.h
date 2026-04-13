#ifndef FeatureInspectFinishCommand_H
#define FeatureInspectFinishCommand_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct FeatureInspectFinishCommand {
  IcdId message_id;
};
#pragma pack(pop)

#endif // FeatureInspectFinishCommand_H
