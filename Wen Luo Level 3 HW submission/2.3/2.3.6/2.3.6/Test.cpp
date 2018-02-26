#include "Point.hpp"
#include "Circle.hpp"

#include <sstream>

int main()
{
	Circle c;
	cout << c.ToString() << endl;
	Point p(1, 1);
	c.CentrePoint(p);
	c.Radius(1);
	cout << c.Radius() << endl;
	cout << c.Diameter() << endl;
	cout << c.Area() << endl;
	cout << c.Circumference() << endl;
	cout << c.ToString() << endl;
}