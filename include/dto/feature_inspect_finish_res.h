#ifndef FeatureInspectFinishRes_H
#define FeatureInspectFinishRes_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct FeatureInspectFinishRes {
  IcdId message_id;
  SubSystem my_sub_system;
};
#pragma pack(pop)

#endif // FeatureInspectFinishRes_H
