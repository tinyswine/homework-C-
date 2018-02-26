#include "Point.hpp"
#include "Array.hpp"

int main()
{
	Array* a = new Array();
	(*a)[0] = Point(1,1);
	//a->GetElement(-1);  //error!!!
	try
	{
		a->GetElement(-1);
	}
	catch (int err)
	{
		cout << "The index is too small or big!!!" << endl;
	}

	return 0;
}