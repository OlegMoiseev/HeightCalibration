#ifndef ROBOTCALIBRATOR_H
#define ROBOTCALIBRATOR_H

#include "Fanuc.h"

class FanucCalib : public FanucM20iA
{
public:
	void setHeight(const double h) const;
};
#endif // ROBOTCALIBRATOR_H
