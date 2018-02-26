#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"


int main()
{
	Point p(1, 1);
	Point q(2, 2);
	Line l(p, q);
	Circle c(p);
	c.Radius(1);
	cout << p << endl;
	cout << l << endl;
	cout << c << endl;
	return 0;
}
