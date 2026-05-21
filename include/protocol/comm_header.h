#ifndef COMM_HEADER_H
#define COMM_HEADER_H

#include "enum/device_id.h"
#include <cstdint>

enum class CommType : uint8_t {
  NORMAL_DATA        = 0x01,  // 일반 전송
  RELIABLE_DATA      = 0x02,  // 신뢰성 전송
  ACK                = 0x03,  // 신뢰성 ACK
  BIG_DATA           = 0x04,  // 대용량 전송
};

#pragma pack(push, 1)
struct CommHeader {
  CommType type; // 통신 유형 (일반 데이터)
  DeviceId src_device_id; // 출발지 디바이스 ID
  DeviceId dst_device_id; // 목적지 디바이스 ID
  uint16_t total_length;   // 프로토콜 헤더 + 페이로드 전체 크기
  uint16_t data_length;    // 페이로드 크기(DTO 크기) 
};

struct ReliableCommHeader {
  CommType type; // 통신 유형 (신뢰성 데이터,ACK)
  DeviceId src_device_id; // 출발지 디바이스 ID
  DeviceId dst_device_id; // 목적지 디바이스 ID
  uint16_t total_length;   // 프로토콜 헤더 + 페이로드 전체 크기 
  uint16_t data_length;    // 페이로드 크기(DTO 크기)
  uint32_t reliable_session_unique_key; 
  //신뢰성 통신을 위한 디바이스 고유키
  //RELIABLE DATA 일때는 출발지 디바이스 고유키가 담김
  //ACK 일때는 목적지 디바이스 고유키가 담김
  uint8_t sequence_number; // 신뢰성 통신을 위한 시퀀스 넘버
};

struct BigCommHeader {
  CommType      type; // 통신 유형 (대용량 데이터)
  DeviceId      src_device_id;     // 출발지 디바이스 ID 
  DeviceId      dst_device_id;     // 목적지 디바이스 ID
  uint16_t      total_length;      // 프로토콜 헤더 + 해당 조각의 페이로드 전체 크기 
  uint16_t      chunk_data_length; // 이 조각의 페이로드 크기
  uint32_t      message_id;        // 큰 메시지의 고유 ID
  uint32_t      total_data_length; // 원본 페이로드 전체 크기
  uint16_t      total_chunks;      // 전체 조각 수
  uint16_t      chunk_index;       // 해당 조각의 인덱스 (0-based)
};

#pragma pack(pop)

#endif // COMM_HEADER_H