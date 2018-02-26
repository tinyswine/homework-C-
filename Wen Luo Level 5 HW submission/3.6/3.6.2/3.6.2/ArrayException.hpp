#ifndef ArrayException_
#define ArrayException_

#include <iostream>
using namespace std;

class ArrayException
{
public:
	virtual string GetMessage() = 0;
};

class OutOfBoundsException : public ArrayException
{
private:
	int m_index;
public:
	OutOfBoundsException(int index);
	string GetMessage();
};
#endif