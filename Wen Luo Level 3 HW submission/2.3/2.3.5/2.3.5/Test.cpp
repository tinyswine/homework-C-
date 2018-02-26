#include "Point.hpp"
#include "Line.hpp"

#include <sstream>
using namespace std;

int main()
{
	Point p1, p2;
	p1.X(1.0);
	p1.Y(2.0);
	p2.X(2.0);
	p2.Y(1.0);
	Line l;
	cout << l.ToString() << endl;
	l.Start(p1);
	l.End(p2);
	cout << l.Start().ToString() << endl;
	cout << l.End().ToString() << endl;
	cout << l.ToString() << endl;
	cout << l.Length() << endl;
}