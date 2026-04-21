#ifndef NAVIGATION_TEST_COMMAND_H
#define NAVIGATION_TEST_COMMAND_H

#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct NavigationTestCommand {
  IcdId message_id;
  bool is_start;  // 테스트 시작 여부(1 = 시작, 0 = 종료)
};
#pragma pack(pop)

#endif  // NAVIGATION_TEST_COMMAND_H