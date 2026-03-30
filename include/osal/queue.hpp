#ifndef OSAL_QUEUE_HPP
#define OSAL_QUEUE_HPP

#include <cstdint>

namespace osal {
class Queue {
public:
    virtual void send(const void* data, uint32_t size) = 0;
    virtual void receive(void* data, uint32_t size) = 0;
    virtual ~Queue() = default;
}; // class Queue

}; // namespace osal
#endif // OSAL_QUEUE_HPP
    