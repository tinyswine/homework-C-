#ifndef Circle_
#define Circle_
#include "Point.hpp"

class Circle
{
private:
	Point centre;
	double m_radius;
public:
	Circle();
	Circle(const Point &p);
	~Circle();
	Point CentrePoint() const;
	void CentrePoint(const Point &p);
	double Radius() const;
	void Radius(double r);
	double Diameter() const;
	double Area() const;
	double Circumference() const;
	string ToString() const;
	Circle& operator=(const Circle& c);
	friend ostream& operator<< (ostream& o, const Circle& c);
};

#endif