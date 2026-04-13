#ifndef TargetDistanceReq_H
#define TargetDistanceReq_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct TargetDistanceReq {
  IcdId message_id;
};
#pragma pack(pop)

#endif // TargetDistanceReq_H