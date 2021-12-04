#pragma once

#include <corecrt_math_defines.h>

#include "Figure.h"

class Circle : public Figure
{
	double R;

public:

	Circle();
	Circle(double R);
	virtual double get_area() override;
	virtual const char* type() override;
};