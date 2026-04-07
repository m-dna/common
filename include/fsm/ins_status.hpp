#ifndef INS_STATUS_HPP
#define INS_STATUS_HPP

enum class InsStatus {
  INIT,        // 초기화
  READY,       // 대기
  CHECK,       // 점검
  MEASUREMENT, // 측정
  ERROR        // 오류
};

#endif