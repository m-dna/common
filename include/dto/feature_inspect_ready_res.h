#ifndef FeatureInspectReadyRes_HPP
#define FeatureInspectReadyRes_HPP

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct FeatureInspectReadyRes {
  IcdId message_id;
};
#pragma pack(pop)

#endif // FeatureInspectReadyRes_HPP
