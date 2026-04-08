#ifndef SUBSYSTEM_H
#define SUBSYSTEM_H

typedef enum {
  GCU,  // 유도조종장치
  ACT,  // 액추에이터
  INS,  // 비행제어장치
  SKR   // 탐색기
} SubSystem;

#endif  // SUBSYSTEM_H