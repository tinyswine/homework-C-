#include "Point.hpp"
#include "Array.cpp"
#include "Stack.cpp"

#include <sstream>

int main()
{
	Stack<int, 5> intStack1;   //Call constructor
	Stack<Point, 10> pointStack1;   //Call constructor
	Stack<Point, 10> pointStack2;   //Call constructor
	Stack<Point, 5> pointStack3;   //Call constructor

	pointStack2 = pointStack1;
	//pointStack2 = pointStack3; //error!!!
	return 0;
}