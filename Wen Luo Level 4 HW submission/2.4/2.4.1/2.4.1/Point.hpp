#ifndef Point_
#define Point_
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
	~Point();
	double X() const;
	double Y() const;
	void X(double x);
	void Y(double y);
	string ToString() const;
	Point operator - () const;
	Point operator * (double factor) const;
	Point operator + (const Point& p) const;
	bool operator == (const Point& p) const;
	Point& operator = (const Point& p);
	Point& operator *= (double factor);
	double Distance(const Point& p) const;
	double DistanceOriginal() const;
};
#endif