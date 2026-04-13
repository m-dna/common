#ifndef PIN_CONTROL_RES_H
#define PIN_CONTROL_RES_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct PinControlRes {
  IcdId message_id;
};
#pragma pack(pop)

#endif // PIN_CONTROL_RES_H