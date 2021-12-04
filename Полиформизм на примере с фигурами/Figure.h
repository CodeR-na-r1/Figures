#pragma once

class Figure
{
public:
	Figure() {};

	virtual double get_area() = 0;
	virtual const char* type() = 0;
};