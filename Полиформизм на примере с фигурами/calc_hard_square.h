#pragma once

#include <vector>
#include "Point.h"

using namespace std;

template <typename T>
T calc_hard_square(vector<Point<T>> points)
{
	T res(0);

	T first_summ(0), second_summ(0);
	for (int i = 0; i < points.size() - 1; i++)
	{
		first_summ += (points[i].x * points[i + 1].y);
		second_summ += (points[i].y * points[i + 1].x);
	}
	first_summ += (points[points.size() - 1].x * points[0].y);
	second_summ += (points[points.size() - 1].y * points[0].x);

	res = first_summ >= second_summ ? first_summ - second_summ : second_summ - first_summ;

	res /= 2;

	return res;
}