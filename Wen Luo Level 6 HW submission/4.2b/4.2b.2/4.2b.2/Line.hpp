#ifndef line_
#define line_

#include "Point.hpp"

class Line
{
private:
	Point start;
	Point end;
public:
	Line();
	Line(const Point &p1, const Point &p2);
	~Line();
	Line(const Line &l);
	void Start(const Point &p);
	void End(const Point &p);
	Point Start() const;
	Point End() const;
	string ToString() const;
	double Length() const;
	Line& operator=(const Line& l);
	friend ostream& operator<<(ostream& os, const Line& l);
};

#endif