#ifndef	Point_h
#define Point_h
#include "Point.hpp"
#endif

#include <sstream>
#include <cmath>

Point::Point() :m_x(0), m_y(0)
{
	cout << "Default Point Constructor Called!!!" << endl;
}

Point::Point(double x, double y) : m_x(x), m_y(y)
{
	cout << "Point Constructor Called!!!" << endl;
}

Point::~Point()
{
	cout << "Point Destructor Called!!!" << endl;
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

Point Point::operator-() const
{
	Point p;
	p.m_x = -m_x;
	p.m_y = -m_y;
	return p;
}

Point Point::operator*(double factor) const
{
	Point p;
	p.m_x = m_x * factor;
	p.m_y = m_y * factor;
	return p;
}

Point Point::operator+(const Point& p) const
{
	Point q;
	q.m_x = p.m_x + m_x;
	q.m_y = p.m_y + m_y;
	return q;
}

bool Point::operator==(const Point& p) const
{
	return p.m_x == m_x && p.m_y == m_y;
}

Point& Point::operator=(const Point &p)
{
	cout << "Point Assignment Operator Called!!!" << endl;
	if (this == &p)
	{
		cout << "Point self Assignment Precluded!!!" << endl;
		return *this;
	}
	m_x = p.m_x;
	m_y = p.m_y;
	return *this;
}

Point& Point::operator*=(double factor)
{
	m_x = m_x * factor;
	m_y = m_y * factor;
	return *this;
}

double Point::Distance(const Point& p) const
{
	return sqrt((m_x - p.m_x)*(m_x - p.m_x) + (m_y - p.m_y)*(m_y - p.m_y));
}

double Point::DistanceOriginal() const
{
	return sqrt(m_x * m_x + m_y * m_y);
}


ostream& operator<<(ostream& os, const Point& p)
{
	os << "Point(" << p.m_x << "," << p.m_y << ")";
	return os;
}