#ifndef ArrayException_
#define ArrayException_

#include <iostream>
using namespace std;

class ArrayException
{
public:
	virtual void GetMessage() const = 0;
};

class OutOfBoundsException : public ArrayException
{
private:
	int m_index;
public:
	OutOfBoundsException(int index);
	virtual void GetMessage() const;
};

#endif