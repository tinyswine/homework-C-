#ifndef Shape_h
#define Shape_h
#include "Shape.hpp"
#endif

#ifndef Point_h
#define Point_h
#include "Point.hpp"
#endif

#ifndef Line_
#define Line_

class Line :public Shape
{
private:
	Point start;
	Point end;
public:
	Line();
	Line(const Point& p1, const Point& p2);
	Line(const Line& l);
	Point& Start();
	Point& End();
	~Line();
	Line& operator=(const Line& p);
	string ToString() const;
	friend ostream& operator<<(ostream& o, const Line& l);
};

#endif
