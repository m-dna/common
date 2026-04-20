#ifndef COMM_HEADER_H
#define COMM_HEADER_H

#include "enum/device_id.h"
#include <cstdint>

enum class CommType : uint8_t {
  NORMAL_DATA = 0x01,
  RELIABLE_DATA = 0x02,
  ACK = 0x03
};
#pragma pack(push, 1)
struct CommHeader {
  CommType type; // 통신 유형 (일반 데이터, 신뢰성 있는 데이터, ACK)
  DeviceId src_device_id; // 신뢰성 통신을 위한 출발지 디바이스 ID
  DeviceId dst_device_id; // 신뢰성 통신을 위한 목적지 디바이스 ID
  uint32_t reliable_unique_key;   // 신뢰성 있는 통신을 위한 디바이스 고유키
  uint8_t sequence_number; // 신뢰성 통신을 위한 시퀀스 넘버
  uint16_t total_length;   // 헤더 + 데이터의 총 길이 (최대 65535)
  uint16_t data_length;    // 데이터의 길이 (최대 65535)
};
#pragma pack(pop)

#endif // COMM_HEADER_H