#ifndef GcuStatus_HPP
#define GcuStatus_HPP

enum class GcuStatus {
    INIT,//초기화,
    READY,//대기,
    CHECK,//점검
    LAUNCH,//발사
    INERTIAL_GUIDANCE,//관성유도
    TERMINAL_GUIDANCE,//종말유도
    AIRBUSRT//비상폭발
};

#endif // GcuStatus_HPP