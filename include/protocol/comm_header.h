#ifndef COMM_HEADER_H
#define COMM_HEADER_H

#include "enum/device_id.h"
#include <cstdint>

enum class TypeFlag : uint8_t {
    NONE       = 0x00, // 0000 0000 일반 전송 (fire and forget)
    RELIABLE   = 0x01, // 0000 0001 신뢰성 전송 (stop and wait arq)
    BIG_DATA   = 0x02, // 0000 0010 대용량 데이터 (chunked transfer with reassembly)
    SECURE     = 0x04, // 0000 0100 보안 통신 (암호화)
    // 0x08 향후 확장가능
};

enum class ReliableFlag : uint8_t {
    DATA = 0x00, // 0000 0000 신뢰성 데이터
    ACK  = 0x01, // 0000 0001 ACK
    // 0x02 향후 확장가능
};

enum class SecureFlag : uint8_t {
    REQUEST = 0x00, // 0000 0000 암호화 채널 형성 요청
    RESPONSE  = 0x01, // 0000 0001 암호화 채널 형성 응답
    ENCRYPT  = 0x02, // 0000 0010 암호화 데이터
    // 0x04 향후 확장가능
};

#pragma pack(push, 1)
struct BaseHeader {
  DeviceId src_device_id; // 출발지 디바이스 ID
  DeviceId dst_device_id; // 목적지 디바이스 ID
  uint16_t total_length;   // 프로토콜 헤더 + 페이로드 전체 크기
  TypeFlag flags; // 통신 유형 플래그 (비신뢰성 통신, 신뢰성 통신, 대용량 데이터 통신)
};

struct ReliableExHeader {
  uint32_t reliable_channel_unique_key; 
  //신뢰성 통신을 위한 디바이스 고유키
  //RELIABLE DATA 일때는 출발지 디바이스 고유키가 담김
  //ACK 일때는 목적지 디바이스 고유키가 담김
  uint8_t sequence_number; // 신뢰성 통신을 위한 시퀀스 넘버
  ReliableFlag flags; //신뢰성 통신 유형 플래그 (DATA, ACK)
};

struct SecureDataExHeader {
    SecureFlag  flags;      // 보안 통신 유형 플래그 (ENCRYPTED)
    uint8_t     nonce[12];  // AES-GCM 복호화에 필요한 nonce (매 패킷마다 랜덤 생성)
    uint8_t     tag[16];    // AES-GCM 무결성 검증 태그
};

struct SecureRequestExHeader {
    SecureFlag  flags;              // 보안 통신 유형 플래그 (REQUEST)
    uint8_t     modulus[256];       // 자신의 RSA 공개키 모듈러스 N (2048bit)
    uint8_t     public_exponent[3]; // 자신의 RSA 공개 지수 E
    uint8_t     signature[256];
    // RSA_서명(SHA256(modulus + public_exponent), 자신의 개인키)
};

struct SecureResponseExHeader {
    SecureFlag  flags;                  // 보안 통신 유형 플래그 (RESPONSE)
    uint8_t     modulus[256];           // 자신의 RSA 공개키 모듈러스 N (2048bit)
    uint8_t     public_exponent[3];     // 자신의 RSA 공개 지수 E
    uint8_t     encrypt_session_key[256];
    // RSA_암호화(세션키, 상대의 modulus + public_exponent)
    // 상대방의 공개키로 암호화하여 세션키 전달 (상대방의 개인키로만 복호화 가능)
    uint8_t     signature[256];
    // RSA_서명(SHA256(modulus + public_exponent + encrypt_session_key), 자신의 개인키)
};


struct BigDataExHeader {
  uint32_t      message_id;        // 큰 메시지의 고유 ID
  uint32_t      total_data_length; // 원본 페이로드 전체 크기
  uint16_t      total_chunks;      // 전체 조각 수
  uint16_t      chunk_index;       // 해당 조각의 인덱스 (0-based)
  uint16_t      chunk_data_length; // 이 조각의 페이로드 크기
};

#pragma pack(pop)

#endif // COMM_HEADER_H
