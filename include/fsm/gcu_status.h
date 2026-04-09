#ifndef GcuStatus_H
#define GcuStatus_H

typedef enum {
  GCU_STATUS_INIT,               // 초기화,
  GCU_STATUS_READY,              // 대기,
  GCU_STATUS_CHECK,              // 점검
  GCU_STATUS_LAUNCH,             // 발사
  GCU_STATUS_INERTIAL_GUIDANCE,  // 관성유도
  GCU_STATUS_TERMINAL_GUIDANCE,  // 종말유도
  GCU_STATUS_AIRBURST            // 비상폭발
} GcuStatus;

#endif  // GcuStatus_H