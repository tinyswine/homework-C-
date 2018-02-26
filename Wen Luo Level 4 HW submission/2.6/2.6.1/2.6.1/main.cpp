#include "Point.hpp"
#include "Line.hpp"
#include "Array.hpp"
#include "Circle.hpp"

int main()
{
	using namespace Paul;
	Paul::CAD::Point* p = new Paul::CAD::Point(1, 2);

	using CAD::Line;
	Line* l = new Line(*p, *p);

	using namespace Containers;
	Array* a = new Array;

	namespace C = CAD;
	C::Circle* c = new C::Circle;

	delete p;
	delete l;
	delete a;
	delete c;
	return 0;
}