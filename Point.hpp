#include <ostream>

using namespace std;

class Point {

public:
	Point(double xCoord, double yCoord);
	double get_x_coord();
	double get_y_coord();
	double operator -(Point const& obj) const;
	bool operator ==(Point const& obj) const;
	bool operator !=(Point const& obj) const;
	Point operator /(Point const& obj) const;
	friend ostream& operator<<(ostream& os, const Point& point);

private:
	double xCoord, yCoord;

};