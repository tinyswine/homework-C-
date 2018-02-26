#ifndef Point_h
#define Point_h
#include "Point.hpp"
#endif

Point::Point() : Shape()
{
	cout << "Point Default Constructor Called!!!" << endl;
}

Point::Point(double x, double y) : Shape()
{
	m_x = x;
	m_y = y;
	cout << "Point Default Constructor Called!!!" << endl;
}

Point::~Point()
{
	cout << "Point Destructor Called!!!" << endl;
}

Point::Point(const Point& p) : Shape(p)
{
	cout << "Point Copy Constructor Called!!!" << endl;
	m_x = p.m_x;
	m_y = p.m_y;
}

Point& Point::operator=(const Point& p)
{
	if (this == &p)
	{
		cout << "Point Self Assignment Precuded!!!" << endl;
		return *this;
	}
	Shape::operator=(p);
	m_x = p.m_x;
	m_y = p.m_y;
	cout << "Point Assignment Operator Called!!!" << endl;
	return *this;
}

string Point::ToString() const
{
	stringstream ss;
	string s;
	ss << Shape::ToString() << " "<< "Point(" << m_x << "," << m_y << ")";
	s = ss.str();
	return s;
}

ostream& operator<<(ostream& o, const Point& p)
{
	o << p.ToString();
	return o;
}