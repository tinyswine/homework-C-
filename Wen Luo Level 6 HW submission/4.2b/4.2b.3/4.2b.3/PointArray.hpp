#ifndef Array_h
#define Array_h
#include "Array.hpp"
#endif

#ifndef Point_h
#define Point_h
#include "Point.hpp"
#endif

#ifndef PointArray_
#define PointArray_

class PointArray : public Array<Point>
{
public:
	PointArray();
	PointArray(int size);
	PointArray(const PointArray& a);
	virtual ~PointArray();
	PointArray& operator=(const PointArray& a);
	double Length() const;   //calculate total length
};

#endif