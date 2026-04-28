#ifndef FIN_CONTROL_RES_H
#define FIN_CONTROL_RES_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct FinControlRes {
  IcdId message_id;
};
#pragma pack(pop)

#endif // FIN_CONTROL_RES_H