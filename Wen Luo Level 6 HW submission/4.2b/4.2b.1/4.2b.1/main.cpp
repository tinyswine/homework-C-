#include "Point.hpp"
#include "Line.hpp"
#include "Array.cpp"

int main()
{
	Array<int> intArray1;
	Array<int> intArray2;
	Array<double> doubleArray;
	cout << intArray1.DefaultSize() << endl;   //5
	cout << intArray2.DefaultSize() << endl;   //5
	cout << doubleArray.DefaultSize() << endl;    //5
	intArray1.DefaultSize(15);
	cout << intArray1.DefaultSize() << endl;   //15
	cout << intArray2.DefaultSize() << endl;   //15
	cout << doubleArray.DefaultSize() << endl;    //5

	//This because Array<int> and Array<double> are two different classes.

	return 0;
}