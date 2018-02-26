#ifndef Stack_h
#define Stack_h
#include "Stack.hpp"
#endif

template <typename T>
Stack<T>::Stack() : m_array(Array<T>()), m_current(-1)
{
	cout << "Stack Constructor Called!!!" << endl;
}

template <typename T>
Stack<T>::Stack(int size) : m_array(Array<T>(size)), m_current(-1)
{
	cout << "Stack Constructor Called!!!" << endl;
}

template <typename T>
Stack<T>::~Stack() 
{
	cout << "Stack Destructor Called!!!" << endl;
}

template <typename T>
Stack<T>::Stack(const Stack<T>& s)
{
	m_array = s.m_array;
	m_current = s.m_current;
	cout << "Stack Copy Destructor Called!!!" << endl;
}

template <typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& s)
{
	if (this == &s)    //Avoid self-assignment.
	{
		cout << "self-assignment precluded!!!" << endl;   
		return *this;
	}
	m_array = s.m_array;
	m_current = s.m_current;
	cout << "Stack Copy Destructor Called!!!" << endl;
	return *this;
}

template <typename T>
void Stack<T>::Push(const T& t)
{
	m_array[m_current+1] = t;
	m_current++;
}

template <typename T>
T Stack<T>::Pop()
{
	T t = m_array[m_current];
	m_current--;
	return t;
}

template <typename T>
int Stack<T>::GetCurrentIndex() const
{
	return m_current;
}