#include <iostream>
#include <cassert>
#include <string>

#include "Point.hpp"

using namespace std;

int main() {
	cout << "--Starting tests. \n";

	Point point1 = Point(3.2, 9.8);
	Point point2 = Point(5.5, -1.2);
	Point point3 = Point(3.2, 9.8);

	assert(point1.get_x_coord() == 3.2);
	assert(point1.get_y_coord() == 9.8);

	double distance = point1 - point2;
	cout << to_string(distance) << endl; // Prints out 11.237882
	
	cout << to_string(point1 == point2) << endl;
	assert((point1 == point2) == false);
	assert(point1 == point3);

	Point pt1AndPt2Midpt = point1 / point2;
	cout << pt1AndPt2Midpt << endl; // Prints out (4.35, 4.3)
	cout << pt1AndPt2Midpt.get_y_coord() << endl;
	//assert(pt1AndPt2Midpt.get_x_coord() == 4.35);
	//assert(pt1AndPt2Midpt.get_y_coord() == 4.3);

	cout << "--Tests complete. \n";
}