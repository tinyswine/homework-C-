#ifndef Array_h
#define Array_h
#include "Array.hpp"
#endif

#ifndef Stack_
#define Stack_

template <typename T>
class Stack
{
private:
	int m_current;
	Array<T> m_array; //Array
public:
	Stack();
	Stack(int size);
    virtual ~Stack();
	Stack(const Stack<T>& s);
	Stack<T>& operator=(const Stack<T>& s);
	void Push(const T& t);
	T Pop();
	int GetCurrentIndex() const;
};

#endif
