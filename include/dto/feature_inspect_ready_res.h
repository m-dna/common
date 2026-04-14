#ifndef FeatureInspectReadyRes_HPP
#define FeatureInspectReadyRes_HPP

#include <cstdint>

#include "../enum/icd_id.h"
#include "../enum/subsystem.h"

#pragma pack(push, 1)
struct FeatureInspectReadyRes {
  IcdId message_id;
  SubSystem my_sub_system;
};
#pragma pack(pop)

#endif // FeatureInspectReadyRes_HPP
