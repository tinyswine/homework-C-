#ifndef NumericArray_h
#define NumericArray_h
#include "NumericArray.hpp"
#endif

template <typename T>
NumericArray<T>::NumericArray() : Array<T>::Array()
{
	cout << "NumericArray Default Constructor Called!!!" << endl;
}

template <typename T>
NumericArray<T>::NumericArray(int size) : Array<T>::Array(size)
{
	cout << "NumericArray Constructor Called!!!" << endl;
}

template <typename T>
NumericArray<T>::NumericArray(const NumericArray<T>& t) : Array<T>::Array(t)
{
	cout << "NumericArray Copy Constructor Called!!!" << endl;
}

template <typename T>
NumericArray<T>::~NumericArray()
{
	cout << "NumericArray Destructor Called!!!" << endl;
}

template <typename T>
NumericArray<T> NumericArray<T>::operator+(const NumericArray<T>& t) const
{
	if (t.m_size != this->m_size)
	{
		throw "not same size!!!";
	}
	NumericArray<T> a(this->m_size);
	for (int i = 0; i < this->m_size; i++)
	{
		a.m_data[i] = this->m_data[i] + t.m_data[i];
	}
	return a;
}

template <typename T>
NumericArray<T> NumericArray<T>::operator*(double factor) const
{
	NumericArray<T> a(this->m_size);
	for (int i = 0; i < this->m_size; i++)
	{
		a.m_data[i] = factor * this->m_data[i];
	}
	return a;
}

template <typename T>
NumericArray<T> operator*(double factor, const NumericArray<T>& t)
{
	return t * factor;
}

template <typename T>
NumericArray<T> NumericArray<T>::DotProduct(const NumericArray<T>& t) const
{
	if (t.m_size != this->m_size)
	{
		throw "not same size!!!";
	}
	NumericArray<T> a(this->m_size);
	for (int i = 0; i < this->m_size; i++)
	{
		a.m_data[i] = this->m_data[i] * t.m_data[i];
	}
	return a;
}

template <typename T>
NumericArray<T>& NumericArray<T>::operator=(const NumericArray<T>& t)
{
	Array<T>::operator=(t);
	return *this;
}