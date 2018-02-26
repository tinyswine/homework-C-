#include "Point.hpp"
#include "Array.cpp"
#include "Stack.cpp"

#include <sstream>

int main()
{
	Stack<int> intStack1;   //Call default constructor
	Stack<Point> pointStack1;   //Call default constructor
	int n;

	try
	{
		for (int i = 0; i < 11; i++)
		{
			intStack1.Push(i);  //Push Elements
			cout << i << "," << intStack1.GetCurrentIndex() << endl;
		}
	}
	catch (StackFullException s)
	{
		s.GetMessage();
	}

	try
	{
		for (int i = 0; i < 11; i++)
		{
			n = intStack1.Pop();  //Pop Elements
			cout << n << "," << intStack1.GetCurrentIndex() << endl;
		}
	}
	catch (StackEmptyException s)
	{
		s.GetMessage();
	}

	return 0;
}