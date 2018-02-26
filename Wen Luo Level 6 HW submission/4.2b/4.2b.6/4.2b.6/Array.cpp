#ifndef Array_c
#define Array_c

#ifndef Array_h
#define Array_h
#include "Array.hpp"
#endif



template <typename T>
int Array<T>::m_size_default = 5;

template <typename T>
Array<T>::Array()
{
	m_size = 10;
	m_data = new T[m_size];
	cout << "Default Array Constructor Called!!!" << endl;
}

template <typename T>
Array<T>::Array(int size)
{
	m_size = size;
	m_data = new T[m_size];
	cout << "Array Constructor Called!!!" << endl;
}

template <typename T>
Array<T>::Array(const Array<T>& a)
{
	m_size = a.m_size;
	m_data = new T[m_size];
	for (int i = 0; i < m_size; i++)
	{
		m_data[i] = a.m_data[i];
	}
	cout << "Array Copy Constructor Called!!!" << endl;
}

template <typename T>
Array<T>::~Array()
{
	delete[] m_data;
	cout << "Array Destrcutor Called!!!" << endl;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& a)
{
	if (this == &a)
	{
		cout << "Self Assignment Precluded!!!" << endl;
		return *this;
	}
	delete[] m_data;
	m_size = a.m_size;
	m_data = new T[m_size];
	for (int i = 0; i < m_size; i++)
	{
		m_data[i] = a.m_data[i];
	}
	cout << "Array Assignment Called!!!" << endl;
	return *this;
}

template <typename T>
int Array<T>::Size() const
{
	return m_size;
}

template <typename T>
void Array<T>::SetElement(int index, const T& p)
{
	if (index >= m_size)
	{
		throw OutOfBoundsException(index);
		return;
	}
	m_data[index] = p;
}

template <typename T>
const T& Array<T>::GetElement(int index) const
{
	if (index >= m_size)
	{
		throw OutOfBoundsException(index);
		return m_data[0];
	}
	return m_data[index];
}

template <typename T>
T& Array<T>::operator[](int index)
{
	if (index >= m_size || index < 0)
	{
		throw OutOfBoundsException(index);
		return m_data[0];
	}
	return m_data[index];
}

template <typename T>
const T& Array<T>::operator[](int index) const
{
	if (index >= m_size)
	{
		throw OutOfBoundsException(index);
		return m_data[0];
	}
	return m_data[index];
}

template <typename T>
int Array<T>::DefaultSize()
{
	return m_size_default;
}

template <typename T>
void Array<T>::DefaultSize(int size)
{
	m_size_default = size;
}
#endif