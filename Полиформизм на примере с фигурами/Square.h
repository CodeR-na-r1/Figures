#pragma once

#include "Figure.h"

class Square : public Figure
{
	double a;

public:
	Square();
	Square(double _a);
	virtual double get_area() override;
	virtual const char* type() override;
};