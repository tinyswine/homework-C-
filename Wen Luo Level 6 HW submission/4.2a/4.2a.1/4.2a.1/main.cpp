#include "Point.hpp"
#include "Line.hpp"
#include "Array.cpp"

int main()
{
	Array<Point> points(10);
	Array<Line> lines(10);
	//The code in the problem works because cpp file is included in the hpp file without duplicate definition. 
	//So we can include the hpp file instead of the cpp file.
	return 0;
}