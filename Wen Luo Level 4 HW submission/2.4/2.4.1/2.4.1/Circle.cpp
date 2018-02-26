#define _USE_MATH_DEFINES
#include <cmath>

#ifndef Circle_h
#define Circle_h
#include "Circle.hpp"
#endif

#include <sstream>

Circle::Circle():m_radius(0)
{
	//centre = Point();
	cout << "Default Circle Constructor Called!!!" << endl;
}

Circle::Circle(const Point &p)
{
	centre =p;
	cout << "Circle Constructor Called!!!" << endl;
}

Circle::~Circle()
{
	cout << "Circle Destructor Called!!!" << endl;
}

Point Circle::CentrePoint() const
{
	return centre;
}

void Circle::CentrePoint(const Point &p)
{
	centre = p;
}

double Circle::Radius() const
{
	return m_radius;
}

void Circle::Radius(double r)
{
	m_radius = r;
}

double Circle::Diameter() const
{
	return m_radius * 2;
}

double Circle::Area() const
{
	return M_PI * m_radius*m_radius;
}

double Circle::Circumference() const
{
	return M_PI * m_radius * 2;
}

Circle& Circle::operator=(const Circle& c)
{
	cout << "Circle Assignment Operator Called!!!" << endl;
	if (this == &c)
	{
		cout << "Circle self Assignment Precluded!!!" << endl;
		return *this;
	}
	centre = c.centre;
	m_radius = c.m_radius;
	return *this;
}

string Circle::ToString() const
{
	stringstream ss;
	string s;
	ss << "Circle(" << centre.ToString() << "," << m_radius << ")";
	s = ss.str();
	return s;
}

