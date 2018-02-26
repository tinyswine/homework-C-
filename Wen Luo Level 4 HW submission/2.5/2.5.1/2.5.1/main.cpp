#include "Point.hpp"

int main()
{
	Point* p1 = new Point;
	Point* p2 = new Point(1,1);
	Point* p3 = new Point(*p1);

	cout << (*p2).Distance(*p1) << endl;
	cout << *p2 << endl;

	delete p1;
	delete p2;
	delete p3;

	int n;

	cout << "Please input the size of the array" << endl;
	cin >> n;

	//Point p[10];
	//Point p[n]; error!!!

	Point* p = new Point[n];
	delete[] p;
}