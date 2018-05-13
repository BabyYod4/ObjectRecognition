#ifndef ROOT_IMAGE_HPP
#define ROOT_IMAGE_HPP

#include "image.hpp"

namespace lucidy{

class RootImage: public Image{
private:
    const char* path;
    settings::IMG::data & settings;
public:
    RootImage(const char* path, settings::IMG::data & settings);

    void init() override;
    cv::Mat get() override;

};

}

#endif //ROOT_IMAGE_HPP