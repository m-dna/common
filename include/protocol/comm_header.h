#ifndef COMM_HEADER_H
#define COMM_HEADER_H

#include "enum/device_id.h"
#include <cstdint>

enum class CommType : uint8_t {
  NORMAL_DATA = 0x01,
  RELIABLE_DATA = 0x02,
  ACK = 0x03,
  BIG_DATA = 0x04
};
#pragma pack(push, 1)
struct CommHeader {
  CommType type; // 통신 유형 (일반 데이터)
  DeviceId src_device_id; // 신뢰성 통신을 위한 출발지 디바이스 ID
  DeviceId dst_device_id; // 신뢰성 통신을 위한 목적지 디바이스 ID
  uint16_t total_length;   // 헤더 + 데이터의 총 길이 (최대 65535)
  uint16_t data_length;    // 데이터의 길이 (최대 65535)
};
struct ReliableCommHeader {
  CommType type; // 통신 유형 (신뢰성 있는 데이터,ACK)
  DeviceId src_device_id; // 신뢰성 통신을 위한 출발지 디바이스 ID
  DeviceId dst_device_id; // 신뢰성 통신을 위한 목적지 디바이스 ID
  uint32_t reliable_unique_key;   // 신뢰성 있는 통신을 위한 디바이스 고유키
  uint8_t sequence_number; // 신뢰성 통신을 위한 시퀀스 넘버
  uint16_t total_length;   // 헤더 + 데이터의 총 길이 (최대 65535)
  uint16_t data_length;    // 데이터의 길이 (최대 65535)
};
struct BigCommHeader {
  CommType      type;              // 1B  - CommType::BIG_DATA
  DeviceId      src_device_id;     // 2B
  DeviceId      dst_device_id;     // 2B
  uint32_t      message_id;        // 4B  - 큰 메시지의 고유 ID
  uint16_t      chunk_index;       // 2B  - 이 조각이 몇 번째 (0-based)
  uint16_t      total_chunks;      // 2B  - 전체 조각 수
  uint32_t      total_data_length; // 4B  - 원본 데이터 전체 크기
  uint16_t      chunk_data_length; // 2B  - 이 조각의 payload 크기
  uint16_t      total_length;      // 2B  - 헤더+이 조각 payload 크기
};    
#pragma pack(pop)

#endif // COMM_HEADER_H