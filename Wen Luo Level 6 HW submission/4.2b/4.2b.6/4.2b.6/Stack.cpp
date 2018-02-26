#ifndef Stack_h
#define Stack_h
#include "Stack.hpp"
#endif

#ifndef StackException_h
#define StackException_h
#include "StackException.hpp"
#endif

template <typename T, int size>
Stack<T, size>::Stack() : m_array(Array<T>(size)), m_current(-1)
{
	cout << "Stack Default Constructor Called!!!" << endl;
}

template <typename T, int size>
Stack<T, size>::~Stack() 
{
	cout << "Stack Destructor Called!!!" << endl;
}

template <typename T, int size>
Stack<T, size>::Stack(const Stack<T, size>& s)
{
	m_array = s.m_array;
	m_current = s.m_current;
	cout << "Stack Copy Destructor Called!!!" << endl;
}

template <typename T, int size>
Stack<T, size>& Stack<T, size>::operator=(const Stack<T, size>& s)
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

template <typename T, int size>
void Stack<T, size>::Push(const T& t)
{
	try
	{
		m_array[m_current + 1] = t;
		m_current++;
	}
	catch (OutOfBoundsException&)
	{
		throw StackFullException();
	}
}

template <typename T, int size>
T Stack<T, size>::Pop()
{
	try
	{
		T t = m_array[m_current];
		m_current--;
		return t;
	}
	catch (OutOfBoundsException&)
	{
		throw StackEmptyException();
		m_current = 0;
	}
}

template <typename T, int size>
int Stack<T, size>::GetCurrentIndex() const
{
	return m_current;
}