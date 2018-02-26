#include "Array.cpp"
#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "boost/shared_ptr.hpp"

int main()
{
	typedef boost::shared_ptr<Shape> ShapePtr;
	typedef Array<ShapePtr> ShapeArray;

	ShapePtr sp1(new Point(1, 1));
	ShapePtr sp2(new Line);

	cout << sp1.use_count() << endl;  //1
	cout << sp2.use_count() << endl;  //1

	ShapeArray s_array1;
	cout << s_array1[0].use_count() << endl; //0
	s_array1[0] = sp1;
	s_array1[1] = ShapePtr(new Line);
	cout << s_array1[0].use_count() << endl; //2 sp1 and s_array1[0]
	cout << s_array1[1].use_count() << endl; //1 s_array[1]
	
	//The destuctors are called so we know the shapes are automatically deleted.

	return 0;
}