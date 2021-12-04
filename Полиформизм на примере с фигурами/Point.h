#pragma once

template <typename T>
struct Point
{
	Point()
	{
		this->x = 0;
		this->y = 0;
	}

	Point(T _x, T _y)
	{
		this->x = _x;
		this->y = _y;
	}

	Point(const Point<T>& other)
	{
		this->x = other.x;
		this->y = other.y;
	}

	T x, y;
};