#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"

int main()
{
	Shape s; // Create shape.
	Point p(10, 20); // Create point.
	Line l(Point(1, 2), Point(3, 4)); // Create line.
	cout << s.ToString() << endl; // Print shape.
	cout << p.ToString() << endl; // Print point.
	cout << l.ToString() << endl; // Print line
	cout << "Shape ID: " << s.ID() << endl; // ID of the shape.
	cout << "Point ID: " << p.ID() << endl; // ID of the point. This works.
	cout << "Line ID: " << l.ID() << endl; // ID of the line. This works.
	Shape* sp; // Create pointer to a shape variable.
	sp = &p; // Point in a shape variable. Possible.
	cout << sp->ToString() << endl; // Point copy constructor called.
									// Create and copy Point p to new point.
	Point p2;
	p2 = p;
	cout << p2 << ", " << p2.ID() << endl; // The ID is not copied unless we call
										   // the base class assignment in point?
	return 0;
}