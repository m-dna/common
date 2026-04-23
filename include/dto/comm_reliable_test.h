#ifndef COMM_RELIABLE_TEST_H
#define COMM_RELIABLE_TEST_H

#include <cstdint>
#include "../enum/icd_id.h"

#pragma pack(push, 1)
struct CommReliableTest {
  IcdId message_id;
  uint32_t counter;
};
#pragma pack(pop)

#endif // COMM_RELIABLE_TEST_H