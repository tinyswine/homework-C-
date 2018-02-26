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
	double X() const;
	double Y() const;
	void X(double x);
	void Y(double y);
	string ToString() const;
	double Distance() const;
	double Distance(const Point &p) const;
};

#endif