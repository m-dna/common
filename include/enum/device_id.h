#ifndef DEVICE_ID_H
#define DEVICE_ID_H

#include <cstdint>

enum class DeviceId : uint8_t {
  GCU = 0x00,  // 유도조종장치
  ACT = 0x01,  // 액추에이터
  INS = 0x02,  // 비행제어장치
  SKR = 0x03,  // 탐색기
  UI = 0x04    // 사용자 인터페이스
};

#endif  // DEVICE_ID_H
