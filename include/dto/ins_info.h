#ifndef INS_INFO_H
#define INS_INFO_H

#include <stdint.h>

#include "../fsm/ins_status.h"
#include "ins_data.h"

typedef struct {
  uint16_t message_id;
  InsStatus status;
  InsData data;
} InsInfo;

#endif