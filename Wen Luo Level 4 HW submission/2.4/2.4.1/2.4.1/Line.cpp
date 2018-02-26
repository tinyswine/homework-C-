#ifndef line_h
#define line_h
#include "Line.hpp"
#endif
#include <sstream>

Line::Line()
{
	cout << "Default Line Constructor Called!!!" << endl;
}

Line::Line(const Point &p1, const Point &p2)
{
	start = p1;
	end = p2;
	cout << "Line Constructor Called!!!" << endl;
}

Line::~Line()
{
	cout << "Line Destructor Called!!!" << endl;
}

Line::Line(const Line &l)
{
	start = l.start;
	end = l.end;
	cout << "Line Copy Constructor Called!!!" << endl;
}

void Line::Start(const Point &p)
{
	start = p;
}

void Line::End(const Point &p)
{
	end = p;
}

Point Line::Start() const
{
	return start;
}

Point Line::End() const
{
	return end;
}

string Line::ToString() const
{
	stringstream ss;
	string s;
	ss << "Line(" << start.ToString() << "," << end.ToString() << ")";
	s = ss.str();
	return s;
}

double Line::Length() const
{
	return start.Distance(end);
}

Line& Line::operator=(const Line& l)
{
	cout << "Line Assignment Operator Called!!!" << endl;
	if (this == &l)
	{
		cout << "Line self Assignment Precluded!!!" << endl;
		return *this;
	}
	start = l.start;
	end = l.end;
	return *this;
}