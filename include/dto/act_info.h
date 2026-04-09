#ifndef ACT_INFO_H
#define ACT_INFO_H

#include <stdint.h>

#include "../fsm/act_status.h"
#include "act_data.h"
#include "common_parameter.h"

typedef struct {
  uint16_t message_id;
  ActStatus act_status;

  CommonParameter cp;
  ActData data;

} ActInfo;

#endif // ACT_INFO_H
