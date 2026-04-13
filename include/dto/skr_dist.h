#ifndef SKR_DIST_H
#define SKR_DIST_H

#include <cstdint>

#include "../enum/icd_id.h"

/*
구조체 : 파스칼 : SkrStatus
열겨형 : 파스칼 : SkrStatus
클래스 : 파스칼  : SkrStatus
변수 : 스네이크  : skr_dist
함수 : 스네이크
전처리 지시자 : upper_snake_case
*/
#pragma pack(push, 1)
struct SkrDist {
  IcdId message_id;
  int16_t skr_dist;
};
#pragma pack(pop)

#endif // SKR_DIST_H