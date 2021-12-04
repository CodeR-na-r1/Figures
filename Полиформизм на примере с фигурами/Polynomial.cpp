#pragma once

#include "Polynomial.h"

Polynomial::Polynomial()
{
	this->points.clear();
}

Polynomial::Polynomial(const vector<Point<double>> _points)
{
	this->points.clear();

	for (int i = 0; i < _points.size(); i++)
	{
		this->points.push_back(_points[i]);
	}
}

double Polynomial::get_area()
{
	return calc_hard_square(this->points);
}

const char* Polynomial::type()
{
	return "Polynomial";
}