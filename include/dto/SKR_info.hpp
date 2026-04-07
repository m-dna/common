#ifndef SKR_INFO_HPP    
#define SKR_INFO_HPP
#include <cstdint>

struct SkrInfo
{   
    uint16_t message_id;
    skr_status status;
    common-parameter com_param;
};



#endif // SKR_INFO_HPP

