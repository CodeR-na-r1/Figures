#pragma once

#include "Circle.h"

Circle::Circle() : Figure()
{
	this->R = 0.0;
}

Circle::Circle(double _R) : Figure()
{
	this->R = _R;
}

double Circle::get_area()
{
	return M_PI * R * R;
}

const char* Circle::type()
{
	return "Circle";
}