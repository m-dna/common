#ifndef RebootCommand_H
#define RebootCommand_H

#include <cstdint>

#include "../enum/subsystem.h"

#pragma pack(push, 1)
struct RebootCommand {
  uint16_t message_id;
  SubSystem target;
};
#pragma pack(pop)

#endif // RebootCommand_H
