#ifndef COAL_COMMUNICATION_HPP
#define COAL_COMMUNICATION_HPP

#include <cstdint>

namespace coal {
class Communication {
public:
    virtual void send_data(const void* data, uint32_t size) = 0;
    virtual void receive_data(void* data, uint32_t size) = 0;
    virtual ~Communication() = default;

}; // class Communication

}; // namespace coal

#endif // COAL_COMMUNICATION_HPP