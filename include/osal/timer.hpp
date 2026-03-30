#ifndef OSAL_TIMER_HPP
#define OSAL_TIMER_HPP

#include <cstdint>

namespace osal {
class Timer {
public:
    virtual void delay_ms(uint32_t milliseconds) = 0;
    virtual ~Timer() = default;
}; // class Timer

}; // namespace osal

#endif // OSAL_TIMER_HPP