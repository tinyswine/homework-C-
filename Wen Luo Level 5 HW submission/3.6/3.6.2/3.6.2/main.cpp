#include "Point.hpp"
#include "Array.hpp"
#include "ArrayException.hpp"
#include <sstream>
int main()
{
	Array* a = new Array();
	(*a)[0] = Point(1,1);

	try
	{
		a->GetElement(-1);
	}
	catch (OutOfBoundsException& err)
	{
		cout << err.GetMessage() << endl;
	}

	return 0;
}