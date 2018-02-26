#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"

int main()
{
	Shape* shapes[3];
	shapes[0] = new Line;
	shapes[1] = new Point;
	shapes[2] = new Line(Point(1.0, 2.5), Point(3.4, 5.2));

	//Shape* s = new Shape; //error!!!

	for (int i = 0; i != 3; i++) shapes[i]->Draw();
	for (int i = 0; i != 3; i++) delete shapes[i];

	return 0;
}