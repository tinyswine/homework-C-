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
	double GetX();
	double GetY();
	void SetX(double x);
	void SetY(double y);
	string ToString();
	double DistanceOrigin();
	double Distance(Point p);
};

#endif