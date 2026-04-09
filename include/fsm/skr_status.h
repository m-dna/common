#ifndef SKR_STATUS_H
#define SKR_STATUS_H

typedef enum {
  SKR_STATUS_INIT,          // 초기화
  SKR_STATUS_STANDBY,       // 대기
  SKR_STATUS_CHECK,         // 점검
  SKR_STATUS_SEARCH_READY,  // 탐색 준비
  SKR_STATUS_SEARCH,        //  탐색
  SKR_STATUS_TRACK,         // 추적
  SKR_STATUS_ERROR          // 에러
} SkrStatus;

#endif  // SKR_STATUS_H