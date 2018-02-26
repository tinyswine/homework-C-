#include "Point.hpp"
#include "Array.cpp"
#include "PointArray.cpp"

#include <sstream>

int main()
{
	PointArray pointArray1;   //Call default constructor

	for (int i = 0; i < pointArray1.Size(); i++)  
	{
		pointArray1.SetElement(i, Point(i, i));  //Set Elements
	}

	cout << pointArray1.Length() << endl;  //Calculate total length

	return 0;
}