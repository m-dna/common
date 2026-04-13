#ifndef ACT_STATUS_H
#define ACT_STATUS_H

#include <cstdint>

enum class ActStatus : uint8_t {
  ACT_STATUS_INIT,    // 초기화
  ACT_STATUS_READY,   // 대기
  ACT_STATUS_CHECK,   // 점검
  ACT_STATUS_CONTROL, // 제어
  ACT_STATUS_ERROR,   // 고장
};
#endif // ACT_STATUS_H
