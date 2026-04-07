
#ifndef RebootCommand_HPP
#define RebootCommand_HPP

#include "../enum/subsystem.hpp"
#include <cstdint>


struct RebootCommand {
  uint16_t message_id;
  SubSystem target;
};
#endif // RebootCommand_HPP
