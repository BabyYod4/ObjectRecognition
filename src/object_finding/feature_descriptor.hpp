#ifndef FEATURE_DESCRIPTOR_HPP
#define FEATURE_DESCRIPTOR_HPP

#include "feature_detector.hpp"

/**
 * @brief   Descriptor list generating class
 * @file    feature_descriptor.hpp
 * @author  Dylan Rakiman, Arsalan Anwari
 */
namespace lucidy
{

class FeatureDescriptor
{
private:
  FeatureDetector &detector;
  settings::FDC::data &settings;
  SurfDetector &descriptor;
  DescriptorList descriptorList;

  void initDescriptor();

public:
  FeatureDescriptor(FeatureDetector &detector, settings::FDC::data &settings);

  DescriptorList &getDescriptorList(Image &sourceImage);
};

} // namespace lucidy

#endif // FEATURE_DESCRIPTOR_HPP