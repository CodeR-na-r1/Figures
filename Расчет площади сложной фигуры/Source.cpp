// Формула площади Гаусса

#include <iostream>
#include <fstream>
#include <vector>
#include "Point.h"
#include "calc_hard_square.h"

using namespace std;

int main()
{
	ifstream in("data_in.txt");

	int amount(0);
	in >> amount;

	vector<Point<int>> points;

	Point<int> temp;
	for (int i = 0; i < amount; i++)
	{
		in >> temp.x >> temp.y;
		points.push_back(Point<int>(temp));
	}

	in.close();

	int res = calc_hard_square(points);

	cout << "Square = " << res << endl;

	points.~vector();
	return 0;
}