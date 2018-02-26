#ifndef Array_h
#define Array_h
#include "Array.hpp"
#endif

#ifndef Stack_
#define Stack_

template <typename T, int size>
class Stack
{
private:
	int m_current;
	Array<T> m_array; //Array
public:
	Stack();
    virtual ~Stack();
	Stack(const Stack<T, size>& s);
	Stack<T, size>& operator=(const Stack<T, size>& s);
	void Push(const T& t);
	T Pop();
	int GetCurrentIndex() const;
};

#endif
