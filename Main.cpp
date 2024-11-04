#include <iostream>
#include <cassert>

#include "Point.hpp"

using namespace std;

int main() {
	cout << "--Starting tests. \n";

	Point point1 = Point(3.2, 9.8);
	Point point2 = Point(5.5, -1.2);
	Point point3 = Point(3.2, 9.8);

	cout << point1 - point2 << endl; // Prints out 11.238
	assert((point1 == point2) == false);
	assert(point1 == point3);

	cout << "--Tests complete. \n";
}