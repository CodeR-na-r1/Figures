#pragma once

#include "Figure.h"

class Triangle : public Figure
{
	double a, h;

public:
	Triangle();
	Triangle(double _a, double _h);
	virtual double get_area() override;
	virtual const char* type() override;
};