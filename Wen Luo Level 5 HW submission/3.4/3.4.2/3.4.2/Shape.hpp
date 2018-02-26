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
	~Shape();
	Shape& operator=(const Shape& s);
	string ToString() const;
	int ID() const;
};

#endif
