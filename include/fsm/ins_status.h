#ifndef INS_STATUS_H
#define INS_STATUS_H

#include <cstdint>

enum class InsStatus : uint8_t {
  INIT,        // 초기화
  READY,       // 대기
  CHECK,       // 점검
  MEASUREMENT, // 측정
  ERROR        // 오류
};

#endif