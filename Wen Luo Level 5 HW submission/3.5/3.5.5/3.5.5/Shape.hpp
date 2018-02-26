#ifndef Shape_
#define Shape_


#include <stdlib.h>
#include <iostream>
#include <sstream>
using namespace std;

class Shape
{
private:
	int m_id;
public:
	Shape();
	Shape(const Shape& s);
	virtual ~Shape();
	Shape& operator=(const Shape& s);
	virtual string ToString() const;
	int ID() const;
	virtual void Draw() = 0;
	void Print() const;
};

#endif
