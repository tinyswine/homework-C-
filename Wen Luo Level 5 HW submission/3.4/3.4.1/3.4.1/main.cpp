#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <sstream>
int main()
{
	Point* p1 = new Point(1, 1);
	Point* p2 = new Point(2, 2);
	cout << endl;
	Line l(*p1, *p2); //2 point constructors, 2 destructors and 2 assignment operators are called without colon syntax.
	                  //0 point constructors, 0 destructors and 0 assignment operators are called with colon syntax.
	cout << endl;

	Circle c(*p1);  //1 point constructors, 1 destructors and 1 assignment operators are called without colon syntax.
	                //0 point constructors, 0 destructors and 0 assignment operators are called with colon syntax.
	cout << endl;

	delete p1;
	delete p2;
	return 0;
}