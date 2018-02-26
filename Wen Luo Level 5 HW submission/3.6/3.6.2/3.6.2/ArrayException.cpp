#ifndef ArrayException_h
#define ArrayException_h
#include "ArrayException.hpp"
#endif

OutOfBoundsException::OutOfBoundsException(int index) :m_index(index)
{
	cout << "OutOfBoundsException Constructor Called!!!" << endl;
}

string OutOfBoundsException::GetMessage()
{
	string s = "The given index is out of bounds";
	return s;
}