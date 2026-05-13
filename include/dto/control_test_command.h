#ifndef CONTROL_TEST_COMMAND_H
#define CONTROL_TEST_COMMAND_H

#include <cstdint>

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct ControlTestCommand {
  IcdId message_id;
  uint8_t start;  // 1 = 중기 유도 시작, 2 = 호밍 유도 시작, 0 = 종료
};
#pragma pack(pop)

#endif  // CONTROL_TEST_COMMAND_H
