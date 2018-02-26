#include "Point.hpp"



int main()
{
	Point p(1);
	/*
	if (p == 1)
	{
		cout << "Equal!" << endl;    //"Equal!" is printed because 1 is converted to class Point.
	}
	else
	{
		cout << "Not equal!" << endl;
	}
	*/
	if (p == Point(1))
	{
		cout << "Equal!" << endl;    
	}
	else
	{
		cout << "Not equal!" << endl;
	}
}
