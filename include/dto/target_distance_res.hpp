#ifndef TargetDistanceRes_HPP
#define TargetDistanceRes_HPP
#include <cstdint>

/*
구조체 : 파스칼 : SkrStatus
열겨형 : 파스칼 : SkrStatus
클래스 : 파스칼  : SkrStatus
변수 : 스네이크  : skr_dist
함수 : 스네이크
전처리 지시자 : upper_snake_case
*/

struct TargetDistanceRes {
  uint16_t message_id;
  int16_t skr_dist;
};
#endif // TargetDistanceRes_HPP