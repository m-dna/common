#ifndef ACT_STATUS_HPP
#define ACT_STATUS_HPP
enum class ActStatus{ // ACT_STATUS
    INIT, // 초기화
    READY, // 대기
    CHECK, // 점검
    CONTROL, // 제어
    ERROR, // 고장
};
#endif// ACT_STATUS_HPP