#ifndef SKR_STATUS_HPP
#define SKR_STATUS_HPP

enum class SkrStatus {
  INIT,         // 초기화
  STANBY,       // 대기
  CHECK,        // 점검
  SEARCH_READY, // 탐색 준비
  SEARCH,       //  탐색
  TRACK,        // 추적
  ERROR         // 에러

};

#endif // SKR_STATUS_HPP