#ifndef point_
#define point_

#include <iostream>
using namespace std;

class Point
{
private:
	double m_x;
	double m_y;
public:
	Point();
	Point(double x, double y);
	Point(const Point &p);
	~Point();
	double X();
	double Y();
	void X(double x);
	void Y(double y);
	string ToString();
	double Distance();
	double Distance(const Point &p);
};

#endif