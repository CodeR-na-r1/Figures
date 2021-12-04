#pragma once

#include "Square.h"

Square::Square()
{
	this->a = 0.0;
}

Square::Square(double _a)
{
	this->a = _a;
}

double Square::get_area()
{
	return this->a * this->a;
}

const char* Square::type()
{
	return "Square";
}