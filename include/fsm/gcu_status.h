#ifndef GcuStatus_H
#define GcuStatus_H

#include <cstdint>

enum class GcuStatus : uint8_t {
  INIT,              // 초기화,
  READY,             // 대기,
  CHECK,             // 점검
  LAUNCH,            // 발사
  INERTIAL_GUIDANCE, // 관성유도
  TERMINAL_GUIDANCE, // 종말유도
  AIRBURST           // 비상폭발
};

#endif // GcuStatus_H