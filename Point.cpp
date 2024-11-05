#include <cmath>

#include "Point.hpp"

Point::Point(double xCoord, double yCoord)
{
	this->xCoord = xCoord;
	this->yCoord = yCoord;
}

double Point::get_x_coord()
{
	return this->xCoord;
}

double Point::get_y_coord()
{
	return this->yCoord;
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

bool Point::operator!=(Point const& obj) const
{
	return this->xCoord != obj.xCoord || this->yCoord != obj.xCoord;
}

Point Point::operator/(Point const& obj) const
{
	// Calculate midpoint
	double midpointX = (this->xCoord + obj.xCoord) / 2;
	double midpointY = (this->yCoord + obj.yCoord) / 2;
	Point midpoint = Point(midpointX, midpointY);

	return midpoint;
}

ostream& operator<<(ostream& os, const Point& point)
{
	os << "(" << point.xCoord << ", " << point.yCoord << ")";
	return os;
}
