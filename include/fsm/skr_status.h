#ifndef SKR_STATUS_H
#define SKR_STATUS_H

#include <cstdint>

enum class SkrStatus : uint8_t {
  INIT,         // 초기화
  STANDBY,      // 대기
  CHECK,        // 점검
  SEARCH_READY, // 탐색 준비
  SEARCH,       //  탐색
  TRACK,        // 추적
  ERROR         // 에러
};

#endif // SKR_STATUS_H