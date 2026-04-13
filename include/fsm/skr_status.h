#ifndef SKR_STATUS_H
#define SKR_STATUS_H

#include <cstdint>

enum class SkrStatus : uint8_t {
  SKR_STATUS_INIT,         // 초기화
  SKR_STATUS_STANDBY,      // 대기
  SKR_STATUS_CHECK,        // 점검
  SKR_STATUS_SEARCH_READY, // 탐색 준비
  SKR_STATUS_SEARCH,       //  탐색
  SKR_STATUS_TRACK,        // 추적
  SKR_STATUS_ERROR         // 에러
};

#endif // SKR_STATUS_H