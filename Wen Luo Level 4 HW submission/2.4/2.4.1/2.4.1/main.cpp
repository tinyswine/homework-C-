#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <sstream>
int main()
{
	Point p(1, 2);
	Point q;
	bool flag;

	cout << endl;

	cout << "-" << endl;
	q = -p;
	cout << q.ToString() << endl;
	cout <<  endl;

	cout << "*" << endl;
	q = p * 2;
	cout << q.ToString() << endl;
	cout << endl;

	cout << "+" << endl;
	q = p + q;
	cout << q.ToString() << endl;
	cout << endl;

	cout << "==" << endl;
	flag = p == q;
	cout << flag << endl;
	flag = p == p;
	cout << flag << endl;
	cout << endl;

	cout << "=(*=)" << endl;
	p = q*=0.5;
	cout << p.ToString() << endl;
	cout << q.ToString() << endl;
	cout << endl;

	Line l1(p, q);
	Line l2;
	cout << endl;

	cout << "Line=" << endl;
	cout << l1.ToString() << endl;
	l2 = l1;
	cout << l2.ToString() << endl;
	cout << endl;

	Circle c1(p);
	Circle c2;
	c1.Radius(1);
	cout << endl;

	cout << "Circle=" << endl;
	cout << c1.ToString() << endl;
	c2 = c1;
	cout << c2.ToString() << endl;
	cout << endl;

	return 0;
}