#ifndef COMM_BIG_DATA_TEST_H
#define COMM_BIG_DATA_TEST_H  
#include <cstdint>
#include "../enum/icd_id.h"
#define MAX_BIG_DATA_SIZE (1024 * 1024)
#pragma pack(push, 1)
struct CommBigDataTest {
  IcdId message_id;
  uint32_t counter;
  uint32_t big_data_size;
  uint8_t big_data[MAX_BIG_DATA_SIZE];
};
#pragma pack(pop)
#endif // COMM_BIG_DATA_TEST_H
