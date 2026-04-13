#ifndef RebootCommand_H
#define RebootCommand_H

#include <cstdint>

#include "../enum/icd_id.h"
#include "../enum/subsystem.h"

#pragma pack(push, 1)
struct RebootCommand {
  IcdId message_id;
  SubSystem target;
};
#pragma pack(pop)

#endif // RebootCommand_H
