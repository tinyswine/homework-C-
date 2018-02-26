#ifndef StackException_h
#define StackException_h
#include "StackException.hpp"
#endif

#include <iostream>
using namespace std;

void StackFullException::GetMessage() const
{
	cout << "The stack is already full!!!" << endl;
}

void StackEmptyException::GetMessage() const
{
	cout << "The stack is already empty!!!" << endl;
}