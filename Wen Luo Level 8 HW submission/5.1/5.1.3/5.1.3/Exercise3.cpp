#include <iostream>
#include "boost/variant.hpp"
#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Visitor.hpp"


typedef boost::variant <Circle, Point, Line> ShareType;

ShareType create_sharetype()
{
	int num;
	ShareType s;
	cout << "Please input the number of shape you want" << endl;
	cout << "1: Point; 2: Line; 3:Circle" << endl;
	cin >> num;
	switch (num)       //use switch to replace if
	{
		case(1):
			s = Point(); break;
		case(2):
			s = Line(); break;
		case(3):
			s = Circle(); break;
	}
	return s;
}

int main()
{
	ShareType st;
	st = create_sharetype();
	cout << st << endl;

	try
	{
		boost::get<Line>(st) = Line();          //assign st to a line
	}
	catch (boost::bad_get& err)   //Catch the error when the variant doesn't contain a line
	{
		cout << "Error:" << err.what() << endl; 
	}

	Visitor visitor1(1.0,2.0);

	boost::apply_visitor(visitor1, st);

	return 0;
}