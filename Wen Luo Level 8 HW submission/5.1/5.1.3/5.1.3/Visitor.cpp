#ifndef Visitor_h
#define Visitor_h
#include "Visitor.hpp"
#endif

Visitor::Visitor(double x, double y) : m_dx(x), m_dy(y)
{
	cout << "Visitor Constructor Called!!!" << endl;
}

Visitor::~Visitor()
{
	cout << "Visitor Destructor Called!!!" << endl;
}

void Visitor::operator() (Point& p) const
{
	cout << "It is a point!!!" << endl;
	p.X(p.X() + m_dx);
	p.Y(p.Y() + m_dy);
	cout << p.ToString() << endl;
}

void Visitor::operator() (Line& l) const
{
	cout << "It is a line!!!" << endl;
	l.Start().X(l.Start().X() + m_dx);
	cout << l.ToString() << endl;
}

void Visitor::operator() (Circle& c) const
{
	cout << "It is a circle!!!" << endl;
	c.Radius(c.Radius() + m_dx);
	c.Radius(c.Radius() + m_dy);
	cout << c.ToString() << endl;
}