#include <iostream>
#include "Figure.h"
#include "Polynomial.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

#define LENGHT 4

using namespace std;

int main()
{
	Figure** figures = new Figure*[LENGHT];
	figures[0] = new Triangle(10, 8);
	figures[1] = new Square(10);
	figures[2] = new Circle(10);
	
	vector<Point<double>> points;	// Для полинома
	points.push_back(Point<double>(10, 13));
	points.push_back(Point<double>(33, 99));
	points.push_back(Point<double>(44, 135));
	points.push_back(Point<double>(58, 3));

	figures[3] = new Polynomial(points);
	points.~vector();

	double total_square = 0.0;
	for (int i = 0; i < LENGHT; i++)
	{
		total_square += figures[i]->get_area();
	}
	cout << "total_square = " << total_square << "\naverage_square = " << total_square / LENGHT << endl;

	for (int i = 0; i < LENGHT; i++)
	{
		delete figures[i];
	}
	delete figures;
	return 0;
}