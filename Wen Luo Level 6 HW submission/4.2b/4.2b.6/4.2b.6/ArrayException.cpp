#ifndef ArrayException_h
#define ArrayException_h
#include "ArrayException.hpp"
#endif

OutOfBoundsException::OutOfBoundsException(int index)
{
	cout << "OutOfBoundsException Constructor Called!!!" << endl;
}

void OutOfBoundsException::GetMessage() const
{
	cout << "Out Of Bounds!!!" << endl;
}