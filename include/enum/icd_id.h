#ifndef ICD_ID_H
#define ICD_ID_H

#include <cstdint>

enum class IcdId : uint16_t {
  COMMON_PARAMETER = 0x0000,        // 공통매개변수(common_parameter)
  ACT_INFO = 0x0001,                // ACT정보(act_info)
  FULL_SYSTEM_INFO = 0x0002,        // 부체계 정보 및 GCU 정보(full_system_info)
  INS_DATA = 0x0003,                // INS값(ins_data)
  INS_INFO = 0x0004,                // INS정보(ins_info)
  SKR_INFO = 0x0005,                // SKR정보(skr_info)
  FEATURE_INSPECT_COMMAND = 0x0006, // 기능점검명령(feature_inspect_command)
  FEATURE_INSPECT_READY_RES =
      0x0007, // 기능점검준비완료응답(feature_inspect_ready_res)
  TARGET_DISTANCE_REQ = 0x0008, // 목표거리오차요청(target_distance_req)
  TARGET_DISTANCE_RES = 0x0009, // 목표거리오차응답(target_distance_res)
  POSITION_REQ = 0x000A,        // 자세요청(position_req)
  POSITION_RES = 0x000B,        // 자세응답(position_res)
  FIN_CONTROL_REQ = 0x000C,     // 핀제어요청(fin_control_req)
  FIN_CONTROL_RES = 0x000D,     // 핀제어응답(fin_control_res)
  FEATURE_INSPECT_FINISH_COMMAND =
      0x000E, // 기능점검종료명령(feature_inspect_finish_command)
  FEATURE_INSPECT_FINISH_RES =
      0x000F,               // 기능점검종료응답(feature_inspect_finish_res)
  ONE_TEST_RESULT = 0x0010, // 1회 수행결과 전송(one_test_result)
  REBOOT_COMMAND = 0x0011,  // 재부팅 명령 전송(reboot_command)
  REBOOT_RES = 0x0012,      // 재부팅 명령 응답(reboot_res)
  FEATURE_INSPECT_READY_COMMAND =
      0x0013,             // 기능점검준비완료명령(feature_inspect_ready_command)
  ACT_DATA = 0x0014,      // ACT값(act_data)
  INS_MAIN_DATA = 0x0015, // INS실제값(ins_main_data)
  SKR_MAIN_DATA = 0x0016, // SKR실제값(skr_main_data)
  FIN_CONTROL_MAIN_COMMAND = 0x0017, // 핀제어실제명령(fin_control_main_command)
  GUIDANCE_COMMAND = 0x0018,         // 유도 명령 (guidance_command)
  MISSILE_TARGET_STATE = 0x0019, // 미사일/표적 참값 상태 (missile_target_state)
  NAVIGATION_TEST_COMMAND = 0x001A, // 항법시험 명령 (navigation_test_command)
  CONTROL_TEST_COMMAND = 0x001B,    // 제어시험 명령 (control_test_command)
  CONTROL_TEST_MISSILE_TARGET_STATE =
      0x001C, // 제어시험 미사일/표적 상태 (control_test_missile_target_state)
  CONTROL_TEST_ATTITUDE_FEEDBACK =
      0x001D, // 제어시험 자세 피드백 (control_test_attitude_feedback)
  COMM_RELIABLE_TEST =
      0xFFF0, // 통신 신뢰성 테스트용 ICD ID (comm_reliable_test)
  COMM_BIG_DATA_TEST =
      0xFFF1 // 통신 대용량 데이터 테스트용 ICD ID (comm_big_data_test)
};

#endif // ICD_ID_H
