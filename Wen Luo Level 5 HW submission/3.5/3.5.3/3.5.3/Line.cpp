#ifndef Line_h
#define Line_h
#include "Line.hpp"
#endif

Line::Line() : Shape()
{
	cout << "Line Default Constructor Called!!!" << endl;
}

Line::Line(const Point& p1, const Point& p2) : Shape()
{
	start = p1;
	end = p2;
	cout << "Line Constructor Called!!!" << endl;
}

Line::~Line()
{
	cout << "Line Destructor Called!!!" << endl;
}

Line::Line(const Line& l) : Shape(l)
{
	start = l.start;
	end = l.end;
	cout << "Line Copy Constructor Called!!!" << endl;
}

Line& Line::operator=(const Line& l)
{
	if (this == &l)
	{
		cout << "Line Self Assignment Precuded!!!" << endl;
		return *this;
	}
	Shape::operator=(l);
	start = l.start;
	end = l.end;
	cout << "Line Assignment Operator Called!!!" << endl;
	return *this;
}

string Line::ToString() const
{
	stringstream ss;
	string s,s2;
	s = Shape::ToString();
	ss << s << " Line(" << start.ToString() << "," << end.ToString() << ")";
	s2 = ss.str();
	return s2;
}