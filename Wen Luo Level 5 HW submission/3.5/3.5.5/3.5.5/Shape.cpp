#ifndef Shape_h
#define Shape_h
#include "Shape.hpp"
#endif



Shape::Shape()
{
	cout << "Shape Default Constructor Called!!!" << endl;
	m_id = rand();
}

Shape::Shape(const Shape& s)
{
	cout << "Shape Copy Constructor Called!!!" << endl;
	m_id = s.m_id;
}

Shape::~Shape()
{
	cout << "Shape Destructor Called!!!" << endl;
}

Shape& Shape::operator=(const Shape& s)
{
	if (this == &s)
	{
		cout << "Shape Self Assignment Precuded!!!" << endl;
		return *this;
	}
	m_id = s.m_id;
	cout << "Shape Assignment Operator Called!!!" << endl;
	return *this;
}

string Shape::ToString() const
{
	stringstream ss;
	string s;
	ss << "ID:" << m_id;
	s = ss.str();
	return s;
}

int Shape::ID() const
{
	return m_id;
}

void Shape::Print() const
{
	cout << ToString() << endl;
}