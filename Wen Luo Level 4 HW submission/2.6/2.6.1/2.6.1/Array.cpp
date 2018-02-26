#ifndef Array_h
#define Array_h
#include "Array.hpp"
#endif

namespace Paul
{
	namespace Containers
	{

		Array::Array()
		{
			m_size = 10;
			m_data = new CAD::Point[m_size];
			cout << "Default Array Constructor Called!!!" << endl;
		}

		Array::Array(int size)
		{
			m_size = size;
			m_data = new CAD::Point[m_size];
			cout << "Array Constructor Called!!!" << endl;
		}

		Array::Array(const Array& a)
		{
			m_size = a.m_size;
			m_data = new CAD::Point[m_size];
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
			m_data = new CAD::Point[m_size];
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

		void Array::SetElement(int index, const CAD::Point& p)
		{
			if (index >= m_size)
			{
				return;
			}
			m_data[index] = p;
		}

		const CAD::Point& Array::GetElement(int index) const
		{
			if (index >= m_size)
			{
				return m_data[0];
			}
			return m_data[index];
		}

		CAD::Point& Array::operator[](int index)
		{
			if (index >= m_size)
			{
				return m_data[0];
			}
			return m_data[index];
		}

		const CAD::Point& Array::operator[](int index) const
		{
			if (index >= m_size)
			{
				return m_data[0];
			}
			return m_data[index];
		}
	}
}