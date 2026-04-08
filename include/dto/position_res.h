#ifndef POSITION_RES_H
#define POSITION_RES_H

#include <stdint.h>

#include "ins_data.h"

typedef struct {
  uint16_t message_id;
  InsData data;
} PositionRes;

#endif