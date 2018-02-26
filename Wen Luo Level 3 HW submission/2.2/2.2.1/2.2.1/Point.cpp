#include "Point.hpp"
#include <sstream>

Point::Point():m_x(0),m_y(0)
{
	cout << "Point Constructed!!!" << endl;
}

Point::~Point()
{
	cout << "Point Destrcuted!!!" << endl;
}

void Point::SetX(double x) 
{
	m_x = x;
}

void Point::SetY(double y)
{
	m_y = y;
}

double Point::GetX() const
{
	return m_x;
}

double Point::GetY() const
{
	return m_y;
}

string Point::ToString() const
{
	stringstream ss;
	string s;
	ss << "Point(" << m_x << "," << m_y << ")";
	s = ss.str();
	return s;
}

int main()
{
	double x, y;
	cout << "Please input the x and y" << endl;
	cin >> x >> y;
	Point p;
	p.SetX(x);
	p.SetY(y);
	cout << p.ToString() << endl;
	cout << p.GetX() << "," << p.GetY() << endl;
}