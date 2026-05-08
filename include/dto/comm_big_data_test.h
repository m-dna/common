#ifndef COMM_BIG_DATA_TEST_H
#define COMM_BIG_DATA_TEST_H  
#include <cstdint>
#include "../enum/icd_id.h"
#define MAX_SIZE (6*1024*1024 + 512*1024)  // 6.5MB
#pragma pack(push, 1)
struct CommBigDataTest {
  IcdId message_id;
  uint32_t counter;
  uint8_t big_data[MAX_SIZE];
  uint32_t big_data_size;
};
#pragma pack(pop)
#endif // COMM_BIG_DATA_TEST_H