#ifndef INS_STATUS_H
#define INS_STATUS_H

#include <cstdint>

enum class InsStatus : uint8_t {
  INS_STATUS_INIT,        // 초기화
  INS_STATUS_READY,       // 대기
  INS_STATUS_CHECK,       // 점검
  INS_STATUS_MEASUREMENT, // 측정
  INS_STATUS_ERROR        // 오류
};

#endif