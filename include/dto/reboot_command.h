#ifndef RebootCommand_H
#define RebootCommand_H

#include <stdint.h>

#include "../enum/subsystem.h"

typedef struct {
  uint16_t message_id;
  SubSystem target;
} RebootCommand;
#endif  // RebootCommand_H
