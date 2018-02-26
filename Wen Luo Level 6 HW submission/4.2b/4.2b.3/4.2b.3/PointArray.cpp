#ifndef PointArray_h
#define PointArray_h
#include "PointArray.hpp"
#endif

PointArray::PointArray() : Array<Point>()
{
	cout << "PointArray Default Constructor Called!!!" << endl;
}

PointArray::PointArray(int size) : Array<Point>(size)
{
	cout << "PointArray Constructor Called!!!" << endl;
}

PointArray::~PointArray()
{
	cout << "PointArray Destructor Called!!!" << endl;
}

PointArray::PointArray(const PointArray& a) : Array<Point>(a)
{
	cout << "PointArray Copy Constructor Called!!!" << endl;
}

double PointArray::Length() const
{
	double total_length = 0;
	for (int i = 0; i < m_size; i++)
		for (int j = i; j < m_size; j++)
		{
			total_length += m_data[i].Distance(m_data[j]);
		}
	return total_length;
}