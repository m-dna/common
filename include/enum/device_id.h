#ifndef DEVICE_ID_H
#define DEVICE_ID_H

#include <cstdint>

static constexpr uint8_t DEVICE_COUNT = 8;

enum class DeviceId : uint8_t {
  GCU = 0x00,    // 유도조종장치
  ACT = 0x01,    // 액추에이터
  INS = 0x02,    // 비행제어장치
  SKR = 0x03,    // 탐색기
  UI = 0x04,     // 사용자 인터페이스
  HILS = 0x05,   // HILS 장치
  TEST1 = 0x06,  // 테스트 장치 1
  TEST2 = 0x07,  // 테스트 장치 2
  INVALID = 0xFF // 유효하지 않은 장치 ID
};

#endif // DEVICE_ID_H
