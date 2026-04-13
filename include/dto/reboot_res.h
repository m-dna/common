#ifndef RebootRes_H
#define RebootRes_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct RebootRes {
  IcdId message_id;
};
#pragma pack(pop)

#endif // RebootRes_H