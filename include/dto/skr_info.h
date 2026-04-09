#ifndef SKR_INFO_H
#define SKR_INFO_H

#include <stdint.h>

#include "../fsm/skr_status.h"
#include "common_parameter.h"

typedef struct {
  uint16_t message_id;
  SkrStatus status;
  CommonParameter com_param;
} SkrInfo;

#endif  // SKR_INFO_H
