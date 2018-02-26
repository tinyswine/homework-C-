#ifndef Point_h
#define Point_h
#include "Point.hpp"
#endif

#include <sstream>
#include <cmath>

Point::Point():m_x(0), m_y(0)
{
	cout << "Class Point Constructed(Default)!!!" << endl;
}

Point::Point(double x, double y) : m_x(x), m_y(y)
{
	cout << "Class Point Constructed!!!" << endl;
}

Point::Point(const Point &p)
{
	m_x = p.m_x;
	m_y = p.m_y;
	cout << "Class Point Copied!!!" << endl;
}

Point::~Point()
{
	cout << "Class Point Destructed!!!" << endl;
}

double Point::X() const
{
	return m_x;
}

double Point::Y() const
{
	return m_y;
}

void Point::X(double x)
{
	m_x = x;
}

void Point::Y(double y)
{
	m_y = y;
}

string Point::ToString() const
{
	stringstream ss;
	string s;
	ss << "Point(" << m_x << "," << m_y << ")";
	s = ss.str();
	return s;
}

double Point::Distance() const
{
	return sqrt(m_x*m_x + m_y * m_y);
}

double Point::Distance(const Point &p) const
{
	double x_diff, y_diff;
	x_diff = m_x - p.m_x;
	y_diff = m_y - p.m_y;
	//p.m_x = 5; //cause error
	return sqrt(x_diff*x_diff + y_diff * y_diff);
}

int main()
{
	double x, y;
	cout << "Please input x and y" << endl;
	cin >> x >> y;
	Point p;
	p.X(x);
	p.Y(y);
	cout << p.ToString() << endl;
	cout << p.X() << "," << p.Y() << endl;

	Point q(1, 1);
	cout << p.Distance() << endl;
	cout << p.Distance(q) << endl;
    // In total, the number of constructors, destructors and copy constructor calls is 2, 2, 0 seperately. 
	const Point cp(1.5, 3.9);
	//cp.X(0.3)    error
	cout << cp.X() << endl;
	return 0;
}