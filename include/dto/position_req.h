#ifndef PositionReq_H
#define PositionReq_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct PositionReq {
  IcdId message_id;
};
#pragma pack(pop)

#endif // PositionReq_H