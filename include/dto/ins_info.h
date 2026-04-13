#ifndef INS_INFO_H
#define INS_INFO_H

#include <cstdint>

#include "../enum/icd_id.h"
#include "dto/common_parameter.h"
#include "dto/ins_data.h"
#include "fsm/ins_status.h"

#pragma pack(push, 1)
struct InsInfo {
  IcdId message_id;          // 메시지 식별자 (IcdId, 2 bytes)
  InsStatus status;          // 상태 (ins_status, 1 byte)
  CommonParameter com_param; // 공동 파라미터 (ICD-1, 5 bytes)
  InsData data;              // INS 값 (ICD-4, 18 bytes)
};
#pragma pack(pop)

#endif
