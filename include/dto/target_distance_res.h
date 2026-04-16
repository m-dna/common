#ifndef TargetDistanceRes_HPP
#define TargetDistanceRes_HPP

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
struct TargetDistanceRes {
  IcdId message_id;
  int16_t skr_yaw_offset;
  int16_t skr_pitch_offset;
};
#pragma pack(pop)

#endif  // TargetDistanceRes_HPP