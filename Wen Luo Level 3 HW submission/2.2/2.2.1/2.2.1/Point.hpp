#ifndef Point_
#define Point_

#include <iostream>
using namespace std;

class Point
{
private:
	double m_x;
	double m_y;
public:
	Point();
	~Point();
	double GetX() const;
	double GetY() const;
	void SetX(double x);
	void SetY(double y);
	string ToString() const;
};

#endif
