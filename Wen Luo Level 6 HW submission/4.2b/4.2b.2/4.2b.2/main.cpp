#include "Point.hpp"
#include "Line.hpp"
#include "Array.cpp"
#include "NumericArray.cpp"

#include <sstream>

int main()
{
	NumericArray<int> intArray1;
	NumericArray<int> intArray2;
	NumericArray<int> intArray3;
	NumericArray<int> intArray4;
	NumericArray<double> doubleArray1;
	NumericArray<double> doubleArray2;
	NumericArray<double> doubleArray3;
	NumericArray<double> doubleArray4;

	for (int i = 0; i < intArray1.Size(); i++)
	{
		intArray1.SetElement(i, i);
		intArray2.SetElement(i, intArray2.Size() - i);
		doubleArray1.SetElement(i, i*1.5);
	}

	intArray3 = intArray1 + intArray2;   //test operator+

	for (int i = 0; i < intArray3.Size(); i++)
	{
		cout << intArray3.GetElement(i) << endl;
	}

	intArray4 = intArray1;  //test assignment operator

	for (int i = 0; i < intArray4.Size(); i++)
	{
		cout << intArray4.GetElement(i) << endl;
	}

	doubleArray2 = doubleArray1 * 1.5;  //test operator*

	for (int i = 0; i < doubleArray2.Size(); i++)
	{
		cout << doubleArray2.GetElement(i) << endl;
	}

	doubleArray3 = 1.5 * doubleArray1;  //test friend operator*

	for (int i = 0; i < doubleArray3.Size(); i++)
	{
		cout << doubleArray3.GetElement(i) << endl;
	}

	doubleArray4 = doubleArray2.DotProduct(doubleArray3);  //test dotproduct

	for (int i = 0; i < doubleArray4.Size(); i++)
	{
		cout << doubleArray4.GetElement(i) << endl;
	}

	NumericArray<Point> pointArray1;   //test a numeric array with Point objects
	for (int i = 0; i < pointArray1.Size(); i++)
	{
		pointArray1.SetElement(i, Point(i,i));
	}

	for (int i = 0; i < pointArray1.Size(); i++)
	{
		cout << pointArray1[i].ToString() << endl;
	}
	
	//The assumptions are that the template argument itself should have operator+ and operator* 

	//We can create a numeric array with Point objects since Point satisfies the assumptions above.

	return 0;
}