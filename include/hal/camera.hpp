#ifndef HAL_CAMERA_HPP
#define HAL_CAMERA_HPP

#include <cstdint>

namespace hal {

constexpr uint32_t IMAGE_WIDTH = 640;
constexpr uint32_t IMAGE_HEIGHT = 480;
constexpr uint32_t IMAGE_SIZE = IMAGE_WIDTH * IMAGE_HEIGHT * 3; // Assuming 3 bytes per pixel (RGB)

class Camera {
public:
    virtual uint8_t* get_raw_image() = 0;
    virtual ~Camera() = default;
}; // class Camera

}; // namespace hal

#endif // HAL_CAMERA_HPP