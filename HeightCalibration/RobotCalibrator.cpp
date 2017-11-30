#include "RobotCalibrator.h"

void FanucCalib::setHeight(const double h) const
{
	goToCoordinates(_homeposeWorld.at(0), _homeposeWorld.at(1), h,
		_homeposeWorld.at(3), _homeposeWorld.at(4), _homeposeWorld.at(5));
}
