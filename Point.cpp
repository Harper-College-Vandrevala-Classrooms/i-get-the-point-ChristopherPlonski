#include <cmath>

#include "Point.hpp"

using namespace std;

Point::Point(double xCoord, double yCoord)
{
	this->xCoord = xCoord;
	this->yCoord = yCoord;
}

double Point::operator-(Point const& obj) const
{
	double insideSquareRoot = pow(this->xCoord - obj.xCoord, 2) + pow(this->yCoord - obj.yCoord, 2);
	double distance = sqrt(insideSquareRoot);

	return distance;
}

bool Point::operator==(Point const& obj) const
{
	return this->xCoord == obj.xCoord && this->yCoord == obj.yCoord;
}
