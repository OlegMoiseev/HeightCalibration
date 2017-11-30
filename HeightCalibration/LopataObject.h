#ifndef LOPATAOBJECT_H
#define LOPATAOBJECT_H

#include <opencv2/core/types.hpp>

/**
 * \brief Struct which accumulate all data about Lopata
 */
struct Lopata
{
	/**
	 * \brief X coordinate of Lopata
	 */
	unsigned int _centerXCoordinatesOfLopata;
	/**
	* \brief Y coordinate of Lopata
	*/
	unsigned int _centerYCoordinatesOfLopata;
	/**
	* \brief Distance between diodes on the image fromcamera in pixels
	*/
	double _realPixelDistanceBetweenDiodes;
	/**
	 * \brief Keypoints on the image
	 */
	std::vector<cv::KeyPoint> _resultKeypointsOfDetectedDiodes;
};
#endif // LOPATAOBJECT_H
