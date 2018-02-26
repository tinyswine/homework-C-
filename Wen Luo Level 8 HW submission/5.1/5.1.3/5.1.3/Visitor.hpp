#ifndef Point_h
#define Point_h
#include "Point.hpp"
#endif

#ifndef Line_h
#define Line_h
#include "Line.hpp"
#endif

#ifndef Circle_h
#define Circle_h
#include "Circle.hpp"
#endif

#ifndef Variant_
#define Variant_
#include "boost/variant.hpp"
#endif

#ifndef visitor_
#define visitor_

class Visitor : public boost::static_visitor<void>
{
private:
	double m_dx;
	double m_dy;
public:
	Visitor(double x, double y);
	virtual ~Visitor();
	void operator() (Point& p) const;   //for type Point
	void operator() (Line& l) const;   //for type Line
	void operator() (Circle& c) const;  //for type Circle
};

#endif
