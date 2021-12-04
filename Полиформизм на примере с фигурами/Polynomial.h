#pragma once

#include <iostream>
#include <vector>

#include "Figure.h"
#include "Point.h"
#include "calc_hard_square.h"

using namespace std;

class Polynomial : public Figure
{
	vector<Point<double>> points;

public:

	Polynomial();
	Polynomial(const vector<Point<double>> _points);
	virtual double get_area() override;
	virtual const char* type() override;
};