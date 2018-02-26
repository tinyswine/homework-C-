#ifndef Array_
#define Array_
#include "Point.hpp"

class Array
{
private:
	int m_size;
	Point* m_data;
public:
	Array();
	Array(int size);
	Array(const Array& a);
	~Array();
	Array& operator=(const Array& a);
	int Size() const;
	void SetElement(int index,const Point& p);
	const Point& GetElement(int index) const;
	Point& operator[](int index);
	const Point& operator[](int index) const;  
};
#endif