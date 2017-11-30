#include "LopataFinder.h"
#include "RobotCalibrator.h"
#include <iostream>
#include <fstream>

#pragma comment (lib, "opencv_world331d.lib")

int main()
{
	std::ofstream outFile("dataStack.txt");

	cv::VideoCapture webCamera(1);
	LopataFinder finder(webCamera);
	Lopata object;
	FanucCalib robot;

	robot.startWorking();
	robot.setWorldFrame();

	const double startHeightAbsolut = 450.;
	double heightAbsolut = 450.;
	double heightRelative= 0.;

	robot.setHeight(heightAbsolut);
	while (heightAbsolut < 1050.)
	{
		finder.detectDiodes(object);
		finder.calculateDiodesCoordinates(object);
		finder.drawKeypoints(object);

		std::cout << heightRelative << '\t' << object._realPixelDistanceBetweenDiodes << std::endl;
		outFile << heightRelative << '\t' << object._realPixelDistanceBetweenDiodes << std::endl;

		heightAbsolut += 10.;
		robot.setHeight(heightAbsolut);
		robot.getJointAngles();

		heightRelative = heightAbsolut - startHeightAbsolut;
	}
	
	outFile.close();
	return 0;
}