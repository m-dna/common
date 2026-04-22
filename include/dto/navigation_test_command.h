#ifndef NAVIGATION_TEST_COMMAND_H
#define NAVIGATION_TEST_COMMAND_H

#include <cstdint>

#include "../enum/icd_id.h"

// ICD-27: 항법시험 명령 (UI -> GCU)
//   시험 시작/종료 알림
//   start = 1 : 시험 시작 (ICD-26/25 송수신 시작)
//   start = 0 : 시험 종료 (UART 입력으로 알고리즘 변경 가능)
#pragma pack(push, 1)
struct NavigationTestCommand {
  IcdId   message_id;
  uint8_t start;   // 1 = 시작, 0 = 종료
};
#pragma pack(pop)

#endif  // NAVIGATION_TEST_COMMAND_H
