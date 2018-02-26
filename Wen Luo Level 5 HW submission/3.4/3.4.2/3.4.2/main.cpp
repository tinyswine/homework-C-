#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"

int main()
{
	Shape s;
	Point p(10, 20);
	Line l(Point(1, 2), Point(3, 4));

	cout << s.ToString() << endl;
	cout << p.ToString() << endl;
	cout << l.ToString() << endl;

	cout << "Shape ID: " << s.ID() << endl;
	cout << "Point ID: " << p.ID() << endl;
	cout << "Line ID: " << l.ID() << endl;

	Shape* sp;
	sp = &p;    //Possible
	cout << sp->ToString() << endl;   //Call Shape::ToString

	Point p2;
	p2 = p;
	cout << p2 << "," << p2.ID() << endl; //The ID is not copied until we call the bass class assignment in point.
	return 0;
}