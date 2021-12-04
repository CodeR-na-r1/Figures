#pragma once

#include "Triangle.h"

Triangle::Triangle()
{
	this->a = 0.0;
	this->h = 0.0;
}

Triangle::Triangle(double _a, double _h)
{
	this->a = _a;
	this->h = _h;
}

double Triangle::get_area()
{
	return (this->a * this->h) / 2;
}

const char* Triangle::type()
{
	return "Triangle";
}