#ifndef Array_h
#define Array_h
#include "Array.hpp"
#endif

Array::Array()
{
	m_size = 10;
	m_data = new Point[m_size];
	cout << "Default Array Constructor Called!!!" << endl;
}

Array::Array(int size)
{
	m_size = size;
	m_data = new Point[m_size];
	cout << "Array Constructor Called!!!" << endl;
}

Array::Array(const Array& a)
{
	m_size = a.m_size;
	m_data = new Point[m_size];
	for (int i = 0; i < m_size; i++)
	{
		m_data[i] = a.m_data[i];
	}
	cout << "Array Copy Constructor Called!!!" << endl;
}

Array::~Array()
{
	delete[] m_data;
	cout << "Array Destrcutor Called!!!" << endl;
}

Array& Array::operator=(const Array& a)
{
	if (this == &a)
	{
		cout << "Self Assignment Precluded!!!" << endl;
		return *this;
	}
	delete[] m_data;
	m_size = a.m_size;
	m_data = new Point[m_size];
	for (int i = 0; i < m_size; i++)
	{
		m_data[i] = a.m_data[i];
	}
	cout << "Array Assignment Called!!!" << endl;
	return *this;
}

int Array::Size() const
{
	return m_size;
}

void Array::SetElement(int index, const Point& p)
{
	if (index >= m_size || index<0)
	{
		throw - 1;
		return;
	}
	m_data[index] = p;
}

const Point& Array::GetElement(int index) const
{
	if (index >= m_size || index<0)
	{
		throw - 1;
		return m_data[0];
	}
	return m_data[index];
}

Point& Array::operator[](int index)
{
	if (index >= m_size)
	{
		return m_data[0];
	}
	return m_data[index];
}

const Point& Array::operator[](int index) const
{
	if (index >= m_size)
	{
		return m_data[0];
	}
	return m_data[index];
}