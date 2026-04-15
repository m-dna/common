#ifndef COMM_HEADER_H
#define COMM_HEADER_H

#include "enum/device_id.h"
#include <cstdint>

enum class CommType : uint8_t {
  NORMAL_DATA = 0x01,
  RELIABLE_DATA = 0x02,
  ACK = 0x03
};

struct CommHeader {
  CommType type;
  DeviceId src_device_id;
  DeviceId dst_device_id;
  uint8_t sequence_number; // 신뢰성 있는 통신에서 사용
  uint16_t total_length;   // 헤더 + 데이터의 총 길이 (최대 65535)
  uint16_t data_length;    // 데이터의 길이 (최대 65535)
};

#endif // COMM_HEADER_H