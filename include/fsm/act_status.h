#ifndef ACT_STATUS_H
#define ACT_STATUS_H

#include <cstdint>

enum class ActStatus : uint8_t {
  INIT,    // 초기화
  READY,   // 대기
  CHECK,   // 점검
  CONTROL, // 제어
  ERROR,   // 고장
};
#endif // ACT_STATUS_H
