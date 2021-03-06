/**
 * @file	  sample_image.hpp
 * @brief     SampleImage class that contains the sample library to extract features from.
 * @author    Roxanne van der Pol, Joost van Lingen
 * @license   MIT
 */

#ifndef SAMPLE_IMAGE_HPP
#define SAMPLE_IMAGE_HPP

#include "open_cv.hpp"
#include <iostream>

class SampleImage {
  private:
    const char *path;        ///< Path of image.
    bool isValid;            ///< Whether an image path is valid
    cv::VideoCapture stream; ///< In case we're using a camera, the VideoCapture object is stored here
    cv::Mat image;           ///< Image object which has a path

  public:
    /**
     * @brief Constructor of SampleImage class
     *
     * Creates a SampleImage object with no initialised parameters such as path or image. Sets isValid automatically to false.
     */
    SampleImage();
    /**
     * @brief Overloaded constructor of SampleImage class
     *
     * Creates a SampleImage object; initialises image with a path and will set isValid to true if the path is valid.
     * Checkes if a path or camera address is given and stores the VideoCapture in case a camera address is given.
     *
     * @param[in]     const char * newPath    The path of the image
     */
    SampleImage(const char *newPath);

    /**
     * @brief Sets path of image
     *
     * Sets the path of the SampleImage image with a new const char * path. If the newPath is invalid, isValid will become false.
     *
     * @param[in]     const char * newPath    The path of the image
     */
    void setPath(const char *newPath);
    /**
     * @brief Sets path of image
     *
     * Sets the path of the SampleImage image using the path of an other SampleImage image.
     *
     * @param[in]     SampleImage & other    The path of an other SampleImage image
     */
    void setPath(SampleImage &other);

    /**
     * @brief Gets path of image
     *
     * Returns the private variable 'path'; a simple getter function.
     *
     * @return char * path
     */
    const char *getPath();
    /**
     * @brief Gets image
     *
     * Returns the private variable 'image'; a simple getter function.
     * In case the image is captured from a live camera, the image is updated from the VideoCapture object.
     *
     * @return cv::Mat image
     */
    cv::Mat getImage();
    /**
     * @brief Returns whether path is valid
     *
     * Returns the member variable 'isValid'. Is true if the path of an image is valid; false if it is not.
     *
     * @return bool isValid
     */
    bool getIsValid();
};

#endif // SAMPLE_IMAGE_HPP