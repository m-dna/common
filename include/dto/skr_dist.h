#ifndef SKR_DIST_H
#define SKR_DIST_H
#include <stdint.h>

/*
구조체 : 파스칼 : SkrStatus
열겨형 : 파스칼 : SkrStatus
클래스 : 파스칼  : SkrStatus
변수 : 스네이크  : skr_dist
함수 : 스네이크
전처리 지시자 : upper_snake_case
*/

typedef struct {
  uint16_t message_id;
  int16_t skr_dist;
} SkrDist;

#endif  // SKR_DIST_H