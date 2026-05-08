#ifndef PCAM_VIDEO_DATA_H
#define PCAM_VIDEO_DATA_H  
#include <cstdint>
#include "../enum/icd_id.h"
#define VIDEO_SIZE 172800 // 320*180*3 (RGB565)
#pragma pack(push, 1)
struct PcamVideoData {
  IcdId message_id;
  uint8_t video_data[VIDEO_SIZE];
};
#pragma pack(pop)
#endif // PCAM_VIDEO_DATA_H