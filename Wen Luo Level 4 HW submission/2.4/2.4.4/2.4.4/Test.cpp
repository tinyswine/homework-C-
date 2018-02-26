#include "Point.hpp"
#include "Line.hpp"


int main()
{
	Point p(1, 1);
	Point q(2, 2);
	Line l(p, q);
	cout << p << endl;
	cout << l << endl;
	return 0;
}
