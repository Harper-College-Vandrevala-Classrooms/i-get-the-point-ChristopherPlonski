
class Point {

public:
	Point(double xCoord, double yCoord);
	double operator -(Point const& obj) const;
	bool operator ==(Point const& obj) const;

private:
	double xCoord, yCoord;

};