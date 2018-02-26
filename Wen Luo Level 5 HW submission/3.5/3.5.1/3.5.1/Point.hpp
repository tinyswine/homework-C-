#ifndef Shape_h
#define Shape_h
#include "Shape.hpp"
#endif

#ifndef Point_
#define Point_

class Point:public Shape
{
private:
	double m_x;
	double m_y;
public:
	Point();
	Point(double x, double y);
	Point(const Point& p);
	~Point();
	Point& operator=(const Point& p);
	string ToString() const;
	friend ostream& operator<<(ostream& o, const Point& p);
};

#endif